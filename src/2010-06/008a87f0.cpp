// roc 2010-06 008a87f0  unit: CXTButtonThemeFactory  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a87f0
//
// 008a87f0  6aff                 push -1
// 008a87f2  6821cb9b00           push 0x9bcb21
// 008a87f7  64a100000000         mov eax, dword ptr fs:[0]
// 008a87fd  50                   push eax
// 008a87fe  56                   push esi
// 008a87ff  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a8804  33c4                 xor eax, esp
// 008a8806  50                   push eax
// 008a8807  8d442408             lea eax, [esp + 8]
// 008a880b  64a300000000         mov dword ptr fs:[0], eax
// 008a8811  8b742418             mov esi, dword ptr [esp + 0x18]
// 008a8815  8bc6                 mov eax, esi
// 008a8817  83e801               sub eax, 1
// 008a881a  7453                 je 0x8a886f
// 008a881c  83e801               sub eax, 1
// 008a881f  7426                 je 0x8a8847
// 008a8821  6880000000           push 0x80
// 008a8826  e875f1efff           call 0x7a79a0
// 008a882b  83c404               add esp, 4
// 008a882e  89442418             mov dword ptr [esp + 0x18], eax
// 008a8832  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008a883a  85c0                 test eax, eax
// 008a883c  7459                 je 0x8a8897
// 008a883e  8bc8                 mov ecx, eax
// 008a8840  e88bf7ffff           call 0x8a7fd0
// 008a8845  eb52                 jmp 0x8a8899
// 008a8847  68c8000000           push 0xc8
// 008a884c  e84ff1efff           call 0x7a79a0
// 008a8851  83c404               add esp, 4
// 008a8854  89442418             mov dword ptr [esp + 0x18], eax
// 008a8858  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008a8860  85c0                 test eax, eax
// 008a8862  7433                 je 0x8a8897
// 008a8864  6a00                 push 0
// 008a8866  8bc8                 mov ecx, eax
// 008a8868  e833fdffff           call 0x8a85a0
// 008a886d  eb2a                 jmp 0x8a8899
// 008a886f  68c8000000           push 0xc8
// 008a8874  e827f1efff           call 0x7a79a0
// 008a8879  83c404               add esp, 4
// 008a887c  89442418             mov dword ptr [esp + 0x18], eax
// 008a8880  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008a8888  85c0                 test eax, eax
// 008a888a  740b                 je 0x8a8897
// 008a888c  6a00                 push 0
// 008a888e  8bc8                 mov ecx, eax
// 008a8890  e89bfaffff           call 0x8a8330
// 008a8895  eb02                 jmp 0x8a8899
// 008a8897  33c0                 xor eax, eax
// 008a8899  897008               mov dword ptr [eax + 8], esi
// 008a889c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a88a0  64890d00000000       mov dword ptr fs:[0], ecx
// 008a88a7  59                   pop ecx
// 008a88a8  5e                   pop esi
// 008a88a9  83c40c               add esp, 0xc
// 008a88ac  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTButtonThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp