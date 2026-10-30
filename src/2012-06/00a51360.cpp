// roc 2012-06 00a51360  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51360
//
// 00a51360  83ec10               sub esp, 0x10
// 00a51363  56                   push esi
// 00a51364  8bf1                 mov esi, ecx
// 00a51366  57                   push edi
// 00a51367  8d4c2408             lea ecx, [esp + 8]
// 00a5136b  e8903df8ff           call 0x9d5100
// 00a51370  8b38                 mov edi, dword ptr [eax]
// 00a51372  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a51375  8b31                 mov esi, dword ptr [ecx]
// 00a51377  6a00                 push 0
// 00a51379  83ec10               sub esp, 0x10
// 00a5137c  8bd4                 mov edx, esp
// 00a5137e  893a                 mov dword ptr [edx], edi
// 00a51380  8b7804               mov edi, dword ptr [eax + 4]
// 00a51383  897a04               mov dword ptr [edx + 4], edi
// 00a51386  8b7808               mov edi, dword ptr [eax + 8]
// 00a51389  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a5138c  897a08               mov dword ptr [edx + 8], edi
// 00a5138f  89420c               mov dword ptr [edx + 0xc], eax
// 00a51392  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a51396  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5139a  52                   push edx
// 00a5139b  8b5668               mov edx, dword ptr [esi + 0x68]
// 00a5139e  50                   push eax
// 00a5139f  ffd2                 call edx
// 00a513a1  5f                   pop edi
// 00a513a2  5e                   pop esi
// 00a513a3  83c410               add esp, 0x10
// 00a513a6  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonLength@CXTPTabPaintManagerAppearanceSet@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
