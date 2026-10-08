// roc 2007-08 004cdf20  unit: 0RBX::View  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cdf20
//
// 004cdf20  53                   push ebx
// 004cdf21  55                   push ebp
// 004cdf22  8bd9                 mov ebx, ecx
// 004cdf24  33ed                 xor ebp, ebp
// 004cdf26  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004cdf29  7e43                 jle 0x4cdf6e
// 004cdf2b  56                   push esi
// 004cdf2c  57                   push edi
// 004cdf2d  8d4900               lea ecx, [ecx]
// 004cdf30  8b4308               mov eax, dword ptr [ebx + 8]
// 004cdf33  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004cdf36  85f6                 test esi, esi
// 004cdf38  742a                 je 0x4cdf64
// 004cdf3a  8d9b00000000         lea ebx, [ebx]
// 004cdf40  8b7e20               mov edi, dword ptr [esi + 0x20]
// 004cdf43  68f0374600           push 0x4637f0
// 004cdf48  6a04                 push 4
// 004cdf4a  6a04                 push 4
// 004cdf4c  8d4e10               lea ecx, [esi + 0x10]
// 004cdf4f  51                   push ecx
// 004cdf50  e8a22b1600           call 0x630af7
// 004cdf55  56                   push esi
// 004cdf56  e895180300           call 0x4ff7f0
// 004cdf5b  83c404               add esp, 4
// 004cdf5e  85ff                 test edi, edi
// 004cdf60  8bf7                 mov esi, edi
// 004cdf62  75dc                 jne 0x4cdf40
// 004cdf64  83c501               add ebp, 1
// 004cdf67  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004cdf6a  7cc4                 jl 0x4cdf30
// 004cdf6c  5f                   pop edi
// 004cdf6d  5e                   pop esi
// 004cdf6e  8b5308               mov edx, dword ptr [ebx + 8]
// 004cdf71  52                   push edx
// 004cdf72  e899180300           call 0x4ff810
// 004cdf77  83c404               add esp, 4
// 004cdf7a  33c0                 xor eax, eax
// 004cdf7c  5d                   pop ebp
// 004cdf7d  894308               mov dword ptr [ebx + 8], eax
// 004cdf80  89430c               mov dword ptr [ebx + 0xc], eax
// 004cdf83  894304               mov dword ptr [ebx + 4], eax
// 004cdf86  5b                   pop ebx
// 004cdf87  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
