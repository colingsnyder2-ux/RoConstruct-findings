// roc 2007-08 004d8680  unit: RBX::View::MegaTextureProxy  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d8680
//
// 004d8680  8b442404             mov eax, dword ptr [esp + 4]
// 004d8684  56                   push esi
// 004d8685  57                   push edi
// 004d8686  8b38                 mov edi, dword ptr [eax]
// 004d8688  8bf1                 mov esi, ecx
// 004d868a  e80152ffff           call 0x4cd890
// 004d868f  85ff                 test edi, edi
// 004d8691  897e04               mov dword ptr [esi + 4], edi
// 004d8694  742e                 je 0x4d86c4
// 004d8696  6a08                 push 8
// 004d8698  e859781500           call 0x62fef6
// 004d869d  83c404               add esp, 4
// 004d86a0  85c0                 test eax, eax
// 004d86a2  7418                 je 0x4d86bc
// 004d86a4  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d86a7  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d86aa  8930                 mov dword ptr [eax], esi
// 004d86ac  894804               mov dword ptr [eax + 4], ecx
// 004d86af  8b5604               mov edx, dword ptr [esi + 4]
// 004d86b2  894208               mov dword ptr [edx + 8], eax
// 004d86b5  5f                   pop edi
// 004d86b6  8bc6                 mov eax, esi
// 004d86b8  5e                   pop esi
// 004d86b9  c20400               ret 4
// 004d86bc  8b5604               mov edx, dword ptr [esi + 4]
// 004d86bf  33c0                 xor eax, eax
// 004d86c1  894208               mov dword ptr [edx + 8], eax
// 004d86c4  5f                   pop edi
// 004d86c5  8bc6                 mov eax, esi
// 004d86c7  5e                   pop esi
// 004d86c8  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??4?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAEAAV01@ABV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
