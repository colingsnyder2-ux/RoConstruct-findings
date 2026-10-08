// from server: 100% by auto
// roc 2008-06 00476340  unit: G3D::VARArea  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476340
//
// 00476340  53                   push ebx
// 00476341  55                   push ebp
// 00476342  33ed                 xor ebp, ebp
// 00476344  33db                 xor ebx, ebx
// 00476346  392dd8ef9600         cmp dword ptr [0x96efd8], ebp
// 0047634c  7e6b                 jle 0x4763b9
// 0047634e  56                   push esi
// 0047634f  57                   push edi
// 00476350  a1d4ef9600           mov eax, dword ptr [0x96efd4]
// 00476355  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00476358  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0047635b  8d7e0c               lea edi, [esi + 0xc]
// 0047635e  7434                 je 0x476394
// 00476360  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00476363  57                   push edi
// 00476364  e877260000           call 0x4789e0
// 00476369  8b07                 mov eax, dword ptr [edi]
// 0047636b  3bc5                 cmp eax, ebp
// 0047636d  7425                 je 0x476394
// 0047636f  83c004               add eax, 4
// 00476372  50                   push eax
// 00476373  ff15ac218000         call dword ptr [0x8021ac]
// 00476379  85c0                 test eax, eax
// 0047637b  7515                 jne 0x476392
// 0047637d  8b0f                 mov ecx, dword ptr [edi]
// 0047637f  e80c4afeff           call 0x45ad90
// 00476384  8b0f                 mov ecx, dword ptr [edi]
// 00476386  3bcd                 cmp ecx, ebp
// 00476388  7408                 je 0x476392
// 0047638a  8b11                 mov edx, dword ptr [ecx]
// 0047638c  8b02                 mov eax, dword ptr [edx]
// 0047638e  6a01                 push 1
// 00476390  ffd0                 call eax
// 00476392  892f                 mov dword ptr [edi], ebp
// 00476394  83461801             add dword ptr [esi + 0x18], 1
// 00476398  896e10               mov dword ptr [esi + 0x10], ebp
// 0047639b  55                   push ebp
// 0047639c  116e1c               adc dword ptr [esi + 0x1c], ebp
// 0047639f  8b0dd4ef9600         mov ecx, dword ptr [0x96efd4]
// 004763a5  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 004763a8  8b11                 mov edx, dword ptr [ecx]
// 004763aa  8b02                 mov eax, dword ptr [edx]
// 004763ac  ffd0                 call eax
// 004763ae  43                   inc ebx
// 004763af  3b1dd8ef9600         cmp ebx, dword ptr [0x96efd8]
// 004763b5  7c99                 jl 0x476350
// 004763b7  5f                   pop edi
// 004763b8  5e                   pop esi
// 004763b9  6a01                 push 1
// 004763bb  55                   push ebp
// 004763bc  b9d4ef9600           mov ecx, 0x96efd4
// 004763c1  e8eafbffff           call 0x475fb0
// 004763c6  5d                   pop ebp
// 004763c7  5b                   pop ebx
// 004763c8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanupAllVARAreas@VARArea@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
