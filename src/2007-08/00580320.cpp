// roc 2007-08 00580320  unit: RBX::Log  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580320
//
// 00580320  81ecd0000000         sub esp, 0xd0
// 00580326  56                   push esi
// 00580327  8bb424d8000000       mov esi, dword ptr [esp + 0xd8]
// 0058032e  68dcbf7a00           push 0x7abfdc
// 00580333  8bce                 mov ecx, esi
// 00580335  ff152ce67700         call dword ptr [0x77e62c]
// 0058033b  8d442404             lea eax, [esp + 4]
// 0058033f  50                   push eax
// 00580340  ff15fcef7700         call dword ptr [0x77effc]
// 00580346  6a7e                 push 0x7e
// 00580348  8d4c245a             lea ecx, [esp + 0x5a]
// 0058034c  6a00                 push 0
// 0058034e  51                   push ecx
// 0058034f  66c74424600000       mov word ptr [esp + 0x60], 0
// 00580356  e831080b00           call 0x630b8c
// 0058035b  83c40c               add esp, 0xc
// 0058035e  6a40                 push 0x40
// 00580360  8d542458             lea edx, [esp + 0x58]
// 00580364  52                   push edx
// 00580365  8d44240c             lea eax, [esp + 0xc]
// 00580369  50                   push eax
// 0058036a  ff1508f07700         call dword ptr [0x77f008]
// 00580370  6a00                 push 0
// 00580372  6a00                 push 0
// 00580374  6a40                 push 0x40
// 00580376  8d4c2420             lea ecx, [esp + 0x20]
// 0058037a  51                   push ecx
// 0058037b  6a40                 push 0x40
// 0058037d  8d542468             lea edx, [esp + 0x68]
// 00580381  52                   push edx
// 00580382  6a00                 push 0
// 00580384  6a00                 push 0
// 00580386  ff1514d37700         call dword ptr [0x77d314]
// 0058038c  8d442414             lea eax, [esp + 0x14]
// 00580390  50                   push eax
// 00580391  8bce                 mov ecx, esi
// 00580393  ff1560e67700         call dword ptr [0x77e660]
// 00580399  6a01                 push 1
// 0058039b  6a28                 push 0x28
// 0058039d  8bce                 mov ecx, esi
// 0058039f  ff1540e67700         call dword ptr [0x77e640]
// 005803a5  6a01                 push 1
// 005803a7  6a1b                 push 0x1b
// 005803a9  8bce                 mov ecx, esi
// 005803ab  ff1540e67700         call dword ptr [0x77e640]
// 005803b1  6a01                 push 1
// 005803b3  6a16                 push 0x16
// 005803b5  8bce                 mov ecx, esi
// 005803b7  ff1540e67700         call dword ptr [0x77e640]
// 005803bd  6a01                 push 1
// 005803bf  6a11                 push 0x11
// 005803c1  8bce                 mov ecx, esi
// 005803c3  ff1540e67700         call dword ptr [0x77e640]
// 005803c9  6a01                 push 1
// 005803cb  6a0c                 push 0xc
// 005803cd  8bce                 mov ecx, esi
// 005803cf  ff1540e67700         call dword ptr [0x77e640]
// 005803d5  6a01                 push 1
// 005803d7  6a03                 push 3
// 005803d9  8bce                 mov ecx, esi
// 005803db  ff1540e67700         call dword ptr [0x77e640]
// 005803e1  5e                   pop esi
// 005803e2  81c4d0000000         add esp, 0xd0
// 005803e8  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?generateGUID@Guid@RBX@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Guid.cpp
