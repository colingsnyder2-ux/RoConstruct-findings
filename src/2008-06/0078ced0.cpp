// roc 2008-06 0078ced0  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ced0
//
// 0078ced0  83ec10               sub esp, 0x10
// 0078ced3  53                   push ebx
// 0078ced4  55                   push ebp
// 0078ced5  56                   push esi
// 0078ced6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0078ceda  8b06                 mov eax, dword ptr [esi]
// 0078cedc  57                   push edi
// 0078cedd  8b7e08               mov edi, dword ptr [esi + 8]
// 0078cee0  2bf8                 sub edi, eax
// 0078cee2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0078cee6  89442410             mov dword ptr [esp + 0x10], eax
// 0078ceea  85ff                 test edi, edi
// 0078ceec  0f8ef1000000         jle 0x78cfe3
// 0078cef2  8b460c               mov eax, dword ptr [esi + 0xc]
// 0078cef5  8bc8                 mov ecx, eax
// 0078cef7  2b4e04               sub ecx, dword ptr [esi + 4]
// 0078cefa  894c2418             mov dword ptr [esp + 0x18], ecx
// 0078cefe  85c9                 test ecx, ecx
// 0078cf00  0f8edd000000         jle 0x78cfe3
// 0078cf06  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0078cf0a  8b13                 mov edx, dword ptr [ebx]
// 0078cf0c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0078cf0f  2bca                 sub ecx, edx
// 0078cf11  894c2428             mov dword ptr [esp + 0x28], ecx
// 0078cf15  85c9                 test ecx, ecx
// 0078cf17  0f8ec6000000         jle 0x78cfe3
// 0078cf1d  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0078cf20  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0078cf23  8bca                 mov ecx, edx
// 0078cf25  2bcd                 sub ecx, ebp
// 0078cf27  85c9                 test ecx, ecx
// 0078cf29  0f8eb4000000         jle 0x78cfe3
// 0078cf2f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0078cf33  837d2400             cmp dword ptr [ebp + 0x24], 0
// 0078cf37  7434                 je 0x78cf6d
// 0078cf39  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0078cf3d  85c0                 test eax, eax
// 0078cf3f  7504                 jne 0x78cf45
// 0078cf41  33c9                 xor ecx, ecx
// 0078cf43  eb03                 jmp 0x78cf48
// 0078cf45  8b4804               mov ecx, dword ptr [eax + 4]
// 0078cf48  8b442424             mov eax, dword ptr [esp + 0x24]
// 0078cf4c  85c0                 test eax, eax
// 0078cf4e  7403                 je 0x78cf53
// 0078cf50  8b4004               mov eax, dword ptr [eax + 4]
// 0078cf53  53                   push ebx
// 0078cf54  51                   push ecx
// 0078cf55  56                   push esi
// 0078cf56  50                   push eax
// 0078cf57  e8243ff3ff           call 0x6c0e80
// 0078cf5c  8bc8                 mov ecx, eax
// 0078cf5e  e8cddaf2ff           call 0x6baa30
// 0078cf63  5f                   pop edi
// 0078cf64  5e                   pop esi
// 0078cf65  5d                   pop ebp
// 0078cf66  5b                   pop ebx
// 0078cf67  83c410               add esp, 0x10
// 0078cf6a  c21000               ret 0x10
// 0078cf6d  397c2428             cmp dword ptr [esp + 0x28], edi
// 0078cf71  7537                 jne 0x78cfaa
// 0078cf73  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0078cf77  7531                 jne 0x78cfaa
// 0078cf79  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0078cf7c  8b13                 mov edx, dword ptr [ebx]
// 0078cf7e  8b7604               mov esi, dword ptr [esi + 4]
// 0078cf81  682000cc00           push 0xcc0020
// 0078cf86  51                   push ecx
// 0078cf87  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0078cf8b  52                   push edx
// 0078cf8c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078cf90  51                   push ecx
// 0078cf91  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0078cf95  2bc6                 sub eax, esi
// 0078cf97  50                   push eax
// 0078cf98  57                   push edi
// 0078cf99  56                   push esi
// 0078cf9a  52                   push edx
// 0078cf9b  e8f01bf2ff           call 0x6aeb90
// 0078cfa0  5f                   pop edi
// 0078cfa1  5e                   pop esi
// 0078cfa2  5d                   pop ebp
// 0078cfa3  5b                   pop ebx
// 0078cfa4  83c410               add esp, 0x10
// 0078cfa7  c21000               ret 0x10
// 0078cfaa  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0078cfad  8b7604               mov esi, dword ptr [esi + 4]
// 0078cfb0  682000cc00           push 0xcc0020
// 0078cfb5  2bd1                 sub edx, ecx
// 0078cfb7  52                   push edx
// 0078cfb8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0078cfbc  52                   push edx
// 0078cfbd  8b542438             mov edx, dword ptr [esp + 0x38]
// 0078cfc1  51                   push ecx
// 0078cfc2  8b0b                 mov ecx, dword ptr [ebx]
// 0078cfc4  51                   push ecx
// 0078cfc5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0078cfc9  52                   push edx
// 0078cfca  2bc6                 sub eax, esi
// 0078cfcc  50                   push eax
// 0078cfcd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0078cfd1  57                   push edi
// 0078cfd2  56                   push esi
// 0078cfd3  50                   push eax
// 0078cfd4  e8f71bf2ff           call 0x6aebd0
// 0078cfd9  5f                   pop edi
// 0078cfda  5e                   pop esi
// 0078cfdb  5d                   pop ebp
// 0078cfdc  5b                   pop ebx
// 0078cfdd  83c410               add esp, 0x10
// 0078cfe0  c21000               ret 0x10
// 0078cfe3  5f                   pop edi
// 0078cfe4  5e                   pop esi
// 0078cfe5  5d                   pop ebp
// 0078cfe6  b801000000           mov eax, 1
// 0078cfeb  5b                   pop ebx
// 0078cfec  83c410               add esp, 0x10
// 0078cfef  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
