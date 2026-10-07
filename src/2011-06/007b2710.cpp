// roc 2011-06 007b2710  unit: RBX::SleepStage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b2710
//
// 007b2710  56                   push esi
// 007b2711  8bf1                 mov esi, ecx
// 007b2713  e868acfdff           call 0x78d380
// 007b2718  894604               mov dword ptr [esi + 4], eax
// 007b271b  c6401101             mov byte ptr [eax + 0x11], 1
// 007b271f  8b4604               mov eax, dword ptr [esi + 4]
// 007b2722  894004               mov dword ptr [eax + 4], eax
// 007b2725  8b4604               mov eax, dword ptr [esi + 4]
// 007b2728  8900                 mov dword ptr [eax], eax
// 007b272a  8b4604               mov eax, dword ptr [esi + 4]
// 007b272d  894008               mov dword ptr [eax + 8], eax
// 007b2730  c7460800000000       mov dword ptr [esi + 8], 0
// 007b2737  8bc6                 mov eax, esi
// 007b2739  5e                   pop esi
// 007b273a  c3                   ret 
// library boost-1.34.1/libs\regex\src\usinstances.cpp (function ??0?$map@GEU?$less@G@std@@V?$allocator@U?$pair@$$CBGE@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/usinstances.cpp
