// roc 2009-12 008cffb0  unit: CXTPTabManagerNavigateButton  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cffb0
//
// 008cffb0  83ec10               sub esp, 0x10
// 008cffb3  53                   push ebx
// 008cffb4  55                   push ebp
// 008cffb5  56                   push esi
// 008cffb6  57                   push edi
// 008cffb7  8bf9                 mov edi, ecx
// 008cffb9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008cffbc  e89fe3ffff           call 0x8ce360
// 008cffc1  83f804               cmp eax, 4
// 008cffc4  7514                 jne 0x8cffda
// 008cffc6  83c710               add edi, 0x10
// 008cffc9  57                   push edi
// 008cffca  ff159cca9800         call dword ptr [0x98ca9c]
// 008cffd0  5f                   pop edi
// 008cffd1  5e                   pop esi
// 008cffd2  5d                   pop ebp
// 008cffd3  5b                   pop ebx
// 008cffd4  83c410               add esp, 0x10
// 008cffd7  c20400               ret 4
// 008cffda  837f0801             cmp dword ptr [edi + 8], 1
// 008cffde  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008cffe2  757d                 jne 0x8d0061
// 008cffe4  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008cffe7  e874e3ffff           call 0x8ce360
// 008cffec  83f801               cmp eax, 1
// 008cffef  74d5                 je 0x8cffc6
// 008cfff1  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008cfff4  8b01                 mov eax, dword ptr [ecx]
// 008cfff6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008cfff9  ffd2                 call edx
// 008cfffb  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008d0001  8b01                 mov eax, dword ptr [ecx]
// 008d0003  8b4010               mov eax, dword ptr [eax + 0x10]
// 008d0006  8d542410             lea edx, [esp + 0x10]
// 008d000a  52                   push edx
// 008d000b  ffd0                 call eax
// 008d000d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d0010  8b6914               mov ebp, dword ptr [ecx + 0x14]
// 008d0013  8b13                 mov edx, dword ptr [ebx]
// 008d0015  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008d0018  83ec10               sub esp, 0x10
// 008d001b  8bc4                 mov eax, esp
// 008d001d  8910                 mov dword ptr [eax], edx
// 008d001f  8b5308               mov edx, dword ptr [ebx + 8]
// 008d0022  894804               mov dword ptr [eax + 4], ecx
// 008d0025  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008d0028  895008               mov dword ptr [eax + 8], edx
// 008d002b  89480c               mov dword ptr [eax + 0xc], ecx
// 008d002e  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d0031  e89a57f8ff           call 0x8557d0
// 008d0036  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d0039  8bf0                 mov esi, eax
// 008d003b  2b742418             sub esi, dword ptr [esp + 0x18]
// 008d003f  2b742410             sub esi, dword ptr [esp + 0x10]
// 008d0043  e8c8f3ffff           call 0x8cf410
// 008d0048  2b6c2410             sub ebp, dword ptr [esp + 0x10]
// 008d004c  8d5428ff             lea edx, [eax + ebp - 1]
// 008d0050  3bd6                 cmp edx, esi
// 008d0052  7f0d                 jg 0x8d0061
// 008d0054  8b470c               mov eax, dword ptr [edi + 0xc]
// 008d0057  83781400             cmp dword ptr [eax + 0x14], 0
// 008d005b  0f8d65ffffff         jge 0x8cffc6
// 008d0061  53                   push ebx
// 008d0062  8bcf                 mov ecx, edi
// 008d0064  e857e8ffff           call 0x8ce8c0
// 008d0069  5f                   pop edi
// 008d006a  5e                   pop esi
// 008d006b  5d                   pop ebp
// 008d006c  5b                   pop ebx
// 008d006d  83c410               add esp, 0x10
// 008d0070  c20400               ret 4
// copied from an identical function in another client (function ?Reposition@CNavigateButtonArrow@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp