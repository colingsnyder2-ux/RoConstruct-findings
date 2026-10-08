// roc 2007-08 004a7a70  unit: RBX::Network::Replicator::ChangePropertyItem  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7a70
//
// 004a7a70  8b442404             mov eax, dword ptr [esp + 4]
// 004a7a74  83ec08               sub esp, 8
// 004a7a77  56                   push esi
// 004a7a78  57                   push edi
// 004a7a79  50                   push eax
// 004a7a7a  8d54240c             lea edx, [esp + 0xc]
// 004a7a7e  52                   push edx
// 004a7a7f  e84c8a0c00           call 0x5704d0
// 004a7a84  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a7a88  85f6                 test esi, esi
// 004a7a8a  8b38                 mov edi, dword ptr [eax]
// 004a7a8c  742a                 je 0x4a7ab8
// 004a7a8e  8d4604               lea eax, [esi + 4]
// 004a7a91  83c9ff               or ecx, 0xffffffff
// 004a7a94  f00fc108             lock xadd dword ptr [eax], ecx
// 004a7a98  751e                 jne 0x4a7ab8
// 004a7a9a  8b16                 mov edx, dword ptr [esi]
// 004a7a9c  8b4204               mov eax, dword ptr [edx + 4]
// 004a7a9f  8bce                 mov ecx, esi
// 004a7aa1  ffd0                 call eax
// 004a7aa3  8d4e08               lea ecx, [esi + 8]
// 004a7aa6  83caff               or edx, 0xffffffff
// 004a7aa9  f00fc111             lock xadd dword ptr [ecx], edx
// 004a7aad  7509                 jne 0x4a7ab8
// 004a7aaf  8b06                 mov eax, dword ptr [esi]
// 004a7ab1  8b5008               mov edx, dword ptr [eax + 8]
// 004a7ab4  8bce                 mov ecx, esi
// 004a7ab6  ffd2                 call edx
// 004a7ab8  8bc7                 mov eax, edi
// 004a7aba  5f                   pop edi
// 004a7abb  5e                   pop esi
// 004a7abc  83c408               add esp, 8
// 004a7abf  c20400               ret 4
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?sig@?$TSignalDesc@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@IBEAAVTSignalInstance@123@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
