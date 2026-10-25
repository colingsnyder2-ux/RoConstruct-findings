// from server: 100% by atomic.potato
// roc 2011-06 004a3090  unit: CSourceStream  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3090
//
// 004a3090  56                   push esi
// 004a3091  8bf1                 mov esi, ecx
// 004a3093  8b4604               mov eax, dword ptr [esi + 4]
// 004a3096  6aff                 push -1
// 004a3098  50                   push eax
// 004a3099  ff15a803a400         call dword ptr [0xa403a8]
// 004a309f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004a30a2  5e                   pop esi
// 004a30a3  c3                   ret 

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
