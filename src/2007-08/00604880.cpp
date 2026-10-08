// roc 2007-08 00604880  unit: RBX::SleepStage  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604880
//
// 00604880  8b442408             mov eax, dword ptr [esp + 8]
// 00604884  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00604888  8b4024               mov eax, dword ptr [eax + 0x24]
// 0060488b  83ec10               sub esp, 0x10
// 0060488e  56                   push esi
// 0060488f  57                   push edi
// 00604890  8b7924               mov edi, dword ptr [ecx + 0x24]
// 00604893  50                   push eax
// 00604894  8d4c240c             lea ecx, [esp + 0xc]
// 00604898  e863ffffff           call 0x604800
// 0060489d  57                   push edi
// 0060489e  8d4c2414             lea ecx, [esp + 0x14]
// 006048a2  8bf0                 mov esi, eax
// 006048a4  e857ffffff           call 0x604800
// 006048a9  8a0e                 mov cl, byte ptr [esi]
// 006048ab  3808                 cmp byte ptr [eax], cl
// 006048ad  7409                 je 0x6048b8
// 006048af  5f                   pop edi
// 006048b0  0fb6c1               movzx eax, cl
// 006048b3  5e                   pop esi
// 006048b4  83c410               add esp, 0x10
// 006048b7  c3                   ret 
// 006048b8  8b5004               mov edx, dword ptr [eax + 4]
// 006048bb  3b5604               cmp edx, dword ptr [esi + 4]
// 006048be  5f                   pop edi
// 006048bf  1bc0                 sbb eax, eax
// 006048c1  f7d8                 neg eax
// 006048c3  5e                   pop esi
// 006048c4  83c410               add esp, 0x10
// 006048c7  c3                   ret 
// library rbxgs/v8world\ClumpStage.cpp (function ?lessClump@RBX@@YA_NABVClump@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
