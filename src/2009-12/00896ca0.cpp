// roc 2009-12 00896ca0  unit: CXTPRibbonBar  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896ca0
//
// 00896ca0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00896ca4  56                   push esi
// 00896ca5  8bf1                 mov esi, ecx
// 00896ca7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00896cab  50                   push eax
// 00896cac  51                   push ecx
// 00896cad  8bce                 mov ecx, esi
// 00896caf  e87ce4ffff           call 0x895130
// 00896cb4  85c0                 test eax, eax
// 00896cb6  7579                 jne 0x896d31
// 00896cb8  8bce                 mov ecx, esi
// 00896cba  e811e0ffff           call 0x894cd0
// 00896cbf  85c0                 test eax, eax
// 00896cc1  7419                 je 0x896cdc
// 00896cc3  8b542410             mov edx, dword ptr [esp + 0x10]
// 00896cc7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00896ccb  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 00896cd1  52                   push edx
// 00896cd2  50                   push eax
// 00896cd3  e848390500           call 0x8ea620
// 00896cd8  85c0                 test eax, eax
// 00896cda  755a                 jne 0x896d36
// 00896cdc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00896ce0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00896ce4  50                   push eax
// 00896ce5  51                   push ecx
// 00896ce6  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00896cec  81c184010000         add ecx, 0x184
// 00896cf2  e899890300           call 0x8cf690
// 00896cf7  8bd0                 mov edx, eax
// 00896cf9  85d2                 test edx, edx
// 00896cfb  0f841c010000         je 0x896e1d
// 00896d01  8bce                 mov ecx, esi
// 00896d03  e8d8dfffff           call 0x894ce0
// 00896d08  3bd0                 cmp edx, eax
// 00896d0a  0f850d010000         jne 0x896e1d
// 00896d10  83be6002000000       cmp dword ptr [esi + 0x260], 0
// 00896d17  0f8400010000         je 0x896e1d
// 00896d1d  e8bee4ffff           call 0x8951e0
// 00896d22  85c0                 test eax, eax
// 00896d24  0f84b9000000         je 0x896de3
// 00896d2a  6a00                 push 0
// 00896d2c  e9d8000000           jmp 0x896e09
// 00896d31  83f802               cmp eax, 2
// 00896d34  75a6                 jne 0x896cdc
// 00896d36  53                   push ebx
// 00896d37  57                   push edi
// 00896d38  8bce                 mov ecx, esi
// 00896d3a  e85103f7ff           call 0x807090
// 00896d3f  8bf8                 mov edi, eax
// 00896d41  8bcf                 mov ecx, edi
// 00896d43  e82af70800           call 0x926472
// 00896d48  a900000020           test eax, 0x20000000
// 00896d4d  7537                 jne 0x896d86
// 00896d4f  8bcf                 mov ecx, edi
// 00896d51  e81cf70800           call 0x926472
// 00896d56  a900000001           test eax, 0x1000000
// 00896d5b  7529                 jne 0x896d86
// 00896d5d  8bcf                 mov ecx, edi
// 00896d5f  e80ef70800           call 0x926472
// 00896d64  a900000100           test eax, 0x10000
// 00896d69  7472                 je 0x896ddd
// 00896d6b  8bcf                 mov ecx, edi
// 00896d6d  bb30f00000           mov ebx, 0xf030
// 00896d72  e8fbf60800           call 0x926472
// 00896d77  a900000800           test eax, 0x80000
// 00896d7c  742d                 je 0x896dab
// 00896d7e  85ff                 test edi, edi
// 00896d80  750b                 jne 0x896d8d
// 00896d82  33c0                 xor eax, eax
// 00896d84  eb0a                 jmp 0x896d90
// 00896d86  bb20f10000           mov ebx, 0xf120
// 00896d8b  eb1e                 jmp 0x896dab
// 00896d8d  8b4720               mov eax, dword ptr [edi + 0x20]
// 00896d90  6a00                 push 0
// 00896d92  6830f00000           push 0xf030
// 00896d97  6a00                 push 0
// 00896d99  50                   push eax
// 00896d9a  ff15f4cb9800         call dword ptr [0x98cbf4]
// 00896da0  50                   push eax
// 00896da1  ff15f0c99800         call dword ptr [0x98c9f0]
// 00896da7  a803                 test al, 3
// 00896da9  7532                 jne 0x896ddd
// 00896dab  8b5620               mov edx, dword ptr [esi + 0x20]
// 00896dae  8d4c2414             lea ecx, [esp + 0x14]
// 00896db2  51                   push ecx
// 00896db3  52                   push edx
// 00896db4  ff1554cc9800         call dword ptr [0x98cc54]
// 00896dba  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00896dbf  0fb74c2414           movzx ecx, word ptr [esp + 0x14]
// 00896dc4  8b5720               mov edx, dword ptr [edi + 0x20]
// 00896dc7  c1e010               shl eax, 0x10
// 00896dca  0bc1                 or eax, ecx
// 00896dcc  50                   push eax
// 00896dcd  83cb02               or ebx, 2
// 00896dd0  53                   push ebx
// 00896dd1  6812010000           push 0x112
// 00896dd6  52                   push edx
// 00896dd7  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00896ddd  5f                   pop edi
// 00896dde  5b                   pop ebx
// 00896ddf  5e                   pop esi
// 00896de0  c20c00               ret 0xc
// 00896de3  83be7802000000       cmp dword ptr [esi + 0x278], 0
// 00896dea  7427                 je 0x896e13
// 00896dec  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00896df2  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00896df8  8d8884010000         lea ecx, [eax + 0x184]
// 00896dfe  8b4220               mov eax, dword ptr [edx + 0x20]
// 00896e01  6a00                 push 0
// 00896e03  ffd0                 call eax
// 00896e05  6a01                 push 1
// 00896e07  8bce                 mov ecx, esi
// 00896e09  8b16                 mov edx, dword ptr [esi]
// 00896e0b  8b8224020000         mov eax, dword ptr [edx + 0x224]
// 00896e11  ffd0                 call eax
// 00896e13  c7867802000001000000 mov dword ptr [esi + 0x278], 1
// 00896e1d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00896e21  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00896e25  8b442408             mov eax, dword ptr [esp + 8]
// 00896e29  51                   push ecx
// 00896e2a  52                   push edx
// 00896e2b  50                   push eax
// 00896e2c  8bce                 mov ecx, esi
// 00896e2e  e88da7f7ff           call 0x8115c0
// 00896e33  5e                   pop esi
// 00896e34  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp