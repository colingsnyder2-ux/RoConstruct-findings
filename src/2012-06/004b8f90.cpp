// roc 2012-06 004b8f90  unit: CSourceStream  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b8f90
//
// 004b8f90  56                   push esi
// 004b8f91  8bf1                 mov esi, ecx
// 004b8f93  8b4604               mov eax, dword ptr [esi + 4]
// 004b8f96  6aff                 push -1
// 004b8f98  50                   push eax
// 004b8f99  ff15e421b200         call dword ptr [0xb221e4]
// 004b8f9f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b8fa2  5e                   pop esi
// 004b8fa3  c3                   ret 
// copied from an identical function in another client (function ?f@CSourceStream@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(void* hHandle, unsigned long dwMilliseconds);

struct CSourceStream {
    char pad0[4];
    void* hThread;
    char pad8[4];
    int field_c;
    int f();
};

int CSourceStream::f() {
    WaitForSingleObject(hThread, (unsigned long)-1);
    return field_c;
}