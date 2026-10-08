// roc 2007-08 005aa3e0  unit: RBX::World  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa3e0
//
// 005aa3e0  56                   push esi
// 005aa3e1  57                   push edi
// 005aa3e2  8bf1                 mov esi, ecx
// 005aa3e4  33ff                 xor edi, edi
// 005aa3e6  397e5c               cmp dword ptr [esi + 0x5c], edi
// 005aa3e9  7e1d                 jle 0x5aa408
// 005aa3eb  eb03                 jmp 0x5aa3f0
// 005aa3ed  8d4900               lea ecx, [ecx]
// 005aa3f0  8b4658               mov eax, dword ptr [esi + 0x58]
// 005aa3f3  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005aa3f6  6a00                 push 0
// 005aa3f8  51                   push ecx
// 005aa3f9  8bce                 mov ecx, esi
// 005aa3fb  e8d0fbffff           call 0x5a9fd0
// 005aa400  83c701               add edi, 1
// 005aa403  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 005aa406  7ce8                 jl 0x5aa3f0
// 005aa408  5f                   pop edi
// 005aa409  5e                   pop esi
// 005aa40a  c3                   ret 
// library openrbx-client/App\v8world\World.cpp (function ?joinAll@World@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
