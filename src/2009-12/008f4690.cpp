// roc 2009-12 008f4690  unit: CXTButtonThemeFactory  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4690
//
// 008f4690  6aff                 push -1
// 008f4692  68f16b9600           push 0x966bf1
// 008f4697  64a100000000         mov eax, dword ptr fs:[0]
// 008f469d  50                   push eax
// 008f469e  56                   push esi
// 008f469f  a10052b600           mov eax, dword ptr [0xb65200]
// 008f46a4  33c4                 xor eax, esp
// 008f46a6  50                   push eax
// 008f46a7  8d442408             lea eax, [esp + 8]
// 008f46ab  64a300000000         mov dword ptr fs:[0], eax
// 008f46b1  8b742418             mov esi, dword ptr [esp + 0x18]
// 008f46b5  8bc6                 mov eax, esi
// 008f46b7  83e801               sub eax, 1
// 008f46ba  7453                 je 0x8f470f
// 008f46bc  83e801               sub eax, 1
// 008f46bf  7426                 je 0x8f46e7
// 008f46c1  6880000000           push 0x80
// 008f46c6  e895f1efff           call 0x7f3860
// 008f46cb  83c404               add esp, 4
// 008f46ce  89442418             mov dword ptr [esp + 0x18], eax
// 008f46d2  c744241002000000     mov dword ptr [esp + 0x10], 2
// 008f46da  85c0                 test eax, eax
// 008f46dc  7459                 je 0x8f4737
// 008f46de  8bc8                 mov ecx, eax
// 008f46e0  e8abf7ffff           call 0x8f3e90
// 008f46e5  eb52                 jmp 0x8f4739
// 008f46e7  68c8000000           push 0xc8
// 008f46ec  e86ff1efff           call 0x7f3860
// 008f46f1  83c404               add esp, 4
// 008f46f4  89442418             mov dword ptr [esp + 0x18], eax
// 008f46f8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008f4700  85c0                 test eax, eax
// 008f4702  7433                 je 0x8f4737
// 008f4704  6a00                 push 0
// 008f4706  8bc8                 mov ecx, eax
// 008f4708  e833fdffff           call 0x8f4440
// 008f470d  eb2a                 jmp 0x8f4739
// 008f470f  68c8000000           push 0xc8
// 008f4714  e847f1efff           call 0x7f3860
// 008f4719  83c404               add esp, 4
// 008f471c  89442418             mov dword ptr [esp + 0x18], eax
// 008f4720  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008f4728  85c0                 test eax, eax
// 008f472a  740b                 je 0x8f4737
// 008f472c  6a00                 push 0
// 008f472e  8bc8                 mov ecx, eax
// 008f4730  e8bbfaffff           call 0x8f41f0
// 008f4735  eb02                 jmp 0x8f4739
// 008f4737  33c0                 xor eax, eax
// 008f4739  897008               mov dword ptr [eax + 8], esi
// 008f473c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f4740  64890d00000000       mov dword ptr fs:[0], ecx
// 008f4747  59                   pop ecx
// 008f4748  5e                   pop esi
// 008f4749  83c40c               add esp, 0xc
// 008f474c  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTButtonThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp