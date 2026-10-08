// roc 2010-06 0053b310  unit: RBX::G3DTexture  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053b310
//
// 0053b310  6aff                 push -1
// 0053b312  68a8e49800           push 0x98e4a8
// 0053b317  64a100000000         mov eax, dword ptr fs:[0]
// 0053b31d  50                   push eax
// 0053b31e  64892500000000       mov dword ptr fs:[0], esp
// 0053b325  51                   push ecx
// 0053b326  56                   push esi
// 0053b327  8bf1                 mov esi, ecx
// 0053b329  57                   push edi
// 0053b32a  89742408             mov dword ptr [esp + 8], esi
// 0053b32e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053b332  c706cce9a100         mov dword ptr [esi], 0xa1e9cc
// 0053b338  c7460400000000       mov dword ptr [esi + 4], 0
// 0053b33f  8b7804               mov edi, dword ptr [eax + 4]
// 0053b342  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053b34a  e8d1460000           call 0x53fa20
// 0053b34f  897e04               mov dword ptr [esi + 4], edi
// 0053b352  85ff                 test edi, edi
// 0053b354  7423                 je 0x53b379
// 0053b356  6a08                 push 8
// 0053b358  e843c62600           call 0x7a79a0
// 0053b35d  83c404               add esp, 4
// 0053b360  85c0                 test eax, eax
// 0053b362  740d                 je 0x53b371
// 0053b364  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053b367  8b4908               mov ecx, dword ptr [ecx + 8]
// 0053b36a  8930                 mov dword ptr [eax], esi
// 0053b36c  894804               mov dword ptr [eax + 4], ecx
// 0053b36f  eb02                 jmp 0x53b373
// 0053b371  33c0                 xor eax, eax
// 0053b373  8b5604               mov edx, dword ptr [esi + 4]
// 0053b376  894208               mov dword ptr [edx + 8], eax
// 0053b379  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053b37d  5f                   pop edi
// 0053b37e  8bc6                 mov eax, esi
// 0053b380  5e                   pop esi
// 0053b381  64890d00000000       mov dword ptr fs:[0], ecx
// 0053b388  83c410               add esp, 0x10
// 0053b38b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
