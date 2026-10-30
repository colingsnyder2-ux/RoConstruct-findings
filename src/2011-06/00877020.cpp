// roc 2011-06 00877020  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00877020
//
// 00877020  56                   push esi
// 00877021  57                   push edi
// 00877022  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00877026  8bf1                 mov esi, ecx
// 00877028  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 0087702e  741d                 je 0x87704d
// 00877030  85ff                 test edi, edi
// 00877032  7405                 je 0x877039
// 00877034  e8c733f9ff           call 0x80a400
// 00877039  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087703c  6a00                 push 0
// 0087703e  6a00                 push 0
// 00877040  50                   push eax
// 00877041  89be54010000         mov dword ptr [esi + 0x154], edi
// 00877047  ff15ec19a400         call dword ptr [0xa419ec]
// 0087704d  5f                   pop edi
// 0087704e  5e                   pop esi
// 0087704f  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
