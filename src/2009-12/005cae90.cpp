// roc 2009-12 005cae90  unit: RBX::WedgeBuilder  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cae90
//
// 005cae90  6aff                 push -1
// 005cae92  6858d09300           push 0x93d058
// 005cae97  64a100000000         mov eax, dword ptr fs:[0]
// 005cae9d  50                   push eax
// 005cae9e  64892500000000       mov dword ptr fs:[0], esp
// 005caea5  51                   push ecx
// 005caea6  56                   push esi
// 005caea7  8bf1                 mov esi, ecx
// 005caea9  57                   push edi
// 005caeaa  89742408             mov dword ptr [esp + 8], esi
// 005caeae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005caeb2  c706dcb49a00         mov dword ptr [esi], 0x9ab4dc
// 005caeb8  c7460400000000       mov dword ptr [esi + 4], 0
// 005caebf  8b7804               mov edi, dword ptr [eax + 4]
// 005caec2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005caeca  e8d1370000           call 0x5ce6a0
// 005caecf  897e04               mov dword ptr [esi + 4], edi
// 005caed2  85ff                 test edi, edi
// 005caed4  7423                 je 0x5caef9
// 005caed6  6a08                 push 8
// 005caed8  e883892200           call 0x7f3860
// 005caedd  83c404               add esp, 4
// 005caee0  85c0                 test eax, eax
// 005caee2  740d                 je 0x5caef1
// 005caee4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005caee7  8b4908               mov ecx, dword ptr [ecx + 8]
// 005caeea  8930                 mov dword ptr [eax], esi
// 005caeec  894804               mov dword ptr [eax + 4], ecx
// 005caeef  eb02                 jmp 0x5caef3
// 005caef1  33c0                 xor eax, eax
// 005caef3  8b5604               mov edx, dword ptr [esi + 4]
// 005caef6  894208               mov dword ptr [edx + 8], eax
// 005caef9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005caefd  5f                   pop edi
// 005caefe  8bc6                 mov eax, esi
// 005caf00  5e                   pop esi
// 005caf01  64890d00000000       mov dword ptr fs:[0], ecx
// 005caf08  83c410               add esp, 0x10
// 005caf0b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
