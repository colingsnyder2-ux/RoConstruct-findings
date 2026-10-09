// roc 2009-12 00740640  unit: RBX::VVirtualUser::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00740640
//
// 00740640  6aff                 push -1
// 00740642  6840b39400           push 0x94b340
// 00740647  64a100000000         mov eax, dword ptr fs:[0]
// 0074064d  50                   push eax
// 0074064e  64892500000000       mov dword ptr fs:[0], esp
// 00740655  51                   push ecx
// 00740656  56                   push esi
// 00740657  8bf1                 mov esi, ecx
// 00740659  89742404             mov dword ptr [esp + 4], esi
// 0074065d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00740660  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00740668  85c9                 test ecx, ecx
// 0074066a  7408                 je 0x740674
// 0074066c  8b01                 mov eax, dword ptr [ecx]
// 0074066e  8b10                 mov edx, dword ptr [eax]
// 00740670  6a01                 push 1
// 00740672  ffd2                 call edx
// 00740674  8d4e18               lea ecx, [esi + 0x18]
// 00740677  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0074067f  e81cc4dbff           call 0x4fcaa0
// 00740684  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00740688  c70670fd9900         mov dword ptr [esi], 0x99fd70
// 0074068e  5e                   pop esi
// 0074068f  64890d00000000       mov dword ptr fs:[0], ecx
// 00740696  83c410               add esp, 0x10
// 00740699  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
