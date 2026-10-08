// roc 2010-06 0053ff90  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053ff90
//
// 0053ff90  6aff                 push -1
// 0053ff92  68a8e49800           push 0x98e4a8
// 0053ff97  64a100000000         mov eax, dword ptr fs:[0]
// 0053ff9d  50                   push eax
// 0053ff9e  64892500000000       mov dword ptr fs:[0], esp
// 0053ffa5  51                   push ecx
// 0053ffa6  56                   push esi
// 0053ffa7  8bf1                 mov esi, ecx
// 0053ffa9  57                   push edi
// 0053ffaa  89742408             mov dword ptr [esp + 8], esi
// 0053ffae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053ffb2  c7069cf2a100         mov dword ptr [esi], 0xa1f29c
// 0053ffb8  c7460400000000       mov dword ptr [esi + 4], 0
// 0053ffbf  8b7804               mov edi, dword ptr [eax + 4]
// 0053ffc2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053ffca  e851faffff           call 0x53fa20
// 0053ffcf  897e04               mov dword ptr [esi + 4], edi
// 0053ffd2  85ff                 test edi, edi
// 0053ffd4  7423                 je 0x53fff9
// 0053ffd6  6a08                 push 8
// 0053ffd8  e8c3792600           call 0x7a79a0
// 0053ffdd  83c404               add esp, 4
// 0053ffe0  85c0                 test eax, eax
// 0053ffe2  740d                 je 0x53fff1
// 0053ffe4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053ffe7  8b4908               mov ecx, dword ptr [ecx + 8]
// 0053ffea  8930                 mov dword ptr [eax], esi
// 0053ffec  894804               mov dword ptr [eax + 4], ecx
// 0053ffef  eb02                 jmp 0x53fff3
// 0053fff1  33c0                 xor eax, eax
// 0053fff3  8b5604               mov edx, dword ptr [esi + 4]
// 0053fff6  894208               mov dword ptr [edx + 8], eax
// 0053fff9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053fffd  5f                   pop edi
// 0053fffe  8bc6                 mov eax, esi
// 00540000  5e                   pop esi
// 00540001  64890d00000000       mov dword ptr fs:[0], ecx
// 00540008  83c410               add esp, 0x10
// 0054000b  c20400               ret 4
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
