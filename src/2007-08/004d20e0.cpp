// roc 2007-08 004d20e0  unit: RBX::Render::TextureProxy  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d20e0
//
// 004d20e0  53                   push ebx
// 004d20e1  55                   push ebp
// 004d20e2  8bd9                 mov ebx, ecx
// 004d20e4  33ed                 xor ebp, ebp
// 004d20e6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d20e9  7e43                 jle 0x4d212e
// 004d20eb  56                   push esi
// 004d20ec  57                   push edi
// 004d20ed  8d4900               lea ecx, [ecx]
// 004d20f0  8b4308               mov eax, dword ptr [ebx + 8]
// 004d20f3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d20f6  85f6                 test esi, esi
// 004d20f8  742a                 je 0x4d2124
// 004d20fa  8d9b00000000         lea ebx, [ebx]
// 004d2100  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004d2103  68f0374600           push 0x4637f0
// 004d2108  6a01                 push 1
// 004d210a  6a04                 push 4
// 004d210c  8d4e10               lea ecx, [esi + 0x10]
// 004d210f  51                   push ecx
// 004d2110  e8e2e91500           call 0x630af7
// 004d2115  56                   push esi
// 004d2116  e8d5d60200           call 0x4ff7f0
// 004d211b  83c404               add esp, 4
// 004d211e  85ff                 test edi, edi
// 004d2120  8bf7                 mov esi, edi
// 004d2122  75dc                 jne 0x4d2100
// 004d2124  83c501               add ebp, 1
// 004d2127  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d212a  7cc4                 jl 0x4d20f0
// 004d212c  5f                   pop edi
// 004d212d  5e                   pop esi
// 004d212e  8b5308               mov edx, dword ptr [ebx + 8]
// 004d2131  52                   push edx
// 004d2132  e8d9d60200           call 0x4ff810
// 004d2137  83c404               add esp, 4
// 004d213a  33c0                 xor eax, eax
// 004d213c  5d                   pop ebp
// 004d213d  894308               mov dword ptr [ebx + 8], eax
// 004d2140  89430c               mov dword ptr [ebx + 0xc], eax
// 004d2143  894304               mov dword ptr [ebx + 4], eax
// 004d2146  5b                   pop ebx
// 004d2147  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
