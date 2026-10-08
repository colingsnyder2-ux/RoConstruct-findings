// from server: 100% by auto
// roc 2011-06 00818df0  unit: CXTPControlEditCtrl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00818df0
//
// 00818df0  56                   push esi
// 00818df1  8b742408             mov esi, dword ptr [esp + 8]
// 00818df5  57                   push edi
// 00818df6  8bf9                 mov edi, ecx
// 00818df8  397708               cmp dword ptr [edi + 8], esi
// 00818dfb  7443                 je 0x818e40
// 00818dfd  68b0cb8000           push 0x80cbb0
// 00818e02  b9e88ed100           mov ecx, 0xd18ee8
// 00818e07  e8b8371b00           call 0x9cc5c4
// 00818e0c  85f6                 test esi, esi
// 00818e0e  7419                 je 0x818e29
// 00818e10  85c0                 test eax, eax
// 00818e12  7505                 jne 0x818e19
// 00818e14  e8f114ffff           call 0x80a30a
// 00818e19  56                   push esi
// 00818e1a  8bc8                 mov ecx, eax
// 00818e1c  e8df7e0600           call 0x880d00
// 00818e21  897708               mov dword ptr [edi + 8], esi
// 00818e24  5f                   pop edi
// 00818e25  5e                   pop esi
// 00818e26  c20400               ret 4
// 00818e29  85c0                 test eax, eax
// 00818e2b  7505                 jne 0x818e32
// 00818e2d  e8d814ffff           call 0x80a30a
// 00818e32  8b4f08               mov ecx, dword ptr [edi + 8]
// 00818e35  51                   push ecx
// 00818e36  8bc8                 mov ecx, eax
// 00818e38  e843790600           call 0x880780
// 00818e3d  897708               mov dword ptr [edi + 8], esi
// 00818e40  5f                   pop edi
// 00818e41  5e                   pop esi
// 00818e42  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?SetAutoCompeteHandle@CXTPControlComboBoxAutoCompleteWnd@@AAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
