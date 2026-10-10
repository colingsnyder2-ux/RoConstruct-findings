// roc 2012-06 00a6c9e0  unit: CXTPTabPaintManager::CColorSetDefault  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c9e0
//
// 00a6c9e0  56                   push esi
// 00a6c9e1  57                   push edi
// 00a6c9e2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a6c9e6  8bf1                 mov esi, ecx
// 00a6c9e8  8bcf                 mov ecx, edi
// 00a6c9ea  e851a5f4ff           call 0x9b6f40
// 00a6c9ef  85c0                 test eax, eax
// 00a6c9f1  7508                 jne 0xa6c9fb
// 00a6c9f3  8d86d4000000         lea eax, [esi + 0xd4]
// 00a6c9f9  eb2f                 jmp 0xa6ca2a
// 00a6c9fb  8b4760               mov eax, dword ptr [edi + 0x60]
// 00a6c9fe  83781c00             cmp dword ptr [eax + 0x1c], 0
// 00a6ca02  7508                 jne 0xa6ca0c
// 00a6ca04  8d86b0000000         lea eax, [esi + 0xb0]
// 00a6ca0a  eb1e                 jmp 0xa6ca2a
// 00a6ca0c  397804               cmp dword ptr [eax + 4], edi
// 00a6ca0f  7508                 jne 0xa6ca19
// 00a6ca11  8d86bc000000         lea eax, [esi + 0xbc]
// 00a6ca17  eb11                 jmp 0xa6ca2a
// 00a6ca19  397808               cmp dword ptr [eax + 8], edi
// 00a6ca1c  8d86c8000000         lea eax, [esi + 0xc8]
// 00a6ca22  7406                 je 0xa6ca2a
// 00a6ca24  8d86a4000000         lea eax, [esi + 0xa4]
// 00a6ca2a  8b4808               mov ecx, dword ptr [eax + 8]
// 00a6ca2d  5f                   pop edi
// 00a6ca2e  5e                   pop esi
// 00a6ca2f  83f9ff               cmp ecx, -1
// 00a6ca32  7512                 jne 0xa6ca46
// 00a6ca34  8b4004               mov eax, dword ptr [eax + 4]
// 00a6ca37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a6ca3b  8b11                 mov edx, dword ptr [ecx]
// 00a6ca3d  50                   push eax
// 00a6ca3e  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a6ca41  ffd0                 call eax
// 00a6ca43  c20800               ret 8
// 00a6ca46  8bc1                 mov eax, ecx
// 00a6ca48  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a6ca4c  8b11                 mov edx, dword ptr [ecx]
// 00a6ca4e  50                   push eax
// 00a6ca4f  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a6ca52  ffd0                 call eax
// 00a6ca54  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?SetTextColor@CXTPTabPaintManagerColorSet@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
