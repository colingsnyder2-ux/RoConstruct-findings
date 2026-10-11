// roc 2007-03 0057f440  unit: seg_00570000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057f440
//
// 0057f440  81ecd0000000         sub esp, 0xd0
// 0057f446  56                   push esi
// 0057f447  8bb424d8000000       mov esi, dword ptr [esp + 0xd8]
// 0057f44e  6864d97a00           push 0x7ad964
// 0057f453  8bce                 mov ecx, esi
// 0057f455  ff15f0e67700         call dword ptr [0x77e6f0]
// 0057f45b  8d442404             lea eax, [esp + 4]
// 0057f45f  50                   push eax
// 0057f460  ff152cf17700         call dword ptr [0x77f12c]
// 0057f466  6a7e                 push 0x7e
// 0057f468  8d4c245a             lea ecx, [esp + 0x5a]
// 0057f46c  6a00                 push 0
// 0057f46e  51                   push ecx
// 0057f46f  66c74424600000       mov word ptr [esp + 0x60], 0
// 0057f476  e8a1fb0900           call 0x61f01c
// 0057f47b  83c40c               add esp, 0xc
// 0057f47e  6a40                 push 0x40
// 0057f480  8d542458             lea edx, [esp + 0x58]
// 0057f484  52                   push edx
// 0057f485  8d44240c             lea eax, [esp + 0xc]
// 0057f489  50                   push eax
// 0057f48a  ff1514f17700         call dword ptr [0x77f114]
// 0057f490  6a00                 push 0
// 0057f492  6a00                 push 0
// 0057f494  6a40                 push 0x40
// 0057f496  8d4c2420             lea ecx, [esp + 0x20]
// 0057f49a  51                   push ecx
// 0057f49b  6a40                 push 0x40
// 0057f49d  8d542468             lea edx, [esp + 0x68]
// 0057f4a1  52                   push edx
// 0057f4a2  6a00                 push 0
// 0057f4a4  6a00                 push 0
// 0057f4a6  ff15d4d27700         call dword ptr [0x77d2d4]
// 0057f4ac  8d442414             lea eax, [esp + 0x14]
// 0057f4b0  50                   push eax
// 0057f4b1  8bce                 mov ecx, esi
// 0057f4b3  ff153ce77700         call dword ptr [0x77e73c]
// 0057f4b9  6a01                 push 1
// 0057f4bb  6a28                 push 0x28
// 0057f4bd  8bce                 mov ecx, esi
// 0057f4bf  ff1500e77700         call dword ptr [0x77e700]
// 0057f4c5  6a01                 push 1
// 0057f4c7  6a1b                 push 0x1b
// 0057f4c9  8bce                 mov ecx, esi
// 0057f4cb  ff1500e77700         call dword ptr [0x77e700]
// 0057f4d1  6a01                 push 1
// 0057f4d3  6a16                 push 0x16
// 0057f4d5  8bce                 mov ecx, esi
// 0057f4d7  ff1500e77700         call dword ptr [0x77e700]
// 0057f4dd  6a01                 push 1
// 0057f4df  6a11                 push 0x11
// 0057f4e1  8bce                 mov ecx, esi
// 0057f4e3  ff1500e77700         call dword ptr [0x77e700]
// 0057f4e9  6a01                 push 1
// 0057f4eb  6a0c                 push 0xc
// 0057f4ed  8bce                 mov ecx, esi
// 0057f4ef  ff1500e77700         call dword ptr [0x77e700]
// 0057f4f5  6a01                 push 1
// 0057f4f7  6a03                 push 3
// 0057f4f9  8bce                 mov ecx, esi
// 0057f4fb  ff1500e77700         call dword ptr [0x77e700]
// 0057f501  5e                   pop esi
// 0057f502  81c4d0000000         add esp, 0xd0
// 0057f508  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?generateGUID@Guid@RBX@@SAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Guid.cpp
