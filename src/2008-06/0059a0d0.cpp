// roc 2008-06 0059a0d0  unit: RBX::PartInstance  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a0d0
//
// 0059a0d0  6aff                 push -1
// 0059a0d2  68e8a47c00           push 0x7ca4e8
// 0059a0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0059a0dd  50                   push eax
// 0059a0de  64892500000000       mov dword ptr fs:[0], esp
// 0059a0e5  51                   push ecx
// 0059a0e6  53                   push ebx
// 0059a0e7  56                   push esi
// 0059a0e8  33db                 xor ebx, ebx
// 0059a0ea  8bf1                 mov esi, ecx
// 0059a0ec  895c2408             mov dword ptr [esp + 8], ebx
// 0059a0f0  57                   push edi
// 0059a0f1  385e04               cmp byte ptr [esi + 4], bl
// 0059a0f4  746f                 je 0x59a165
// 0059a0f6  8b4608               mov eax, dword ptr [esi + 8]
// 0059a0f9  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 0059a0ff  8d4c240c             lea ecx, [esp + 0xc]
// 0059a103  51                   push ecx
// 0059a104  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0059a107  8b140a               mov edx, dword ptr [edx + ecx]
// 0059a10a  035614               add edx, dword ptr [esi + 0x14]
// 0059a10d  8d8c0234010000       lea ecx, [edx + eax + 0x134]
// 0059a114  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059a117  ffd0                 call eax
// 0059a119  8b08                 mov ecx, dword ptr [eax]
// 0059a11b  51                   push ecx
// 0059a11c  8bce                 mov ecx, esi
// 0059a11e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0059a122  e879eeffff           call 0x598fa0
// 0059a127  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059a12b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0059a133  3bc3                 cmp eax, ebx
// 0059a135  742b                 je 0x59a162
// 0059a137  83c004               add eax, 4
// 0059a13a  50                   push eax
// 0059a13b  ff15ac218000         call dword ptr [0x8021ac]
// 0059a141  85c0                 test eax, eax
// 0059a143  7519                 jne 0x59a15e
// 0059a145  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a149  e8420cecff           call 0x45ad90
// 0059a14e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059a152  3bcb                 cmp ecx, ebx
// 0059a154  7408                 je 0x59a15e
// 0059a156  8b11                 mov edx, dword ptr [ecx]
// 0059a158  8b02                 mov eax, dword ptr [edx]
// 0059a15a  6a01                 push 1
// 0059a15c  ffd0                 call eax
// 0059a15e  895c240c             mov dword ptr [esp + 0xc], ebx
// 0059a162  885e04               mov byte ptr [esi + 4], bl
// 0059a165  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0059a169  891f                 mov dword ptr [edi], ebx
// 0059a16b  8b0e                 mov ecx, dword ptr [esi]
// 0059a16d  51                   push ecx
// 0059a16e  8bcf                 mov ecx, edi
// 0059a170  e82beeffff           call 0x598fa0
// 0059a175  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059a179  8bc7                 mov eax, edi
// 0059a17b  5f                   pop edi
// 0059a17c  5e                   pop esi
// 0059a17d  5b                   pop ebx
// 0059a17e  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a185  83c410               add esp, 0x10
// 0059a188  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?getValue@?$ComputeProp@V?$ReferenceCountedPointer@VController@RBX@@@G3D@@VPVInstance@RBX@@@RBX@@QBE?AV?$ReferenceCountedPointer@VController@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
