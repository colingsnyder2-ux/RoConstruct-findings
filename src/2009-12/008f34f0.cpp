// roc 2009-12 008f34f0  unit: CXTColorSelectorCtrlThemeFactory  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f34f0
//
// 008f34f0  6aff                 push -1
// 008f34f2  68f16b9600           push 0x966bf1
// 008f34f7  64a100000000         mov eax, dword ptr fs:[0]
// 008f34fd  50                   push eax
// 008f34fe  56                   push esi
// 008f34ff  a10052b600           mov eax, dword ptr [0xb65200]
// 008f3504  33c4                 xor eax, esp
// 008f3506  50                   push eax
// 008f3507  8d442408             lea eax, [esp + 8]
// 008f350b  64a300000000         mov dword ptr fs:[0], eax
// 008f3511  8b742418             mov esi, dword ptr [esp + 0x18]
// 008f3515  8bc6                 mov eax, esi
// 008f3517  83e801               sub eax, 1
// 008f351a  6a30                 push 0x30
// 008f351c  7447                 je 0x8f3565
// 008f351e  83e801               sub eax, 1
// 008f3521  7421                 je 0x8f3544
// 008f3523  e83803f0ff           call 0x7f3860
// 008f3528  83c404               add esp, 4
// 008f352b  89442418             mov dword ptr [esp + 0x18], eax
// 008f352f  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008f3537  85c0                 test eax, eax
// 008f3539  744b                 je 0x8f3586
// 008f353b  8bc8                 mov ecx, eax
// 008f353d  e88efdffff           call 0x8f32d0
// 008f3542  eb44                 jmp 0x8f3588
// 008f3544  e81703f0ff           call 0x7f3860
// 008f3549  83c404               add esp, 4
// 008f354c  89442418             mov dword ptr [esp + 0x18], eax
// 008f3550  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008f3558  85c0                 test eax, eax
// 008f355a  742a                 je 0x8f3586
// 008f355c  8bc8                 mov ecx, eax
// 008f355e  e89dfeffff           call 0x8f3400
// 008f3563  eb23                 jmp 0x8f3588
// 008f3565  e8f602f0ff           call 0x7f3860
// 008f356a  83c404               add esp, 4
// 008f356d  89442418             mov dword ptr [esp + 0x18], eax
// 008f3571  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f3579  85c0                 test eax, eax
// 008f357b  7409                 je 0x8f3586
// 008f357d  8bc8                 mov ecx, eax
// 008f357f  e8ecfdffff           call 0x8f3370
// 008f3584  eb02                 jmp 0x8f3588
// 008f3586  33c0                 xor eax, eax
// 008f3588  897008               mov dword ptr [eax + 8], esi
// 008f358b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f358f  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3596  59                   pop ecx
// 008f3597  5e                   pop esi
// 008f3598  83c40c               add esp, 0xc
// 008f359b  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTColorSelectorCtrlThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrlTheme.cpp