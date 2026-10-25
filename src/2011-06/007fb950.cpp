// from server: 100% by tester
// roc 2011-06 007fb950  unit: RBX::TaskScheduler::PAVJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007fb950
//
// 007fb950  56                   push esi
// 007fb951  8b742408             mov esi, dword ptr [esp + 8]
// 007fb955  8b06                 mov eax, dword ptr [esi]
// 007fb957  8b10                 mov edx, dword ptr [eax]
// 007fb959  6a00                 push 0
// 007fb95b  8bce                 mov ecx, esi
// 007fb95d  ffd2                 call edx
// 007fb95f  56                   push esi
// 007fb960  6a00                 push 0
// 007fb962  ff15b801a400         call dword ptr [0xa401b8]
// 007fb968  50                   push eax
// 007fb969  ff15b401a400         call dword ptr [0xa401b4]
// 007fb96f  5e                   pop esi
// 007fb970  c20400               ret 4

typedef unsigned long DWORD;
typedef int BOOL;

extern "C" DWORD __declspec(dllimport) __stdcall GetProcessHeap();
extern "C" BOOL __declspec(dllimport) __stdcall HeapFree(DWORD, DWORD, void*);

struct S
{
    void __stdcall f();
};

void __stdcall S::f()
{
    void* p = *(void**)this;
    void (__thiscall *d)(void*, int) = *(void (__thiscall **)(void*, int))p;
    d(this, 0);
    HeapFree(GetProcessHeap(), 0, this);
}
