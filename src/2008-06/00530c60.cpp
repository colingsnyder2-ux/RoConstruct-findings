// roc 2008-06 00530c60  unit: seg_00530000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530c60
//
// 00530c60  56                   push esi
// 00530c61  57                   push edi
// 00530c62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00530c66  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 00530c6c  807e3000             cmp byte ptr [esi + 0x30], 0
// 00530c70  751b                 jne 0x530c8d
// 00530c72  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 00530c78  8b500c               mov edx, dword ptr [eax + 0xc]
// 00530c7b  8d4e08               lea ecx, [esi + 8]
// 00530c7e  51                   push ecx
// 00530c7f  57                   push edi
// 00530c80  ffd2                 call edx
// 00530c82  83c408               add esp, 8
// 00530c85  85c0                 test eax, eax
// 00530c87  7443                 je 0x530ccc
// 00530c89  c6463001             mov byte ptr [esi + 0x30], 1
// 00530c8d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00530c91  8b542414             mov edx, dword ptr [esp + 0x14]
// 00530c95  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 00530c9b  8b4004               mov eax, dword ptr [eax + 4]
// 00530c9e  53                   push ebx
// 00530c9f  55                   push ebp
// 00530ca0  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 00530ca6  51                   push ecx
// 00530ca7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00530cab  52                   push edx
// 00530cac  51                   push ecx
// 00530cad  55                   push ebp
// 00530cae  8d5e34               lea ebx, [esi + 0x34]
// 00530cb1  53                   push ebx
// 00530cb2  8d5608               lea edx, [esi + 8]
// 00530cb5  52                   push edx
// 00530cb6  57                   push edi
// 00530cb7  ffd0                 call eax
// 00530cb9  83c41c               add esp, 0x1c
// 00530cbc  392b                 cmp dword ptr [ebx], ebp
// 00530cbe  720a                 jb 0x530cca
// 00530cc0  c6463000             mov byte ptr [esi + 0x30], 0
// 00530cc4  c70300000000         mov dword ptr [ebx], 0
// 00530cca  5d                   pop ebp
// 00530ccb  5b                   pop ebx
// 00530ccc  5f                   pop edi
// 00530ccd  5e                   pop esi
// 00530cce  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
