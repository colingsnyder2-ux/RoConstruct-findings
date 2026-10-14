// roc 2008-06 005d13d0  unit: RBX::HopperBin  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d13d0
//
// 005d13d0  6aff                 push -1
// 005d13d2  6885577d00           push 0x7d5785
// 005d13d7  64a100000000         mov eax, dword ptr fs:[0]
// 005d13dd  50                   push eax
// 005d13de  64892500000000       mov dword ptr fs:[0], esp
// 005d13e5  83ec78               sub esp, 0x78
// 005d13e8  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 005d13ef  56                   push esi
// 005d13f0  57                   push edi
// 005d13f1  50                   push eax
// 005d13f2  8bf9                 mov edi, ecx
// 005d13f4  8d4c2428             lea ecx, [esp + 0x28]
// 005d13f8  68c0b48300           push 0x83b4c0
// 005d13fd  51                   push ecx
// 005d13fe  ff1568238000         call dword ptr [0x802368]
// 005d1404  68b8b48300           push 0x83b4b8
// 005d1409  50                   push eax
// 005d140a  8d54241c             lea edx, [esp + 0x1c]
// 005d140e  52                   push edx
// 005d140f  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 005d141a  ff15e4238000         call dword ptr [0x8023e4]
// 005d1420  50                   push eax
// 005d1421  8d44247c             lea eax, [esp + 0x7c]
// 005d1425  50                   push eax
// 005d1426  c68424a800000001     mov byte ptr [esp + 0xa8], 1
// 005d142e  e8cdb0f8ff           call 0x55c500
// 005d1433  83c420               add esp, 0x20
// 005d1436  8bf0                 mov esi, eax
// 005d1438  56                   push esi
// 005d1439  8d4c2444             lea ecx, [esp + 0x44]
// 005d143d  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 005d1445  ff155c248000         call dword ptr [0x80245c]
// 005d144b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005d144e  894c245c             mov dword ptr [esp + 0x5c], ecx
// 005d1452  8d4c2460             lea ecx, [esp + 0x60]
// 005d1456  c684248800000004     mov byte ptr [esp + 0x88], 4
// 005d145e  ff1568248000         call dword ptr [0x802468]
// 005d1464  8d4c2408             lea ecx, [esp + 8]
// 005d1468  c684248800000005     mov byte ptr [esp + 0x88], 5
// 005d1470  ff1568248000         call dword ptr [0x802468]
// 005d1476  8d4c2424             lea ecx, [esp + 0x24]
// 005d147a  c684248800000006     mov byte ptr [esp + 0x88], 6
// 005d1482  ff1568248000         call dword ptr [0x802468]
// 005d1488  8d542440             lea edx, [esp + 0x40]
// 005d148c  52                   push edx
// 005d148d  8bcf                 mov ecx, edi
// 005d148f  e84cfdffff           call 0x5d11e0
// 005d1494  8d4c2440             lea ecx, [esp + 0x40]
// 005d1498  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 005d14a3  ff1568248000         call dword ptr [0x802468]
// 005d14a9  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005d14b0  5f                   pop edi
// 005d14b1  5e                   pop esi
// 005d14b2  64890d00000000       mov dword ptr fs:[0], ecx
// 005d14b9  81c484000000         add esp, 0x84
// 005d14bf  c20400               ret 4
// library rbxgs-dll/v8datamodel\Hopper.cpp (function ?setLegacyTextureName@HopperBin@RBX@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll v8datamodel/Hopper.cpp
