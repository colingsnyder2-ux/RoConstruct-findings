// roc 2009-12 0061cf70  unit: seg_00610000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061cf70
//
// 0061cf70  56                   push esi
// 0061cf71  57                   push edi
// 0061cf72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061cf76  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0061cf7c  807e3000             cmp byte ptr [esi + 0x30], 0
// 0061cf80  751b                 jne 0x61cf9d
// 0061cf82  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0061cf88  8b500c               mov edx, dword ptr [eax + 0xc]
// 0061cf8b  8d4e08               lea ecx, [esi + 8]
// 0061cf8e  51                   push ecx
// 0061cf8f  57                   push edi
// 0061cf90  ffd2                 call edx
// 0061cf92  83c408               add esp, 8
// 0061cf95  85c0                 test eax, eax
// 0061cf97  7443                 je 0x61cfdc
// 0061cf99  c6463001             mov byte ptr [esi + 0x30], 1
// 0061cf9d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061cfa1  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061cfa5  8b878c010000         mov eax, dword ptr [edi + 0x18c]
// 0061cfab  8b4004               mov eax, dword ptr [eax + 4]
// 0061cfae  53                   push ebx
// 0061cfaf  55                   push ebp
// 0061cfb0  8baf18010000         mov ebp, dword ptr [edi + 0x118]
// 0061cfb6  51                   push ecx
// 0061cfb7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061cfbb  52                   push edx
// 0061cfbc  51                   push ecx
// 0061cfbd  55                   push ebp
// 0061cfbe  8d5e34               lea ebx, [esi + 0x34]
// 0061cfc1  53                   push ebx
// 0061cfc2  8d5608               lea edx, [esi + 8]
// 0061cfc5  52                   push edx
// 0061cfc6  57                   push edi
// 0061cfc7  ffd0                 call eax
// 0061cfc9  83c41c               add esp, 0x1c
// 0061cfcc  392b                 cmp dword ptr [ebx], ebp
// 0061cfce  720a                 jb 0x61cfda
// 0061cfd0  c6463000             mov byte ptr [esi + 0x30], 0
// 0061cfd4  c70300000000         mov dword ptr [ebx], 0
// 0061cfda  5d                   pop ebp
// 0061cfdb  5b                   pop ebx
// 0061cfdc  5f                   pop edi
// 0061cfdd  5e                   pop esi
// 0061cfde  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
