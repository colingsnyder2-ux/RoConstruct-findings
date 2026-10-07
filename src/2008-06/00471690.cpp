// roc 2008-06 00471690  unit: G3D::PBVTextureFormat::?$Table  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00471690
//
// 00471690  53                   push ebx
// 00471691  55                   push ebp
// 00471692  8bd9                 mov ebx, ecx
// 00471694  33ed                 xor ebp, ebp
// 00471696  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00471699  7e38                 jle 0x4716d3
// 0047169b  56                   push esi
// 0047169c  57                   push edi
// 0047169d  8d4900               lea ecx, [ecx]
// 004716a0  8b4308               mov eax, dword ptr [ebx + 8]
// 004716a3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004716a6  85f6                 test esi, esi
// 004716a8  7421                 je 0x4716cb
// 004716aa  8d9b00000000         lea ebx, [ebx]
// 004716b0  8b7e24               mov edi, dword ptr [esi + 0x24]
// 004716b3  8d4e04               lea ecx, [esi + 4]
// 004716b6  ff1568248000         call dword ptr [0x802468]
// 004716bc  56                   push esi
// 004716bd  e83e660900           call 0x507d00
// 004716c2  83c404               add esp, 4
// 004716c5  8bf7                 mov esi, edi
// 004716c7  85ff                 test edi, edi
// 004716c9  75e5                 jne 0x4716b0
// 004716cb  45                   inc ebp
// 004716cc  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004716cf  7ccf                 jl 0x4716a0
// 004716d1  5f                   pop edi
// 004716d2  5e                   pop esi
// 004716d3  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004716d6  51                   push ecx
// 004716d7  e844660900           call 0x507d20
// 004716dc  83c404               add esp, 4
// 004716df  33c0                 xor eax, eax
// 004716e1  5d                   pop ebp
// 004716e2  894308               mov dword ptr [ebx + 8], eax
// 004716e5  89430c               mov dword ptr [ebx + 0xc], eax
// 004716e8  894304               mov dword ptr [ebx + 4], eax
// 004716eb  5b                   pop ebx
// 004716ec  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
