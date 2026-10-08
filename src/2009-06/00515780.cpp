// roc 2009-06 00515780  unit: seg_00510000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00515780
//
// 00515780  8b442404             mov eax, dword ptr [esp + 4]
// 00515784  56                   push esi
// 00515785  57                   push edi
// 00515786  8b38                 mov edi, dword ptr [eax]
// 00515788  8bf1                 mov esi, ecx
// 0051578a  e881340000           call 0x518c10
// 0051578f  897e04               mov dword ptr [esi + 4], edi
// 00515792  85ff                 test edi, edi
// 00515794  742e                 je 0x5157c4
// 00515796  6a08                 push 8
// 00515798  e89b322000           call 0x718a38
// 0051579d  83c404               add esp, 4
// 005157a0  85c0                 test eax, eax
// 005157a2  7418                 je 0x5157bc
// 005157a4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005157a7  8b4908               mov ecx, dword ptr [ecx + 8]
// 005157aa  8930                 mov dword ptr [eax], esi
// 005157ac  894804               mov dword ptr [eax + 4], ecx
// 005157af  8b5604               mov edx, dword ptr [esi + 4]
// 005157b2  894208               mov dword ptr [edx + 8], eax
// 005157b5  5f                   pop edi
// 005157b6  8bc6                 mov eax, esi
// 005157b8  5e                   pop esi
// 005157b9  c20400               ret 4
// 005157bc  8b5604               mov edx, dword ptr [esi + 4]
// 005157bf  33c0                 xor eax, eax
// 005157c1  894208               mov dword ptr [edx + 8], eax
// 005157c4  5f                   pop edi
// 005157c5  8bc6                 mov eax, esi
// 005157c7  5e                   pop esi
// 005157c8  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??4?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAEAAV01@ABV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
