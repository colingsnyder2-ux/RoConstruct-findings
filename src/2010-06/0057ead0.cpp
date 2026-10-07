// roc 2010-06 0057ead0  unit: seg_00570000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ead0
//
// 0057ead0  56                   push esi
// 0057ead1  57                   push edi
// 0057ead2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057ead6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0057eadc  807e3000             cmp byte ptr [esi + 0x30], 0
// 0057eae0  751b                 jne 0x57eafd
// 0057eae2  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0057eae8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057eaeb  8d4e08               lea ecx, [esi + 8]
// 0057eaee  51                   push ecx
// 0057eaef  57                   push edi
// 0057eaf0  ffd2                 call edx
// 0057eaf2  83c408               add esp, 8
// 0057eaf5  85c0                 test eax, eax
// 0057eaf7  7443                 je 0x57eb3c
// 0057eaf9  c6463001             mov byte ptr [esi + 0x30], 1
// 0057eafd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057eb01  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057eb05  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 0057eb0b  8b4004               mov eax, dword ptr [eax + 4]
// 0057eb0e  53                   push ebx
// 0057eb0f  55                   push ebp
// 0057eb10  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 0057eb16  51                   push ecx
// 0057eb17  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057eb1b  52                   push edx
// 0057eb1c  51                   push ecx
// 0057eb1d  55                   push ebp
// 0057eb1e  8d5e34               lea ebx, [esi + 0x34]
// 0057eb21  53                   push ebx
// 0057eb22  8d5608               lea edx, [esi + 8]
// 0057eb25  52                   push edx
// 0057eb26  57                   push edi
// 0057eb27  ffd0                 call eax
// 0057eb29  83c41c               add esp, 0x1c
// 0057eb2c  392b                 cmp dword ptr [ebx], ebp
// 0057eb2e  720a                 jb 0x57eb3a
// 0057eb30  c6463000             mov byte ptr [esi + 0x30], 0
// 0057eb34  c70300000000         mov dword ptr [ebx], 0
// 0057eb3a  5d                   pop ebp
// 0057eb3b  5b                   pop ebx
// 0057eb3c  5f                   pop edi
// 0057eb3d  5e                   pop esi
// 0057eb3e  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
