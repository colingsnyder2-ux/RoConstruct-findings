// from server: 100% by auto
// roc 2007-08 0046e340  unit: G3D::PBVTextureFormat::?$Table  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046e340
//
// 0046e340  53                   push ebx
// 0046e341  55                   push ebp
// 0046e342  8bd9                 mov ebx, ecx
// 0046e344  33ed                 xor ebp, ebp
// 0046e346  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0046e349  7e3a                 jle 0x46e385
// 0046e34b  56                   push esi
// 0046e34c  57                   push edi
// 0046e34d  8d4900               lea ecx, [ecx]
// 0046e350  8b4308               mov eax, dword ptr [ebx + 8]
// 0046e353  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0046e356  85f6                 test esi, esi
// 0046e358  7421                 je 0x46e37b
// 0046e35a  8d9b00000000         lea ebx, [ebx]
// 0046e360  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0046e363  8d4e04               lea ecx, [esi + 4]
// 0046e366  ff15ace67700         call dword ptr [0x77e6ac]
// 0046e36c  56                   push esi
// 0046e36d  e87e140900           call 0x4ff7f0
// 0046e372  83c404               add esp, 4
// 0046e375  85ff                 test edi, edi
// 0046e377  8bf7                 mov esi, edi
// 0046e379  75e5                 jne 0x46e360
// 0046e37b  83c501               add ebp, 1
// 0046e37e  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0046e381  7ccd                 jl 0x46e350
// 0046e383  5f                   pop edi
// 0046e384  5e                   pop esi
// 0046e385  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0046e388  51                   push ecx
// 0046e389  e882140900           call 0x4ff810
// 0046e38e  83c404               add esp, 4
// 0046e391  33c0                 xor eax, eax
// 0046e393  5d                   pop ebp
// 0046e394  894308               mov dword ptr [ebx + 8], eax
// 0046e397  89430c               mov dword ptr [ebx + 0xc], eax
// 0046e39a  894304               mov dword ptr [ebx + 4], eax
// 0046e39d  5b                   pop ebx
// 0046e39e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
