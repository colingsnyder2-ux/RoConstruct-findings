// from server: 75% by colin
// roc 2007-08 007125c0  unit: CXTShadowHook  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007125c0
//
// 007125c0  8b442404             mov eax, dword ptr [esp + 4]
// 007125c4  85c0                 test eax, eax
// 007125c6  7403                 je 0x7125cb
// 007125c8  8b4020               mov eax, dword ptr [eax + 0x20]
// 007125cb  8b11                 mov edx, dword ptr [ecx]
// 007125cd  89442404             mov dword ptr [esp + 4], eax
// 007125d1  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007125d4  ffe0                 jmp eax

struct CXTShadowHook {
    void func_007125c0(int* arg);
};

void CXTShadowHook::func_007125c0(int* arg)
{
    int* p = arg;
    if (p != 0) {
        p = (int*)p[8];
    }
    int* vtbl = (int*)*(int*)this;
    arg = p;
    void (__stdcall *fn)(void*, int*) = (void (__stdcall *)(void*, int*))vtbl[7];
    fn(this, arg);
}
