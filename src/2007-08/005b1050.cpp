// from server: 100% by colin
// roc 2007-08 005b1050  unit: RBX::AutoJoint  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1050
//
// 005b1050  8b442404             mov eax, dword ptr [esp + 4]
// 005b1054  56                   push esi
// 005b1055  50                   push eax
// 005b1056  8bf1                 mov esi, ecx
// 005b1058  e8e3fdffff           call 0x5b0e40
// 005b105d  c706c46a7b00         mov dword ptr [esi], 0x7b6ac4
// 005b1063  c74604bc6a7b00       mov dword ptr [esi + 4], 0x7b6abc
// 005b106a  c74610b46a7b00       mov dword ptr [esi + 0x10], 0x7b6ab4
// 005b1071  c74614a46a7b00       mov dword ptr [esi + 0x14], 0x7b6aa4
// 005b1078  c7462c946a7b00       mov dword ptr [esi + 0x2c], 0x7b6a94
// 005b107f  c74644846a7b00       mov dword ptr [esi + 0x44], 0x7b6a84
// 005b1086  c7465c746a7b00       mov dword ptr [esi + 0x5c], 0x7b6a74
// 005b108d  c74674646a7b00       mov dword ptr [esi + 0x74], 0x7b6a64
// 005b1094  c7868c000000546a7b00 mov dword ptr [esi + 0x8c], 0x7b6a54
// 005b109e  c786e80000003c6a7b00 mov dword ptr [esi + 0xe8], 0x7b6a3c
// 005b10a8  8bc6                 mov eax, esi
// 005b10aa  5e                   pop esi
// 005b10ab  c20400               ret 4

struct RBX_AutoJoint {
    char pad[0xec];
    void sub_005b0e40(int);
    RBX_AutoJoint* sub_005b1050(int);
};

RBX_AutoJoint* RBX_AutoJoint::sub_005b1050(int a)
{
    sub_005b0e40(a);
    *(int*)((char*)this + 0x00) = 0x7b6ac4;
    *(int*)((char*)this + 0x04) = 0x7b6abc;
    *(int*)((char*)this + 0x10) = 0x7b6ab4;
    *(int*)((char*)this + 0x14) = 0x7b6aa4;
    *(int*)((char*)this + 0x2c) = 0x7b6a94;
    *(int*)((char*)this + 0x44) = 0x7b6a84;
    *(int*)((char*)this + 0x5c) = 0x7b6a74;
    *(int*)((char*)this + 0x74) = 0x7b6a64;
    *(int*)((char*)this + 0x8c) = 0x7b6a54;
    *(int*)((char*)this + 0xe8) = 0x7b6a3c;
    return this;
}
