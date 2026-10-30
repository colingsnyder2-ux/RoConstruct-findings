// roc 2009-12 008d3f60  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d3f60
//
// 008d3f60  83ec10               sub esp, 0x10
// 008d3f63  56                   push esi
// 008d3f64  8bf1                 mov esi, ecx
// 008d3f66  57                   push edi
// 008d3f67  8d4c2408             lea ecx, [esp + 8]
// 008d3f6b  e8c072f7ff           call 0x84b230
// 008d3f70  8b38                 mov edi, dword ptr [eax]
// 008d3f72  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008d3f75  8b31                 mov esi, dword ptr [ecx]
// 008d3f77  6a00                 push 0
// 008d3f79  83ec10               sub esp, 0x10
// 008d3f7c  8bd4                 mov edx, esp
// 008d3f7e  893a                 mov dword ptr [edx], edi
// 008d3f80  8b7804               mov edi, dword ptr [eax + 4]
// 008d3f83  897a04               mov dword ptr [edx + 4], edi
// 008d3f86  8b7808               mov edi, dword ptr [eax + 8]
// 008d3f89  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d3f8c  897a08               mov dword ptr [edx + 8], edi
// 008d3f8f  89420c               mov dword ptr [edx + 0xc], eax
// 008d3f92  8b542434             mov edx, dword ptr [esp + 0x34]
// 008d3f96  8b442430             mov eax, dword ptr [esp + 0x30]
// 008d3f9a  52                   push edx
// 008d3f9b  8b5668               mov edx, dword ptr [esi + 0x68]
// 008d3f9e  50                   push eax
// 008d3f9f  ffd2                 call edx
// 008d3fa1  5f                   pop edi
// 008d3fa2  5e                   pop esi
// 008d3fa3  83c410               add esp, 0x10
// 008d3fa6  c20800               ret 8
// copied from an identical function in another client (function ?GetButtonLength@CAppearanceSet@CXTPTabPaintManager@@UAEHPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp