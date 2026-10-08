// from server: 100% by colin
// roc 2007-08 005e5e40  unit: RBX::NullTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5e40
//
// 005e5e40  56                   push esi
// 005e5e41  8bf1                 mov esi, ecx
// 005e5e43  c70624d27b00         mov dword ptr [esi], 0x7bd224
// 005e5e49  c746040cd27b00       mov dword ptr [esi + 4], 0x7bd20c
// 005e5e50  e8fbdeffff           call 0x5e3d50
// 005e5e55  f644240801           test byte ptr [esp + 8], 1
// 005e5e5a  7409                 je 0x5e5e65
// 005e5e5c  56                   push esi
// 005e5e5d  e8009e0400           call 0x62fc62
// 005e5e62  83c404               add esp, 4
// 005e5e65  8bc6                 mov eax, esi
// 005e5e67  5e                   pop esi
// 005e5e68  c20400               ret 4

struct RBX_NullTool {
    RBX_NullTool* destroy(char);
};

extern "C" void __cdecl func_005e3d50();
extern "C" void __cdecl func_0062fc62(void*);

RBX_NullTool* RBX_NullTool::destroy(char flags)
{
    *(int*)this = 0x7bd224;
    *(int*)((char*)this + 4) = 0x7bd20c;
    func_005e3d50();
    if (flags & 1) {
        func_0062fc62(this);
    }
    return this;
}
