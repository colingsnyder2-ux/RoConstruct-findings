// from server: 74% by colin
typedef unsigned int DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;

struct CPropGrid
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    BYTE field_1c;
    BYTE field_1d;
    int field_20;

    void sub_00442750(int a2);
};

extern "C" int __stdcall GetObjectA(void* h, int c, void* pv);

void CPropGrid::sub_00442750(int a2)
{
    char buf[0x54];
    if (GetObjectA((void*)this->field_4, 0x54, buf) == 0x54)
    {
        int v = *(int*)(buf + 0x24);
        int w = *(int*)(buf + 0x24);
        int h = *(WORD*)(buf + 0x2a);
        this->field_18 = h;
        int prod = h * w;
        int q = prod + 0x1f;
        q = q + (q >> 31 & 0x1f);
        q = q >> 5;
        q = q * 4;
        this->field_c = w;
        this->field_1c = 1;
        this->field_10 = v;
        this->field_14 = q;
        this->field_8 = *(int*)(buf + 0x1c);
        int mode = *(int*)(buf + 0x60);
        if (mode == 0)
        {
            mode = (v > 0) ? 2 : 1;
        }
        this->field_20 = -1;
        this->field_1d = 0;
        if (mode == 2)
        {
            int t = v - 1;
            t = t * q;
            t = t + *(int*)(buf + 0x1c);
            this->field_8 = t;
            this->field_14 = -q;
        }
    }
    else
    {
        this->field_1c = 0;
        this->field_14 = 0;
        this->field_8 = 0;
        this->field_1d = 0;
        this->field_c = *(int*)(buf + 4);
        this->field_10 = *(int*)(buf + 8);
        this->field_18 = *(WORD*)(buf + 0x12);
        this->field_20 = -1;
    }
}
