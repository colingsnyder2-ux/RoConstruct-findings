// from server: 45% by colin
struct CXTPReportTip
{
    char pad0[0x64];
    void* field_64;
    char pad68[0x0c];
    char field_74[0x10];

    void sub_006d5cb0();
};

extern "C" void __stdcall sub_0063048a(void*);
extern "C" void __stdcall sub_00630490(void*, void*);
extern "C" void __stdcall sub_006308b0(void*, void*, void*);
extern "C" void __stdcall sub_006308aa(void*, void*, void*, void*);
extern "C" void __stdcall sub_00630982(void*, int);
extern "C" void __stdcall sub_00630a1e();
extern "C" void* __stdcall sub_00668770(void*, int);
extern "C" void* __stdcall sub_00668f70();
extern "C" void __stdcall sub_00680000(void*, void*);
extern "C" void __stdcall sub_00680550(void*, void*, void*);
extern "C" void __stdcall sub_006805d0(void*);
extern "C" int __stdcall sub_00738322(void*);
extern "C" void __stdcall sub_007383e8(void*, int);
extern "C" void __stdcall sub_00738688(void*, void*);
extern "C" void* __stdcall sub_0077dcc8(void*, int, void*);
extern "C" void* __stdcall sub_0077dd98(void*, void*);

void CXTPReportTip::sub_006d5cb0()
{
    char buf1[0x30];
    char buf2[0x30];
    char buf3[0x30];
    int v1, v2, v3, v4;
    void* p;

    sub_00630490(this, buf1);
    sub_00680000(this, buf2);

    p = sub_00668f70();
    void* a = sub_00668770(p, 0x17);
    p = sub_00668f70();
    void* b = sub_00668770(p, 0x18);

    sub_006308b0(buf1, buf2, b);
    sub_006308aa(buf1, buf2, a, a);
    sub_00738688(buf1, a);
    sub_007383e8(buf1, 1);

    int flags = sub_00738322(this->field_64);
    if ((flags & 0x2000) || (sub_00738322(this->field_64) & 0x400000))
    {
        sub_00630982(buf1, 0x100);
    }

    sub_00680550(buf3, buf1, this->field_74);

    v1 = *(int*)(buf3 + 0);
    v2 = *(int*)(buf3 + 4);
    v3 = *(int*)(buf3 + 8);
    v4 = *(int*)(buf3 + 0x30);

    v1 += 3;
    v2 -= 2;

    void* h = sub_0077dcc8(this + 0x68, 0x824, buf3);
    void* r = sub_0077dd98(this + 0x68, h);
    void (*fn)(void*, void*) = *(void(**)(void*, void*))(v4 + 0x70);
    fn(buf3 + 0x20, r);

    sub_006805d0(buf3 + 0x10);
    sub_0063048a(buf1);
}
