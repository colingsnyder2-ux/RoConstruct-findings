// roc 2011-06 008eceb0  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eceb0
//
// 008eceb0  83ec10               sub esp, 0x10
// 008eceb3  53                   push ebx
// 008eceb4  55                   push ebp
// 008eceb5  56                   push esi
// 008eceb6  8b742424             mov esi, dword ptr [esp + 0x24]
// 008eceba  8b06                 mov eax, dword ptr [esi]
// 008ecebc  57                   push edi
// 008ecebd  8b7e08               mov edi, dword ptr [esi + 8]
// 008ecec0  2bf8                 sub edi, eax
// 008ecec2  894c2414             mov dword ptr [esp + 0x14], ecx
// 008ecec6  89442410             mov dword ptr [esp + 0x10], eax
// 008ececa  85ff                 test edi, edi
// 008ececc  0f8ef1000000         jle 0x8ecfc3
// 008eced2  8b460c               mov eax, dword ptr [esi + 0xc]
// 008eced5  8bc8                 mov ecx, eax
// 008eced7  2b4e04               sub ecx, dword ptr [esi + 4]
// 008eceda  894c2418             mov dword ptr [esp + 0x18], ecx
// 008ecede  85c9                 test ecx, ecx
// 008ecee0  0f8edd000000         jle 0x8ecfc3
// 008ecee6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008eceea  8b13                 mov edx, dword ptr [ebx]
// 008eceec  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008eceef  2bca                 sub ecx, edx
// 008ecef1  894c2428             mov dword ptr [esp + 0x28], ecx
// 008ecef5  85c9                 test ecx, ecx
// 008ecef7  0f8ec6000000         jle 0x8ecfc3
// 008ecefd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 008ecf00  8b6b04               mov ebp, dword ptr [ebx + 4]
// 008ecf03  8bca                 mov ecx, edx
// 008ecf05  2bcd                 sub ecx, ebp
// 008ecf07  85c9                 test ecx, ecx
// 008ecf09  0f8eb4000000         jle 0x8ecfc3
// 008ecf0f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008ecf13  837d2400             cmp dword ptr [ebp + 0x24], 0
// 008ecf17  7434                 je 0x8ecf4d
// 008ecf19  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ecf1d  85c0                 test eax, eax
// 008ecf1f  7504                 jne 0x8ecf25
// 008ecf21  33c9                 xor ecx, ecx
// 008ecf23  eb03                 jmp 0x8ecf28
// 008ecf25  8b4804               mov ecx, dword ptr [eax + 4]
// 008ecf28  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ecf2c  85c0                 test eax, eax
// 008ecf2e  7403                 je 0x8ecf33
// 008ecf30  8b4004               mov eax, dword ptr [eax + 4]
// 008ecf33  53                   push ebx
// 008ecf34  51                   push ecx
// 008ecf35  56                   push esi
// 008ecf36  50                   push eax
// 008ecf37  e8d491f3ff           call 0x826110
// 008ecf3c  8bc8                 mov ecx, eax
// 008ecf3e  e8ad35f3ff           call 0x8204f0
// 008ecf43  5f                   pop edi
// 008ecf44  5e                   pop esi
// 008ecf45  5d                   pop ebp
// 008ecf46  5b                   pop ebx
// 008ecf47  83c410               add esp, 0x10
// 008ecf4a  c21000               ret 0x10
// 008ecf4d  397c2428             cmp dword ptr [esp + 0x28], edi
// 008ecf51  7537                 jne 0x8ecf8a
// 008ecf53  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 008ecf57  7531                 jne 0x8ecf8a
// 008ecf59  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008ecf5c  8b13                 mov edx, dword ptr [ebx]
// 008ecf5e  8b7604               mov esi, dword ptr [esi + 4]
// 008ecf61  682000cc00           push 0xcc0020
// 008ecf66  51                   push ecx
// 008ecf67  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ecf6b  52                   push edx
// 008ecf6c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008ecf70  51                   push ecx
// 008ecf71  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ecf75  2bc6                 sub eax, esi
// 008ecf77  50                   push eax
// 008ecf78  57                   push edi
// 008ecf79  56                   push esi
// 008ecf7a  52                   push edx
// 008ecf7b  e8d056b7ff           call 0x462650
// 008ecf80  5f                   pop edi
// 008ecf81  5e                   pop esi
// 008ecf82  5d                   pop ebp
// 008ecf83  5b                   pop ebx
// 008ecf84  83c410               add esp, 0x10
// 008ecf87  c21000               ret 0x10
// 008ecf8a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008ecf8d  8b7604               mov esi, dword ptr [esi + 4]
// 008ecf90  682000cc00           push 0xcc0020
// 008ecf95  2bd1                 sub edx, ecx
// 008ecf97  52                   push edx
// 008ecf98  8b542430             mov edx, dword ptr [esp + 0x30]
// 008ecf9c  52                   push edx
// 008ecf9d  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ecfa1  51                   push ecx
// 008ecfa2  8b0b                 mov ecx, dword ptr [ebx]
// 008ecfa4  51                   push ecx
// 008ecfa5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ecfa9  52                   push edx
// 008ecfaa  2bc6                 sub eax, esi
// 008ecfac  50                   push eax
// 008ecfad  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008ecfb1  57                   push edi
// 008ecfb2  56                   push esi
// 008ecfb3  50                   push eax
// 008ecfb4  e8c730f2ff           call 0x810080
// 008ecfb9  5f                   pop edi
// 008ecfba  5e                   pop esi
// 008ecfbb  5d                   pop ebp
// 008ecfbc  5b                   pop ebx
// 008ecfbd  83c410               add esp, 0x10
// 008ecfc0  c21000               ret 0x10
// 008ecfc3  5f                   pop edi
// 008ecfc4  5e                   pop esi
// 008ecfc5  5d                   pop ebp
// 008ecfc6  b801000000           mov eax, 1
// 008ecfcb  5b                   pop ebx
// 008ecfcc  83c410               add esp, 0x10
// 008ecfcf  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
