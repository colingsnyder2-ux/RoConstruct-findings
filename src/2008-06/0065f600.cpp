// roc 2008-06 0065f600  unit: seg_00650000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f600
//
// 0065f600  56                   push esi
// 0065f601  8b742408             mov esi, dword ptr [esp + 8]
// 0065f605  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065f608  57                   push edi
// 0065f609  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0065f60c  85c0                 test eax, eax
// 0065f60e  0f8488000000         je 0x65f69c
// 0065f614  55                   push ebp
// 0065f615  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0065f619  53                   push ebx
// 0065f61a  8d9b00000000         lea ebx, [ebx]
// 0065f620  396808               cmp dword ptr [eax + 8], ebp
// 0065f623  7275                 jb 0x65f69a
// 0065f625  8b08                 mov ecx, dword ptr [eax]
// 0065f627  894e68               mov dword ptr [esi + 0x68], ecx
// 0065f62a  0fb65005             movzx edx, byte ptr [eax + 5]
// 0065f62e  0fb64f14             movzx ecx, byte ptr [edi + 0x14]
// 0065f632  f7d1                 not ecx
// 0065f634  83e203               and edx, 3
// 0065f637  84d1                 test cl, dl
// 0065f639  8d4810               lea ecx, [eax + 0x10]
// 0065f63c  7425                 je 0x65f663
// 0065f63e  394808               cmp dword ptr [eax + 8], ecx
// 0065f641  7410                 je 0x65f653
// 0065f643  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f646  8b19                 mov ebx, dword ptr [ecx]
// 0065f648  895a10               mov dword ptr [edx + 0x10], ebx
// 0065f64b  8b09                 mov ecx, dword ptr [ecx]
// 0065f64d  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f650  895114               mov dword ptr [ecx + 0x14], edx
// 0065f653  6a00                 push 0
// 0065f655  6a20                 push 0x20
// 0065f657  50                   push eax
// 0065f658  56                   push esi
// 0065f659  e892100000           call 0x6606f0
// 0065f65e  83c410               add esp, 0x10
// 0065f661  eb30                 jmp 0x65f693
// 0065f663  8b5014               mov edx, dword ptr [eax + 0x14]
// 0065f666  8b19                 mov ebx, dword ptr [ecx]
// 0065f668  895a10               mov dword ptr [edx + 0x10], ebx
// 0065f66b  8b11                 mov edx, dword ptr [ecx]
// 0065f66d  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0065f670  895a14               mov dword ptr [edx + 0x14], ebx
// 0065f673  8b5008               mov edx, dword ptr [eax + 8]
// 0065f676  8b1a                 mov ebx, dword ptr [edx]
// 0065f678  8919                 mov dword ptr [ecx], ebx
// 0065f67a  8b5a04               mov ebx, dword ptr [edx + 4]
// 0065f67d  895904               mov dword ptr [ecx + 4], ebx
// 0065f680  8b5208               mov edx, dword ptr [edx + 8]
// 0065f683  50                   push eax
// 0065f684  895108               mov dword ptr [ecx + 8], edx
// 0065f687  56                   push esi
// 0065f688  894808               mov dword ptr [eax + 8], ecx
// 0065f68b  e880ceffff           call 0x65c510
// 0065f690  83c408               add esp, 8
// 0065f693  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065f696  85c0                 test eax, eax
// 0065f698  7586                 jne 0x65f620
// 0065f69a  5b                   pop ebx
// 0065f69b  5d                   pop ebp
// 0065f69c  5f                   pop edi
// 0065f69d  5e                   pop esi
// 0065f69e  c3                   ret 
// library lua-5.1.1/lfunc.c (function _luaF_close)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lfunc.c
