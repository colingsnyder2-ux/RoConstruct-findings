// roc 2007-08 005989e0  unit: RBX::PlayerController  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005989e0
//
// 005989e0  6aff                 push -1
// 005989e2  6858777500           push 0x757758
// 005989e7  64a100000000         mov eax, dword ptr fs:[0]
// 005989ed  50                   push eax
// 005989ee  64892500000000       mov dword ptr fs:[0], esp
// 005989f5  51                   push ecx
// 005989f6  56                   push esi
// 005989f7  8bf1                 mov esi, ecx
// 005989f9  89742404             mov dword ptr [esp + 4], esi
// 005989fd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00598a00  85c9                 test ecx, ecx
// 00598a02  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00598a0a  7413                 je 0x598a1f
// 00598a0c  8d4108               lea eax, [ecx + 8]
// 00598a0f  83caff               or edx, 0xffffffff
// 00598a12  f00fc110             lock xadd dword ptr [eax], edx
// 00598a16  7507                 jne 0x598a1f
// 00598a18  8b01                 mov eax, dword ptr [ecx]
// 00598a1a  8b5008               mov edx, dword ptr [eax + 8]
// 00598a1d  ffd2                 call edx
// 00598a1f  8bce                 mov ecx, esi
// 00598a21  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00598a29  e872fbffff           call 0x5985a0
// 00598a2e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00598a32  5e                   pop esi
// 00598a33  64890d00000000       mov dword ptr fs:[0], ecx
// 00598a3a  83c410               add esp, 0x10
// 00598a3d  c3                   ret 
// library rbxgs/v8datamodel\UserController.cpp (function ??1PlayerController@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
