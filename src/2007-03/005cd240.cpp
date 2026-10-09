// roc 2007-03 005cd240  unit: seg_005c0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cd240
//
// 005cd240  56                   push esi
// 005cd241  8bf1                 mov esi, ecx
// 005cd243  807e4400             cmp byte ptr [esi + 0x44], 0
// 005cd247  7413                 je 0x5cd25c
// 005cd249  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005cd24c  e8afc70000           call 0x5d9a00
// 005cd251  c7462400000000       mov dword ptr [esi + 0x24], 0
// 005cd258  c6464400             mov byte ptr [esi + 0x44], 0
// 005cd25c  8b06                 mov eax, dword ptr [esi]
// 005cd25e  8b5024               mov edx, dword ptr [eax + 0x24]
// 005cd261  8bce                 mov ecx, esi
// 005cd263  ffd2                 call edx
// 005cd265  33c0                 xor eax, eax
// 005cd267  5e                   pop esi
// 005cd268  c20400               ret 4
// copied from an identical function in another client (function ?destroy@AxisMoveTool@ns_ROCX00002f@@QAEHH@Z)

namespace ns_ROCX00002f {
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
}
