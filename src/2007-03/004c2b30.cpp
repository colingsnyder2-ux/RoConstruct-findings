// roc 2007-03 004c2b30  unit: seg_004c0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2b30
//
// 004c2b30  53                   push ebx
// 004c2b31  55                   push ebp
// 004c2b32  8bd9                 mov ebx, ecx
// 004c2b34  33ed                 xor ebp, ebp
// 004c2b36  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c2b39  7e43                 jle 0x4c2b7e
// 004c2b3b  56                   push esi
// 004c2b3c  57                   push edi
// 004c2b3d  8d4900               lea ecx, [ecx]
// 004c2b40  8b4308               mov eax, dword ptr [ebx + 8]
// 004c2b43  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c2b46  85f6                 test esi, esi
// 004c2b48  742a                 je 0x4c2b74
// 004c2b4a  8d9b00000000         lea ebx, [ebx]
// 004c2b50  8b7e20               mov edi, dword ptr [esi + 0x20]
// 004c2b53  68c0594700           push 0x4759c0
// 004c2b58  6a04                 push 4
// 004c2b5a  6a04                 push 4
// 004c2b5c  8d4e10               lea ecx, [esi + 0x10]
// 004c2b5f  51                   push ecx
// 004c2b60  e820c41500           call 0x61ef85
// 004c2b65  56                   push esi
// 004c2b66  e8f5070300           call 0x4f3360
// 004c2b6b  83c404               add esp, 4
// 004c2b6e  85ff                 test edi, edi
// 004c2b70  8bf7                 mov esi, edi
// 004c2b72  75dc                 jne 0x4c2b50
// 004c2b74  83c501               add ebp, 1
// 004c2b77  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c2b7a  7cc4                 jl 0x4c2b40
// 004c2b7c  5f                   pop edi
// 004c2b7d  5e                   pop esi
// 004c2b7e  8b5308               mov edx, dword ptr [ebx + 8]
// 004c2b81  52                   push edx
// 004c2b82  e8f9070300           call 0x4f3380
// 004c2b87  83c404               add esp, 4
// 004c2b8a  33c0                 xor eax, eax
// 004c2b8c  5d                   pop ebp
// 004c2b8d  894308               mov dword ptr [ebx + 8], eax
// 004c2b90  89430c               mov dword ptr [ebx + 0xc], eax
// 004c2b93  894304               mov dword ptr [ebx + 4], eax
// 004c2b96  5b                   pop ebx
// 004c2b97  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
