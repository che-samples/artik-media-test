#include <stdio.h>
#include <artik_module.h>
#include <artik_platform.h>
#define SOUND_FILENAME  "/usr/share/sounds/alsa/Front_Center.wav"
artik_error media_test_sound_playback()
{
    artik_error ret = S_OK;
    artik_media_module* media = (artik_media_module*)artik_get_api_module("media");
    fprintf(stdout, "TEST: %s starting\n", __func__);
    ret = media->play_sound_file(SOUND_FILENAME);
    fprintf(stdout, "TEST: %s %s\n", __func__, (ret == S_OK) ? "succeeded" : "failed");
    return ret;
}
int main()
{
    artik_error ret = S_OK;
    ret = media_test_sound_playback();
    return (ret == S_OK) ? 0 : -1;
}