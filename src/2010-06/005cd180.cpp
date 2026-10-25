// from server: 100% by tester
// roc 2010-06 005cd180  unit: RBX::DataModel::PAVGenericJob::?$thread_specific_ptr::PAUdelete_data::?$sp_counted_impl_pd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cd180
//
// 005cd180  56                   push esi
// 005cd181  8b742408             mov esi, dword ptr [esp + 8]
// 005cd185  8b06                 mov eax, dword ptr [esi]
// 005cd187  8b10                 mov edx, dword ptr [eax]
// 005cd189  6a00                 push 0
// 005cd18b  8bce                 mov ecx, esi
// 005cd18d  ffd2                 call edx
// 005cd18f  56                   push esi
// 005cd190  6a00                 push 0
// 005cd192  ff1504a39e00         call dword ptr [0x9ea304]
// 005cd198  50                   push eax
// 005cd199  ff150ca39e00         call dword ptr [0x9ea30c]
// 005cd19f  5e                   pop esi
// 005cd1a0  c20400               ret 4

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
