// roc 2007-08 004d85c0  unit: RBX::View::MegaTextureProxy  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d85c0
//
// 004d85c0  6aff                 push -1
// 004d85c2  6858c57400           push 0x74c558
// 004d85c7  64a100000000         mov eax, dword ptr fs:[0]
// 004d85cd  50                   push eax
// 004d85ce  64892500000000       mov dword ptr fs:[0], esp
// 004d85d5  51                   push ecx
// 004d85d6  56                   push esi
// 004d85d7  8bf1                 mov esi, ecx
// 004d85d9  57                   push edi
// 004d85da  89742408             mov dword ptr [esp + 8], esi
// 004d85de  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d85e2  c70634f07900         mov dword ptr [esi], 0x79f034
// 004d85e8  c7460400000000       mov dword ptr [esi + 4], 0
// 004d85ef  8b7804               mov edi, dword ptr [eax + 4]
// 004d85f2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d85fa  e89152ffff           call 0x4cd890
// 004d85ff  85ff                 test edi, edi
// 004d8601  897e04               mov dword ptr [esi + 4], edi
// 004d8604  7423                 je 0x4d8629
// 004d8606  6a08                 push 8
// 004d8608  e8e9781500           call 0x62fef6
// 004d860d  83c404               add esp, 4
// 004d8610  85c0                 test eax, eax
// 004d8612  740d                 je 0x4d8621
// 004d8614  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d8617  8b4908               mov ecx, dword ptr [ecx + 8]
// 004d861a  8930                 mov dword ptr [eax], esi
// 004d861c  894804               mov dword ptr [eax + 4], ecx
// 004d861f  eb02                 jmp 0x4d8623
// 004d8621  33c0                 xor eax, eax
// 004d8623  8b5604               mov edx, dword ptr [esi + 4]
// 004d8626  894208               mov dword ptr [edx + 8], eax
// 004d8629  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d862d  5f                   pop edi
// 004d862e  8bc6                 mov eax, esi
// 004d8630  5e                   pop esi
// 004d8631  64890d00000000       mov dword ptr fs:[0], ecx
// 004d8638  83c410               add esp, 0x10
// 004d863b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
