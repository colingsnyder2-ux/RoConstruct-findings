// from server: 100% by colin
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
    void Method(int);
};

void CXTShadowHook::Method(int arg)
{
    int value = arg;
    if (value != 0) {
        value = *(int*)(value + 0x20);
    }
    void** vtbl = *(void***)this;
    typedef void (__thiscall *Fn)(CXTShadowHook*, int);
    Fn fn = (Fn)vtbl[7];
    fn(this, value);
}
