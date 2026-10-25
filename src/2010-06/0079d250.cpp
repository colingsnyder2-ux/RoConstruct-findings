// from server: 100% by atomic.potato
// roc 2010-06 0079d250  unit: VThreadLogManager::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079d250
//
// 0079d250  56                   push esi
// 0079d251  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0079d254  8b06                 mov eax, dword ptr [esi]
// 0079d256  8b10                 mov edx, dword ptr [eax]
// 0079d258  6a00                 push 0
// 0079d25a  8bce                 mov ecx, esi
// 0079d25c  ffd2                 call edx
// 0079d25e  56                   push esi
// 0079d25f  6a00                 push 0
// 0079d261  ff1504a39e00         call dword ptr [0x9ea304]
// 0079d267  50                   push eax
// 0079d268  ff150ca39e00         call dword ptr [0x9ea30c]
// 0079d26e  5e                   pop esi
// 0079d26f  c3                   ret 

typedef unsigned long DWORD;
typedef int BOOL;

extern "C" __declspec(dllimport) DWORD __stdcall GetProcessHeap();
extern "C" __declspec(dllimport) BOOL __stdcall HeapFree(DWORD, DWORD, void *);

struct S {
    char pad[12];
    void *p;
    void f();
};

void S::f()
{
    void *q = p;
    void **vtbl = *(void ***)q;
    void (__thiscall *fn)(void *, int) = (void (__thiscall *)(void *, int))vtbl[0];
    fn(q, 0);
    HeapFree(GetProcessHeap(), 0, q);
}
