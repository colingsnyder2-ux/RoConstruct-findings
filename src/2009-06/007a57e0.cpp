// roc 2009-06 007a57e0  unit: CXTPOffice2007Theme  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a57e0
//
// 007a57e0  56                   push esi
// 007a57e1  8b742408             mov esi, dword ptr [esp + 8]
// 007a57e5  85f6                 test esi, esi
// 007a57e7  7506                 jne 0x7a57ef
// 007a57e9  33c0                 xor eax, eax
// 007a57eb  5e                   pop esi
// 007a57ec  c20400               ret 4
// 007a57ef  53                   push ebx
// 007a57f0  57                   push edi
// 007a57f1  8bce                 mov ecx, esi
// 007a57f3  e8e4660a00           call 0x84bedc
// 007a57f8  8bce                 mov ecx, esi
// 007a57fa  8bf8                 mov edi, eax
// 007a57fc  e8e1660a00           call 0x84bee2
// 007a5801  8bd8                 mov ebx, eax
// 007a5803  84db                 test bl, bl
// 007a5805  7808                 js 0x7a580f
// 007a5807  f7c700000800         test edi, 0x80000
// 007a580d  7508                 jne 0x7a5817
// 007a580f  5f                   pop edi
// 007a5810  5b                   pop ebx
// 007a5811  33c0                 xor eax, eax
// 007a5813  5e                   pop esi
// 007a5814  c20400               ret 4
// 007a5817  8b4620               mov eax, dword ptr [esi + 0x20]
// 007a581a  6a00                 push 0
// 007a581c  6a00                 push 0
// 007a581e  6a7f                 push 0x7f
// 007a5820  50                   push eax
// 007a5821  ff1590ee8900         call dword ptr [0x89ee90]
// 007a5827  85c0                 test eax, eax
// 007a5829  7557                 jne 0x7a5882
// 007a582b  8b4620               mov eax, dword ptr [esi + 0x20]
// 007a582e  6ade                 push -0x22
// 007a5830  50                   push eax
// 007a5831  ff1570ec8900         call dword ptr [0x89ec70]
// 007a5837  85c0                 test eax, eax
// 007a5839  7547                 jne 0x7a5882
// 007a583b  81e70000c000         and edi, 0xc00000
// 007a5841  81ff00004000         cmp edi, 0x400000
// 007a5847  7439                 je 0x7a5882
// 007a5849  f6c301               test bl, 1
// 007a584c  7534                 jne 0x7a5882
// 007a584e  8b7620               mov esi, dword ptr [esi + 0x20]
// 007a5851  8d4c2410             lea ecx, [esp + 0x10]
// 007a5855  51                   push ecx
// 007a5856  6a64                 push 0x64
// 007a5858  50                   push eax
// 007a5859  50                   push eax
// 007a585a  50                   push eax
// 007a585b  6a37                 push 0x37
// 007a585d  56                   push esi
// 007a585e  ff15ccec8900         call dword ptr [0x89eccc]
// 007a5864  85c0                 test eax, eax
// 007a5866  7408                 je 0x7a5870
// 007a5868  8b442410             mov eax, dword ptr [esp + 0x10]
// 007a586c  85c0                 test eax, eax
// 007a586e  7512                 jne 0x7a5882
// 007a5870  e88134f7ff           call 0x718cf6
// 007a5875  68057f0000           push 0x7f05
// 007a587a  6a00                 push 0
// 007a587c  ff15f0ed8900         call dword ptr [0x89edf0]
// 007a5882  5f                   pop edi
// 007a5883  5b                   pop ebx
// 007a5884  5e                   pop esi
// 007a5885  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp