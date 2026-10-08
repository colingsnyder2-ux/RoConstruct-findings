// from server: 74% by colin
// roc 2007-08 005fd3a0  unit: RBX::HammerTool  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd3a0
//
// 005fd3a0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005fd3a3  85c0                 test eax, eax
// 005fd3a5  7414                 je 0x5fd3bb
// 005fd3a7  8b542404             mov edx, dword ptr [esp + 4]
// 005fd3ab  8d887c010000         lea ecx, [eax + 0x17c]
// 005fd3b1  8b01                 mov eax, dword ptr [ecx]
// 005fd3b3  8b4010               mov eax, dword ptr [eax + 0x10]
// 005fd3b6  6a00                 push 0
// 005fd3b8  52                   push edx
// 005fd3b9  ffd0                 call eax
// 005fd3bb  c20400               ret 4

struct HammerTool {
    char pad0[0x1c];
    void* m_ptr;
    void onMouseIdle(void* inputObject);
};

void HammerTool::onMouseIdle(void* inputObject)
{
    void* p = m_ptr;
    if (p) {
        char* c = (char*)p + 0x17c;
        void** vtbl = *(void***)c;
        void (__stdcall *fn)(void*, void*) = (void (__stdcall *)(void*, void*))vtbl[4];
        fn(c, inputObject);
    }
}
