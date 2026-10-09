// roc 2009-06 004e7bf0  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e7bf0
//
// 004e7bf0  56                   push esi
// 004e7bf1  57                   push edi
// 004e7bf2  8bf9                 mov edi, ecx
// 004e7bf4  8b7718               mov esi, dword ptr [edi + 0x18]
// 004e7bf7  85f6                 test esi, esi
// 004e7bf9  742a                 je 0x4e7c25
// 004e7bfb  8d4604               lea eax, [esi + 4]
// 004e7bfe  83c9ff               or ecx, 0xffffffff
// 004e7c01  f00fc108             lock xadd dword ptr [eax], ecx
// 004e7c05  751e                 jne 0x4e7c25
// 004e7c07  8b16                 mov edx, dword ptr [esi]
// 004e7c09  8b4204               mov eax, dword ptr [edx + 4]
// 004e7c0c  8bce                 mov ecx, esi
// 004e7c0e  ffd0                 call eax
// 004e7c10  8d4e08               lea ecx, [esi + 8]
// 004e7c13  83caff               or edx, 0xffffffff
// 004e7c16  f00fc111             lock xadd dword ptr [ecx], edx
// 004e7c1a  7509                 jne 0x4e7c25
// 004e7c1c  8b06                 mov eax, dword ptr [esi]
// 004e7c1e  8b5008               mov edx, dword ptr [eax + 8]
// 004e7c21  8bce                 mov ecx, esi
// 004e7c23  ffd2                 call edx
// 004e7c25  f644240c01           test byte ptr [esp + 0xc], 1
// 004e7c2a  7409                 je 0x4e7c35
// 004e7c2c  57                   push edi
// 004e7c2d  e8000e2300           call 0x718a32
// 004e7c32  83c404               add esp, 4
// 004e7c35  8bc7                 mov eax, edi
// 004e7c37  5f                   pop edi
// 004e7c38  5e                   pop esi
// 004e7c39  c20400               ret 4
// library openrbx-client/App\humanoid\Balancing.cpp (function ??_GBalancing@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Balancing.cpp
