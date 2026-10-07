// roc 2010-06 00736320  unit: seg_00730000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736320
//
// 00736320  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 00736323  7c27                 jl 0x73634c
// 00736325  85ff                 test edi, edi
// 00736327  7511                 jne 0x73633a
// 00736329  2bc1                 sub eax, ecx
// 0073632b  50                   push eax
// 0073632c  8b4608               mov eax, dword ptr [esi + 8]
// 0073632f  51                   push ecx
// 00736330  50                   push eax
// 00736331  e81ab2feff           call 0x721550
// 00736336  83c40c               add esp, 0xc
// 00736339  c3                   ret 
// 0073633a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0073633d  6808e3a400           push 0xa4e308
// 00736342  51                   push ecx
// 00736343  e858c1feff           call 0x7224a0
// 00736348  83c408               add esp, 8
// 0073634b  c3                   ret 
// 0073634c  53                   push ebx
// 0073634d  8b5cfe14             mov ebx, dword ptr [esi + edi*8 + 0x14]
// 00736351  83fbff               cmp ebx, -1
// 00736354  7525                 jne 0x73637b
// 00736356  8b5608               mov edx, dword ptr [esi + 8]
// 00736359  68c8e3a400           push 0xa4e3c8
// 0073635e  52                   push edx
// 0073635f  e83cc1feff           call 0x7224a0
// 00736364  83c408               add esp, 8
// 00736367  8b54fe10             mov edx, dword ptr [esi + edi*8 + 0x10]
// 0073636b  8b4608               mov eax, dword ptr [esi + 8]
// 0073636e  53                   push ebx
// 0073636f  52                   push edx
// 00736370  50                   push eax
// 00736371  e8dab1feff           call 0x721550
// 00736376  83c40c               add esp, 0xc
// 00736379  5b                   pop ebx
// 0073637a  c3                   ret 
// 0073637b  83fbfe               cmp ebx, -2
// 0073637e  75e7                 jne 0x736367
// 00736380  8b44fe10             mov eax, dword ptr [esi + edi*8 + 0x10]
// 00736384  2b06                 sub eax, dword ptr [esi]
// 00736386  8b4e08               mov ecx, dword ptr [esi + 8]
// 00736389  40                   inc eax
// 0073638a  50                   push eax
// 0073638b  51                   push ecx
// 0073638c  e89fb1feff           call 0x721530
// 00736391  83c408               add esp, 8
// 00736394  5b                   pop ebx
// 00736395  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_onecapture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
