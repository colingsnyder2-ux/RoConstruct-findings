// from server: 100% by auto
// roc 2008-06 0053a710  unit: seg_00530000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a710
//
// 0053a710  83ec08               sub esp, 8
// 0053a713  53                   push ebx
// 0053a714  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053a718  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 0053a71c  55                   push ebp
// 0053a71d  8bab54010000         mov ebp, dword ptr [ebx + 0x154]
// 0053a723  57                   push edi
// 0053a724  8b7b44               mov edi, dword ptr [ebx + 0x44]
// 0053a727  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0053a72f  7e5f                 jle 0x53a790
// 0053a731  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053a735  8d0c8500000000       lea ecx, [eax*4]
// 0053a73c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053a740  56                   push esi
// 0053a741  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053a745  83c50c               add ebp, 0xc
// 0053a748  2bc6                 sub eax, esi
// 0053a74a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053a74e  89442410             mov dword ptr [esp + 0x10], eax
// 0053a752  eb04                 jmp 0x53a758
// 0053a754  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053a758  8b570c               mov edx, dword ptr [edi + 0xc]
// 0053a75b  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 0053a760  8b0430               mov eax, dword ptr [eax + esi]
// 0053a763  8d0c90               lea ecx, [eax + edx*4]
// 0053a766  8b16                 mov edx, dword ptr [esi]
// 0053a768  03542414             add edx, dword ptr [esp + 0x14]
// 0053a76c  8b4500               mov eax, dword ptr [ebp]
// 0053a76f  51                   push ecx
// 0053a770  52                   push edx
// 0053a771  57                   push edi
// 0053a772  53                   push ebx
// 0053a773  ffd0                 call eax
// 0053a775  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053a779  40                   inc eax
// 0053a77a  83c410               add esp, 0x10
// 0053a77d  83c604               add esi, 4
// 0053a780  83c504               add ebp, 4
// 0053a783  83c754               add edi, 0x54
// 0053a786  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0053a789  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a78d  7cc5                 jl 0x53a754
// 0053a78f  5e                   pop esi
// 0053a790  5f                   pop edi
// 0053a791  5d                   pop ebp
// 0053a792  5b                   pop ebx
// 0053a793  83c408               add esp, 8
// 0053a796  c3                   ret 
// library jpeg-6b/jcsample.c (function _sep_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
