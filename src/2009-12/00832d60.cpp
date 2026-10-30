// roc 2009-12 00832d60  unit: CXTTreeBase  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00832d60
//
// 00832d60  53                   push ebx
// 00832d61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00832d65  817b0400010000       cmp dword ptr [ebx + 4], 0x100
// 00832d6c  56                   push esi
// 00832d6d  57                   push edi
// 00832d6e  8bf1                 mov esi, ecx
// 00832d70  7571                 jne 0x832de3
// 00832d72  e8a9eaffff           call 0x831820
// 00832d77  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 00832d7d  84c0                 test al, al
// 00832d7f  7435                 je 0x832db6
// 00832d81  8b4634               mov eax, dword ptr [esi + 0x34]
// 00832d84  8b4020               mov eax, dword ptr [eax + 0x20]
// 00832d87  6a00                 push 0
// 00832d89  6a00                 push 0
// 00832d8b  680f110000           push 0x110f
// 00832d90  50                   push eax
// 00832d91  ffd7                 call edi
// 00832d93  50                   push eax
// 00832d94  e8910dfcff           call 0x7f3b2a
// 00832d99  85c0                 test eax, eax
// 00832d9b  7419                 je 0x832db6
// 00832d9d  53                   push ebx
// 00832d9e  ff15d0c99800         call dword ptr [0x98c9d0]
// 00832da4  53                   push ebx
// 00832da5  ff1594ca9800         call dword ptr [0x98ca94]
// 00832dab  5f                   pop edi
// 00832dac  5e                   pop esi
// 00832dad  b801000000           mov eax, 1
// 00832db2  5b                   pop ebx
// 00832db3  c20400               ret 4
// 00832db6  837b080d             cmp dword ptr [ebx + 8], 0xd
// 00832dba  7527                 jne 0x832de3
// 00832dbc  8b4634               mov eax, dword ptr [esi + 0x34]
// 00832dbf  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00832dc2  6a00                 push 0
// 00832dc4  6a09                 push 9
// 00832dc6  680a110000           push 0x110a
// 00832dcb  51                   push ecx
// 00832dcc  ffd7                 call edi
// 00832dce  85c0                 test eax, eax
// 00832dd0  7411                 je 0x832de3
// 00832dd2  8b5634               mov edx, dword ptr [esi + 0x34]
// 00832dd5  50                   push eax
// 00832dd6  8b4220               mov eax, dword ptr [edx + 0x20]
// 00832dd9  6a03                 push 3
// 00832ddb  6802110000           push 0x1102
// 00832de0  50                   push eax
// 00832de1  ffd7                 call edi
// 00832de3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00832de6  53                   push ebx
// 00832de7  e87410fcff           call 0x7f3e60
// 00832dec  5f                   pop edi
// 00832ded  5e                   pop esi
// 00832dee  5b                   pop ebx
// 00832def  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateMessage@CXTTreeBase@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp