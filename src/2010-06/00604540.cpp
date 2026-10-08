// roc 2010-06 00604540  unit: RBX::DecalTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00604540
//
// 00604540  6aff                 push -1
// 00604542  68901e9900           push 0x991e90
// 00604547  64a100000000         mov eax, dword ptr fs:[0]
// 0060454d  50                   push eax
// 0060454e  64892500000000       mov dword ptr fs:[0], esp
// 00604555  51                   push ecx
// 00604556  56                   push esi
// 00604557  8bf1                 mov esi, ecx
// 00604559  89742404             mov dword ptr [esp + 4], esi
// 0060455d  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00604560  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00604568  85c9                 test ecx, ecx
// 0060456a  7408                 je 0x604574
// 0060456c  8b01                 mov eax, dword ptr [ecx]
// 0060456e  8b10                 mov edx, dword ptr [eax]
// 00604570  6a01                 push 1
// 00604572  ffd2                 call edx
// 00604574  8d4e18               lea ecx, [esi + 0x18]
// 00604577  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0060457f  e83c60eaff           call 0x4aa5c0
// 00604584  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00604588  c7061809a000         mov dword ptr [esi], 0xa00918
// 0060458e  5e                   pop esi
// 0060458f  64890d00000000       mov dword ptr fs:[0], ecx
// 00604596  83c410               add esp, 0x10
// 00604599  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??1?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
