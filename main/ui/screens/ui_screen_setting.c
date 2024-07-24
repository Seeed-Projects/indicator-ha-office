// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: indicator_ha

#include "../ui.h"

void ui_screen_setting_screen_init(void)
{
    ui_screen_setting = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_screen_setting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_panel_top_4 = lv_obj_create(ui_screen_setting);
    lv_obj_set_width(ui_panel_top_4, 480);
    lv_obj_set_height(ui_panel_top_4, 80);
    lv_obj_set_align(ui_panel_top_4, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_panel_top_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_panel_top_4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_panel_top_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_panel_top_4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_panel_top_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time_ha_data3 = lv_label_create(ui_panel_top_4);
    lv_obj_set_width(ui_time_ha_data3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_time_ha_data3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_time_ha_data3, 15);
    lv_obj_set_y(ui_time_ha_data3, 0);
    lv_obj_set_align(ui_time_ha_data3, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_time_ha_data3, "21:20");
    lv_obj_set_style_text_font(ui_time_ha_data3, &ui_font_font0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi__st_button_ha_setting = lv_btn_create(ui_panel_top_4);
    lv_obj_set_width(ui_wifi__st_button_ha_setting, 60);
    lv_obj_set_height(ui_wifi__st_button_ha_setting, 60);
    lv_obj_set_align(ui_wifi__st_button_ha_setting, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_wifi__st_button_ha_setting, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_wifi__st_button_ha_setting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_wifi__st_button_ha_setting, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifi__st_button_ha_setting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_wifi__st_button_ha_setting, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi_st_4 = lv_img_create(ui_wifi__st_button_ha_setting);
    lv_img_set_src(ui_wifi_st_4, &ui_img_wifi_disconet_png);
    lv_obj_set_width(ui_wifi_st_4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wifi_st_4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_wifi_st_4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_wifi_st_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_wifi_st_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Container_Setting = lv_obj_create(ui_screen_setting);
    lv_obj_remove_style_all(ui_Container_Setting);
    lv_obj_set_width(ui_Container_Setting, 100);
    lv_obj_set_height(ui_Container_Setting, 45);
    lv_obj_set_x(ui_Container_Setting, 35);
    lv_obj_set_y(ui_Container_Setting, 65);
    lv_obj_clear_flag(ui_Container_Setting, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Container_Setting, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Container_Setting, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting_title1 = lv_label_create(ui_Container_Setting);
    lv_obj_set_width(ui_setting_title1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_setting_title1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_setting_title1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_setting_title1, "Setting");
    lv_obj_set_style_text_font(ui_setting_title1, &ui_font_font0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting_icon1 = lv_img_create(ui_Container_Setting);
    lv_img_set_src(ui_setting_icon1, &ui_img_setting_png);
    lv_obj_set_width(ui_setting_icon1, LV_SIZE_CONTENT);   /// 21
    lv_obj_set_height(ui_setting_icon1, LV_SIZE_CONTENT);    /// 21
    lv_obj_set_align(ui_setting_icon1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_setting_icon1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_setting_icon1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_setting_wifi1 = lv_btn_create(ui_screen_setting);
    lv_obj_set_width(ui_setting_wifi1, 140);
    lv_obj_set_height(ui_setting_wifi1, 160);
    lv_obj_set_x(ui_setting_wifi1, 90);
    lv_obj_set_y(ui_setting_wifi1, 0);
    lv_obj_set_align(ui_setting_wifi1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_setting_wifi1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_setting_wifi1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_setting_wifi1, lv_color_hex(0x4EACE4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setting_wifi1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting_wifi_icon1 = lv_img_create(ui_setting_wifi1);
    lv_img_set_src(ui_setting_wifi_icon1, &ui_img_wifi_setting_png);
    lv_obj_set_width(ui_setting_wifi_icon1, LV_SIZE_CONTENT);   /// 63
    lv_obj_set_height(ui_setting_wifi_icon1, LV_SIZE_CONTENT);    /// 48
    lv_obj_set_x(ui_setting_wifi_icon1, 0);
    lv_obj_set_y(ui_setting_wifi_icon1, -20);
    lv_obj_set_align(ui_setting_wifi_icon1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_setting_wifi_icon1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_setting_wifi_icon1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_setting_wifi_title1 = lv_label_create(ui_setting_wifi1);
    lv_obj_set_width(ui_setting_wifi_title1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_setting_wifi_title1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_setting_wifi_title1, 0);
    lv_obj_set_y(ui_setting_wifi_title1, 25);
    lv_obj_set_align(ui_setting_wifi_title1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_setting_wifi_title1, "WiFi");
    lv_obj_set_style_text_font(ui_setting_wifi_title1, &ui_font_font0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting_display1 = lv_btn_create(ui_screen_setting);
    lv_obj_set_width(ui_setting_display1, 140);
    lv_obj_set_height(ui_setting_display1, 160);
    lv_obj_set_x(ui_setting_display1, -90);
    lv_obj_set_y(ui_setting_display1, 0);
    lv_obj_set_align(ui_setting_display1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_setting_display1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_setting_display1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_setting_display1, lv_color_hex(0xEEBF41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setting_display1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_setting_display_icon1 = lv_img_create(ui_setting_display1);
    lv_img_set_src(ui_setting_display_icon1, &ui_img_display_png);
    lv_obj_set_width(ui_setting_display_icon1, LV_SIZE_CONTENT);   /// 44
    lv_obj_set_height(ui_setting_display_icon1, LV_SIZE_CONTENT);    /// 53
    lv_obj_set_x(ui_setting_display_icon1, 0);
    lv_obj_set_y(ui_setting_display_icon1, -20);
    lv_obj_set_align(ui_setting_display_icon1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_setting_display_icon1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_setting_display_icon1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_setting_display_title1 = lv_label_create(ui_setting_display1);
    lv_obj_set_width(ui_setting_display_title1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_setting_display_title1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_setting_display_title1, 0);
    lv_obj_set_y(ui_setting_display_title1, 25);
    lv_obj_set_align(ui_setting_display_title1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_setting_display_title1, "Display");
    lv_obj_set_style_text_font(ui_setting_display_title1, &ui_font_font0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_scrolldots1 = lv_obj_create(ui_screen_setting);
    lv_obj_set_width(ui_scrolldots1, 100);
    lv_obj_set_height(ui_scrolldots1, 20);
    lv_obj_set_x(ui_scrolldots1, 0);
    lv_obj_set_y(ui_scrolldots1, -20);
    lv_obj_set_align(ui_scrolldots1, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_scrolldots1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrolldots1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrolldots1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_scrolldots1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_scrolldots1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_scrolldots2 = lv_obj_create(ui_scrolldots1);
    lv_obj_set_width(ui_scrolldots2, 7);
    lv_obj_set_height(ui_scrolldots2, 7);
    lv_obj_set_align(ui_scrolldots2, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_scrolldots2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_scrolldots4 = lv_obj_create(ui_scrolldots1);
    lv_obj_set_width(ui_scrolldots4, 7);
    lv_obj_set_height(ui_scrolldots4, 7);
    lv_obj_set_align(ui_scrolldots4, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_scrolldots4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrolldots4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrolldots4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_scrolldots4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_scrolldots4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_scrolldots5 = lv_obj_create(ui_scrolldots1);
    lv_obj_set_width(ui_scrolldots5, 7);
    lv_obj_set_height(ui_scrolldots5, 7);
    lv_obj_set_align(ui_scrolldots5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_scrolldots5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_setting_display2 = lv_btn_create(ui_screen_setting);
    lv_obj_set_width(ui_setting_display2, 300);
    lv_obj_set_height(ui_setting_display2, 60);
    lv_obj_set_x(ui_setting_display2, 0);
    lv_obj_set_y(ui_setting_display2, 120);
    lv_obj_set_align(ui_setting_display2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_setting_display2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_setting_display2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_setting_display2, lv_color_hex(0xE66D39), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_setting_display2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_setting_display2);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Change MQTT Broker Address");

    lv_obj_add_event_cb(ui_wifi__st_button_ha_setting, ui_event_wifi__st_button_ha_setting, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setting_wifi1, ui_event_setting_wifi1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setting_display1, ui_event_setting_display1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setting_display2, ui_event_setting_display2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_screen_setting, ui_event_screen_setting, LV_EVENT_ALL, NULL);

}
