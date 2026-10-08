// roc 2007-03 004c6460  unit: seg_004c0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c6460
//
// 004c6460  53                   push ebx
// 004c6461  55                   push ebp
// 004c6462  8bd9                 mov ebx, ecx
// 004c6464  33ed                 xor ebp, ebp
// 004c6466  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c6469  7e43                 jle 0x4c64ae
// 004c646b  56                   push esi
// 004c646c  57                   push edi
// 004c646d  8d4900               lea ecx, [ecx]
// 004c6470  8b4308               mov eax, dword ptr [ebx + 8]
// 004c6473  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c6476  85f6                 test esi, esi
// 004c6478  742a                 je 0x4c64a4
// 004c647a  8d9b00000000         lea ebx, [ebx]
// 004c6480  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004c6483  68c0594700           push 0x4759c0
// 004c6488  6a01                 push 1
// 004c648a  6a04                 push 4
// 004c648c  8d4e10               lea ecx, [esi + 0x10]
// 004c648f  51                   push ecx
// 004c6490  e8f08a1500           call 0x61ef85
// 004c6495  56                   push esi
// 004c6496  e8c5ce0200           call 0x4f3360
// 004c649b  83c404               add esp, 4
// 004c649e  85ff                 test edi, edi
// 004c64a0  8bf7                 mov esi, edi
// 004c64a2  75dc                 jne 0x4c6480
// 004c64a4  83c501               add ebp, 1
// 004c64a7  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c64aa  7cc4                 jl 0x4c6470
// 004c64ac  5f                   pop edi
// 004c64ad  5e                   pop esi
// 004c64ae  8b5308               mov edx, dword ptr [ebx + 8]
// 004c64b1  52                   push edx
// 004c64b2  e8c9ce0200           call 0x4f3380
// 004c64b7  83c404               add esp, 4
// 004c64ba  33c0                 xor eax, eax
// 004c64bc  5d                   pop ebp
// 004c64bd  894308               mov dword ptr [ebx + 8], eax
// 004c64c0  89430c               mov dword ptr [ebx + 0xc], eax
// 004c64c3  894304               mov dword ptr [ebx + 4], eax
// 004c64c6  5b                   pop ebx
// 004c64c7  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
