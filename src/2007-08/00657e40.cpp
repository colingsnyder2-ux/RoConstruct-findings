// from server: 47% by colin
struct CXTPReportControl {
    char pad0[0x20];
    int field_20;
    char pad24[0x48];
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    int field_7c;
    char pad80[0x10];
    int field_90;
    char pad94[0x1c];
    int field_b0;
    char padb4[0xac];
    int field_160;
    char pad164[0x28];
    int field_18c;
    int field_190;
    char pad194[0x6c];
    int field_200;
    void Draw();
};

extern "C" void __stdcall SetRect(void*, int, int, int, int);
extern "C" void __stdcall sub_680000(void*, void*);
extern "C" int __fastcall sub_65ed80(void*);
extern "C" void __fastcall sub_65f400(void*, int, int);
extern "C" void __fastcall sub_7383ac(void*, void*);
extern "C" void __fastcall sub_7383a6(void*);

void CXTPReportControl::Draw()
{
    if (this == 0)
        return;
    if (field_20 == 0)
        return;

    char buf1[0x18];
    sub_680000(this, buf1);

    int v1 = field_78 - field_70;
    int v2 = field_200;
    int v3 = 0;

    if (field_160 != 0 && v2 != 0)
        v3 = sub_65ed80(this);

    int w1 = *(int*)(buf1 + 8) - *(int*)(buf1 + 0);
    SetRect((char*)this + 0x60, 0, 0, w1, v3);

    int v4 = 0;
    if (field_18c != 0)
    {
        char buf2[0x18];
        sub_7383ac(this, buf2);
        int* vt = *(int**)field_b0;
        int (*fn)(void*, void*, int) = (int (*)(void*, void*, int))vt[0x19];
        v4 = fn((void*)field_b0, buf2, 0);
        sub_7383a6(buf2);
    }

    int v5 = 0;
    if (field_190 != 0)
    {
        char buf3[0x18];
        sub_7383ac(this, buf3);
        int* vt = *(int**)field_b0;
        int (*fn)(void*, void*, int) = (int (*)(void*, void*, int))vt[0x1b];
        v5 = fn((void*)field_b0, buf3, 0);
        sub_7383a6(buf3);
    }

    int w2 = *(int*)(buf1 + 8) - *(int*)(buf1 + 0);
    SetRect((char*)this + 0x70, 0, field_70, w2, field_6c + v4);

    int w3 = *(int*)(buf1 + 8) - *(int*)(buf1 + 0);
    SetRect((char*)this + 0x90, 0, field_7c, w3, w3 - v5);

    int w4 = *(int*)(buf1 + 8) - *(int*)(buf1 + 0);
    SetRect((char*)this + 0x80, 0, w4 - v5, w4, w4);

    if (v1 != field_78 - field_70)
    {
        if (v2 != 0)
        {
            int w5 = field_78 - field_70;
            sub_65f400(this, w5, 0);
        }
    }
}
