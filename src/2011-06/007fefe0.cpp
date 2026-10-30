// roc 2011-06 007fefe0  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fefe0
//
// 007fefe0  56                   push esi
// 007fefe1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 007fefe4  8b06                 mov eax, dword ptr [esi]
// 007fefe6  8b10                 mov edx, dword ptr [eax]
// 007fefe8  6a00                 push 0
// 007fefea  8bce                 mov ecx, esi
// 007fefec  ffd2                 call edx
// 007fefee  56                   push esi
// 007fefef  6a00                 push 0
// 007feff1  ff15b801a400         call dword ptr [0xa401b8]
// 007feff7  50                   push eax
// 007feff8  ff15b401a400         call dword ptr [0xa401b4]
// 007feffe  5e                   pop esi
// 007fefff  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEXXZ)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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