// roc 2007-08 0057d420  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d420
//
// 0057d420  6aff                 push -1
// 0057d422  6888587500           push 0x755888
// 0057d427  64a100000000         mov eax, dword ptr fs:[0]
// 0057d42d  50                   push eax
// 0057d42e  64892500000000       mov dword ptr fs:[0], esp
// 0057d435  51                   push ecx
// 0057d436  56                   push esi
// 0057d437  8bf1                 mov esi, ecx
// 0057d439  89742404             mov dword ptr [esp + 4], esi
// 0057d43d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0057d440  85c9                 test ecx, ecx
// 0057d442  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057d44a  7408                 je 0x57d454
// 0057d44c  8b01                 mov eax, dword ptr [ecx]
// 0057d44e  8b10                 mov edx, dword ptr [eax]
// 0057d450  6a01                 push 1
// 0057d452  ffd2                 call edx
// 0057d454  8bce                 mov ecx, esi
// 0057d456  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057d45e  e8ada1e9ff           call 0x417610
// 0057d463  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057d467  5e                   pop esi
// 0057d468  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d46f  83c410               add esp, 0x10
// 0057d472  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??1?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
