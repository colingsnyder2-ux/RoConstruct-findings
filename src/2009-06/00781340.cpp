// roc 2009-06 00781340  unit: CXTPStatusBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781340
//
// 00781340  56                   push esi
// 00781341  57                   push edi
// 00781342  8bf1                 mov esi, ecx
// 00781344  33ff                 xor edi, edi
// 00781346  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0078134c  7e25                 jle 0x781373
// 0078134e  8bff                 mov edi, edi
// 00781350  85ff                 test edi, edi
// 00781352  7c46                 jl 0x78139a
// 00781354  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0078135a  7d3e                 jge 0x78139a
// 0078135c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00781362  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00781365  e83e7cf9ff           call 0x718fa8
// 0078136a  47                   inc edi
// 0078136b  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 00781371  7cdd                 jl 0x781350
// 00781373  6aff                 push -1
// 00781375  6a00                 push 0
// 00781377  8d8e98000000         lea ecx, [esi + 0x98]
// 0078137d  e88e11fdff           call 0x752510
// 00781382  6a01                 push 1
// 00781384  6a01                 push 1
// 00781386  8bce                 mov ecx, esi
// 00781388  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 00781392  e8a9f9ffff           call 0x780d40
// 00781397  5f                   pop edi
// 00781398  5e                   pop esi
// 00781399  c3                   ret 
// 0078139a  e84579f9ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPStatusBar@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp