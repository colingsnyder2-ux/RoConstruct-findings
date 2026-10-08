// roc 2008-06 005a3410  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3410
//
// 005a3410  6aff                 push -1
// 005a3412  68802b7d00           push 0x7d2b80
// 005a3417  64a100000000         mov eax, dword ptr fs:[0]
// 005a341d  50                   push eax
// 005a341e  64892500000000       mov dword ptr fs:[0], esp
// 005a3425  51                   push ecx
// 005a3426  56                   push esi
// 005a3427  8bf1                 mov esi, ecx
// 005a3429  89742404             mov dword ptr [esp + 4], esi
// 005a342d  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 005a3430  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a3438  85c9                 test ecx, ecx
// 005a343a  7408                 je 0x5a3444
// 005a343c  8b01                 mov eax, dword ptr [ecx]
// 005a343e  8b10                 mov edx, dword ptr [eax]
// 005a3440  6a01                 push 1
// 005a3442  ffd2                 call edx
// 005a3444  8d4e18               lea ecx, [esi + 0x18]
// 005a3447  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005a344f  e88c65e7ff           call 0x4199e0
// 005a3454  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a3458  c70630b78000         mov dword ptr [esi], 0x80b730
// 005a345e  5e                   pop esi
// 005a345f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a3466  83c410               add esp, 0x10
// 005a3469  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??1?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
