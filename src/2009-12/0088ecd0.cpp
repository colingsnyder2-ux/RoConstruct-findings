// roc 2009-12 0088ecd0  unit: CXTPShortcutManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ecd0
//
// 0088ecd0  6aff                 push -1
// 0088ecd2  6842109600           push 0x961042
// 0088ecd7  64a100000000         mov eax, dword ptr fs:[0]
// 0088ecdd  50                   push eax
// 0088ecde  83ec10               sub esp, 0x10
// 0088ece1  56                   push esi
// 0088ece2  57                   push edi
// 0088ece3  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ece8  33c4                 xor eax, esp
// 0088ecea  50                   push eax
// 0088eceb  8d44241c             lea eax, [esp + 0x1c]
// 0088ecef  64a300000000         mov dword ptr fs:[0], eax
// 0088ecf5  8bf9                 mov edi, ecx
// 0088ecf7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0088ecff  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0088ed03  8bce                 mov ecx, esi
// 0088ed05  ff1574de9800         call dword ptr [0x98de74]
// 0088ed0b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0088ed0f  57                   push edi
// 0088ed10  50                   push eax
// 0088ed11  8d4c2418             lea ecx, [esp + 0x18]
// 0088ed15  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0088ed1d  e82ef5ffff           call 0x88e250
// 0088ed22  56                   push esi
// 0088ed23  8d4c2414             lea ecx, [esp + 0x14]
// 0088ed27  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0088ed2f  e82cfbffff           call 0x88e860
// 0088ed34  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088ed38  85d2                 test edx, edx
// 0088ed3a  740b                 je 0x88ed47
// 0088ed3c  8d4c2410             lea ecx, [esp + 0x10]
// 0088ed40  e83bf5ffff           call 0x88e280
// 0088ed45  8902                 mov dword ptr [edx], eax
// 0088ed47  8bc6                 mov eax, esi
// 0088ed49  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088ed4d  64890d00000000       mov dword ptr fs:[0], ecx
// 0088ed54  59                   pop ecx
// 0088ed55  5f                   pop edi
// 0088ed56  5e                   pop esi
// 0088ed57  83c41c               add esp, 0x1c
// 0088ed5a  c20c00               ret 0xc
// copied from an identical function in another client (function ?Format@CXTPShortcutManager@@UAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAUtagACCEL@@PAH@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp