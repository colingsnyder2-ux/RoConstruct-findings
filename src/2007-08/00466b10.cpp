// from server: 100% by colin
// roc 2007-08 00466b10  unit: VCWorkspace::?$CComObject  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466b10
//
// 00466b10  8b4104               mov eax, dword ptr [ecx + 4]
// 00466b13  85c0                 test eax, eax
// 00466b15  7408                 je 0x466b1f
// 00466b17  8b08                 mov ecx, dword ptr [eax]
// 00466b19  8b5108               mov edx, dword ptr [ecx + 8]
// 00466b1c  50                   push eax
// 00466b1d  ffd2                 call edx
// 00466b1f  c3                   ret 

struct S {
    void f();
};

void S::f()
{
    void* p = *(void**)((char*)this + 4);
    if (p) {
        void** vtbl = *(void***)p;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[2];
        fn(p);
    }
}
