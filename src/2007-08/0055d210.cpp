// roc 2007-08 0055d210  unit: RBX::DataModel  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d210
//
// 0055d210  6aff                 push -1
// 0055d212  68a13b7500           push 0x753ba1
// 0055d217  64a100000000         mov eax, dword ptr fs:[0]
// 0055d21d  50                   push eax
// 0055d21e  64892500000000       mov dword ptr fs:[0], esp
// 0055d225  83ec14               sub esp, 0x14
// 0055d228  53                   push ebx
// 0055d229  33db                 xor ebx, ebx
// 0055d22b  56                   push esi
// 0055d22c  895c2424             mov dword ptr [esp + 0x24], ebx
// 0055d230  895c2408             mov dword ptr [esp + 8], ebx
// 0055d234  e807b5eaff           call 0x408740
// 0055d239  8bc8                 mov ecx, eax
// 0055d23b  e850a7feff           call 0x547990
// 0055d240  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0055d244  56                   push esi
// 0055d245  e846ffffff           call 0x55d190
// 0055d24a  8b06                 mov eax, dword ptr [esi]
// 0055d24c  51                   push ecx
// 0055d24d  8bcc                 mov ecx, esp
// 0055d24f  8901                 mov dword ptr [ecx], eax
// 0055d251  8b4604               mov eax, dword ptr [esi + 4]
// 0055d254  3bc3                 cmp eax, ebx
// 0055d256  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0055d25a  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0055d262  89642414             mov dword ptr [esp + 0x14], esp
// 0055d266  894104               mov dword ptr [ecx + 4], eax
// 0055d269  740c                 je 0x55d277
// 0055d26b  83c004               add eax, 4
// 0055d26e  b901000000           mov ecx, 1
// 0055d273  f00fc108             lock xadd dword ptr [eax], ecx
// 0055d277  8d4c2418             lea ecx, [esp + 0x18]
// 0055d27b  e8d002ebff           call 0x40d550
// 0055d280  8b0e                 mov ecx, dword ptr [esi]
// 0055d282  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0055d28a  e831d8ffff           call 0x55aac0
// 0055d28f  8d4c2410             lea ecx, [esp + 0x10]
// 0055d293  885c2424             mov byte ptr [esp + 0x24], bl
// 0055d297  e804c3ffff           call 0x5595a0
// 0055d29c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055d2a0  8bc6                 mov eax, esi
// 0055d2a2  5e                   pop esi
// 0055d2a3  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d2aa  5b                   pop ebx
// 0055d2ab  83c420               add esp, 0x20
// 0055d2ae  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?createDataModel@DataModel@RBX@@SA?AV?$shared_ptr@VDataModel@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
