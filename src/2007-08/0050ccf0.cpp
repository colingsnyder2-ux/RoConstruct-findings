// roc 2007-08 0050ccf0  unit: G3D::BinaryInput  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050ccf0
//
// 0050ccf0  83ec08               sub esp, 8
// 0050ccf3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050ccf7  53                   push ebx
// 0050ccf8  55                   push ebp
// 0050ccf9  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0050ccfd  56                   push esi
// 0050ccfe  57                   push edi
// 0050ccff  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0050cd03  8bc7                 mov eax, edi
// 0050cd05  2b442424             sub eax, dword ptr [esp + 0x24]
// 0050cd09  c1f802               sar eax, 2
// 0050cd0c  c1e005               shl eax, 5
// 0050cd0f  2b442428             sub eax, dword ptr [esp + 0x28]
// 0050cd13  03c5                 add eax, ebp
// 0050cd15  50                   push eax
// 0050cd16  51                   push ecx
// 0050cd17  8d4c2440             lea ecx, [esp + 0x40]
// 0050cd1b  e890f9ffff           call 0x50c6b0
// 0050cd20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050cd24  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0050cd28  c644241000           mov byte ptr [esp + 0x10], 0
// 0050cd2d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050cd31  52                   push edx
// 0050cd32  8b542440             mov edx, dword ptr [esp + 0x40]
// 0050cd36  c644241800           mov byte ptr [esp + 0x18], 0
// 0050cd3b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050cd3f  50                   push eax
// 0050cd40  8b442448             mov eax, dword ptr [esp + 0x48]
// 0050cd44  51                   push ecx
// 0050cd45  83ec0c               sub esp, 0xc
// 0050cd48  85db                 test ebx, ebx
// 0050cd4a  8bf4                 mov esi, esp
// 0050cd4c  c70600000000         mov dword ptr [esi], 0
// 0050cd52  895604               mov dword ptr [esi + 4], edx
// 0050cd55  894608               mov dword ptr [esi + 8], eax
// 0050cd58  7506                 jne 0x50cd60
// 0050cd5a  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cd60  891e                 mov dword ptr [esi], ebx
// 0050cd62  83ec0c               sub esp, 0xc
// 0050cd65  8bf4                 mov esi, esp
// 0050cd67  897e04               mov dword ptr [esi + 4], edi
// 0050cd6a  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0050cd6e  85ff                 test edi, edi
// 0050cd70  c70600000000         mov dword ptr [esi], 0
// 0050cd76  896e08               mov dword ptr [esi + 8], ebp
// 0050cd79  7506                 jne 0x50cd81
// 0050cd7b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cd81  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0050cd85  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0050cd89  893e                 mov dword ptr [esi], edi
// 0050cd8b  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0050cd8f  83ec0c               sub esp, 0xc
// 0050cd92  85ff                 test edi, edi
// 0050cd94  8bf4                 mov esi, esp
// 0050cd96  c70600000000         mov dword ptr [esi], 0
// 0050cd9c  894e04               mov dword ptr [esi + 4], ecx
// 0050cd9f  895608               mov dword ptr [esi + 8], edx
// 0050cda2  7506                 jne 0x50cdaa
// 0050cda4  ff15d8e67700         call dword ptr [0x77e6d8]
// 0050cdaa  8d442450             lea eax, [esp + 0x50]
// 0050cdae  50                   push eax
// 0050cdaf  893e                 mov dword ptr [esi], edi
// 0050cdb1  e83afbffff           call 0x50c8f0
// 0050cdb6  8b442450             mov eax, dword ptr [esp + 0x50]
// 0050cdba  83c434               add esp, 0x34
// 0050cdbd  5f                   pop edi
// 0050cdbe  5e                   pop esi
// 0050cdbf  5d                   pop ebp
// 0050cdc0  5b                   pop ebx
// 0050cdc1  83c408               add esp, 8
// 0050cdc4  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??$_Copy_opt@V?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@0@V10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
