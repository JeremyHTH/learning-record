static long battery;
static uint8_t charge;

APP_TIMER_DEF(m_batterycounting);

void battery_counter_handler(void *p_context)
{
  if (charge)
    battery += 1.3;
  else
    battery -= 1;
}

void battery_int()
{
  battery = 130;
  charge = 0;
}

void battery_image_show()
{

  if (battery >= 87)
  {
    // show green battery
  }
  else if (battery >= 43)
  {
    // show yellow battery
  }
  else
  {
    // show red battery
  }
}

err_code = app_timer_create(&m_batterycounting,
                            APP_TIMER_MODE_SINGLE_SHOT,
                            battery_counter_handler);
APP_ERROR_CHECK(err_code);
