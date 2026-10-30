// from server: 100% by auto
// roc 2007-08 0069bcf0  unit: CXTPPropertyGridView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bcf0
//
// 0069bcf0  56                   push esi
// 0069bcf1  57                   push edi
// 0069bcf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0069bcf6  8bf1                 mov esi, ecx
// 0069bcf8  3bbe54010000         cmp edi, dword ptr [esi + 0x154]
// 0069bcfe  741d                 je 0x69bd1d
// 0069bd00  85ff                 test edi, edi
// 0069bd02  7405                 je 0x69bd09
// 0069bd04  e8fb42f9ff           call 0x630004
// 0069bd09  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069bd0c  6a00                 push 0
// 0069bd0e  6a00                 push 0
// 0069bd10  50                   push eax
// 0069bd11  89be54010000         mov dword ptr [esi + 0x154], edi
// 0069bd17  ff15dcec7700         call dword ptr [0x77ecdc]
// 0069bd1d  5f                   pop edi
// 0069bd1e  5e                   pop esi
// 0069bd1f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?FocusInplaceButton@CXTPPropertyGridView@@QAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
