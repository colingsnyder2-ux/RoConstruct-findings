// roc 2008-06 004a3d40  unit: RBX::VHint::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3d40
//
// 004a3d40  6aff                 push -1
// 004a3d42  685b7d7c00           push 0x7c7d5b
// 004a3d47  64a100000000         mov eax, dword ptr fs:[0]
// 004a3d4d  50                   push eax
// 004a3d4e  64892500000000       mov dword ptr fs:[0], esp
// 004a3d55  51                   push ecx
// 004a3d56  56                   push esi
// 004a3d57  8bf1                 mov esi, ecx
// 004a3d59  89742404             mov dword ptr [esp + 4], esi
// 004a3d5d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 004a3d60  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004a3d68  85c9                 test ecx, ecx
// 004a3d6a  7408                 je 0x4a3d74
// 004a3d6c  8b01                 mov eax, dword ptr [ecx]
// 004a3d6e  8b10                 mov edx, dword ptr [eax]
// 004a3d70  6a01                 push 1
// 004a3d72  ffd2                 call edx
// 004a3d74  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 004a3d77  c644241000           mov byte ptr [esp + 0x10], 0
// 004a3d7c  85c9                 test ecx, ecx
// 004a3d7e  7408                 je 0x4a3d88
// 004a3d80  8b01                 mov eax, dword ptr [ecx]
// 004a3d82  8b10                 mov edx, dword ptr [eax]
// 004a3d84  6a01                 push 1
// 004a3d86  ffd2                 call edx
// 004a3d88  8d4e18               lea ecx, [esi + 0x18]
// 004a3d8b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 004a3d93  e8485cf7ff           call 0x4199e0
// 004a3d98  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a3d9c  c70630b78000         mov dword ptr [esi], 0x80b730
// 004a3da2  5e                   pop esi
// 004a3da3  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3daa  83c410               add esp, 0x10
// 004a3dad  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??1?$BoundFuncDesc@VDebrisService@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@N@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
