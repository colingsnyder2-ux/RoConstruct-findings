// roc 2009-12 00891490  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891490
//
// 00891490  53                   push ebx
// 00891491  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00891495  55                   push ebp
// 00891496  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0089149a  85db                 test ebx, ebx
// 0089149c  7409                 je 0x8914a7
// 0089149e  85ed                 test ebp, ebp
// 008914a0  7505                 jne 0x8914a7
// 008914a2  e86526f6ff           call 0x7f3b0c
// 008914a7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008914ab  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008914ae  f7d1                 not ecx
// 008914b0  56                   push esi
// 008914b1  57                   push edi
// 008914b2  f6c101               test cl, 1
// 008914b5  7438                 je 0x8914ef
// 008914b7  85db                 test ebx, ebx
// 008914b9  762d                 jbe 0x8914e8
// 008914bb  eb03                 jmp 0x8914c0
// 008914bd  8d4900               lea ecx, [ecx]
// 008914c0  8bfb                 mov edi, ebx
// 008914c2  81fbaaaaaa02         cmp ebx, 0x2aaaaaa
// 008914c8  7205                 jb 0x8914cf
// 008914ca  bfaaaaaa02           mov edi, 0x2aaaaaa
// 008914cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008914d3  8d347f               lea esi, [edi + edi*2]
// 008914d6  c1e604               shl esi, 4
// 008914d9  56                   push esi
// 008914da  55                   push ebp
// 008914db  e8fc2ef6ff           call 0x7f43dc
// 008914e0  2bdf                 sub ebx, edi
// 008914e2  03ee                 add ebp, esi
// 008914e4  85db                 test ebx, ebx
// 008914e6  77d8                 ja 0x8914c0
// 008914e8  5f                   pop edi
// 008914e9  5e                   pop esi
// 008914ea  5d                   pop ebp
// 008914eb  5b                   pop ebx
// 008914ec  c20c00               ret 0xc
// 008914ef  85db                 test ebx, ebx
// 008914f1  76f5                 jbe 0x8914e8
// 008914f3  8bfb                 mov edi, ebx
// 008914f5  81fbaaaaaa02         cmp ebx, 0x2aaaaaa
// 008914fb  7205                 jb 0x891502
// 008914fd  bfaaaaaa02           mov edi, 0x2aaaaaa
// 00891502  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00891506  8d347f               lea esi, [edi + edi*2]
// 00891509  c1e604               shl esi, 4
// 0089150c  56                   push esi
// 0089150d  55                   push ebp
// 0089150e  e8c32ef6ff           call 0x7f43d6
// 00891513  3bc6                 cmp eax, esi
// 00891515  750f                 jne 0x891526
// 00891517  2bdf                 sub ebx, edi
// 00891519  03ee                 add ebp, esi
// 0089151b  85db                 test ebx, ebx
// 0089151d  77d4                 ja 0x8914f3
// 0089151f  5f                   pop edi
// 00891520  5e                   pop esi
// 00891521  5d                   pop ebp
// 00891522  5b                   pop ebx
// 00891523  c20c00               ret 0xc
// 00891526  6a00                 push 0
// 00891528  6a03                 push 3
// 0089152a  e8a12ef6ff           call 0x7f43d0
// copied from an identical function in another client (function ??$SerializeElements@UDOCK_INFO@CXTPDockBar@@@@YGXAAVCArchive@@PAUDOCK_INFO@CXTPDockBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockBar.cpp