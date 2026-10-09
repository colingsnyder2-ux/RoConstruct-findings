// roc 2010-06 004ecc40  unit: RBX::Network::Replicator::NewInstanceItem  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ecc40
//
// 004ecc40  56                   push esi
// 004ecc41  57                   push edi
// 004ecc42  8bf9                 mov edi, ecx
// 004ecc44  8b7718               mov esi, dword ptr [edi + 0x18]
// 004ecc47  85f6                 test esi, esi
// 004ecc49  742a                 je 0x4ecc75
// 004ecc4b  8d4604               lea eax, [esi + 4]
// 004ecc4e  83c9ff               or ecx, 0xffffffff
// 004ecc51  f00fc108             lock xadd dword ptr [eax], ecx
// 004ecc55  751e                 jne 0x4ecc75
// 004ecc57  8b16                 mov edx, dword ptr [esi]
// 004ecc59  8b4204               mov eax, dword ptr [edx + 4]
// 004ecc5c  8bce                 mov ecx, esi
// 004ecc5e  ffd0                 call eax
// 004ecc60  8d4e08               lea ecx, [esi + 8]
// 004ecc63  83caff               or edx, 0xffffffff
// 004ecc66  f00fc111             lock xadd dword ptr [ecx], edx
// 004ecc6a  7509                 jne 0x4ecc75
// 004ecc6c  8b06                 mov eax, dword ptr [esi]
// 004ecc6e  8b5008               mov edx, dword ptr [eax + 8]
// 004ecc71  8bce                 mov ecx, esi
// 004ecc73  ffd2                 call edx
// 004ecc75  f644240c01           test byte ptr [esp + 0xc], 1
// 004ecc7a  7409                 je 0x4ecc85
// 004ecc7c  57                   push edi
// 004ecc7d  e818ad2b00           call 0x7a799a
// 004ecc82  83c404               add esp, 4
// 004ecc85  8bc7                 mov eax, edi
// 004ecc87  5f                   pop edi
// 004ecc88  5e                   pop esi
// 004ecc89  c20400               ret 4
// library openrbx-client/App\humanoid\Balancing.cpp (function ??_GBalancing@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Balancing.cpp
