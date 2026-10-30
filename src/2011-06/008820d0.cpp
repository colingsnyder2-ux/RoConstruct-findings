// roc 2011-06 008820d0  unit: CXTPControlGallery::UGALLERYITEM_POSITION::?$CArray  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008820d0
//
// 008820d0  53                   push ebx
// 008820d1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008820d5  55                   push ebp
// 008820d6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008820da  85db                 test ebx, ebx
// 008820dc  7409                 je 0x8820e7
// 008820de  85ed                 test ebp, ebp
// 008820e0  7505                 jne 0x8820e7
// 008820e2  e82382f8ff           call 0x80a30a
// 008820e7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008820eb  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008820ee  f7d1                 not ecx
// 008820f0  56                   push esi
// 008820f1  57                   push edi
// 008820f2  f6c101               test cl, 1
// 008820f5  743b                 je 0x882132
// 008820f7  85db                 test ebx, ebx
// 008820f9  7630                 jbe 0x88212b
// 008820fb  eb03                 jmp 0x882100
// 008820fd  8d4900               lea ecx, [ecx]
// 00882100  8bfb                 mov edi, ebx
// 00882102  81fb55555505         cmp ebx, 0x5555555
// 00882108  7205                 jb 0x88210f
// 0088210a  bf55555505           mov edi, 0x5555555
// 0088210f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00882113  8d347f               lea esi, [edi + edi*2]
// 00882116  03f6                 add esi, esi
// 00882118  03f6                 add esi, esi
// 0088211a  03f6                 add esi, esi
// 0088211c  56                   push esi
// 0088211d  55                   push ebp
// 0088211e  e8bd8af8ff           call 0x80abe0
// 00882123  2bdf                 sub ebx, edi
// 00882125  03ee                 add ebp, esi
// 00882127  85db                 test ebx, ebx
// 00882129  77d5                 ja 0x882100
// 0088212b  5f                   pop edi
// 0088212c  5e                   pop esi
// 0088212d  5d                   pop ebp
// 0088212e  5b                   pop ebx
// 0088212f  c20c00               ret 0xc
// 00882132  85db                 test ebx, ebx
// 00882134  76f5                 jbe 0x88212b
// 00882136  8bfb                 mov edi, ebx
// 00882138  81fb55555505         cmp ebx, 0x5555555
// 0088213e  7205                 jb 0x882145
// 00882140  bf55555505           mov edi, 0x5555555
// 00882145  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00882149  8d347f               lea esi, [edi + edi*2]
// 0088214c  03f6                 add esi, esi
// 0088214e  03f6                 add esi, esi
// 00882150  03f6                 add esi, esi
// 00882152  56                   push esi
// 00882153  55                   push ebp
// 00882154  e8818af8ff           call 0x80abda
// 00882159  3bc6                 cmp eax, esi
// 0088215b  750f                 jne 0x88216c
// 0088215d  2bdf                 sub ebx, edi
// 0088215f  03ee                 add ebp, esi
// 00882161  85db                 test ebx, ebx
// 00882163  77d1                 ja 0x882136
// 00882165  5f                   pop edi
// 00882166  5e                   pop esi
// 00882167  5d                   pop ebp
// 00882168  5b                   pop ebx
// 00882169  c20c00               ret 0xc
// 0088216c  6a00                 push 0
// 0088216e  6a03                 push 3
// 00882170  e85f8af8ff           call 0x80abd4
// copied from an identical function in another client (function ??$SerializeElements@UCMFCRestoredTabInfo@@@@YGXAAVCArchive@@PAUCMFCRestoredTabInfo@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxbasetabctrl.cpp