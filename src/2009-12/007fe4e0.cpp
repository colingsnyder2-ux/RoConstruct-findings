// roc 2009-12 007fe4e0  unit: CXTPPaintManager  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe4e0
//
// 007fe4e0  6aff                 push -1
// 007fe4e2  6876919500           push 0x959176
// 007fe4e7  64a100000000         mov eax, dword ptr fs:[0]
// 007fe4ed  50                   push eax
// 007fe4ee  56                   push esi
// 007fe4ef  a10052b600           mov eax, dword ptr [0xb65200]
// 007fe4f4  33c4                 xor eax, esp
// 007fe4f6  50                   push eax
// 007fe4f7  8d442408             lea eax, [esp + 8]
// 007fe4fb  64a300000000         mov dword ptr fs:[0], eax
// 007fe501  8b742418             mov esi, dword ptr [esp + 0x18]
// 007fe505  83fe01               cmp esi, 1
// 007fe508  752d                 jne 0x7fe537
// 007fe50a  685c040000           push 0x45c
// 007fe50f  e84c53ffff           call 0x7f3860
// 007fe514  83c404               add esp, 4
// 007fe517  89442418             mov dword ptr [esp + 0x18], eax
// 007fe51b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007fe523  85c0                 test eax, eax
// 007fe525  0f841b010000         je 0x7fe646
// 007fe52b  8bc8                 mov ecx, eax
// 007fe52d  e83e9b0800           call 0x888070
// 007fe532  e911010000           jmp 0x7fe648
// 007fe537  83fe02               cmp esi, 2
// 007fe53a  752d                 jne 0x7fe569
// 007fe53c  68b0050000           push 0x5b0
// 007fe541  e81a53ffff           call 0x7f3860
// 007fe546  83c404               add esp, 4
// 007fe549  89442418             mov dword ptr [esp + 0x18], eax
// 007fe54d  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007fe555  85c0                 test eax, eax
// 007fe557  0f84e9000000         je 0x7fe646
// 007fe55d  8bc8                 mov ecx, eax
// 007fe55f  e81c4e0800           call 0x883380
// 007fe564  e9df000000           jmp 0x7fe648
// 007fe569  83fe03               cmp esi, 3
// 007fe56c  752d                 jne 0x7fe59b
// 007fe56e  68a8040000           push 0x4a8
// 007fe573  e8e852ffff           call 0x7f3860
// 007fe578  83c404               add esp, 4
// 007fe57b  89442418             mov dword ptr [esp + 0x18], eax
// 007fe57f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007fe587  85c0                 test eax, eax
// 007fe589  0f84b7000000         je 0x7fe646
// 007fe58f  8bc8                 mov ecx, eax
// 007fe591  e8ea870800           call 0x886d80
// 007fe596  e9ad000000           jmp 0x7fe648
// 007fe59b  83fe04               cmp esi, 4
// 007fe59e  752a                 jne 0x7fe5ca
// 007fe5a0  68b0050000           push 0x5b0
// 007fe5a5  e8b652ffff           call 0x7f3860
// 007fe5aa  83c404               add esp, 4
// 007fe5ad  89442418             mov dword ptr [esp + 0x18], eax
// 007fe5b1  c744241003000000     mov dword ptr [esp + 0x10], 3
// 007fe5b9  85c0                 test eax, eax
// 007fe5bb  0f8485000000         je 0x7fe646
// 007fe5c1  8bc8                 mov ecx, eax
// 007fe5c3  e8b8780800           call 0x885e80
// 007fe5c8  eb7e                 jmp 0x7fe648
// 007fe5ca  83fe05               cmp esi, 5
// 007fe5cd  7526                 jne 0x7fe5f5
// 007fe5cf  684c060000           push 0x64c
// 007fe5d4  e88752ffff           call 0x7f3860
// 007fe5d9  83c404               add esp, 4
// 007fe5dc  89442418             mov dword ptr [esp + 0x18], eax
// 007fe5e0  c744241004000000     mov dword ptr [esp + 0x10], 4
// 007fe5e8  85c0                 test eax, eax
// 007fe5ea  745a                 je 0x7fe646
// 007fe5ec  8bc8                 mov ecx, eax
// 007fe5ee  e8fd080800           call 0x87eef0
// 007fe5f3  eb53                 jmp 0x7fe648
// 007fe5f5  83fe06               cmp esi, 6
// 007fe5f8  7526                 jne 0x7fe620
// 007fe5fa  68a4060000           push 0x6a4
// 007fe5ff  e85c52ffff           call 0x7f3860
// 007fe604  83c404               add esp, 4
// 007fe607  89442418             mov dword ptr [esp + 0x18], eax
// 007fe60b  c744241005000000     mov dword ptr [esp + 0x10], 5
// 007fe613  85c0                 test eax, eax
// 007fe615  742f                 je 0x7fe646
// 007fe617  8bc8                 mov ecx, eax
// 007fe619  e8c28b0700           call 0x8771e0
// 007fe61e  eb28                 jmp 0x7fe648
// 007fe620  6860040000           push 0x460
// 007fe625  e83652ffff           call 0x7f3860
// 007fe62a  83c404               add esp, 4
// 007fe62d  89442418             mov dword ptr [esp + 0x18], eax
// 007fe631  c744241006000000     mov dword ptr [esp + 0x10], 6
// 007fe639  85c0                 test eax, eax
// 007fe63b  7409                 je 0x7fe646
// 007fe63d  8bc8                 mov ecx, eax
// 007fe63f  e87cdc0700           call 0x87c2c0
// 007fe644  eb02                 jmp 0x7fe648
// 007fe646  33c0                 xor eax, eax
// 007fe648  89b044010000         mov dword ptr [eax + 0x144], esi
// 007fe64e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fe652  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe659  59                   pop ecx
// 007fe65a  5e                   pop esi
// 007fe65b  83c40c               add esp, 0xc
// 007fe65e  c3                   ret 
// copied from an identical function in another client (function ?CreateTheme@CXTPPaintManager@@SAPAV1@W4XTPPaintTheme@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp