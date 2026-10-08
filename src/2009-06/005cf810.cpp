// roc 2009-06 005cf810  unit: RBX::VInstance::?$RefPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf810
//
// 005cf810  6aff                 push -1
// 005cf812  6840c58600           push 0x86c540
// 005cf817  64a100000000         mov eax, dword ptr fs:[0]
// 005cf81d  50                   push eax
// 005cf81e  64892500000000       mov dword ptr fs:[0], esp
// 005cf825  51                   push ecx
// 005cf826  56                   push esi
// 005cf827  8bf1                 mov esi, ecx
// 005cf829  89742404             mov dword ptr [esp + 4], esi
// 005cf82d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005cf830  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cf838  85c9                 test ecx, ecx
// 005cf83a  7408                 je 0x5cf844
// 005cf83c  8b01                 mov eax, dword ptr [ecx]
// 005cf83e  8b10                 mov edx, dword ptr [eax]
// 005cf840  6a01                 push 1
// 005cf842  ffd2                 call edx
// 005cf844  8d4e18               lea ecx, [esi + 0x18]
// 005cf847  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005cf84f  e8fc91eeff           call 0x4b8a50
// 005cf854  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cf858  c70630d28a00         mov dword ptr [esi], 0x8ad230
// 005cf85e  5e                   pop esi
// 005cf85f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf866  83c410               add esp, 0x10
// 005cf869  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??1?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
