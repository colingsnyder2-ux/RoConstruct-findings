// roc 2008-06 00594210  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594210
//
// 00594210  6aff                 push -1
// 00594212  68d8dd7c00           push 0x7cddd8
// 00594217  64a100000000         mov eax, dword ptr fs:[0]
// 0059421d  50                   push eax
// 0059421e  64892500000000       mov dword ptr fs:[0], esp
// 00594225  83ec08               sub esp, 8
// 00594228  53                   push ebx
// 00594229  56                   push esi
// 0059422a  57                   push edi
// 0059422b  8bf9                 mov edi, ecx
// 0059422d  8b5f04               mov ebx, dword ptr [edi + 4]
// 00594230  8bcb                 mov ecx, ebx
// 00594232  895c240c             mov dword ptr [esp + 0xc], ebx
// 00594236  e8a50a0000           call 0x594ce0
// 0059423b  c644241001           mov byte ptr [esp + 0x10], 1
// 00594240  8b37                 mov esi, dword ptr [edi]
// 00594242  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0059424a  85f6                 test esi, esi
// 0059424c  7418                 je 0x594266
// 0059424e  8bff                 mov edi, edi
// 00594250  8b06                 mov eax, dword ptr [esi]
// 00594252  8b10                 mov edx, dword ptr [eax]
// 00594254  8bce                 mov ecx, esi
// 00594256  ffd2                 call edx
// 00594258  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0059425f  8b7614               mov esi, dword ptr [esi + 0x14]
// 00594262  85f6                 test esi, esi
// 00594264  75ea                 jne 0x594250
// 00594266  8bcb                 mov ecx, ebx
// 00594268  c70700000000         mov dword ptr [edi], 0
// 0059426e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00594276  e8850a0000           call 0x594d00
// 0059427b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059427f  5f                   pop edi
// 00594280  5e                   pop esi
// 00594281  5b                   pop ebx
// 00594282  64890d00000000       mov dword ptr fs:[0], ecx
// 00594289  83c414               add esp, 0x14
// 0059428c  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?eraseAllRefs@Node@ThreadRef@Lua@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
