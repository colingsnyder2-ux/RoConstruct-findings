// roc 2008-06 006473e0  unit: RBX::GlueJoint  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006473e0
//
// 006473e0  53                   push ebx
// 006473e1  56                   push esi
// 006473e2  8b742410             mov esi, dword ptr [esp + 0x10]
// 006473e6  57                   push edi
// 006473e7  85f6                 test esi, esi
// 006473e9  7433                 je 0x64741e
// 006473eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006473ef  90                   nop 
// 006473f0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006473f3  3bf9                 cmp edi, ecx
// 006473f5  7503                 jne 0x6473fa
// 006473f7  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006473fa  85c9                 test ecx, ecx
// 006473fc  7412                 je 0x647410
// 006473fe  e85d01faff           call 0x5e7560
// 00647403  8bcf                 mov ecx, edi
// 00647405  8bd8                 mov ebx, eax
// 00647407  e85401faff           call 0x5e7560
// 0064740c  3bc3                 cmp eax, ebx
// 0064740e  7514                 jne 0x647424
// 00647410  56                   push esi
// 00647411  8bcf                 mov ecx, edi
// 00647413  e80807faff           call 0x5e7b20
// 00647418  8bf0                 mov esi, eax
// 0064741a  85f6                 test esi, esi
// 0064741c  75d2                 jne 0x6473f0
// 0064741e  5f                   pop edi
// 0064741f  5e                   pop esi
// 00647420  33c0                 xor eax, eax
// 00647422  5b                   pop ebx
// 00647423  c3                   ret 
// 00647424  5f                   pop edi
// 00647425  8bc6                 mov eax, esi
// 00647427  5e                   pop esi
// 00647428  5b                   pop ebx
// 00647429  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?getNextExternalUtil@EdgeIterator@RBX@@CAPAVEdge@2@PAVPrimitive@2@PAV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
