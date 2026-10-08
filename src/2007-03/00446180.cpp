// roc 2007-03 00446180  unit: seg_00440000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00446180
//
// 00446180  56                   push esi
// 00446181  8bf1                 mov esi, ecx
// 00446183  8b4604               mov eax, dword ptr [esi + 4]
// 00446186  85c0                 test eax, eax
// 00446188  57                   push edi
// 00446189  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044618d  741c                 je 0x4461ab
// 0044618f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00446192  2bc8                 sub ecx, eax
// 00446194  b893244992           mov eax, 0x92492493
// 00446199  f7e9                 imul ecx
// 0044619b  03d1                 add edx, ecx
// 0044619d  c1fa04               sar edx, 4
// 004461a0  8bc2                 mov eax, edx
// 004461a2  c1e81f               shr eax, 0x1f
// 004461a5  03c2                 add eax, edx
// 004461a7  3bf8                 cmp edi, eax
// 004461a9  7206                 jb 0x4461b1
// 004461ab  ff1544e97700         call dword ptr [0x77e944]
// 004461b1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004461b4  8d04fd00000000       lea eax, [edi*8]
// 004461bb  2bc7                 sub eax, edi
// 004461bd  5f                   pop edi
// 004461be  8d0481               lea eax, [ecx + eax*4]
// 004461c1  5e                   pop esi
// 004461c2  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??A?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAEAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
