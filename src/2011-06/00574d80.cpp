// from server: 100% by auto
// roc 2011-06 00574d80  unit: seg_00570000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574d80
//
// 00574d80  56                   push esi
// 00574d81  57                   push edi
// 00574d82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574d86  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 00574d8c  807e3000             cmp byte ptr [esi + 0x30], 0
// 00574d90  751b                 jne 0x574dad
// 00574d92  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 00574d98  8b500c               mov edx, dword ptr [eax + 0xc]
// 00574d9b  8d4e08               lea ecx, [esi + 8]
// 00574d9e  51                   push ecx
// 00574d9f  57                   push edi
// 00574da0  ffd2                 call edx
// 00574da2  83c408               add esp, 8
// 00574da5  85c0                 test eax, eax
// 00574da7  7443                 je 0x574dec
// 00574da9  c6463001             mov byte ptr [esi + 0x30], 1
// 00574dad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00574db1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00574db5  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 00574dbb  8b4004               mov eax, dword ptr [eax + 4]
// 00574dbe  53                   push ebx
// 00574dbf  55                   push ebp
// 00574dc0  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 00574dc6  51                   push ecx
// 00574dc7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00574dcb  52                   push edx
// 00574dcc  51                   push ecx
// 00574dcd  55                   push ebp
// 00574dce  8d5e34               lea ebx, [esi + 0x34]
// 00574dd1  53                   push ebx
// 00574dd2  8d5608               lea edx, [esi + 8]
// 00574dd5  52                   push edx
// 00574dd6  57                   push edi
// 00574dd7  ffd0                 call eax
// 00574dd9  83c41c               add esp, 0x1c
// 00574ddc  392b                 cmp dword ptr [ebx], ebp
// 00574dde  720a                 jb 0x574dea
// 00574de0  c6463000             mov byte ptr [esi + 0x30], 0
// 00574de4  c70300000000         mov dword ptr [ebx], 0
// 00574dea  5d                   pop ebp
// 00574deb  5b                   pop ebx
// 00574dec  5f                   pop edi
// 00574ded  5e                   pop esi
// 00574dee  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
