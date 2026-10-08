// roc 2007-03 005f0e40  unit: seg_005f0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f0e40
//
// 005f0e40  8b442408             mov eax, dword ptr [esp + 8]
// 005f0e44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f0e48  8b4024               mov eax, dword ptr [eax + 0x24]
// 005f0e4b  83ec10               sub esp, 0x10
// 005f0e4e  56                   push esi
// 005f0e4f  57                   push edi
// 005f0e50  8b7924               mov edi, dword ptr [ecx + 0x24]
// 005f0e53  50                   push eax
// 005f0e54  8d4c240c             lea ecx, [esp + 0xc]
// 005f0e58  e863ffffff           call 0x5f0dc0
// 005f0e5d  57                   push edi
// 005f0e5e  8d4c2414             lea ecx, [esp + 0x14]
// 005f0e62  8bf0                 mov esi, eax
// 005f0e64  e857ffffff           call 0x5f0dc0
// 005f0e69  8a0e                 mov cl, byte ptr [esi]
// 005f0e6b  3808                 cmp byte ptr [eax], cl
// 005f0e6d  7409                 je 0x5f0e78
// 005f0e6f  5f                   pop edi
// 005f0e70  0fb6c1               movzx eax, cl
// 005f0e73  5e                   pop esi
// 005f0e74  83c410               add esp, 0x10
// 005f0e77  c3                   ret 
// 005f0e78  8b5004               mov edx, dword ptr [eax + 4]
// 005f0e7b  3b5604               cmp edx, dword ptr [esi + 4]
// 005f0e7e  5f                   pop edi
// 005f0e7f  1bc0                 sbb eax, eax
// 005f0e81  f7d8                 neg eax
// 005f0e83  5e                   pop esi
// 005f0e84  83c410               add esp, 0x10
// 005f0e87  c3                   ret 
// library rbxgs/v8world\ClumpStage.cpp (function ?lessClump@RBX@@YA_NABVClump@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
