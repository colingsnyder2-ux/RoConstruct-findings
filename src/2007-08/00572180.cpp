// from server: 82% by colin
// roc 2007-08 00572180  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572180

extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_725f70();

extern void* g_8c2548;
extern void* g_89fe8c;

void* sub_572180()
{
    sub_725520((const char*)0x8c254c, (const char*)0x572070);
    void* p = sub_725f70();
    if (p != 0) {
        if (*(unsigned int*)((char*)p + 0x18) >= 0x10)
            return *(void**)((char*)p + 4);
        return (void*)((char*)p + 4);
    }
    return g_89fe8c;
}
