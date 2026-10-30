// from server: 100% by auto
// roc 2012-06 00660490  unit: seg_00660000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660490
//
// 00660490  56                   push esi
// 00660491  57                   push edi
// 00660492  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00660496  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0066049c  807e3000             cmp byte ptr [esi + 0x30], 0
// 006604a0  751b                 jne 0x6604bd
// 006604a2  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 006604a8  8b500c               mov edx, dword ptr [eax + 0xc]
// 006604ab  8d4e08               lea ecx, [esi + 8]
// 006604ae  51                   push ecx
// 006604af  57                   push edi
// 006604b0  ffd2                 call edx
// 006604b2  83c408               add esp, 8
// 006604b5  85c0                 test eax, eax
// 006604b7  7443                 je 0x6604fc
// 006604b9  c6463001             mov byte ptr [esi + 0x30], 1
// 006604bd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006604c1  8b542414             mov edx, dword ptr [esp + 0x14]
// 006604c5  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 006604cb  8b4004               mov eax, dword ptr [eax + 4]
// 006604ce  53                   push ebx
// 006604cf  55                   push ebp
// 006604d0  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 006604d6  51                   push ecx
// 006604d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006604db  52                   push edx
// 006604dc  51                   push ecx
// 006604dd  55                   push ebp
// 006604de  8d5e34               lea ebx, [esi + 0x34]
// 006604e1  53                   push ebx
// 006604e2  8d5608               lea edx, [esi + 8]
// 006604e5  52                   push edx
// 006604e6  57                   push edi
// 006604e7  ffd0                 call eax
// 006604e9  83c41c               add esp, 0x1c
// 006604ec  392b                 cmp dword ptr [ebx], ebp
// 006604ee  720a                 jb 0x6604fa
// 006604f0  c6463000             mov byte ptr [esi + 0x30], 0
// 006604f4  c70300000000         mov dword ptr [ebx], 0
// 006604fa  5d                   pop ebp
// 006604fb  5b                   pop ebx
// 006604fc  5f                   pop edi
// 006604fd  5e                   pop esi
// 006604fe  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
