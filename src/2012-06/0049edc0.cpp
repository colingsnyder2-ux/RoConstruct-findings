// roc 2012-06 0049edc0  unit: Scintilla::CScintillaView  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049edc0
//
// 0049edc0  83ec18               sub esp, 0x18
// 0049edc3  53                   push ebx
// 0049edc4  56                   push esi
// 0049edc5  57                   push edi
// 0049edc6  8bf9                 mov edi, ecx
// 0049edc8  8d7758               lea esi, [edi + 0x58]
// 0049edcb  6a01                 push 1
// 0049edcd  8bce                 mov ecx, esi
// 0049edcf  e80ce5ffff           call 0x49d2e0
// 0049edd4  8bd8                 mov ebx, eax
// 0049edd6  6a01                 push 1
// 0049edd8  53                   push ebx
// 0049edd9  8bce                 mov ecx, esi
// 0049eddb  e800e7ffff           call 0x49d4e0
// 0049ede0  6a01                 push 1
// 0049ede2  53                   push ebx
// 0049ede3  8bce                 mov ecx, esi
// 0049ede5  89442414             mov dword ptr [esp + 0x14], eax
// 0049ede9  e832e7ffff           call 0x49d520
// 0049edee  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0049edf1  89442410             mov dword ptr [esp + 0x10], eax
// 0049edf5  8d44240c             lea eax, [esp + 0xc]
// 0049edf9  50                   push eax
// 0049edfa  51                   push ecx
// 0049edfb  ff15dc3ab200         call dword ptr [0xb23adc]
// 0049ee01  a1fc16d700           mov eax, dword ptr [0xd716fc]
// 0049ee06  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0049ee09  8d542414             lea edx, [esp + 0x14]
// 0049ee0d  52                   push edx
// 0049ee0e  51                   push ecx
// 0049ee0f  ff15f83ab200         call dword ptr [0xb23af8]
// 0049ee15  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049ee19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049ee1d  52                   push edx
// 0049ee1e  50                   push eax
// 0049ee1f  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ee23  51                   push ecx
// 0049ee24  ff15483bb200         call dword ptr [0xb23b48]
// 0049ee2a  85c0                 test eax, eax
// 0049ee2c  7477                 je 0x49eea5
// 0049ee2e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049ee32  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049ee36  8bd1                 mov edx, ecx
// 0049ee38  2b542418             sub edx, dword ptr [esp + 0x18]
// 0049ee3c  3bc2                 cmp eax, edx
// 0049ee3e  7e0f                 jle 0x49ee4f
// 0049ee40  2bc1                 sub eax, ecx
// 0049ee42  83e814               sub eax, 0x14
// 0049ee45  50                   push eax
// 0049ee46  6a00                 push 0
// 0049ee48  8d44241c             lea eax, [esp + 0x1c]
// 0049ee4c  50                   push eax
// 0049ee4d  eb2b                 jmp 0x49ee7a
// 0049ee4f  6a01                 push 1
// 0049ee51  ff15fc3bb200         call dword ptr [0xb23bfc]
// 0049ee57  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049ee5b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049ee5f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049ee63  8bf9                 mov edi, ecx
// 0049ee65  2bfe                 sub edi, esi
// 0049ee67  03fa                 add edi, edx
// 0049ee69  3bf8                 cmp edi, eax
// 0049ee6b  7d1b                 jge 0x49ee88
// 0049ee6d  2bd6                 sub edx, esi
// 0049ee6f  83c228               add edx, 0x28
// 0049ee72  52                   push edx
// 0049ee73  6a00                 push 0
// 0049ee75  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ee79  51                   push ecx
// 0049ee7a  ff15f43ab200         call dword ptr [0xb23af4]
// 0049ee80  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049ee84  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049ee88  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049ee8c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049ee90  6a01                 push 1
// 0049ee92  2bce                 sub ecx, esi
// 0049ee94  51                   push ecx
// 0049ee95  8b0dfc16d700         mov ecx, dword ptr [0xd716fc]
// 0049ee9b  2bd0                 sub edx, eax
// 0049ee9d  52                   push edx
// 0049ee9e  56                   push esi
// 0049ee9f  50                   push eax
// 0049eea0  e835364e00           call 0x9824da
// 0049eea5  5f                   pop edi
// 0049eea6  5e                   pop esi
// 0049eea7  5b                   pop ebx
// 0049eea8  83c418               add esp, 0x18
// 0049eeab  c3                   ret 
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?AdjustFindDialogPosition@CScintillaView@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
