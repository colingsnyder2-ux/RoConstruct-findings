// roc 2009-06 008199b0  unit: CXTButtonThemeFactory  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008199b0
//
// 008199b0  6aff                 push -1
// 008199b2  68e12a8800           push 0x882ae1
// 008199b7  64a100000000         mov eax, dword ptr fs:[0]
// 008199bd  50                   push eax
// 008199be  56                   push esi
// 008199bf  a1304fa200           mov eax, dword ptr [0xa24f30]
// 008199c4  33c4                 xor eax, esp
// 008199c6  50                   push eax
// 008199c7  8d442408             lea eax, [esp + 8]
// 008199cb  64a300000000         mov dword ptr fs:[0], eax
// 008199d1  8b742418             mov esi, dword ptr [esp + 0x18]
// 008199d5  8bc6                 mov eax, esi
// 008199d7  83e801               sub eax, 1
// 008199da  7453                 je 0x819a2f
// 008199dc  83e801               sub eax, 1
// 008199df  7426                 je 0x819a07
// 008199e1  6880000000           push 0x80
// 008199e6  e84df0efff           call 0x718a38
// 008199eb  83c404               add esp, 4
// 008199ee  89442418             mov dword ptr [esp + 0x18], eax
// 008199f2  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008199fa  85c0                 test eax, eax
// 008199fc  7459                 je 0x819a57
// 008199fe  8bc8                 mov ecx, eax
// 00819a00  e89bf7ffff           call 0x8191a0
// 00819a05  eb52                 jmp 0x819a59
// 00819a07  68c8000000           push 0xc8
// 00819a0c  e827f0efff           call 0x718a38
// 00819a11  83c404               add esp, 4
// 00819a14  89442418             mov dword ptr [esp + 0x18], eax
// 00819a18  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00819a20  85c0                 test eax, eax
// 00819a22  7433                 je 0x819a57
// 00819a24  6a00                 push 0
// 00819a26  8bc8                 mov ecx, eax
// 00819a28  e833fdffff           call 0x819760
// 00819a2d  eb2a                 jmp 0x819a59
// 00819a2f  68c8000000           push 0xc8
// 00819a34  e8ffefefff           call 0x718a38
// 00819a39  83c404               add esp, 4
// 00819a3c  89442418             mov dword ptr [esp + 0x18], eax
// 00819a40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00819a48  85c0                 test eax, eax
// 00819a4a  740b                 je 0x819a57
// 00819a4c  6a00                 push 0
// 00819a4e  8bc8                 mov ecx, eax
// 00819a50  e8abfaffff           call 0x819500
// 00819a55  eb02                 jmp 0x819a59
// 00819a57  33c0                 xor eax, eax
// 00819a59  897008               mov dword ptr [eax + 8], esi
// 00819a5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00819a60  64890d00000000       mov dword ptr fs:[0], ecx
// 00819a67  59                   pop ecx
// 00819a68  5e                   pop esi
// 00819a69  83c40c               add esp, 0xc
// 00819a6c  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTButtonThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp