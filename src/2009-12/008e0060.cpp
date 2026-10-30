// roc 2009-12 008e0060  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0060
//
// 008e0060  83ec10               sub esp, 0x10
// 008e0063  53                   push ebx
// 008e0064  55                   push ebp
// 008e0065  56                   push esi
// 008e0066  8b742424             mov esi, dword ptr [esp + 0x24]
// 008e006a  8b06                 mov eax, dword ptr [esi]
// 008e006c  57                   push edi
// 008e006d  8b7e08               mov edi, dword ptr [esi + 8]
// 008e0070  2bf8                 sub edi, eax
// 008e0072  894c2414             mov dword ptr [esp + 0x14], ecx
// 008e0076  89442410             mov dword ptr [esp + 0x10], eax
// 008e007a  85ff                 test edi, edi
// 008e007c  0f8ef1000000         jle 0x8e0173
// 008e0082  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e0085  8bc8                 mov ecx, eax
// 008e0087  2b4e04               sub ecx, dword ptr [esi + 4]
// 008e008a  894c2418             mov dword ptr [esp + 0x18], ecx
// 008e008e  85c9                 test ecx, ecx
// 008e0090  0f8edd000000         jle 0x8e0173
// 008e0096  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008e009a  8b13                 mov edx, dword ptr [ebx]
// 008e009c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008e009f  2bca                 sub ecx, edx
// 008e00a1  894c2428             mov dword ptr [esp + 0x28], ecx
// 008e00a5  85c9                 test ecx, ecx
// 008e00a7  0f8ec6000000         jle 0x8e0173
// 008e00ad  8b530c               mov edx, dword ptr [ebx + 0xc]
// 008e00b0  8b6b04               mov ebp, dword ptr [ebx + 4]
// 008e00b3  8bca                 mov ecx, edx
// 008e00b5  2bcd                 sub ecx, ebp
// 008e00b7  85c9                 test ecx, ecx
// 008e00b9  0f8eb4000000         jle 0x8e0173
// 008e00bf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008e00c3  837d2400             cmp dword ptr [ebp + 0x24], 0
// 008e00c7  7434                 je 0x8e00fd
// 008e00c9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e00cd  85c0                 test eax, eax
// 008e00cf  7504                 jne 0x8e00d5
// 008e00d1  33c9                 xor ecx, ecx
// 008e00d3  eb03                 jmp 0x8e00d8
// 008e00d5  8b4804               mov ecx, dword ptr [eax + 4]
// 008e00d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e00dc  85c0                 test eax, eax
// 008e00de  7403                 je 0x8e00e3
// 008e00e0  8b4004               mov eax, dword ptr [eax + 4]
// 008e00e3  53                   push ebx
// 008e00e4  51                   push ecx
// 008e00e5  56                   push esi
// 008e00e6  50                   push eax
// 008e00e7  e8c403f3ff           call 0x8104b0
// 008e00ec  8bc8                 mov ecx, eax
// 008e00ee  e80d9ff2ff           call 0x80a000
// 008e00f3  5f                   pop edi
// 008e00f4  5e                   pop esi
// 008e00f5  5d                   pop ebp
// 008e00f6  5b                   pop ebx
// 008e00f7  83c410               add esp, 0x10
// 008e00fa  c21000               ret 0x10
// 008e00fd  397c2428             cmp dword ptr [esp + 0x28], edi
// 008e0101  7537                 jne 0x8e013a
// 008e0103  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 008e0107  7531                 jne 0x8e013a
// 008e0109  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008e010c  8b13                 mov edx, dword ptr [ebx]
// 008e010e  8b7604               mov esi, dword ptr [esi + 4]
// 008e0111  682000cc00           push 0xcc0020
// 008e0116  51                   push ecx
// 008e0117  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e011b  52                   push edx
// 008e011c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e0120  51                   push ecx
// 008e0121  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e0125  2bc6                 sub eax, esi
// 008e0127  50                   push eax
// 008e0128  57                   push edi
// 008e0129  56                   push esi
// 008e012a  52                   push edx
// 008e012b  e830e0f1ff           call 0x7fe160
// 008e0130  5f                   pop edi
// 008e0131  5e                   pop esi
// 008e0132  5d                   pop ebp
// 008e0133  5b                   pop ebx
// 008e0134  83c410               add esp, 0x10
// 008e0137  c21000               ret 0x10
// 008e013a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008e013d  8b7604               mov esi, dword ptr [esi + 4]
// 008e0140  682000cc00           push 0xcc0020
// 008e0145  2bd1                 sub edx, ecx
// 008e0147  52                   push edx
// 008e0148  8b542430             mov edx, dword ptr [esp + 0x30]
// 008e014c  52                   push edx
// 008e014d  8b542438             mov edx, dword ptr [esp + 0x38]
// 008e0151  51                   push ecx
// 008e0152  8b0b                 mov ecx, dword ptr [ebx]
// 008e0154  51                   push ecx
// 008e0155  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008e0159  52                   push edx
// 008e015a  2bc6                 sub eax, esi
// 008e015c  50                   push eax
// 008e015d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008e0161  57                   push edi
// 008e0162  56                   push esi
// 008e0163  50                   push eax
// 008e0164  e837e0f1ff           call 0x7fe1a0
// 008e0169  5f                   pop edi
// 008e016a  5e                   pop esi
// 008e016b  5d                   pop ebp
// 008e016c  5b                   pop ebx
// 008e016d  83c410               add esp, 0x10
// 008e0170  c21000               ret 0x10
// 008e0173  5f                   pop edi
// 008e0174  5e                   pop esi
// 008e0175  5d                   pop ebp
// 008e0176  b801000000           mov eax, 1
// 008e017b  5b                   pop ebx
// 008e017c  83c410               add esp, 0x10
// 008e017f  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
