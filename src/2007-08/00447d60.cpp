// from server: 91% by colin
// roc 2007-08 00447d60  unit: seg_00440000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447d60

extern "C" int __cdecl sub_6303d0();
extern "C" void __cdecl sub_6306b2(int);
extern "C" void __cdecl sub_6306b8(int, int, int);
extern "C" int (__stdcall *FlashWindow)(void*, int);

struct CRenderSettings {
    void method(int, int);
};

void CRenderSettings::method(int a, int b)
{
    int* p = (int*)sub_6303d0();
    if (p) {
        int* q = (int*)(*(int (__thiscall**)(int*))(*(int*)p + 0x7c))(p);
        if (q) {
            int* r = (int*)sub_6303d0();
            int* s;
            if (r) {
                s = (int*)(*(int (__thiscall**)(int*))(*(int*)r + 0x7c))(r);
            } else {
                s = 0;
            }
            FlashWindow((void*)s[8], 0);
            sub_6306b8(0xc4, 0, -1);
        }
    }
    sub_6306b2(0);
}
