// roc 2009-12 0085b4d0  unit: CXTPStatusBar  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b4d0
//
// 0085b4d0  6aff                 push -1
// 0085b4d2  68a9df9500           push 0x95dfa9
// 0085b4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0085b4dd  50                   push eax
// 0085b4de  56                   push esi
// 0085b4df  57                   push edi
// 0085b4e0  a10052b600           mov eax, dword ptr [0xb65200]
// 0085b4e5  33c4                 xor eax, esp
// 0085b4e7  50                   push eax
// 0085b4e8  8d44240c             lea eax, [esp + 0xc]
// 0085b4ec  64a300000000         mov dword ptr fs:[0], eax
// 0085b4f2  8bf1                 mov esi, ecx
// 0085b4f4  6a00                 push 0
// 0085b4f6  e895feffff           call 0x85b390
// 0085b4fb  8bf8                 mov edi, eax
// 0085b4fd  85ff                 test edi, edi
// 0085b4ff  7d17                 jge 0x85b518
// 0085b501  83c8ff               or eax, 0xffffffff
// 0085b504  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b508  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b50f  59                   pop ecx
// 0085b510  5f                   pop edi
// 0085b511  5e                   pop esi
// 0085b512  83c40c               add esp, 0xc
// 0085b515  c20800               ret 8
// 0085b518  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085b51c  50                   push eax
// 0085b51d  8d4c2424             lea ecx, [esp + 0x24]
// 0085b521  ff15b8de9800         call dword ptr [0x98deb8]
// 0085b527  6a01                 push 1
// 0085b529  8d4c2424             lea ecx, [esp + 0x24]
// 0085b52d  51                   push ecx
// 0085b52e  57                   push edi
// 0085b52f  8bce                 mov ecx, esi
// 0085b531  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0085b539  e8c2feffff           call 0x85b400
// 0085b53e  8bf0                 mov esi, eax
// 0085b540  f7de                 neg esi
// 0085b542  1bf6                 sbb esi, esi
// 0085b544  f7de                 neg esi
// 0085b546  8d4c2420             lea ecx, [esp + 0x20]
// 0085b54a  4e                   dec esi
// 0085b54b  ff15c0de9800         call dword ptr [0x98dec0]
// 0085b551  8bc6                 mov eax, esi
// 0085b553  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b557  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b55e  59                   pop ecx
// 0085b55f  5f                   pop edi
// 0085b560  5e                   pop esi
// 0085b561  83c40c               add esp, 0xc
// 0085b564  c20800               ret 8
// copied from an identical function in another client (function ?OnSetText@CXTPStatusBar@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp