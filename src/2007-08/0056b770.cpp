// roc 2007-08 0056b770  unit: ArchiveBinder  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056b770
//
// 0056b770  6aff                 push -1
// 0056b772  6888467500           push 0x754688
// 0056b777  64a100000000         mov eax, dword ptr fs:[0]
// 0056b77d  50                   push eax
// 0056b77e  64892500000000       mov dword ptr fs:[0], esp
// 0056b785  83ec14               sub esp, 0x14
// 0056b788  56                   push esi
// 0056b789  8d4c240c             lea ecx, [esp + 0xc]
// 0056b78d  e88e960900           call 0x604e20
// 0056b792  89442410             mov dword ptr [esp + 0x10], eax
// 0056b796  c6401901             mov byte ptr [eax + 0x19], 1
// 0056b79a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056b79e  894004               mov dword ptr [eax + 4], eax
// 0056b7a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056b7a5  8900                 mov dword ptr [eax], eax
// 0056b7a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056b7ab  894008               mov dword ptr [eax + 8], eax
// 0056b7ae  33c0                 xor eax, eax
// 0056b7b0  89442414             mov dword ptr [esp + 0x14], eax
// 0056b7b4  8b742428             mov esi, dword ptr [esp + 0x28]
// 0056b7b8  89442420             mov dword ptr [esp + 0x20], eax
// 0056b7bc  8d44240c             lea eax, [esp + 0xc]
// 0056b7c0  50                   push eax
// 0056b7c1  56                   push esi
// 0056b7c2  e8e9efffff           call 0x56a7b0
// 0056b7c7  8d4c2414             lea ecx, [esp + 0x14]
// 0056b7cb  51                   push ecx
// 0056b7cc  56                   push esi
// 0056b7cd  e88ee2ffff           call 0x569a60
// 0056b7d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056b7d6  8b10                 mov edx, dword ptr [eax]
// 0056b7d8  83c410               add esp, 0x10
// 0056b7db  50                   push eax
// 0056b7dc  8d4c2410             lea ecx, [esp + 0x10]
// 0056b7e0  51                   push ecx
// 0056b7e1  52                   push edx
// 0056b7e2  8bf1                 mov esi, ecx
// 0056b7e4  56                   push esi
// 0056b7e5  8d542414             lea edx, [esp + 0x14]
// 0056b7e9  52                   push edx
// 0056b7ea  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0056b7f2  e8b9edffff           call 0x56a5b0
// 0056b7f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056b7fb  50                   push eax
// 0056b7fc  e861440c00           call 0x62fc62
// 0056b801  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0056b805  83c404               add esp, 4
// 0056b808  5e                   pop esi
// 0056b809  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b810  83c420               add esp, 0x20
// 0056b813  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?isolateHandles@SerializerV2@@SAXPAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
