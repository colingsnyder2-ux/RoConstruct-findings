// roc 2007-03 004f5360  unit: seg_004f0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5360
//
// 004f5360  56                   push esi
// 004f5361  57                   push edi
// 004f5362  8b3dece87700         mov edi, dword ptr [0x77e8ec]
// 004f5368  8bf1                 mov esi, ecx
// 004f536a  8b4604               mov eax, dword ptr [esi + 4]
// 004f536d  6890f47900           push 0x79f490
// 004f5372  50                   push eax
// 004f5373  ffd7                 call edi
// 004f5375  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f5379  83c408               add esp, 8
// 004f537c  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004f5380  7217                 jb 0x4f5399
// 004f5382  8b4004               mov eax, dword ptr [eax + 4]
// 004f5385  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f5388  50                   push eax
// 004f5389  6878f47900           push 0x79f478
// 004f538e  51                   push ecx
// 004f538f  ffd7                 call edi
// 004f5391  83c40c               add esp, 0xc
// 004f5394  5f                   pop edi
// 004f5395  5e                   pop esi
// 004f5396  c20400               ret 4
// 004f5399  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f539c  83c004               add eax, 4
// 004f539f  50                   push eax
// 004f53a0  6878f47900           push 0x79f478
// 004f53a5  51                   push ecx
// 004f53a6  ffd7                 call edi
// 004f53a8  83c40c               add esp, 0xc
// 004f53ab  5f                   pop edi
// 004f53ac  5e                   pop esi
// 004f53ad  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Log.cpp (function ?section@Log@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Log.cpp
