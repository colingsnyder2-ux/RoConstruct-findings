// roc 2012-06 009f0930  unit: CXTPPropertyGridView::UWNDRECT::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0930
//
// 009f0930  53                   push ebx
// 009f0931  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009f0935  55                   push ebp
// 009f0936  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009f093a  85db                 test ebx, ebx
// 009f093c  7409                 je 0x9f0947
// 009f093e  85ed                 test ebp, ebp
// 009f0940  7505                 jne 0x9f0947
// 009f0942  e8791af9ff           call 0x9823c0
// 009f0947  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f094b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 009f094e  f7d1                 not ecx
// 009f0950  56                   push esi
// 009f0951  57                   push edi
// 009f0952  f6c101               test cl, 1
// 009f0955  7439                 je 0x9f0990
// 009f0957  85db                 test ebx, ebx
// 009f0959  762e                 jbe 0x9f0989
// 009f095b  eb03                 jmp 0x9f0960
// 009f095d  8d4900               lea ecx, [ecx]
// 009f0960  8bfb                 mov edi, ebx
// 009f0962  81fb66666606         cmp ebx, 0x6666666
// 009f0968  7205                 jb 0x9f096f
// 009f096a  bf66666606           mov edi, 0x6666666
// 009f096f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f0973  8d34bf               lea esi, [edi + edi*4]
// 009f0976  03f6                 add esi, esi
// 009f0978  03f6                 add esi, esi
// 009f097a  56                   push esi
// 009f097b  55                   push ebp
// 009f097c  e8e522f9ff           call 0x982c66
// 009f0981  2bdf                 sub ebx, edi
// 009f0983  03ee                 add ebp, esi
// 009f0985  85db                 test ebx, ebx
// 009f0987  77d7                 ja 0x9f0960
// 009f0989  5f                   pop edi
// 009f098a  5e                   pop esi
// 009f098b  5d                   pop ebp
// 009f098c  5b                   pop ebx
// 009f098d  c20c00               ret 0xc
// 009f0990  85db                 test ebx, ebx
// 009f0992  76f5                 jbe 0x9f0989
// 009f0994  8bfb                 mov edi, ebx
// 009f0996  81fb66666606         cmp ebx, 0x6666666
// 009f099c  7205                 jb 0x9f09a3
// 009f099e  bf66666606           mov edi, 0x6666666
// 009f09a3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009f09a7  8d34bf               lea esi, [edi + edi*4]
// 009f09aa  03f6                 add esi, esi
// 009f09ac  03f6                 add esi, esi
// 009f09ae  56                   push esi
// 009f09af  55                   push ebp
// 009f09b0  e8ab22f9ff           call 0x982c60
// 009f09b5  3bc6                 cmp eax, esi
// 009f09b7  750f                 jne 0x9f09c8
// 009f09b9  2bdf                 sub ebx, edi
// 009f09bb  03ee                 add ebp, esi
// 009f09bd  85db                 test ebx, ebx
// 009f09bf  77d3                 ja 0x9f0994
// 009f09c1  5f                   pop edi
// 009f09c2  5e                   pop esi
// 009f09c3  5d                   pop ebp
// 009f09c4  5b                   pop ebx
// 009f09c5  c20c00               ret 0xc
// 009f09c8  6a00                 push 0
// 009f09ca  6a03                 push 3
// 009f09cc  e88922f9ff           call 0x982c5a
// copied from an identical function in another client (function ??$SerializeElements@UWNDRECT@CXTPPropertyGridView@@@@YGXAAVCArchive@@PAUWNDRECT@CXTPPropertyGridView@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp