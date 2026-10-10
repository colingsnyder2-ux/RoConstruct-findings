// from server: 26% by colin
struct S {
    char pad[0x20];
    void* field20;
    void construct();
};

extern "C" void __stdcall sub_719b76(void* p, int a, int b, int c);
extern "C" void __stdcall sub_5cd500(void* p);
extern int g_89e4c4;

void S::construct()
{
    sub_719b76(&field20, 0x1c, 0x80, g_89e4c4);
    sub_5cd500(this);
}
