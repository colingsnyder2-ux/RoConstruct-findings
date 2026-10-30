// roc 2009-12 008e6d00  unit: CXTPTabPaintManager::CColorSetDefault  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6d00
//
// 008e6d00  56                   push esi
// 008e6d01  57                   push edi
// 008e6d02  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008e6d06  8bf1                 mov esi, ecx
// 008e6d08  8bcf                 mov ecx, edi
// 008e6d0a  e89136f3ff           call 0x81a3a0
// 008e6d0f  85c0                 test eax, eax
// 008e6d11  7508                 jne 0x8e6d1b
// 008e6d13  8d86d4000000         lea eax, [esi + 0xd4]
// 008e6d19  eb2f                 jmp 0x8e6d4a
// 008e6d1b  8b4760               mov eax, dword ptr [edi + 0x60]
// 008e6d1e  83781c00             cmp dword ptr [eax + 0x1c], 0
// 008e6d22  7508                 jne 0x8e6d2c
// 008e6d24  8d86b0000000         lea eax, [esi + 0xb0]
// 008e6d2a  eb1e                 jmp 0x8e6d4a
// 008e6d2c  397804               cmp dword ptr [eax + 4], edi
// 008e6d2f  7508                 jne 0x8e6d39
// 008e6d31  8d86bc000000         lea eax, [esi + 0xbc]
// 008e6d37  eb11                 jmp 0x8e6d4a
// 008e6d39  397808               cmp dword ptr [eax + 8], edi
// 008e6d3c  8d86c8000000         lea eax, [esi + 0xc8]
// 008e6d42  7406                 je 0x8e6d4a
// 008e6d44  8d86a4000000         lea eax, [esi + 0xa4]
// 008e6d4a  8b4808               mov ecx, dword ptr [eax + 8]
// 008e6d4d  5f                   pop edi
// 008e6d4e  5e                   pop esi
// 008e6d4f  83f9ff               cmp ecx, -1
// 008e6d52  7512                 jne 0x8e6d66
// 008e6d54  8b4004               mov eax, dword ptr [eax + 4]
// 008e6d57  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008e6d5b  8b11                 mov edx, dword ptr [ecx]
// 008e6d5d  50                   push eax
// 008e6d5e  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e6d61  ffd0                 call eax
// 008e6d63  c20800               ret 8
// 008e6d66  8bc1                 mov eax, ecx
// 008e6d68  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008e6d6c  8b11                 mov edx, dword ptr [ecx]
// 008e6d6e  50                   push eax
// 008e6d6f  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e6d72  ffd0                 call eax
// 008e6d74  c20800               ret 8
// copied from an identical function in another client (function ?SetTextColor@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp