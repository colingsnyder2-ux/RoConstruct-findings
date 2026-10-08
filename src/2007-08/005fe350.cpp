// from server: 100% by colin
// roc 2007-08 005fe350  unit: RBX::AxisMoveTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe350
//
// 005fe350  56                   push esi
// 005fe351  8bf1                 mov esi, ecx
// 005fe353  807e4400             cmp byte ptr [esi + 0x44], 0
// 005fe357  7413                 je 0x5fe36c
// 005fe359  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005fe35c  e83f2cfeff           call 0x5e0fa0
// 005fe361  c7462400000000       mov dword ptr [esi + 0x24], 0
// 005fe368  c6464400             mov byte ptr [esi + 0x44], 0
// 005fe36c  8b06                 mov eax, dword ptr [esi]
// 005fe36e  8b5024               mov edx, dword ptr [eax + 0x24]
// 005fe371  8bce                 mov ecx, esi
// 005fe373  ffd2                 call edx
// 005fe375  33c0                 xor eax, eax
// 005fe377  5e                   pop esi
// 005fe378  c20400               ret 4

struct AxisMoveTool {
    char pad0[0x24];
    void* field24;
    char pad28[0x1c];
    unsigned char field44;
    int destroy(int);
};

extern "C" void __fastcall sub_5e0fa0(void* p);

int AxisMoveTool::destroy(int)
{
    if (field44 != 0) {
        sub_5e0fa0(field24);
        field24 = 0;
        field44 = 0;
    }
    void** vtbl = *(void***)this;
    void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[9];
    fn(this);
    return 0;
}
