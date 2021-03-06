#ifndef VIDEO_H
#define VIDEO_H

int   video_get_scaler_flt();
void  video_set_scaler_flt(int n);
char* video_get_scaler_coeff();
void  video_set_scaler_coeff(char *name);

void  video_mode_load();
void  video_mode_adjust();

int   hasAPI1_5();

void video_fb_enable(int enable, int n = 0);
int video_fb_state();
void video_menu_bg(int n);
int video_chvt(int num);

#endif // VIDEO_H
