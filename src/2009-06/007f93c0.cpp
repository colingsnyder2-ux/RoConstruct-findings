// from server: 100% by tester
// roc 2008-06 00780d00  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780d00
//
// 00780d00  83ec10               sub esp, 0x10
// 00780d03  56                   push esi
// 00780d04  8bf1                 mov esi, ecx
// 00780d06  57                   push edi
// 00780d07  8d4c2408             lea ecx, [esp + 8]
// 00780d0b  e8806df7ff           call 0x6f7a90
// 00780d10  8b38                 mov edi, dword ptr [eax]
// 00780d12  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00780d15  8b31                 mov esi, dword ptr [ecx]
// 00780d17  6a00                 push 0
// 00780d19  83ec10               sub esp, 0x10
// 00780d1c  8bd4                 mov edx, esp
// 00780d1e  893a                 mov dword ptr [edx], edi
// 00780d20  8b7804               mov edi, dword ptr [eax + 4]
// 00780d23  897a04               mov dword ptr [edx + 4], edi
// 00780d26  8b7808               mov edi, dword ptr [eax + 8]
// 00780d29  8b400c               mov eax, dword ptr [eax + 0xc]
// 00780d2c  897a08               mov dword ptr [edx + 8], edi
// 00780d2f  89420c               mov dword ptr [edx + 0xc], eax
// 00780d32  8b542434             mov edx, dword ptr [esp + 0x34]
// 00780d36  8b442430             mov eax, dword ptr [esp + 0x30]
// 00780d3a  52                   push edx
// 00780d3b  8b5668               mov edx, dword ptr [esi + 0x68]
// 00780d3e  50                   push eax
// 00780d3f  ffd2                 call edx
// 00780d41  5f                   pop edi
// 00780d42  5e                   pop esi
// 00780d43  83c410               add esp, 0x10
// 00780d46  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonLength@CAppearanceSet@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
