// roc 2008-06 00647730  unit: RBX::GlueJoint  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647730
//
// 00647730  56                   push esi
// 00647731  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00647735  57                   push edi
// 00647736  8bce                 mov ecx, esi
// 00647738  e8c303faff           call 0x5e7b00
// 0064773d  50                   push eax
// 0064773e  56                   push esi
// 0064773f  e89cfcffff           call 0x6473e0
// 00647744  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00647748  83c408               add esp, 8
// 0064774b  8937                 mov dword ptr [edi], esi
// 0064774d  894704               mov dword ptr [edi + 4], eax
// 00647750  85c0                 test eax, eax
// 00647752  7507                 jne 0x64775b
// 00647754  8bcf                 mov ecx, edi
// 00647756  e825ffffff           call 0x647680
// 0064775b  8bc7                 mov eax, edi
// 0064775d  5f                   pop edi
// 0064775e  5e                   pop esi
// 0064775f  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?begin@EdgeIterator@RBX@@SA?AV12@PAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
