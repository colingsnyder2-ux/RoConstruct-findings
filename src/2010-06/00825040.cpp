// roc 2010-06 00825040  unit: CXTPControlGallery::UGALLERYITEM_POSITION::?$CArray  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00825040
//
// 00825040  53                   push ebx
// 00825041  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00825045  55                   push ebp
// 00825046  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0082504a  85db                 test ebx, ebx
// 0082504c  7409                 je 0x825057
// 0082504e  85ed                 test ebp, ebp
// 00825050  7505                 jne 0x825057
// 00825052  e8f52bf8ff           call 0x7a7c4c
// 00825057  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082505b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0082505e  f7d1                 not ecx
// 00825060  56                   push esi
// 00825061  57                   push edi
// 00825062  f6c101               test cl, 1
// 00825065  743b                 je 0x8250a2
// 00825067  85db                 test ebx, ebx
// 00825069  7630                 jbe 0x82509b
// 0082506b  eb03                 jmp 0x825070
// 0082506d  8d4900               lea ecx, [ecx]
// 00825070  8bfb                 mov edi, ebx
// 00825072  81fb55555505         cmp ebx, 0x5555555
// 00825078  7205                 jb 0x82507f
// 0082507a  bf55555505           mov edi, 0x5555555
// 0082507f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00825083  8d347f               lea esi, [edi + edi*2]
// 00825086  03f6                 add esi, esi
// 00825088  03f6                 add esi, esi
// 0082508a  03f6                 add esi, esi
// 0082508c  56                   push esi
// 0082508d  55                   push ebp
// 0082508e  e88934f8ff           call 0x7a851c
// 00825093  2bdf                 sub ebx, edi
// 00825095  03ee                 add ebp, esi
// 00825097  85db                 test ebx, ebx
// 00825099  77d5                 ja 0x825070
// 0082509b  5f                   pop edi
// 0082509c  5e                   pop esi
// 0082509d  5d                   pop ebp
// 0082509e  5b                   pop ebx
// 0082509f  c20c00               ret 0xc
// 008250a2  85db                 test ebx, ebx
// 008250a4  76f5                 jbe 0x82509b
// 008250a6  8bfb                 mov edi, ebx
// 008250a8  81fb55555505         cmp ebx, 0x5555555
// 008250ae  7205                 jb 0x8250b5
// 008250b0  bf55555505           mov edi, 0x5555555
// 008250b5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008250b9  8d347f               lea esi, [edi + edi*2]
// 008250bc  03f6                 add esi, esi
// 008250be  03f6                 add esi, esi
// 008250c0  03f6                 add esi, esi
// 008250c2  56                   push esi
// 008250c3  55                   push ebp
// 008250c4  e84d34f8ff           call 0x7a8516
// 008250c9  3bc6                 cmp eax, esi
// 008250cb  750f                 jne 0x8250dc
// 008250cd  2bdf                 sub ebx, edi
// 008250cf  03ee                 add ebp, esi
// 008250d1  85db                 test ebx, ebx
// 008250d3  77d1                 ja 0x8250a6
// 008250d5  5f                   pop edi
// 008250d6  5e                   pop esi
// 008250d7  5d                   pop ebp
// 008250d8  5b                   pop ebx
// 008250d9  c20c00               ret 0xc
// 008250dc  6a00                 push 0
// 008250de  6a03                 push 3
// 008250e0  e82b34f8ff           call 0x7a8510
// copied from an identical function in another client (function ??$SerializeElements@UCMFCRestoredTabInfo@@@@YGXAAVCArchive@@PAUCMFCRestoredTabInfo@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxbasetabctrl.cpp