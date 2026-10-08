// roc 2007-03 004c2800  unit: seg_004c0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2800
//
// 004c2800  53                   push ebx
// 004c2801  55                   push ebp
// 004c2802  8bd9                 mov ebx, ecx
// 004c2804  33ed                 xor ebp, ebp
// 004c2806  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c2809  7e39                 jle 0x4c2844
// 004c280b  56                   push esi
// 004c280c  57                   push edi
// 004c280d  8d4900               lea ecx, [ecx]
// 004c2810  8b4308               mov eax, dword ptr [ebx + 8]
// 004c2813  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004c2816  85f6                 test esi, esi
// 004c2818  7420                 je 0x4c283a
// 004c281a  8d9b00000000         lea ebx, [ebx]
// 004c2820  8b7e48               mov edi, dword ptr [esi + 0x48]
// 004c2823  8d4e08               lea ecx, [esi + 8]
// 004c2826  e8a5faffff           call 0x4c22d0
// 004c282b  56                   push esi
// 004c282c  e82f0b0300           call 0x4f3360
// 004c2831  83c404               add esp, 4
// 004c2834  85ff                 test edi, edi
// 004c2836  8bf7                 mov esi, edi
// 004c2838  75e6                 jne 0x4c2820
// 004c283a  83c501               add ebp, 1
// 004c283d  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004c2840  7cce                 jl 0x4c2810
// 004c2842  5f                   pop edi
// 004c2843  5e                   pop esi
// 004c2844  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004c2847  51                   push ecx
// 004c2848  e8330b0300           call 0x4f3380
// 004c284d  83c404               add esp, 4
// 004c2850  33c0                 xor eax, eax
// 004c2852  5d                   pop ebp
// 004c2853  894308               mov dword ptr [ebx + 8], eax
// 004c2856  89430c               mov dword ptr [ebx + 0xc], eax
// 004c2859  894304               mov dword ptr [ebx + 4], eax
// 004c285c  5b                   pop ebx
// 004c285d  c3                   ret 
// library rbxgs-view/View.cpp (function ?freeMemory@?$Table@VTextureArgs@TextureManager@G3D@@V?$ReferenceCountedPointer@VTexture@G3D@@@3@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
