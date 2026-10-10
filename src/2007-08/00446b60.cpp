// from server: 29% by colin
struct CRenderSettings {
    char pad0[0x18];
    int field18;
    int field1c;
    void construct(int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_4467B0();
extern "C" int __cdecl sub_446820();
extern "C" void __cdecl sub_5873E0();
extern "C" void* __cdecl sub_4454E0(void*);
extern "C" void __cdecl sub_62FC62(void*);

void CRenderSettings::construct(int a, int b, int c, int d, int e, int f, int g)
{
    int v1 = sub_4467B0();
    int v2 = sub_446820();
    sub_5873E0();
    field18 = v1;
    void* p = sub_4454E0(&g);
    field1c = *(int*)p;
    *(int*)p = 0;
    sub_62FC62(*(void**)((char*)&g + 4));
}
