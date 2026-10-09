// roc 2008-06 00647700  unit: RBX::GlueJoint  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647700
//
// 00647700  56                   push esi
// 00647701  8bf1                 mov esi, ecx
// 00647703  8b4604               mov eax, dword ptr [esi + 4]
// 00647706  57                   push edi
// 00647707  8b3e                 mov edi, dword ptr [esi]
// 00647709  50                   push eax
// 0064770a  8bcf                 mov ecx, edi
// 0064770c  e80f04faff           call 0x5e7b20
// 00647711  50                   push eax
// 00647712  57                   push edi
// 00647713  e8c8fcffff           call 0x6473e0
// 00647718  83c408               add esp, 8
// 0064771b  894604               mov dword ptr [esi + 4], eax
// 0064771e  85c0                 test eax, eax
// 00647720  7507                 jne 0x647729
// 00647722  8bce                 mov ecx, esi
// 00647724  e857ffffff           call 0x647680
// 00647729  5f                   pop edi
// 0064772a  8bc6                 mov eax, esi
// 0064772c  5e                   pop esi
// 0064772d  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ??EEdgeIterator@RBX@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
