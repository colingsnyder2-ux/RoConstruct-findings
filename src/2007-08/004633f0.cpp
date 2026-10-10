// from server: 81% by colin
struct CSettingsDialog
{
    char pad[0x58];
    float f58;
    float f5c;
    float f60;
    float f64;
    char pad2[0x8];
    float f70;
    float f74;

    bool check();
};

extern double G_795b48;

bool CSettingsDialog::check()
{
    float a = f58 + f60;
    float b = f64 + f5c;
    float c = (float)(a * G_795b48);
    float d = (float)(b * G_795b48);

    if (f70 < -c)
        return false;
    if (f70 > c)
        return false;
    if (f74 < -d)
        return false;
    if (f74 > d)
        return false;
    return true;
}
