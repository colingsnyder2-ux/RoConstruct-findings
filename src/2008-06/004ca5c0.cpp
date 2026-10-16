// from server: 30% by colin
extern "C" void __stdcall sub_4A5B30(int, char*);
extern "C" bool __stdcall sub_4A5210(int, int, int, int);
extern "C" void __stdcall sub_409D50(int, int);
extern "C" void __stdcall sub_6A158C(int, int);
extern "C" void __stdcall sub_802458(int, int);
extern "C" bool __stdcall sub_4CA0F0(int, int, int, int);

extern const float scale;
extern const float offset;

struct S
{
    bool read(void* destination, int bits, bool rightAligned);
    bool f(float& x, float& y, float& z);
};

bool S::f(float& x, float& y, float& z)
{
    char ok;
    sub_4A5B30((int)this, &ok);
    if (ok != 0)
    {
        int vx = 0;
        int vy = 0;
        int vz = 0;
        if (!sub_4A5210((int)this, 0xf, 1, (int)&vx))
        {
            sub_802458(0x8268e8, (int)&vx);
            sub_409D50((int)&vx, 0);
            sub_6A158C(0x8d1bc8, (int)&vx);
        }
        if (!sub_4A5210((int)this, 0xe, 1, (int)&vy))
        {
            sub_802458(0x8268b8, (int)&vy);
            sub_409D50((int)&vy, 1);
            sub_6A158C(0x8d1bc8, (int)&vy);
        }
        if (!sub_4A5210((int)this, 0xf, 1, (int)&vz))
        {
            sub_802458(0x826888, (int)&vz);
            sub_409D50((int)&vz, 2);
            sub_6A158C(0x8d1bc8, (int)&vz);
        }
        x = (float)(unsigned short)vx * scale - offset;
        y = (float)(unsigned short)vy * scale - offset;
        z = (float)(unsigned short)vz * scale - offset;
        return true;
    }
    if (sub_4CA0F0((int)this, (int)&x, (int)&y, (int)&z))
    {
        return true;
    }
    sub_802458(0x826850, (int)&x);
    sub_409D50((int)&x, 3);
    sub_6A158C(0x8d1bc8, (int)&x);
    return false;
}
