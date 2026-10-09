// roc 2009-12 0053e7b0  unit: RBX::Network::Replicator::NewInstanceItem  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053e7b0
//
// 0053e7b0  56                   push esi
// 0053e7b1  57                   push edi
// 0053e7b2  8bf9                 mov edi, ecx
// 0053e7b4  8b7718               mov esi, dword ptr [edi + 0x18]
// 0053e7b7  85f6                 test esi, esi
// 0053e7b9  742a                 je 0x53e7e5
// 0053e7bb  8d4604               lea eax, [esi + 4]
// 0053e7be  83c9ff               or ecx, 0xffffffff
// 0053e7c1  f00fc108             lock xadd dword ptr [eax], ecx
// 0053e7c5  751e                 jne 0x53e7e5
// 0053e7c7  8b16                 mov edx, dword ptr [esi]
// 0053e7c9  8b4204               mov eax, dword ptr [edx + 4]
// 0053e7cc  8bce                 mov ecx, esi
// 0053e7ce  ffd0                 call eax
// 0053e7d0  8d4e08               lea ecx, [esi + 8]
// 0053e7d3  83caff               or edx, 0xffffffff
// 0053e7d6  f00fc111             lock xadd dword ptr [ecx], edx
// 0053e7da  7509                 jne 0x53e7e5
// 0053e7dc  8b06                 mov eax, dword ptr [esi]
// 0053e7de  8b5008               mov edx, dword ptr [eax + 8]
// 0053e7e1  8bce                 mov ecx, esi
// 0053e7e3  ffd2                 call edx
// 0053e7e5  f644240c01           test byte ptr [esp + 0xc], 1
// 0053e7ea  7409                 je 0x53e7f5
// 0053e7ec  57                   push edi
// 0053e7ed  e868502b00           call 0x7f385a
// 0053e7f2  83c404               add esp, 4
// 0053e7f5  8bc7                 mov eax, edi
// 0053e7f7  5f                   pop edi
// 0053e7f8  5e                   pop esi
// 0053e7f9  c20400               ret 4
// library openrbx-client/App\humanoid\Balancing.cpp (function ??_GBalancing@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Balancing.cpp
