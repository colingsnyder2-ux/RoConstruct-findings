// roc 2008-06 00416e10  unit: VCContent::?$CComAggObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416e10
//
// 00416e10  56                   push esi
// 00416e11  8bf1                 mov esi, ecx
// 00416e13  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00416e17  8b01                 mov eax, dword ptr [ecx]
// 00416e19  8b5004               mov edx, dword ptr [eax + 4]
// 00416e1c  ffd2                 call edx
// 00416e1e  50                   push eax
// 00416e1f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00416e23  50                   push eax
// 00416e24  56                   push esi
// 00416e25  e876251500           call 0x5693a0
// 00416e2a  83c40c               add esp, 0xc
// 00416e2d  5e                   pop esi
// 00416e2e  c20800               ret 8
// library rbxgs/util\standardout.cpp (function ?print@StandardOut@RBX@@QAEXW4MessageType@2@ABVexception@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/standardout.cpp
