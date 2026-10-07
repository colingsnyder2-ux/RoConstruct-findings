// roc 2009-06 0049dac0  unit: G3D::VARArea  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049dac0
//
// 0049dac0  53                   push ebx
// 0049dac1  55                   push ebp
// 0049dac2  33ed                 xor ebp, ebp
// 0049dac4  33db                 xor ebx, ebx
// 0049dac6  392d74c8a300         cmp dword ptr [0xa3c874], ebp
// 0049dacc  7e6b                 jle 0x49db39
// 0049dace  56                   push esi
// 0049dacf  57                   push edi
// 0049dad0  a170c8a300           mov eax, dword ptr [0xa3c870]
// 0049dad5  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0049dad8  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0049dadb  8d7e0c               lea edi, [esi + 0xc]
// 0049dade  7434                 je 0x49db14
// 0049dae0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0049dae3  57                   push edi
// 0049dae4  e8d7240000           call 0x49ffc0
// 0049dae9  8b07                 mov eax, dword ptr [edi]
// 0049daeb  3bc5                 cmp eax, ebp
// 0049daed  7425                 je 0x49db14
// 0049daef  83c004               add eax, 4
// 0049daf2  50                   push eax
// 0049daf3  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049daf9  85c0                 test eax, eax
// 0049dafb  7515                 jne 0x49db12
// 0049dafd  8b0f                 mov ecx, dword ptr [edi]
// 0049daff  e87c72faff           call 0x444d80
// 0049db04  8b0f                 mov ecx, dword ptr [edi]
// 0049db06  3bcd                 cmp ecx, ebp
// 0049db08  7408                 je 0x49db12
// 0049db0a  8b11                 mov edx, dword ptr [ecx]
// 0049db0c  8b02                 mov eax, dword ptr [edx]
// 0049db0e  6a01                 push 1
// 0049db10  ffd0                 call eax
// 0049db12  892f                 mov dword ptr [edi], ebp
// 0049db14  83461801             add dword ptr [esi + 0x18], 1
// 0049db18  896e10               mov dword ptr [esi + 0x10], ebp
// 0049db1b  55                   push ebp
// 0049db1c  116e1c               adc dword ptr [esi + 0x1c], ebp
// 0049db1f  8b0d70c8a300         mov ecx, dword ptr [0xa3c870]
// 0049db25  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 0049db28  8b11                 mov edx, dword ptr [ecx]
// 0049db2a  8b02                 mov eax, dword ptr [edx]
// 0049db2c  ffd0                 call eax
// 0049db2e  43                   inc ebx
// 0049db2f  3b1d74c8a300         cmp ebx, dword ptr [0xa3c874]
// 0049db35  7c99                 jl 0x49dad0
// 0049db37  5f                   pop edi
// 0049db38  5e                   pop esi
// 0049db39  6a01                 push 1
// 0049db3b  55                   push ebp
// 0049db3c  b970c8a300           mov ecx, 0xa3c870
// 0049db41  e8eafbffff           call 0x49d730
// 0049db46  5d                   pop ebp
// 0049db47  5b                   pop ebx
// 0049db48  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanupAllVARAreas@VARArea@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
