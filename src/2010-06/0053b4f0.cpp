// roc 2010-06 0053b4f0  unit: RBX::G3DTexture  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053b4f0
//
// 0053b4f0  8b442404             mov eax, dword ptr [esp + 4]
// 0053b4f4  56                   push esi
// 0053b4f5  57                   push edi
// 0053b4f6  8b38                 mov edi, dword ptr [eax]
// 0053b4f8  8bf1                 mov esi, ecx
// 0053b4fa  e821450000           call 0x53fa20
// 0053b4ff  897e04               mov dword ptr [esi + 4], edi
// 0053b502  85ff                 test edi, edi
// 0053b504  742e                 je 0x53b534
// 0053b506  6a08                 push 8
// 0053b508  e893c42600           call 0x7a79a0
// 0053b50d  83c404               add esp, 4
// 0053b510  85c0                 test eax, eax
// 0053b512  7418                 je 0x53b52c
// 0053b514  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053b517  8b4908               mov ecx, dword ptr [ecx + 8]
// 0053b51a  8930                 mov dword ptr [eax], esi
// 0053b51c  894804               mov dword ptr [eax + 4], ecx
// 0053b51f  8b5604               mov edx, dword ptr [esi + 4]
// 0053b522  894208               mov dword ptr [edx + 8], eax
// 0053b525  5f                   pop edi
// 0053b526  8bc6                 mov eax, esi
// 0053b528  5e                   pop esi
// 0053b529  c20400               ret 4
// 0053b52c  8b5604               mov edx, dword ptr [esi + 4]
// 0053b52f  33c0                 xor eax, eax
// 0053b531  894208               mov dword ptr [edx + 8], eax
// 0053b534  5f                   pop edi
// 0053b535  8bc6                 mov eax, esi
// 0053b537  5e                   pop esi
// 0053b538  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??4?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAEAAV01@ABV?$ReferenceCountedPointer@VMaterial@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
