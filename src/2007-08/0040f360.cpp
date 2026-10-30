// from server: 56% by Yeetserama
struct Verb {
    void* construct(int, int);
    char pad[0x14];
};

struct CutVerb {
    char pad0[0xc];
    int field_c;
    char field_10;
    void* construct(int, int);
};

void* CutVerb::construct(int a, int b)
{
    extern void* g_786d38;
    extern void* g_786d30;
    extern void* g_786d1c;
    extern void* g_77e698;

    char bl = (char)a;
    void* name = bl ? &g_786d38 : &g_786d30;
    int* container = b ? (int*)((char*)b + 0x14c) : 0;

    char buf[0x1c];
    ((void (__stdcall*)(void*, void*))g_77e698)(buf, name);
    ((void (__thiscall*)(Verb*, int*))0x564c50)((Verb*)this, container);

    field_c = b;
    field_10 = bl;
    *(void**)this = &g_786d1c;

    return this;
}
