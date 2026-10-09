// roc 2009-12 005cb090  unit: RBX::RbxG3D::TextureProxy  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cb090
//
// 005cb090  8b442404             mov eax, dword ptr [esp + 4]
// 005cb094  56                   push esi
// 005cb095  57                   push edi
// 005cb096  8b38                 mov edi, dword ptr [eax]
// 005cb098  8bf1                 mov esi, ecx
// 005cb09a  e801360000           call 0x5ce6a0
// 005cb09f  897e04               mov dword ptr [esi + 4], edi
// 005cb0a2  85ff                 test edi, edi
// 005cb0a4  742e                 je 0x5cb0d4
// 005cb0a6  6a08                 push 8
// 005cb0a8  e8b3872200           call 0x7f3860
// 005cb0ad  83c404               add esp, 4
// 005cb0b0  85c0                 test eax, eax
// 005cb0b2  7418                 je 0x5cb0cc
// 005cb0b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005cb0b7  8b4908               mov ecx, dword ptr [ecx + 8]
// 005cb0ba  8930                 mov dword ptr [eax], esi
// 005cb0bc  894804               mov dword ptr [eax + 4], ecx
// 005cb0bf  8b5604               mov edx, dword ptr [esi + 4]
// 005cb0c2  894208               mov dword ptr [edx + 8], eax
// 005cb0c5  5f                   pop edi
// 005cb0c6  8bc6                 mov eax, esi
// 005cb0c8  5e                   pop esi
// 005cb0c9  c20400               ret 4
// 005cb0cc  8b5604               mov edx, dword ptr [esi + 4]
// 005cb0cf  33c0                 xor eax, eax
// 005cb0d1  894208               mov dword ptr [edx + 8], eax
// 005cb0d4  5f                   pop edi
// 005cb0d5  8bc6                 mov eax, esi
// 005cb0d7  5e                   pop esi
// 005cb0d8  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??4?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAEAAV01@ABV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
