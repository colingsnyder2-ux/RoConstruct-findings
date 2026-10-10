// roc 2008-06 00719240  unit: CSelectionCaption  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719240
//
// 00719240  8b442404             mov eax, dword ptr [esp + 4]
// 00719244  56                   push esi
// 00719245  8bf1                 mov esi, ecx
// 00719247  85c0                 test eax, eax
// 00719249  7403                 je 0x71924e
// 0071924b  89466c               mov dword ptr [esi + 0x6c], eax
// 0071924e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00719252  85c0                 test eax, eax
// 00719254  744e                 je 0x7192a4
// 00719256  8b4004               mov eax, dword ptr [eax + 4]
// 00719259  57                   push edi
// 0071925a  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00719260  6a01                 push 1
// 00719262  50                   push eax
// 00719263  8b4620               mov eax, dword ptr [esi + 0x20]
// 00719266  6a30                 push 0x30
// 00719268  50                   push eax
// 00719269  ffd7                 call edi
// 0071926b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00719271  51                   push ecx
// 00719272  ff15502d8000         call dword ptr [0x802d50]
// 00719278  85c0                 test eax, eax
// 0071927a  7427                 je 0x7192a3
// 0071927c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071927f  6a00                 push 0
// 00719281  6a00                 push 0
// 00719283  6a31                 push 0x31
// 00719285  52                   push edx
// 00719286  ffd7                 call edi
// 00719288  50                   push eax
// 00719289  e83c7ef8ff           call 0x6a10ca
// 0071928e  85c0                 test eax, eax
// 00719290  7403                 je 0x719295
// 00719292  8b4004               mov eax, dword ptr [eax + 4]
// 00719295  6a01                 push 1
// 00719297  50                   push eax
// 00719298  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0071929e  6a30                 push 0x30
// 007192a0  50                   push eax
// 007192a1  ffd7                 call edi
// 007192a3  5f                   pop edi
// 007192a4  8b442410             mov eax, dword ptr [esp + 0x10]
// 007192a8  85c0                 test eax, eax
// 007192aa  740d                 je 0x7192b9
// 007192ac  50                   push eax
// 007192ad  8d8ed0000000         lea ecx, [esi + 0xd0]
// 007192b3  ff15b83e8000         call dword ptr [0x803eb8]
// 007192b9  8b442414             mov eax, dword ptr [esp + 0x14]
// 007192bd  85c0                 test eax, eax
// 007192bf  7406                 je 0x7192c7
// 007192c1  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007192c7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007192ca  6a01                 push 1
// 007192cc  6a00                 push 0
// 007192ce  51                   push ecx
// 007192cf  ff15182e8000         call dword ptr [0x802e18]
// 007192d5  5e                   pop esi
// 007192d6  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?ModifyCaptionStyle@CXTCaption@@UAEXHPAVCFont@@PBDPAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
