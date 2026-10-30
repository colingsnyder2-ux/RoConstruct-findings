// roc 2007-03 0051f6b0  unit: seg_00510000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f6b0
//
// 0051f6b0  56                   push esi
// 0051f6b1  57                   push edi
// 0051f6b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051f6b6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0051f6bc  807e3000             cmp byte ptr [esi + 0x30], 0
// 0051f6c0  751b                 jne 0x51f6dd
// 0051f6c2  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0051f6c8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0051f6cb  8d4e08               lea ecx, [esi + 8]
// 0051f6ce  51                   push ecx
// 0051f6cf  57                   push edi
// 0051f6d0  ffd2                 call edx
// 0051f6d2  83c408               add esp, 8
// 0051f6d5  85c0                 test eax, eax
// 0051f6d7  7443                 je 0x51f71c
// 0051f6d9  c6463001             mov byte ptr [esi + 0x30], 1
// 0051f6dd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051f6e1  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051f6e5  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 0051f6eb  8b4004               mov eax, dword ptr [eax + 4]
// 0051f6ee  53                   push ebx
// 0051f6ef  55                   push ebp
// 0051f6f0  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 0051f6f6  51                   push ecx
// 0051f6f7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051f6fb  52                   push edx
// 0051f6fc  51                   push ecx
// 0051f6fd  55                   push ebp
// 0051f6fe  8d5e34               lea ebx, [esi + 0x34]
// 0051f701  53                   push ebx
// 0051f702  8d5608               lea edx, [esi + 8]
// 0051f705  52                   push edx
// 0051f706  57                   push edi
// 0051f707  ffd0                 call eax
// 0051f709  83c41c               add esp, 0x1c
// 0051f70c  392b                 cmp dword ptr [ebx], ebp
// 0051f70e  720a                 jb 0x51f71a
// 0051f710  c6463000             mov byte ptr [esi + 0x30], 0
// 0051f714  c70300000000         mov dword ptr [ebx], 0
// 0051f71a  5d                   pop ebp
// 0051f71b  5b                   pop ebx
// 0051f71c  5f                   pop edi
// 0051f71d  5e                   pop esi
// 0051f71e  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
