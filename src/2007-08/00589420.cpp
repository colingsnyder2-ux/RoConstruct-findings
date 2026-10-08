// from server: 78% by colin
// roc 2007-08 00589420  unit: VStockSound::?$FactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00589420
//
// 00589420  8b442404             mov eax, dword ptr [esp + 4]
// 00589424  8b4804               mov ecx, dword ptr [eax + 4]
// 00589427  8b10                 mov edx, dword ptr [eax]
// 00589429  51                   push ecx
// 0058942a  ffd2                 call edx
// 0058942c  8b00                 mov eax, dword ptr [eax]
// 0058942e  83c404               add esp, 4
// 00589431  c3                   ret 

struct VStockSound_FactoryProduct {
    void* field0;
    void* field4;

    void* invoke(void* self);
};

void* VStockSound_FactoryProduct::invoke(void* self) {
    void* p = *(void**)((char*)self + 4);
    void* q = *(void**)self;
    typedef void* (__cdecl *Fn)(void*);
    Fn fn = (Fn)q;
    void* r = fn(p);
    return *(void**)r;
}
