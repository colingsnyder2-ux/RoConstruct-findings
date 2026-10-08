// roc 2007-08 005ff450  unit: RBX::BallBallContact  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ff450
//
// 005ff450  6aff                 push -1
// 005ff452  681bb67500           push 0x75b61b
// 005ff457  64a100000000         mov eax, dword ptr fs:[0]
// 005ff45d  50                   push eax
// 005ff45e  64892500000000       mov dword ptr fs:[0], esp
// 005ff465  51                   push ecx
// 005ff466  56                   push esi
// 005ff467  57                   push edi
// 005ff468  6a24                 push 0x24
// 005ff46a  8bf1                 mov esi, ecx
// 005ff46c  e8850a0300           call 0x62fef6
// 005ff471  83c404               add esp, 4
// 005ff474  89442408             mov dword ptr [esp + 8], eax
// 005ff478  85c0                 test eax, eax
// 005ff47a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005ff47e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ff486  740b                 je 0x5ff493
// 005ff488  56                   push esi
// 005ff489  57                   push edi
// 005ff48a  8bc8                 mov ecx, eax
// 005ff48c  e84f09feff           call 0x5dfde0
// 005ff491  eb02                 jmp 0x5ff495
// 005ff493  33c0                 xor eax, eax
// 005ff495  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ff499  897e04               mov dword ptr [esi + 4], edi
// 005ff49c  8906                 mov dword ptr [esi], eax
// 005ff49e  5f                   pop edi
// 005ff49f  8bc6                 mov eax, esi
// 005ff4a1  5e                   pop esi
// 005ff4a2  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff4a9  83c410               add esp, 0x10
// 005ff4ac  c20400               ret 4
// library rbxgs/v8world\ContactManager.cpp (function ??0ContactManager@RBX@@QAE@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
