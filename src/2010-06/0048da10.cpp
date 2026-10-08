// from server: 100% by auto
// roc 2010-06 0048da10  unit: G3D::PBVTextureFormat::?$Table  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048da10
//
// 0048da10  53                   push ebx
// 0048da11  55                   push ebp
// 0048da12  8bd9                 mov ebx, ecx
// 0048da14  33ed                 xor ebp, ebp
// 0048da16  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0048da19  7e38                 jle 0x48da53
// 0048da1b  56                   push esi
// 0048da1c  57                   push edi
// 0048da1d  8d4900               lea ecx, [ecx]
// 0048da20  8b4308               mov eax, dword ptr [ebx + 8]
// 0048da23  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0048da26  85f6                 test esi, esi
// 0048da28  7421                 je 0x48da4b
// 0048da2a  8d9b00000000         lea ebx, [ebx]
// 0048da30  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0048da33  8d4e04               lea ecx, [esi + 4]
// 0048da36  ff1500a49e00         call dword ptr [0x9ea400]
// 0048da3c  56                   push esi
// 0048da3d  e86ed10700           call 0x50abb0
// 0048da42  83c404               add esp, 4
// 0048da45  8bf7                 mov esi, edi
// 0048da47  85ff                 test edi, edi
// 0048da49  75e5                 jne 0x48da30
// 0048da4b  45                   inc ebp
// 0048da4c  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0048da4f  7ccf                 jl 0x48da20
// 0048da51  5f                   pop edi
// 0048da52  5e                   pop esi
// 0048da53  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0048da56  51                   push ecx
// 0048da57  e864ff0b00           call 0x54d9c0
// 0048da5c  83c404               add esp, 4
// 0048da5f  33c0                 xor eax, eax
// 0048da61  5d                   pop ebp
// 0048da62  894308               mov dword ptr [ebx + 8], eax
// 0048da65  89430c               mov dword ptr [ebx + 0xc], eax
// 0048da68  894304               mov dword ptr [ebx + 4], eax
// 0048da6b  5b                   pop ebx
// 0048da6c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
