// roc 2008-06 00798860  unit: CXTPRibbonGroup  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00798860
//
// 00798860  56                   push esi
// 00798861  8bf1                 mov esi, ecx
// 00798863  e828f9ffff           call 0x798190
// 00798868  8b4658               mov eax, dword ptr [esi + 0x58]
// 0079886b  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0079886e  7536                 jne 0x7988a6
// 00798870  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00798873  c7815801000000000000 mov dword ptr [ecx + 0x158], 0
// 0079887d  8b5658               mov edx, dword ptr [esi + 0x58]
// 00798880  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 00798886  8b01                 mov eax, dword ptr [ecx]
// 00798888  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0079888b  8b4058               mov eax, dword ptr [eax + 0x58]
// 0079888e  52                   push edx
// 0079888f  ffd0                 call eax
// 00798891  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00798894  39b0d8010000         cmp dword ptr [eax + 0x1d8], esi
// 0079889a  750a                 jne 0x7988a6
// 0079889c  c780d801000000000000 mov dword ptr [eax + 0x1d8], 0
// 007988a6  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 007988a9  c7815801000000000000 mov dword ptr [ecx + 0x158], 0
// 007988b3  8b5658               mov edx, dword ptr [esi + 0x58]
// 007988b6  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 007988bc  8b01                 mov eax, dword ptr [ecx]
// 007988be  8b5668               mov edx, dword ptr [esi + 0x68]
// 007988c1  8b4058               mov eax, dword ptr [eax + 0x58]
// 007988c4  52                   push edx
// 007988c5  ffd0                 call eax
// 007988c7  5e                   pop esi
// 007988c8  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroup.cpp (function ?OnGroupRemoved@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroup.cpp
