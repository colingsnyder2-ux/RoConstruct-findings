// roc 2007-03 0046e2c0  unit: seg_00460000  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046e2c0
//
// 0046e2c0  53                   push ebx
// 0046e2c1  55                   push ebp
// 0046e2c2  8bd9                 mov ebx, ecx
// 0046e2c4  33ed                 xor ebp, ebp
// 0046e2c6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 0046e2c9  7e3a                 jle 0x46e305
// 0046e2cb  56                   push esi
// 0046e2cc  57                   push edi
// 0046e2cd  8d4900               lea ecx, [ecx]
// 0046e2d0  8b4308               mov eax, dword ptr [ebx + 8]
// 0046e2d3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0046e2d6  85f6                 test esi, esi
// 0046e2d8  7421                 je 0x46e2fb
// 0046e2da  8d9b00000000         lea ebx, [ebx]
// 0046e2e0  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0046e2e3  8d4e04               lea ecx, [esi + 4]
// 0046e2e6  ff158ce77700         call dword ptr [0x77e78c]
// 0046e2ec  56                   push esi
// 0046e2ed  e86e500800           call 0x4f3360
// 0046e2f2  83c404               add esp, 4
// 0046e2f5  85ff                 test edi, edi
// 0046e2f7  8bf7                 mov esi, edi
// 0046e2f9  75e5                 jne 0x46e2e0
// 0046e2fb  83c501               add ebp, 1
// 0046e2fe  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 0046e301  7ccd                 jl 0x46e2d0
// 0046e303  5f                   pop edi
// 0046e304  5e                   pop esi
// 0046e305  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0046e308  51                   push ecx
// 0046e309  e872500800           call 0x4f3380
// 0046e30e  83c404               add esp, 4
// 0046e311  33c0                 xor eax, eax
// 0046e313  5d                   pop ebp
// 0046e314  894308               mov dword ptr [ebx + 8], eax
// 0046e317  89430c               mov dword ptr [ebx + 0xc], eax
// 0046e31a  894304               mov dword ptr [ebx + 4], eax
// 0046e31d  5b                   pop ebx
// 0046e31e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GLCaps.cpp (function ?freeMemory@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GLCaps.cpp
