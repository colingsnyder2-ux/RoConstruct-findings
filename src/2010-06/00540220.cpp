// roc 2010-06 00540220  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540220
//
// 00540220  6aff                 push -1
// 00540222  68a8e49800           push 0x98e4a8
// 00540227  64a100000000         mov eax, dword ptr fs:[0]
// 0054022d  50                   push eax
// 0054022e  64892500000000       mov dword ptr fs:[0], esp
// 00540235  51                   push ecx
// 00540236  56                   push esi
// 00540237  8bf1                 mov esi, ecx
// 00540239  57                   push edi
// 0054023a  89742408             mov dword ptr [esp + 8], esi
// 0054023e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00540242  c7069cf2a100         mov dword ptr [esi], 0xa1f29c
// 00540248  c7460400000000       mov dword ptr [esi + 4], 0
// 0054024f  8b38                 mov edi, dword ptr [eax]
// 00540251  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00540259  e8c2f7ffff           call 0x53fa20
// 0054025e  897e04               mov dword ptr [esi + 4], edi
// 00540261  85ff                 test edi, edi
// 00540263  7423                 je 0x540288
// 00540265  6a08                 push 8
// 00540267  e834772600           call 0x7a79a0
// 0054026c  83c404               add esp, 4
// 0054026f  85c0                 test eax, eax
// 00540271  740d                 je 0x540280
// 00540273  8b4e04               mov ecx, dword ptr [esi + 4]
// 00540276  8b4908               mov ecx, dword ptr [ecx + 8]
// 00540279  8930                 mov dword ptr [eax], esi
// 0054027b  894804               mov dword ptr [eax + 4], ecx
// 0054027e  eb02                 jmp 0x540282
// 00540280  33c0                 xor eax, eax
// 00540282  8b5604               mov edx, dword ptr [esi + 4]
// 00540285  894208               mov dword ptr [edx + 8], eax
// 00540288  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054028c  5f                   pop edi
// 0054028d  8bc6                 mov eax, esi
// 0054028f  5e                   pop esi
// 00540290  64890d00000000       mov dword ptr fs:[0], ecx
// 00540297  83c410               add esp, 0x10
// 0054029a  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ??0?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@QAE@ABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
