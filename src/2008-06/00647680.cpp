// roc 2008-06 00647680  unit: RBX::GlueJoint  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647680
//
// 00647680  53                   push ebx
// 00647681  8bd9                 mov ebx, ecx
// 00647683  837b0400             cmp dword ptr [ebx + 4], 0
// 00647687  756f                 jne 0x6476f8
// 00647689  56                   push esi
// 0064768a  57                   push edi
// 0064768b  eb03                 jmp 0x647690
// 0064768d  8d4900               lea ecx, [ecx]
// 00647690  8b3b                 mov edi, dword ptr [ebx]
// 00647692  6a01                 push 1
// 00647694  57                   push edi
// 00647695  e8a6feffff           call 0x647540
// 0064769a  83c408               add esp, 8
// 0064769d  85c0                 test eax, eax
// 0064769f  7535                 jne 0x6476d6
// 006476a1  6a01                 push 1
// 006476a3  57                   push edi
// 006476a4  e837feffff           call 0x6474e0
// 006476a9  8bf0                 mov esi, eax
// 006476ab  83c408               add esp, 8
// 006476ae  85f6                 test esi, esi
// 006476b0  7424                 je 0x6476d6
// 006476b2  6a01                 push 1
// 006476b4  57                   push edi
// 006476b5  56                   push esi
// 006476b6  e8e5feffff           call 0x6475a0
// 006476bb  83c40c               add esp, 0xc
// 006476be  85c0                 test eax, eax
// 006476c0  7514                 jne 0x6476d6
// 006476c2  6a01                 push 1
// 006476c4  56                   push esi
// 006476c5  e816feffff           call 0x6474e0
// 006476ca  6a01                 push 1
// 006476cc  56                   push esi
// 006476cd  50                   push eax
// 006476ce  e82dffffff           call 0x647600
// 006476d3  83c414               add esp, 0x14
// 006476d6  8bf0                 mov esi, eax
// 006476d8  8933                 mov dword ptr [ebx], esi
// 006476da  85f6                 test esi, esi
// 006476dc  7418                 je 0x6476f6
// 006476de  8bce                 mov ecx, esi
// 006476e0  e81b04faff           call 0x5e7b00
// 006476e5  50                   push eax
// 006476e6  56                   push esi
// 006476e7  e8f4fcffff           call 0x6473e0
// 006476ec  83c408               add esp, 8
// 006476ef  894304               mov dword ptr [ebx + 4], eax
// 006476f2  85c0                 test eax, eax
// 006476f4  749a                 je 0x647690
// 006476f6  5f                   pop edi
// 006476f7  5e                   pop esi
// 006476f8  5b                   pop ebx
// 006476f9  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?findEdgeOnNextPrimitive@EdgeIterator@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
