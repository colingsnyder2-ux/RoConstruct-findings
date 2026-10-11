// from server: 46% by atomic.potato
struct MainLogManager {
    void* vtable;
    char pad0[0x2c - 4];
    int field_2c;
    char field_30[0x20];
    void construct(int);
};

extern "C" {
    unsigned long __stdcall GetCurrentThreadId();
    void __stdcall sub_89e4b4(void*, int);
    void __stdcall sub_89e4c0(void*);
    void __stdcall sub_89e4c4(void*);
    void __stdcall sub_89e4a4(void*, const char*);
    void __stdcall sub_89e468(void*, void*);
    void __stdcall sub_89e454(void*, int);
    void __stdcall sub_89e948(void*);
    void* __cdecl sub_718a38(unsigned int);
    void __cdecl sub_632b60(void*);
    void __cdecl sub_7084b0(void*);
    void __cdecl sub_709ea0(void*);
    void __cdecl sub_709eb0(void*);
    void __cdecl sub_56ccb0(void*, void*, int);
    void __cdecl sub_423020(void*, void*);
    void __cdecl sub_425760(void*, const char*, int);
}

extern void* g_89e1ec;
extern void* g_89e46c;
extern void* g_a3a1f8;

void MainLogManager::construct(int arg)
{
    char buf[0x20];
    void* p;

    *(void**)((char*)this + 4) = (void*)0x8b0ab0;
    *(void**)((char*)this + 8) = 0;
    *(unsigned long*)((char*)this + 0xc) = GetCurrentThreadId();
    sub_89e4b4((char*)this + 0x10, arg);

    *(void**)this = (void*)0x8b0b98;
    *(void**)((char*)this + 4) = (void*)0x8b0b8c;

    field_2c = 0;
    sub_89e4c0(field_30);
    sub_632b60(field_30);

    sub_425760(this, (const char*)0x8b0c48, 0x20);
    sub_425760(this, (const char*)0x8b0c2c, 0x20);

    sub_423020((char*)this + 4, buf);

    sub_89e468(buf, *(void**)g_89e46c);
    sub_89e454(buf, *(int*)buf - 4);
    sub_89e4a4(buf, (const char*)0x8b0c3c);

    p = sub_718a38(0x28);
    if (p) {
        sub_56ccb0(p, buf, 0);
    }

    g_a3a1f8 = this;
    sub_7084b0(this);
    sub_709ea0((void*)0x423860);
    sub_709eb0((void*)0x4238e0);
    sub_89e948((void*)0x423410);

    sub_89e4c4(buf);
}
