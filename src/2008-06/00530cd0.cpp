// roc 2008-06 00530cd0  unit: seg_00530000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530cd0
//
// 00530cd0  56                   push esi
// 00530cd1  57                   push edi
// 00530cd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00530cd6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 00530cdc  807e3000             cmp byte ptr [esi + 0x30], 0
// 00530ce0  7526                 jne 0x530d08
// 00530ce2  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00530ce5  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 00530ce9  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 00530cef  8b400c               mov eax, dword ptr [eax + 0xc]
// 00530cf2  52                   push edx
// 00530cf3  57                   push edi
// 00530cf4  ffd0                 call eax
// 00530cf6  83c408               add esp, 8
// 00530cf9  85c0                 test eax, eax
// 00530cfb  0f8404010000         je 0x530e05
// 00530d01  ff464c               inc dword ptr [esi + 0x4c]
// 00530d04  c6463001             mov byte ptr [esi + 0x30], 1
// 00530d08  8b4644               mov eax, dword ptr [esi + 0x44]
// 00530d0b  83e800               sub eax, 0
// 00530d0e  53                   push ebx
// 00530d0f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00530d13  55                   push ebp
// 00530d14  7457                 je 0x530d6d
// 00530d16  83e801               sub eax, 1
// 00530d19  747e                 je 0x530d99
// 00530d1b  83e801               sub eax, 1
// 00530d1e  0f85df000000         jne 0x530e03
// 00530d24  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00530d28  8b442418             mov eax, dword ptr [esp + 0x18]
// 00530d2c  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 00530d32  53                   push ebx
// 00530d33  52                   push edx
// 00530d34  8b5648               mov edx, dword ptr [esi + 0x48]
// 00530d37  50                   push eax
// 00530d38  8b4640               mov eax, dword ptr [esi + 0x40]
// 00530d3b  52                   push edx
// 00530d3c  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 00530d40  8b4104               mov eax, dword ptr [ecx + 4]
// 00530d43  8d6e34               lea ebp, [esi + 0x34]
// 00530d46  55                   push ebp
// 00530d47  52                   push edx
// 00530d48  57                   push edi
// 00530d49  ffd0                 call eax
// 00530d4b  8b4d00               mov ecx, dword ptr [ebp]
// 00530d4e  83c41c               add esp, 0x1c
// 00530d51  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 00530d54  0f82a9000000         jb 0x530e03
// 00530d5a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00530d5e  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00530d65  391a                 cmp dword ptr [edx], ebx
// 00530d67  0f8396000000         jae 0x530e03
// 00530d6d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00530d70  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00530d77  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00530d7d  48                   dec eax
// 00530d7e  894648               mov dword ptr [esi + 0x48], eax
// 00530d81  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 00530d87  7509                 jne 0x530d92
// 00530d89  57                   push edi
// 00530d8a  e831feffff           call 0x530bc0
// 00530d8f  83c404               add esp, 4
// 00530d92  c7464401000000       mov dword ptr [esi + 0x44], 1
// 00530d99  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00530d9d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00530da1  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 00530da7  53                   push ebx
// 00530da8  50                   push eax
// 00530da9  8b4648               mov eax, dword ptr [esi + 0x48]
// 00530dac  51                   push ecx
// 00530dad  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00530db0  50                   push eax
// 00530db1  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 00530db5  8b4a04               mov ecx, dword ptr [edx + 4]
// 00530db8  8d6e34               lea ebp, [esi + 0x34]
// 00530dbb  55                   push ebp
// 00530dbc  50                   push eax
// 00530dbd  57                   push edi
// 00530dbe  ffd1                 call ecx
// 00530dc0  8b5500               mov edx, dword ptr [ebp]
// 00530dc3  83c41c               add esp, 0x1c
// 00530dc6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00530dc9  7238                 jb 0x530e03
// 00530dcb  bb01000000           mov ebx, 1
// 00530dd0  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00530dd3  7509                 jne 0x530dde
// 00530dd5  57                   push edi
// 00530dd6  e805fdffff           call 0x530ae0
// 00530ddb  83c404               add esp, 4
// 00530dde  315e40               xor dword ptr [esi + 0x40], ebx
// 00530de1  c6463000             mov byte ptr [esi + 0x30], 0
// 00530de5  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00530deb  03c3                 add eax, ebx
// 00530ded  894500               mov dword ptr [ebp], eax
// 00530df0  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 00530df6  83c102               add ecx, 2
// 00530df9  894e48               mov dword ptr [esi + 0x48], ecx
// 00530dfc  c7464402000000       mov dword ptr [esi + 0x44], 2
// 00530e03  5d                   pop ebp
// 00530e04  5b                   pop ebx
// 00530e05  5f                   pop edi
// 00530e06  5e                   pop esi
// 00530e07  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
