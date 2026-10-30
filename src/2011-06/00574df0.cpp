// from server: 100% by auto
// roc 2011-06 00574df0  unit: seg_00570000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574df0
//
// 00574df0  56                   push esi
// 00574df1  57                   push edi
// 00574df2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574df6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 00574dfc  807e3000             cmp byte ptr [esi + 0x30], 0
// 00574e00  7526                 jne 0x574e28
// 00574e02  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00574e05  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 00574e09  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 00574e0f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00574e12  52                   push edx
// 00574e13  57                   push edi
// 00574e14  ffd0                 call eax
// 00574e16  83c408               add esp, 8
// 00574e19  85c0                 test eax, eax
// 00574e1b  0f8404010000         je 0x574f25
// 00574e21  ff464c               inc dword ptr [esi + 0x4c]
// 00574e24  c6463001             mov byte ptr [esi + 0x30], 1
// 00574e28  8b4644               mov eax, dword ptr [esi + 0x44]
// 00574e2b  83e800               sub eax, 0
// 00574e2e  53                   push ebx
// 00574e2f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00574e33  55                   push ebp
// 00574e34  7457                 je 0x574e8d
// 00574e36  83e801               sub eax, 1
// 00574e39  747e                 je 0x574eb9
// 00574e3b  83e801               sub eax, 1
// 00574e3e  0f85df000000         jne 0x574f23
// 00574e44  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00574e48  8b442418             mov eax, dword ptr [esp + 0x18]
// 00574e4c  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 00574e52  53                   push ebx
// 00574e53  52                   push edx
// 00574e54  8b5648               mov edx, dword ptr [esi + 0x48]
// 00574e57  50                   push eax
// 00574e58  8b4640               mov eax, dword ptr [esi + 0x40]
// 00574e5b  52                   push edx
// 00574e5c  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 00574e60  8b4104               mov eax, dword ptr [ecx + 4]
// 00574e63  8d6e34               lea ebp, [esi + 0x34]
// 00574e66  55                   push ebp
// 00574e67  52                   push edx
// 00574e68  57                   push edi
// 00574e69  ffd0                 call eax
// 00574e6b  8b4d00               mov ecx, dword ptr [ebp]
// 00574e6e  83c41c               add esp, 0x1c
// 00574e71  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 00574e74  0f82a9000000         jb 0x574f23
// 00574e7a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00574e7e  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00574e85  391a                 cmp dword ptr [edx], ebx
// 00574e87  0f8396000000         jae 0x574f23
// 00574e8d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00574e90  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00574e97  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00574e9d  48                   dec eax
// 00574e9e  894648               mov dword ptr [esi + 0x48], eax
// 00574ea1  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 00574ea7  7509                 jne 0x574eb2
// 00574ea9  57                   push edi
// 00574eaa  e831feffff           call 0x574ce0
// 00574eaf  83c404               add esp, 4
// 00574eb2  c7464401000000       mov dword ptr [esi + 0x44], 1
// 00574eb9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574ebd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00574ec1  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 00574ec7  53                   push ebx
// 00574ec8  50                   push eax
// 00574ec9  8b4648               mov eax, dword ptr [esi + 0x48]
// 00574ecc  51                   push ecx
// 00574ecd  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00574ed0  50                   push eax
// 00574ed1  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 00574ed5  8b4a04               mov ecx, dword ptr [edx + 4]
// 00574ed8  8d6e34               lea ebp, [esi + 0x34]
// 00574edb  55                   push ebp
// 00574edc  50                   push eax
// 00574edd  57                   push edi
// 00574ede  ffd1                 call ecx
// 00574ee0  8b5500               mov edx, dword ptr [ebp]
// 00574ee3  83c41c               add esp, 0x1c
// 00574ee6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00574ee9  7238                 jb 0x574f23
// 00574eeb  bb01000000           mov ebx, 1
// 00574ef0  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00574ef3  7509                 jne 0x574efe
// 00574ef5  57                   push edi
// 00574ef6  e805fdffff           call 0x574c00
// 00574efb  83c404               add esp, 4
// 00574efe  315e40               xor dword ptr [esi + 0x40], ebx
// 00574f01  c6463000             mov byte ptr [esi + 0x30], 0
// 00574f05  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00574f0b  03c3                 add eax, ebx
// 00574f0d  894500               mov dword ptr [ebp], eax
// 00574f10  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 00574f16  83c102               add ecx, 2
// 00574f19  894e48               mov dword ptr [esi + 0x48], ecx
// 00574f1c  c7464402000000       mov dword ptr [esi + 0x44], 2
// 00574f23  5d                   pop ebp
// 00574f24  5b                   pop ebx
// 00574f25  5f                   pop edi
// 00574f26  5e                   pop esi
// 00574f27  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
