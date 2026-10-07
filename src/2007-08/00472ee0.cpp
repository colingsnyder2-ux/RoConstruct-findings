// roc 2007-08 00472ee0  unit: G3D::VARArea  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472ee0
//
// 00472ee0  6aff                 push -1
// 00472ee2  68144d7400           push 0x744d14
// 00472ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00472eed  50                   push eax
// 00472eee  83ec08               sub esp, 8
// 00472ef1  53                   push ebx
// 00472ef2  56                   push esi
// 00472ef3  a188518b00           mov eax, dword ptr [0x8b5188]
// 00472ef8  33c4                 xor eax, esp
// 00472efa  50                   push eax
// 00472efb  8d442414             lea eax, [esp + 0x14]
// 00472eff  64a300000000         mov dword ptr fs:[0], eax
// 00472f05  33db                 xor ebx, ebx
// 00472f07  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00472f0b  895c240c             mov dword ptr [esp + 0xc], ebx
// 00472f0f  e8acfeffff           call 0x472dc0
// 00472f14  6a38                 push 0x38
// 00472f16  e8dbcf1b00           call 0x62fef6
// 00472f1b  83c404               add esp, 4
// 00472f1e  89442410             mov dword ptr [esp + 0x10], eax
// 00472f22  3bc3                 cmp eax, ebx
// 00472f24  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00472f2c  7413                 je 0x472f41
// 00472f2e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00472f32  8b542428             mov edx, dword ptr [esp + 0x28]
// 00472f36  51                   push ecx
// 00472f37  52                   push edx
// 00472f38  8bc8                 mov ecx, eax
// 00472f3a  e891f7ffff           call 0x4726d0
// 00472f3f  eb02                 jmp 0x472f43
// 00472f41  33c0                 xor eax, eax
// 00472f43  8b742424             mov esi, dword ptr [esp + 0x24]
// 00472f47  50                   push eax
// 00472f48  8bce                 mov ecx, esi
// 00472f4a  885c2420             mov byte ptr [esp + 0x20], bl
// 00472f4e  891e                 mov dword ptr [esi], ebx
// 00472f50  e81b200000           call 0x474f70
// 00472f55  56                   push esi
// 00472f56  b9b8d08b00           mov ecx, 0x8bd0b8
// 00472f5b  895c2420             mov dword ptr [esp + 0x20], ebx
// 00472f5f  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00472f67  e814fdffff           call 0x472c80
// 00472f6c  8bc6                 mov eax, esi
// 00472f6e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00472f72  64890d00000000       mov dword ptr fs:[0], ecx
// 00472f79  59                   pop ecx
// 00472f7a  5e                   pop esi
// 00472f7b  5b                   pop ebx
// 00472f7c  83c414               add esp, 0x14
// 00472f7f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?create@VARArea@G3D@@SA?AV?$ReferenceCountedPointer@VVARArea@G3D@@@2@IW4UsageHint@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
