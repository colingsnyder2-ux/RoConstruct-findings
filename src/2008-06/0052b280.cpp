// from server: 100% by auto
// roc 2008-06 0052b280  unit: seg_00520000  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b280
//
// 0052b280  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052b284  53                   push ebx
// 0052b285  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0052b289  55                   push ebp
// 0052b28a  56                   push esi
// 0052b28b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052b28f  57                   push edi
// 0052b290  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052b294  8d2c07               lea ebp, [edi + eax]
// 0052b297  3b6e04               cmp ebp, dword ptr [esi + 4]
// 0052b29a  770a                 ja 0x52b2a6
// 0052b29c  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0052b29f  7705                 ja 0x52b2a6
// 0052b2a1  833e00               cmp dword ptr [esi], 0
// 0052b2a4  7513                 jne 0x52b2b9
// 0052b2a6  8b03                 mov eax, dword ptr [ebx]
// 0052b2a8  c7401416000000       mov dword ptr [eax + 0x14], 0x16
// 0052b2af  8b0b                 mov ecx, dword ptr [ebx]
// 0052b2b1  8b11                 mov edx, dword ptr [ecx]
// 0052b2b3  53                   push ebx
// 0052b2b4  ffd2                 call edx
// 0052b2b6  83c404               add esp, 4
// 0052b2b9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052b2bc  3bf8                 cmp edi, eax
// 0052b2be  7209                 jb 0x52b2c9
// 0052b2c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0052b2c3  03c8                 add ecx, eax
// 0052b2c5  3be9                 cmp ebp, ecx
// 0052b2c7  764f                 jbe 0x52b318
// 0052b2c9  807e2200             cmp byte ptr [esi + 0x22], 0
// 0052b2cd  7513                 jne 0x52b2e2
// 0052b2cf  8b13                 mov edx, dword ptr [ebx]
// 0052b2d1  c7421445000000       mov dword ptr [edx + 0x14], 0x45
// 0052b2d8  8b03                 mov eax, dword ptr [ebx]
// 0052b2da  8b08                 mov ecx, dword ptr [eax]
// 0052b2dc  53                   push ebx
// 0052b2dd  ffd1                 call ecx
// 0052b2df  83c404               add esp, 4
// 0052b2e2  807e2100             cmp byte ptr [esi + 0x21], 0
// 0052b2e6  740f                 je 0x52b2f7
// 0052b2e8  6a01                 push 1
// 0052b2ea  53                   push ebx
// 0052b2eb  e850feffff           call 0x52b140
// 0052b2f0  83c408               add esp, 8
// 0052b2f3  c6462100             mov byte ptr [esi + 0x21], 0
// 0052b2f7  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 0052b2fa  7605                 jbe 0x52b301
// 0052b2fc  897e18               mov dword ptr [esi + 0x18], edi
// 0052b2ff  eb0c                 jmp 0x52b30d
// 0052b301  8bc5                 mov eax, ebp
// 0052b303  2b4610               sub eax, dword ptr [esi + 0x10]
// 0052b306  7902                 jns 0x52b30a
// 0052b308  33c0                 xor eax, eax
// 0052b30a  894618               mov dword ptr [esi + 0x18], eax
// 0052b30d  6a00                 push 0
// 0052b30f  53                   push ebx
// 0052b310  e82bfeffff           call 0x52b140
// 0052b315  83c408               add esp, 8
// 0052b318  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0052b31b  3bfd                 cmp edi, ebp
// 0052b31d  7357                 jae 0x52b376
// 0052b31f  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0052b323  731e                 jae 0x52b343
// 0052b325  807c242400           cmp byte ptr [esp + 0x24], 0
// 0052b32a  7413                 je 0x52b33f
// 0052b32c  8b13                 mov edx, dword ptr [ebx]
// 0052b32e  c7421416000000       mov dword ptr [edx + 0x14], 0x16
// 0052b335  8b03                 mov eax, dword ptr [ebx]
// 0052b337  8b08                 mov ecx, dword ptr [eax]
// 0052b339  53                   push ebx
// 0052b33a  ffd1                 call ecx
// 0052b33c  83c404               add esp, 4
// 0052b33f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052b343  8a442424             mov al, byte ptr [esp + 0x24]
// 0052b347  84c0                 test al, al
// 0052b349  7403                 je 0x52b34e
// 0052b34b  896e1c               mov dword ptr [esi + 0x1c], ebp
// 0052b34e  807e2000             cmp byte ptr [esi + 0x20], 0
// 0052b352  743e                 je 0x52b392
// 0052b354  8b4618               mov eax, dword ptr [esi + 0x18]
// 0052b357  8b5e08               mov ebx, dword ptr [esi + 8]
// 0052b35a  2bf8                 sub edi, eax
// 0052b35c  2be8                 sub ebp, eax
// 0052b35e  3bfd                 cmp edi, ebp
// 0052b360  7314                 jae 0x52b376
// 0052b362  8b16                 mov edx, dword ptr [esi]
// 0052b364  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0052b367  53                   push ebx
// 0052b368  50                   push eax
// 0052b369  e832a8ffff           call 0x525ba0
// 0052b36e  47                   inc edi
// 0052b36f  83c408               add esp, 8
// 0052b372  3bfd                 cmp edi, ebp
// 0052b374  72ec                 jb 0x52b362
// 0052b376  807c242400           cmp byte ptr [esp + 0x24], 0
// 0052b37b  7404                 je 0x52b381
// 0052b37d  c6462101             mov byte ptr [esi + 0x21], 1
// 0052b381  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052b385  2b4618               sub eax, dword ptr [esi + 0x18]
// 0052b388  8b0e                 mov ecx, dword ptr [esi]
// 0052b38a  5f                   pop edi
// 0052b38b  5e                   pop esi
// 0052b38c  5d                   pop ebp
// 0052b38d  8d0481               lea eax, [ecx + eax*4]
// 0052b390  5b                   pop ebx
// 0052b391  c3                   ret 
// 0052b392  84c0                 test al, al
// 0052b394  75e7                 jne 0x52b37d
// 0052b396  8b0b                 mov ecx, dword ptr [ebx]
// 0052b398  c7411416000000       mov dword ptr [ecx + 0x14], 0x16
// 0052b39f  8b13                 mov edx, dword ptr [ebx]
// 0052b3a1  8b02                 mov eax, dword ptr [edx]
// 0052b3a3  53                   push ebx
// 0052b3a4  ffd0                 call eax
// 0052b3a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052b3aa  2b4618               sub eax, dword ptr [esi + 0x18]
// 0052b3ad  8b0e                 mov ecx, dword ptr [esi]
// 0052b3af  83c404               add esp, 4
// 0052b3b2  5f                   pop edi
// 0052b3b3  5e                   pop esi
// 0052b3b4  5d                   pop ebp
// 0052b3b5  8d0481               lea eax, [ecx + eax*4]
// 0052b3b8  5b                   pop ebx
// 0052b3b9  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _access_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
