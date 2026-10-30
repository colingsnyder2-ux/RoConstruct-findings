// roc 2012-06 009c1e60  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1e60
//
// 009c1e60  83ec48               sub esp, 0x48
// 009c1e63  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c1e68  33c4                 xor eax, esp
// 009c1e6a  89442444             mov dword ptr [esp + 0x44], eax
// 009c1e6e  56                   push esi
// 009c1e6f  57                   push edi
// 009c1e70  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009c1e74  6a3c                 push 0x3c
// 009c1e76  8d44240c             lea eax, [esp + 0xc]
// 009c1e7a  6a00                 push 0
// 009c1e7c  50                   push eax
// 009c1e7d  8bf1                 mov esi, ecx
// 009c1e7f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 009c1e87  e8e814fcff           call 0x983374
// 009c1e8c  83c40c               add esp, 0xc
// 009c1e8f  8d4c2408             lea ecx, [esp + 8]
// 009c1e93  51                   push ecx
// 009c1e94  57                   push edi
// 009c1e95  8d4e18               lea ecx, [esi + 0x18]
// 009c1e98  e853fcffff           call 0x9c1af0
// 009c1e9d  5f                   pop edi
// 009c1e9e  5e                   pop esi
// 009c1e9f  85c0                 test eax, eax
// 009c1ea1  7415                 je 0x9c1eb8
// 009c1ea3  8b442440             mov eax, dword ptr [esp + 0x40]
// 009c1ea7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009c1eab  33cc                 xor ecx, esp
// 009c1ead  e8851bfcff           call 0x983a37
// 009c1eb2  83c448               add esp, 0x48
// 009c1eb5  c20400               ret 4
// 009c1eb8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009c1ebc  33cc                 xor ecx, esp
// 009c1ebe  83c8ff               or eax, 0xffffffff
// 009c1ec1  e8711bfcff           call 0x983a37
// 009c1ec6  83c448               add esp, 0x48
// 009c1ec9  c20400               ret 4
// copied from an identical function in another client (function ?GetItemBackColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp