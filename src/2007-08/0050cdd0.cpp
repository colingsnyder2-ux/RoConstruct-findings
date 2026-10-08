// from server: 100% by auto
// roc 2007-08 0050cdd0  unit: G3D::BinaryInput  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050cdd0
//
// 0050cdd0  83ec08               sub esp, 8
// 0050cdd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050cdd7  53                   push ebx
// 0050cdd8  55                   push ebp
// 0050cdd9  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0050cddd  56                   push esi
// 0050cdde  57                   push edi
// 0050cddf  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0050cde3  8bc7                 mov eax, edi
// 0050cde5  2b442424             sub eax, dword ptr [esp + 0x24]
// 0050cde9  c1f802               sar eax, 2
// 0050cdec  c1e005               shl eax, 5
// 0050cdef  2b442428             sub eax, dword ptr [esp + 0x28]
// 0050cdf3  03c5                 add eax, ebp
// 0050cdf5  50                   push eax
// 0050cdf6  51                   push ecx
// 0050cdf7  8d4c2440             lea ecx, [esp + 0x40]
// 0050cdfb  e820f9ffff           call 0x50c720
// 0050ce00  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050ce04  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0050ce08  c644241000           mov byte ptr [esp + 0x10], 0
// 0050ce0d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050ce11  52                   push edx
// 0050ce12  8b542440             mov edx, dword ptr [esp + 0x40]
// 0050ce16  c644241800           mov byte ptr [esp + 0x18], 0
// 0050ce1b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050ce1f  50                   push eax
// 0050ce20  8b442448             mov eax, dword ptr [esp + 0x48]
// 0050ce24  51                   push ecx
// 0050ce25  83ec0c               sub esp, 0xc
// 0050ce28  85db                 test ebx, ebx
// 0050ce2a  8bf4                 mov esi, esp
// 0050ce2c  c70600000000         mov dword ptr [esi], 0
// 0050ce32  895604               mov dword ptr [esi + 4], edx
// 0050ce35  894608               mov dword ptr [esi + 8], eax
// 0050ce38  7506                 jne 0x50ce40
// 0050ce3a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ce40  891e                 mov dword ptr [esi], ebx
// 0050ce42  83ec0c               sub esp, 0xc
// 0050ce45  8bf4                 mov esi, esp
// 0050ce47  897e04               mov dword ptr [esi + 4], edi
// 0050ce4a  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0050ce4e  85ff                 test edi, edi
// 0050ce50  c70600000000         mov dword ptr [esi], 0
// 0050ce56  896e08               mov dword ptr [esi + 8], ebp
// 0050ce59  7506                 jne 0x50ce61
// 0050ce5b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ce61  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050ce65  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0050ce69  893e                 mov dword ptr [esi], edi
// 0050ce6b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0050ce6f  83ec0c               sub esp, 0xc
// 0050ce72  85ff                 test edi, edi
// 0050ce74  8bf4                 mov esi, esp
// 0050ce76  c70600000000         mov dword ptr [esi], 0
// 0050ce7c  894e04               mov dword ptr [esi + 4], ecx
// 0050ce7f  895608               mov dword ptr [esi + 8], edx
// 0050ce82  7506                 jne 0x50ce8a
// 0050ce84  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050ce8a  8d442450             lea eax, [esp + 0x50]
// 0050ce8e  50                   push eax
// 0050ce8f  893e                 mov dword ptr [esi], edi
// 0050ce91  e82afcffff           call 0x50cac0
// 0050ce96  8b442450             mov eax, dword ptr [esp + 0x50]
// 0050ce9a  83c434               add esp, 0x34
// 0050ce9d  5f                   pop edi
// 0050ce9e  5e                   pop esi
// 0050ce9f  5d                   pop ebp
// 0050cea0  5b                   pop ebx
// 0050cea1  83c408               add esp, 8
// 0050cea4  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$_Copy_opt@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@V10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
