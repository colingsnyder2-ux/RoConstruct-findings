// from server: 100% by colin
// roc 2007-08 0040d120  unit: CGdiObject  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d120
//
// 0040d120  56                   push esi
// 0040d121  8bf1                 mov esi, ecx
// 0040d123  e8488b1400           call 0x555c70
// 0040d128  c706ac657800         mov dword ptr [esi], 0x7865ac
// 0040d12e  c74604a4657800       mov dword ptr [esi + 4], 0x7865a4
// 0040d135  c746109c657800       mov dword ptr [esi + 0x10], 0x78659c
// 0040d13c  c746148c657800       mov dword ptr [esi + 0x14], 0x78658c
// 0040d143  c7462c7c657800       mov dword ptr [esi + 0x2c], 0x78657c
// 0040d14a  c746446c657800       mov dword ptr [esi + 0x44], 0x78656c
// 0040d151  c7465c5c657800       mov dword ptr [esi + 0x5c], 0x78655c
// 0040d158  c746744c657800       mov dword ptr [esi + 0x74], 0x78654c
// 0040d15f  c7868c0000003c657800 mov dword ptr [esi + 0x8c], 0x78653c
// 0040d169  c786e800000034657800 mov dword ptr [esi + 0xe8], 0x786534
// 0040d173  8bc6                 mov eax, esi
// 0040d175  5e                   pop esi
// 0040d176  c3                   ret 

struct CGdiObject {
    CGdiObject* construct();
};

extern "C" void __fastcall sub_555C70(CGdiObject* self);

CGdiObject* CGdiObject::construct() {
    sub_555C70(this);
    *(int*)((char*)this + 0x00) = 0x7865ac;
    *(int*)((char*)this + 0x04) = 0x7865a4;
    *(int*)((char*)this + 0x10) = 0x78659c;
    *(int*)((char*)this + 0x14) = 0x78658c;
    *(int*)((char*)this + 0x2c) = 0x78657c;
    *(int*)((char*)this + 0x44) = 0x78656c;
    *(int*)((char*)this + 0x5c) = 0x78655c;
    *(int*)((char*)this + 0x74) = 0x78654c;
    *(int*)((char*)this + 0x8c) = 0x78653c;
    *(int*)((char*)this + 0xe8) = 0x786534;
    return this;
}
