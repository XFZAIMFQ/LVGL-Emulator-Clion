// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x434141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1, 150);
    lv_obj_set_height(ui_Arc1, 150);
    lv_obj_set_x(ui_Arc1, 120);
    lv_obj_set_y(ui_Arc1, -23);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc1, 50);


    ui_Label1 = lv_label_create(ui_Arc1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 50);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "50%");

    ui_Slider1 = lv_slider_create(ui_Screen1);
    lv_slider_set_value(ui_Slider1, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider1, 150);
    lv_obj_set_height(ui_Slider1, 10);
    lv_obj_set_x(ui_Slider1, -192);
    lv_obj_set_y(ui_Slider1, 90);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);


    ui_Slider2 = lv_slider_create(ui_Screen1);
    lv_slider_set_value(ui_Slider2, 0, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Slider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_Slider2, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider2, 150);
    lv_obj_set_height(ui_Slider2, 10);
    lv_obj_set_x(ui_Slider2, 22);
    lv_obj_set_y(ui_Slider2, 88);
    lv_obj_set_align(ui_Slider2, LV_ALIGN_CENTER);
    lv_obj_add_state(ui_Slider2, LV_STATE_DISABLED);       /// States
    lv_obj_clear_flag(ui_Slider2, LV_OBJ_FLAG_PRESS_LOCK);      /// Flags


    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -222);
    lv_obj_set_y(ui_Label4, 201);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "");

    ui_Chart1 = lv_chart_create(ui_Screen1);
    lv_obj_set_width(ui_Chart1, 200);
    lv_obj_set_height(ui_Chart1, 100);
    lv_obj_set_x(ui_Chart1, -144);
    lv_obj_set_y(ui_Chart1, -35);
    lv_obj_set_align(ui_Chart1, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart1, LV_CHART_TYPE_LINE);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 10, 5, 5, 2, true, 50);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 2, true, 50);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, true, 25);
    lv_chart_series_t * ui_Chart1_series_1 = lv_chart_add_series(ui_Chart1, lv_color_hex(0xFB0000),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart1_series_1_array[] = { 0 };
    lv_chart_set_ext_y_array(ui_Chart1, ui_Chart1_series_1, ui_Chart1_series_1_array);



    ui_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 50);
    lv_obj_set_x(ui_Button1, 458);
    lv_obj_set_y(ui_Button1, -269);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label5 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 3);
    lv_obj_set_y(ui_Label5, 2);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "切换屏幕");
    lv_obj_set_style_text_font(ui_Label5, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 50);
    lv_obj_set_x(ui_Button2, 180);
    lv_obj_set_y(ui_Button2, 150);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label11 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "弹跳");
    lv_obj_set_style_text_font(ui_Label11, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel2, 100);
    lv_obj_set_height(ui_Panel2, 100);
    lv_obj_set_x(ui_Panel2, 341);
    lv_obj_set_y(ui_Panel2, -148);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x3201DA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Panel2, lv_color_hex(0x2304A1), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Panel2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xD60606), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_color(ui_Panel2, lv_color_hex(0x920202), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui_Panel2, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_Panel3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel3, 50);
    lv_obj_set_height(ui_Panel3, 50);
    lv_obj_set_x(ui_Panel3, 338);
    lv_obj_set_y(ui_Panel3, -23);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel3, 25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar2 = lv_bar_create(ui_Screen1);
    lv_bar_set_value(ui_Bar2, 50, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Bar2, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Bar2, 10);
    lv_obj_set_height(ui_Bar2, 150);
    lv_obj_set_x(ui_Bar2, -379);
    lv_obj_set_y(ui_Bar2, -8);
    lv_obj_set_align(ui_Bar2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Bar2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Bar2);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, 92);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xF00000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar3 = lv_bar_create(ui_Screen1);
    lv_bar_set_value(ui_Bar3, 25, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Bar3, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Bar3, 10);
    lv_obj_set_height(ui_Bar3, 150);
    lv_obj_set_x(ui_Bar3, -432);
    lv_obj_set_y(ui_Bar3, -7);
    lv_obj_set_align(ui_Bar3, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Bar3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar3, lv_color_hex(0xCD0000), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Bar3);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -2);
    lv_obj_set_y(ui_Label8, 91);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "Temp");
    lv_obj_set_style_bg_color(ui_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button4 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button4, 100);
    lv_obj_set_height(ui_Button4, 50);
    lv_obj_set_x(ui_Button4, 180);
    lv_obj_set_y(ui_Button4, 225);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label9 = lv_label_create(ui_Button4);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "测试");
    lv_obj_set_style_text_font(ui_Label9, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Label9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Spinner1 = lv_spinner_create(ui_Screen1, 1000, 90);
    lv_obj_set_width(ui_Spinner1, 80);
    lv_obj_set_height(ui_Spinner1, 80);
    lv_obj_set_x(ui_Spinner1, -253);
    lv_obj_set_y(ui_Spinner1, -208);
    lv_obj_set_align(ui_Spinner1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner1, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    ui_Button6 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button6, 100);
    lv_obj_set_height(ui_Button6, 50);
    lv_obj_set_x(ui_Button6, -430);
    lv_obj_set_y(ui_Button6, 180);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label12 = lv_label_create(ui_Button6);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "增加红色");
    lv_obj_set_style_text_font(ui_Label12, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button7, 100);
    lv_obj_set_height(ui_Button7, 50);
    lv_obj_set_x(ui_Button7, -300);
    lv_obj_set_y(ui_Button7, 180);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label13 = lv_label_create(ui_Button7);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "增加蓝色");
    lv_obj_set_style_text_font(ui_Label13, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button8 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button8, 100);
    lv_obj_set_height(ui_Button8, 50);
    lv_obj_set_x(ui_Button8, 333);
    lv_obj_set_y(ui_Button8, 223);
    lv_obj_set_align(ui_Button8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label14 = lv_label_create(ui_Button8);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "函数测试");
    lv_obj_set_style_text_font(ui_Label14, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button9 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button9, 100);
    lv_obj_set_height(ui_Button9, 50);
    lv_obj_set_x(ui_Button9, 333);
    lv_obj_set_y(ui_Button9, 150);
    lv_obj_set_align(ui_Button9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Button10 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button10, 100);
    lv_obj_set_height(ui_Button10, 50);
    lv_obj_set_x(ui_Button10, -430);
    lv_obj_set_y(ui_Button10, 250);
    lv_obj_set_align(ui_Button10, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button10, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button10, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label15 = lv_label_create(ui_Button10);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "减小红色");
    lv_obj_set_style_text_font(ui_Label15, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button11 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button11, 100);
    lv_obj_set_height(ui_Button11, 50);
    lv_obj_set_x(ui_Button11, -300);
    lv_obj_set_y(ui_Button11, 250);
    lv_obj_set_align(ui_Button11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button11, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label16 = lv_label_create(ui_Button11);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "减小蓝色");
    lv_obj_set_style_text_font(ui_Label16, &ui_font_Font16bpp4, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button8, ui_event_Button8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button10, ui_event_Button10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button11, ui_event_Button11, LV_EVENT_ALL, NULL);

}
