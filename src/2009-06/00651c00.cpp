// roc 2009-06 00651c00  unit: RBX::VVisit::?$FactoryProduct  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00651c00
//
// 00651c00  6aff                 push -1
// 00651c02  68ebb28600           push 0x86b2eb
// 00651c07  64a100000000         mov eax, dword ptr fs:[0]
// 00651c0d  50                   push eax
// 00651c0e  64892500000000       mov dword ptr fs:[0], esp
// 00651c15  51                   push ecx
// 00651c16  56                   push esi
// 00651c17  8bf1                 mov esi, ecx
// 00651c19  89742404             mov dword ptr [esp + 4], esi
// 00651c1d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00651c20  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00651c28  85c9                 test ecx, ecx
// 00651c2a  7408                 je 0x651c34
// 00651c2c  8b01                 mov eax, dword ptr [ecx]
// 00651c2e  8b10                 mov edx, dword ptr [eax]
// 00651c30  6a01                 push 1
// 00651c32  ffd2                 call edx
// 00651c34  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00651c37  c644241000           mov byte ptr [esp + 0x10], 0
// 00651c3c  85c9                 test ecx, ecx
// 00651c3e  7408                 je 0x651c48
// 00651c40  8b01                 mov eax, dword ptr [ecx]
// 00651c42  8b10                 mov edx, dword ptr [eax]
// 00651c44  6a01                 push 1
// 00651c46  ffd2                 call edx
// 00651c48  8d4e18               lea ecx, [esi + 0x18]
// 00651c4b  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00651c53  e8f86de6ff           call 0x4b8a50
// 00651c58  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00651c5c  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 00651c62  5e                   pop esi
// 00651c63  64890d00000000       mov dword ptr fs:[0], ecx
// 00651c6a  83c410               add esp, 0x10
// 00651c6d  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ??1?$BoundFuncDesc@VDebrisService@RBX@@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@N@Z$01@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
