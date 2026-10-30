// roc 2009-06 0070ab60  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070ab60
//
// 0070ab60  56                   push esi
// 0070ab61  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0070ab64  8b06                 mov eax, dword ptr [esi]
// 0070ab66  8b10                 mov edx, dword ptr [eax]
// 0070ab68  6a00                 push 0
// 0070ab6a  8bce                 mov ecx, esi
// 0070ab6c  ffd2                 call edx
// 0070ab6e  56                   push esi
// 0070ab6f  6a00                 push 0
// 0070ab71  ff1530e28900         call dword ptr [0x89e230]
// 0070ab77  50                   push eax
// 0070ab78  ff1528e28900         call dword ptr [0x89e228]
// 0070ab7e  5e                   pop esi
// 0070ab7f  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
extern void* (__cdecl *GetProcessHeapPtr)();
extern int (__stdcall *HeapFreePtr)(void*, unsigned long, void*);

struct S {
    int pad0[3];
    void* p;

    void f();
};

void S::f()
{
    void* q = p;
    void** vtable = *(void***)q;
    void (__thiscall *destroy)(void*, int) =
        (void (__thiscall *)(void*, int))vtable[0];
    destroy(q, 0);
    HeapFreePtr(GetProcessHeapPtr(), 0, q);
}
}
