// roc 2007-03 00534540  unit: seg_00530000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534540
//
// 00534540  56                   push esi
// 00534541  8bf1                 mov esi, ecx
// 00534543  807e1100             cmp byte ptr [esi + 0x11], 0
// 00534547  7427                 je 0x534570
// 00534549  8b4614               mov eax, dword ptr [esi + 0x14]
// 0053454c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0053454f  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 00534555  8b0c11               mov ecx, dword ptr [ecx + edx]
// 00534558  034e1c               add ecx, dword ptr [esi + 0x1c]
// 0053455b  8b5618               mov edx, dword ptr [esi + 0x18]
// 0053455e  8d8c01f4000000       lea ecx, [ecx + eax + 0xf4]
// 00534565  ffd2                 call edx
// 00534567  884610               mov byte ptr [esi + 0x10], al
// 0053456a  c6461100             mov byte ptr [esi + 0x11], 0
// 0053456e  5e                   pop esi
// 0053456f  c3                   ret 
// 00534570  8a4610               mov al, byte ptr [esi + 0x10]
// 00534573  5e                   pop esi
// 00534574  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?isControllable@PVInstance@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
