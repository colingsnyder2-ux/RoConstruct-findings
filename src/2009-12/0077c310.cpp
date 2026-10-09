// roc 2009-12 0077c310  unit: RBX::BallBallContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077c310
//
// 0077c310  53                   push ebx
// 0077c311  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077c315  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0077c318  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0077c31b  56                   push esi
// 0077c31c  57                   push edi
// 0077c31d  6a01                 push 1
// 0077c31f  c1f802               sar eax, 2
// 0077c322  50                   push eax
// 0077c323  8bf9                 mov edi, ecx
// 0077c325  e896f7ffff           call 0x77bac0
// 0077c32a  33f6                 xor esi, esi
// 0077c32c  397704               cmp dword ptr [edi + 4], esi
// 0077c32f  7e30                 jle 0x77c361
// 0077c331  55                   push ebp
// 0077c332  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 0077c338  eb06                 jmp 0x77c340
// 0077c33a  8d9b00000000         lea ebx, [ebx]
// 0077c340  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 0077c343  2b4b0c               sub ecx, dword ptr [ebx + 0xc]
// 0077c346  c1f902               sar ecx, 2
// 0077c349  3bf1                 cmp esi, ecx
// 0077c34b  7202                 jb 0x77c34f
// 0077c34d  ffd5                 call ebp
// 0077c34f  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0077c352  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 0077c355  8b07                 mov eax, dword ptr [edi]
// 0077c357  890cb0               mov dword ptr [eax + esi*4], ecx
// 0077c35a  46                   inc esi
// 0077c35b  3b7704               cmp esi, dword ptr [edi + 4]
// 0077c35e  7ce0                 jl 0x77c340
// 0077c360  5d                   pop ebp
// 0077c361  8bc7                 mov eax, edi
// 0077c363  5f                   pop edi
// 0077c364  5e                   pop esi
// 0077c365  5b                   pop ebx
// 0077c366  c20400               ret 4
// library openrbx-client/App\v8world\ContactManager.cpp (function ??4?$Array@PBVPrimitive@RBX@@@G3D@@QAEAAV01@ABV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
