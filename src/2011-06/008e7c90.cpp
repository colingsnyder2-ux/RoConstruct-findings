// roc 2011-06 008e7c90  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e7c90
//
// 008e7c90  53                   push ebx
// 008e7c91  55                   push ebp
// 008e7c92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008e7c96  56                   push esi
// 008e7c97  8bd9                 mov ebx, ecx
// 008e7c99  8b7378               mov esi, dword ptr [ebx + 0x78]
// 008e7c9c  57                   push edi
// 008e7c9d  83cfff               or edi, 0xffffffff
// 008e7ca0  896b70               mov dword ptr [ebx + 0x70], ebp
// 008e7ca3  85f6                 test esi, esi
// 008e7ca5  741b                 je 0x8e7cc2
// 008e7ca7  8b4608               mov eax, dword ptr [esi + 8]
// 008e7caa  85c0                 test eax, eax
// 008e7cac  740d                 je 0x8e7cbb
// 008e7cae  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 008e7cb1  7508                 jne 0x8e7cbb
// 008e7cb3  57                   push edi
// 008e7cb4  8bcb                 mov ecx, ebx
// 008e7cb6  e895ffffff           call 0x8e7c50
// 008e7cbb  8b36                 mov esi, dword ptr [esi]
// 008e7cbd  47                   inc edi
// 008e7cbe  85f6                 test esi, esi
// 008e7cc0  75e5                 jne 0x8e7ca7
// 008e7cc2  5f                   pop edi
// 008e7cc3  5e                   pop esi
// 008e7cc4  5d                   pop ebp
// 008e7cc5  5b                   pop ebx
// 008e7cc6  c20400               ret 4
// copied from an identical function in another client (function ?SetSelectedColor@CXTColorHex@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageStandard.cpp