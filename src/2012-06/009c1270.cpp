// roc 2012-06 009c1270  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1270
//
// 009c1270  51                   push ecx
// 009c1271  56                   push esi
// 009c1272  8bf1                 mov esi, ecx
// 009c1274  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1277  e856830d00           call 0xa995d2
// 009c127c  a900040000           test eax, 0x400
// 009c1281  740d                 je 0x9c1290
// 009c1283  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1286  e85314fcff           call 0x9826de
// 009c128b  5e                   pop esi
// 009c128c  59                   pop ecx
// 009c128d  c20c00               ret 0xc
// 009c1290  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c1294  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c1298  57                   push edi
// 009c1299  8d442408             lea eax, [esp + 8]
// 009c129d  50                   push eax
// 009c129e  51                   push ecx
// 009c129f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c12a2  52                   push edx
// 009c12a3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009c12ab  e8e217fcff           call 0x982a92
// 009c12b0  8bf8                 mov edi, eax
// 009c12b2  85ff                 test edi, edi
// 009c12b4  7437                 je 0x9c12ed
// 009c12b6  f644240846           test byte ptr [esp + 8], 0x46
// 009c12bb  7430                 je 0x9c12ed
// 009c12bd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c12c0  6a02                 push 2
// 009c12c2  57                   push edi
// 009c12c3  e84a850d00           call 0xa99812
// 009c12c8  a802                 test al, 2
// 009c12ca  752c                 jne 0x9c12f8
// 009c12cc  6a00                 push 0
// 009c12ce  6a00                 push 0
// 009c12d0  8bce                 mov ecx, esi
// 009c12d2  e8c9f1ffff           call 0x9c04a0
// 009c12d7  57                   push edi
// 009c12d8  8bce                 mov ecx, esi
// 009c12da  e881f0ffff           call 0x9c0360
// 009c12df  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c12e2  e8f713fcff           call 0x9826de
// 009c12e7  5f                   pop edi
// 009c12e8  5e                   pop esi
// 009c12e9  59                   pop ecx
// 009c12ea  c20c00               ret 0xc
// 009c12ed  6a00                 push 0
// 009c12ef  6a00                 push 0
// 009c12f1  8bce                 mov ecx, esi
// 009c12f3  e8a8f1ffff           call 0x9c04a0
// 009c12f8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c12fb  e8de13fcff           call 0x9826de
// 009c1300  5f                   pop edi
// 009c1301  5e                   pop esi
// 009c1302  59                   pop ecx
// 009c1303  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?OnRButtonDown@CXTPTreeBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
