// roc 2008-06 0079bb80  unit: CXTPTabPaintManager::CColorSetDefault  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bb80
//
// 0079bb80  56                   push esi
// 0079bb81  57                   push edi
// 0079bb82  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0079bb86  8bf1                 mov esi, ecx
// 0079bb88  8bcf                 mov ecx, edi
// 0079bb8a  e8a135f8ff           call 0x71f130
// 0079bb8f  85c0                 test eax, eax
// 0079bb91  7508                 jne 0x79bb9b
// 0079bb93  8d86d4000000         lea eax, [esi + 0xd4]
// 0079bb99  eb2f                 jmp 0x79bbca
// 0079bb9b  8b4760               mov eax, dword ptr [edi + 0x60]
// 0079bb9e  83781c00             cmp dword ptr [eax + 0x1c], 0
// 0079bba2  7508                 jne 0x79bbac
// 0079bba4  8d86b0000000         lea eax, [esi + 0xb0]
// 0079bbaa  eb1e                 jmp 0x79bbca
// 0079bbac  397804               cmp dword ptr [eax + 4], edi
// 0079bbaf  7508                 jne 0x79bbb9
// 0079bbb1  8d86bc000000         lea eax, [esi + 0xbc]
// 0079bbb7  eb11                 jmp 0x79bbca
// 0079bbb9  397808               cmp dword ptr [eax + 8], edi
// 0079bbbc  8d86c8000000         lea eax, [esi + 0xc8]
// 0079bbc2  7406                 je 0x79bbca
// 0079bbc4  8d86a4000000         lea eax, [esi + 0xa4]
// 0079bbca  8b4808               mov ecx, dword ptr [eax + 8]
// 0079bbcd  5f                   pop edi
// 0079bbce  5e                   pop esi
// 0079bbcf  83f9ff               cmp ecx, -1
// 0079bbd2  7512                 jne 0x79bbe6
// 0079bbd4  8b4004               mov eax, dword ptr [eax + 4]
// 0079bbd7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0079bbdb  8b11                 mov edx, dword ptr [ecx]
// 0079bbdd  50                   push eax
// 0079bbde  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079bbe1  ffd0                 call eax
// 0079bbe3  c20800               ret 8
// 0079bbe6  8bc1                 mov eax, ecx
// 0079bbe8  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0079bbec  8b11                 mov edx, dword ptr [ecx]
// 0079bbee  50                   push eax
// 0079bbef  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079bbf2  ffd0                 call eax
// 0079bbf4  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?SetTextColor@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
