// from server: 91% by colin
// roc 2007-08 0043cab0  unit: MVCXTPPropertyGridItem::?$XItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043cab0
//
// 0043cab0  51                   push ecx
// 0043cab1  53                   push ebx
// 0043cab2  8d442404             lea eax, [esp + 4]
// 0043cab6  50                   push eax
// 0043cab7  e894c3ffff           call 0x438e50
// 0043cabc  8bc8                 mov ecx, eax
// 0043cabe  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0043cac4  8d4c2404             lea ecx, [esp + 4]
// 0043cac8  8ad8                 mov bl, al
// 0043caca  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0043cad0  8ac3                 mov al, bl
// 0043cad2  5b                   pop ebx
// 0043cad3  59                   pop ecx
// 0043cad4  c3                   ret 

struct MVCXTPPropertyGridItem {
    bool f();
};

extern "C" void* __stdcall sub_438e50(void*);

extern "C" {
    typedef bool (__stdcall *Fn1)(void*);
    typedef void (__stdcall *Fn2)(void*);
    extern Fn1 g_fn1;
    extern Fn2 g_fn2;
}

bool MVCXTPPropertyGridItem::f() {
    void* p;
    void* q = sub_438e50(&p);
    bool r = g_fn1(q);
    g_fn2(&p);
    return r;
}
