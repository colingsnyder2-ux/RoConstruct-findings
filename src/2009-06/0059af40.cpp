// from server: 100% by auto
// roc 2009-06 0059af40  unit: seg_00590000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059af40
//
// 0059af40  56                   push esi
// 0059af41  57                   push edi
// 0059af42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059af46  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0059af4c  807e3000             cmp byte ptr [esi + 0x30], 0
// 0059af50  751b                 jne 0x59af6d
// 0059af52  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0059af58  8b500c               mov edx, dword ptr [eax + 0xc]
// 0059af5b  8d4e08               lea ecx, [esi + 8]
// 0059af5e  51                   push ecx
// 0059af5f  57                   push edi
// 0059af60  ffd2                 call edx
// 0059af62  83c408               add esp, 8
// 0059af65  85c0                 test eax, eax
// 0059af67  7443                 je 0x59afac
// 0059af69  c6463001             mov byte ptr [esi + 0x30], 1
// 0059af6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059af71  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059af75  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 0059af7b  8b4004               mov eax, dword ptr [eax + 4]
// 0059af7e  53                   push ebx
// 0059af7f  55                   push ebp
// 0059af80  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 0059af86  51                   push ecx
// 0059af87  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059af8b  52                   push edx
// 0059af8c  51                   push ecx
// 0059af8d  55                   push ebp
// 0059af8e  8d5e34               lea ebx, [esi + 0x34]
// 0059af91  53                   push ebx
// 0059af92  8d5608               lea edx, [esi + 8]
// 0059af95  52                   push edx
// 0059af96  57                   push edi
// 0059af97  ffd0                 call eax
// 0059af99  83c41c               add esp, 0x1c
// 0059af9c  392b                 cmp dword ptr [ebx], ebp
// 0059af9e  720a                 jb 0x59afaa
// 0059afa0  c6463000             mov byte ptr [esi + 0x30], 0
// 0059afa4  c70300000000         mov dword ptr [ebx], 0
// 0059afaa  5d                   pop ebp
// 0059afab  5b                   pop ebx
// 0059afac  5f                   pop edi
// 0059afad  5e                   pop esi
// 0059afae  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
