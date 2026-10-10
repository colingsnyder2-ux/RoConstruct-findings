// from server: 69% by colin
struct seg_00510000 {
    void method(int a, int b);
};

extern "C" void __stdcall sub_51E590(void* dst, int src);
extern "C" void __stdcall sub_51E990(void* dst, int src);
extern "C" void __cdecl sub_630A1E();

void seg_00510000::method(int a, int b)
{
    char buf[0x58];
    sub_51E590(buf, b);
    sub_51E990(buf, b);
    sub_630A1E();
}
