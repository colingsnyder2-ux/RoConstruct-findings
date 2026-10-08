// roc 2007-03 004f5550  unit: seg_004f0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5550
//
// 004f5550  56                   push esi
// 004f5551  8bf1                 mov esi, ecx
// 004f5553  e898feffff           call 0x4f53f0
// 004f5558  8b442408             mov eax, dword ptr [esp + 8]
// 004f555c  83781810             cmp dword ptr [eax + 0x18], 0x10
// 004f5560  7205                 jb 0x4f5567
// 004f5562  8b4004               mov eax, dword ptr [eax + 4]
// 004f5565  eb03                 jmp 0x4f556a
// 004f5567  83c004               add eax, 4
// 004f556a  50                   push eax
// 004f556b  8b4604               mov eax, dword ptr [esi + 4]
// 004f556e  6844927800           push 0x789244
// 004f5573  50                   push eax
// 004f5574  ff15ece87700         call dword ptr [0x77e8ec]
// 004f557a  83c40c               add esp, 0xc
// 004f557d  5e                   pop esi
// 004f557e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Log.cpp (function ?print@Log@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/Log.cpp
