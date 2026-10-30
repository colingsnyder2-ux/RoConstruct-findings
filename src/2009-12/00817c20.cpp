// roc 2009-12 00817c20  unit: CXTPCommandBarsOptions  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817c20
//
// 00817c20  6aff                 push -1
// 00817c22  68689f9500           push 0x959f68
// 00817c27  64a100000000         mov eax, dword ptr fs:[0]
// 00817c2d  50                   push eax
// 00817c2e  83ec48               sub esp, 0x48
// 00817c31  56                   push esi
// 00817c32  a10052b600           mov eax, dword ptr [0xb65200]
// 00817c37  33c4                 xor eax, esp
// 00817c39  50                   push eax
// 00817c3a  8d442450             lea eax, [esp + 0x50]
// 00817c3e  64a300000000         mov dword ptr fs:[0], eax
// 00817c44  8bf1                 mov esi, ecx
// 00817c46  8b442460             mov eax, dword ptr [esp + 0x60]
// 00817c4a  50                   push eax
// 00817c4b  8d4c240c             lea ecx, [esp + 0xc]
// 00817c4f  e84c9e0300           call 0x851aa0
// 00817c54  6a00                 push 0
// 00817c56  8d4c240c             lea ecx, [esp + 0xc]
// 00817c5a  51                   push ecx
// 00817c5b  8bce                 mov ecx, esi
// 00817c5d  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00817c65  e826fdffff           call 0x817990
// 00817c6a  8d4c2408             lea ecx, [esp + 8]
// 00817c6e  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00817c76  e8f5830300           call 0x850070
// 00817c7b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00817c7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00817c86  59                   pop ecx
// 00817c87  5e                   pop esi
// 00817c88  83c454               add esp, 0x54
// 00817c8b  c20400               ret 4
// copied from an identical function in another client (function ?Serialize@CXTPCommandBarsOptions@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp