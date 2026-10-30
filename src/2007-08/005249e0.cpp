// from server: 100% by auto
// roc 2007-08 005249e0  unit: G3D::Line  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005249e0
//
// 005249e0  56                   push esi
// 005249e1  57                   push edi
// 005249e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005249e6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 005249ec  807e3000             cmp byte ptr [esi + 0x30], 0
// 005249f0  751b                 jne 0x524a0d
// 005249f2  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 005249f8  8b500c               mov edx, dword ptr [eax + 0xc]
// 005249fb  8d4e08               lea ecx, [esi + 8]
// 005249fe  51                   push ecx
// 005249ff  57                   push edi
// 00524a00  ffd2                 call edx
// 00524a02  83c408               add esp, 8
// 00524a05  85c0                 test eax, eax
// 00524a07  7443                 je 0x524a4c
// 00524a09  c6463001             mov byte ptr [esi + 0x30], 1
// 00524a0d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00524a11  8b542414             mov edx, dword ptr [esp + 0x14]
// 00524a15  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 00524a1b  8b4004               mov eax, dword ptr [eax + 4]
// 00524a1e  53                   push ebx
// 00524a1f  55                   push ebp
// 00524a20  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 00524a26  51                   push ecx
// 00524a27  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00524a2b  52                   push edx
// 00524a2c  51                   push ecx
// 00524a2d  55                   push ebp
// 00524a2e  8d5e34               lea ebx, [esi + 0x34]
// 00524a31  53                   push ebx
// 00524a32  8d5608               lea edx, [esi + 8]
// 00524a35  52                   push edx
// 00524a36  57                   push edi
// 00524a37  ffd0                 call eax
// 00524a39  83c41c               add esp, 0x1c
// 00524a3c  392b                 cmp dword ptr [ebx], ebp
// 00524a3e  720a                 jb 0x524a4a
// 00524a40  c6463000             mov byte ptr [esi + 0x30], 0
// 00524a44  c70300000000         mov dword ptr [ebx], 0
// 00524a4a  5d                   pop ebp
// 00524a4b  5b                   pop ebx
// 00524a4c  5f                   pop edi
// 00524a4d  5e                   pop esi
// 00524a4e  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
