// roc 2008-06 007a2d20  unit: CXTCaptionButtonThemeOfficeXP  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a2d20
//
// 007a2d20  83ec18               sub esp, 0x18
// 007a2d23  53                   push ebx
// 007a2d24  57                   push edi
// 007a2d25  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 007a2d29  8bd9                 mov ebx, ecx
// 007a2d2b  85ff                 test edi, edi
// 007a2d2d  0f848f010000         je 0x7a2ec2
// 007a2d33  837b1400             cmp dword ptr [ebx + 0x14], 0
// 007a2d37  0f8485010000         je 0x7a2ec2
// 007a2d3d  56                   push esi
// 007a2d3e  8bcf                 mov ecx, edi
// 007a2d40  e80bf7feff           call 0x792450
// 007a2d45  8bf0                 mov esi, eax
// 007a2d47  85f6                 test esi, esi
// 007a2d49  0f8472010000         je 0x7a2ec1
// 007a2d4f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a2d53  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007a2d57  8b03                 mov eax, dword ptr [ebx]
// 007a2d59  55                   push ebp
// 007a2d5a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007a2d5e  57                   push edi
// 007a2d5f  6a00                 push 0
// 007a2d61  51                   push ecx
// 007a2d62  52                   push edx
// 007a2d63  8b5050               mov edx, dword ptr [eax + 0x50]
// 007a2d66  55                   push ebp
// 007a2d67  8d4c2424             lea ecx, [esp + 0x24]
// 007a2d6b  51                   push ecx
// 007a2d6c  8bcb                 mov ecx, ebx
// 007a2d6e  ffd2                 call edx
// 007a2d70  8a442430             mov al, byte ptr [esp + 0x30]
// 007a2d74  8bcf                 mov ecx, edi
// 007a2d76  a804                 test al, 4
// 007a2d78  7420                 je 0x7a2d9a
// 007a2d7a  8d442418             lea eax, [esp + 0x18]
// 007a2d7e  50                   push eax
// 007a2d7f  e86cfefeff           call 0x792bf0
// 007a2d84  8b4804               mov ecx, dword ptr [eax + 4]
// 007a2d87  8b10                 mov edx, dword ptr [eax]
// 007a2d89  51                   push ecx
// 007a2d8a  52                   push edx
// 007a2d8b  6a01                 push 1
// 007a2d8d  8bce                 mov ecx, esi
// 007a2d8f  e8dcddf1ff           call 0x6c0b70
// 007a2d94  50                   push eax
// 007a2d95  e914010000           jmp 0x7a2eae
// 007a2d9a  a801                 test al, 1
// 007a2d9c  741e                 je 0x7a2dbc
// 007a2d9e  8d542418             lea edx, [esp + 0x18]
// 007a2da2  52                   push edx
// 007a2da3  e848fefeff           call 0x792bf0
// 007a2da8  8b4804               mov ecx, dword ptr [eax + 4]
// 007a2dab  8b10                 mov edx, dword ptr [eax]
// 007a2dad  51                   push ecx
// 007a2dae  52                   push edx
// 007a2daf  8bce                 mov ecx, esi
// 007a2db1  e8fa87f1ff           call 0x6bb5b0
// 007a2db6  50                   push eax
// 007a2db7  e9f2000000           jmp 0x7a2eae
// 007a2dbc  e85fe5feff           call 0x791320
// 007a2dc1  85c0                 test eax, eax
// 007a2dc3  0f84b8000000         je 0x7a2e81
// 007a2dc9  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 007a2dd0  7478                 je 0x7a2e4a
// 007a2dd2  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a2dd6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a2dda  8d442420             lea eax, [esp + 0x20]
// 007a2dde  42                   inc edx
// 007a2ddf  50                   push eax
// 007a2de0  8bcf                 mov ecx, edi
// 007a2de2  43                   inc ebx
// 007a2de3  89542420             mov dword ptr [esp + 0x20], edx
// 007a2de7  e804fefeff           call 0x792bf0
// 007a2dec  8b4804               mov ecx, dword ptr [eax + 4]
// 007a2def  8b10                 mov edx, dword ptr [eax]
// 007a2df1  51                   push ecx
// 007a2df2  52                   push edx
// 007a2df3  8bce                 mov ecx, esi
// 007a2df5  e856ddf1ff           call 0x6c0b50
// 007a2dfa  50                   push eax
// 007a2dfb  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a2dff  50                   push eax
// 007a2e00  53                   push ebx
// 007a2e01  55                   push ebp
// 007a2e02  8bce                 mov ecx, esi
// 007a2e04  e877eaf1ff           call 0x6c1880
// 007a2e09  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a2e0d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a2e11  49                   dec ecx
// 007a2e12  8d542420             lea edx, [esp + 0x20]
// 007a2e16  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007a2e1a  52                   push edx
// 007a2e1b  8bcf                 mov ecx, edi
// 007a2e1d  4b                   dec ebx
// 007a2e1e  e8cdfdfeff           call 0x792bf0
// 007a2e23  8b4804               mov ecx, dword ptr [eax + 4]
// 007a2e26  8b10                 mov edx, dword ptr [eax]
// 007a2e28  51                   push ecx
// 007a2e29  52                   push edx
// 007a2e2a  8bce                 mov ecx, esi
// 007a2e2c  e83f87f1ff           call 0x6bb570
// 007a2e31  50                   push eax
// 007a2e32  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a2e36  50                   push eax
// 007a2e37  53                   push ebx
// 007a2e38  55                   push ebp
// 007a2e39  8bce                 mov ecx, esi
// 007a2e3b  e840eaf1ff           call 0x6c1880
// 007a2e40  5d                   pop ebp
// 007a2e41  5e                   pop esi
// 007a2e42  5f                   pop edi
// 007a2e43  5b                   pop ebx
// 007a2e44  83c418               add esp, 0x18
// 007a2e47  c21000               ret 0x10
// 007a2e4a  8d4c2420             lea ecx, [esp + 0x20]
// 007a2e4e  51                   push ecx
// 007a2e4f  8bcf                 mov ecx, edi
// 007a2e51  e89afdfeff           call 0x792bf0
// 007a2e56  8b5004               mov edx, dword ptr [eax + 4]
// 007a2e59  8b00                 mov eax, dword ptr [eax]
// 007a2e5b  52                   push edx
// 007a2e5c  50                   push eax
// 007a2e5d  8bce                 mov ecx, esi
// 007a2e5f  e80c87f1ff           call 0x6bb570
// 007a2e64  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a2e68  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a2e6c  50                   push eax
// 007a2e6d  51                   push ecx
// 007a2e6e  52                   push edx
// 007a2e6f  55                   push ebp
// 007a2e70  8bce                 mov ecx, esi
// 007a2e72  e809eaf1ff           call 0x6c1880
// 007a2e77  5d                   pop ebp
// 007a2e78  5e                   pop esi
// 007a2e79  5f                   pop edi
// 007a2e7a  5b                   pop ebx
// 007a2e7b  83c418               add esp, 0x18
// 007a2e7e  c21000               ret 0x10
// 007a2e81  83bb8400000000       cmp dword ptr [ebx + 0x84], 0
// 007a2e88  8bce                 mov ecx, esi
// 007a2e8a  7407                 je 0x7a2e93
// 007a2e8c  e88fdcf1ff           call 0x6c0b20
// 007a2e91  eb05                 jmp 0x7a2e98
// 007a2e93  e8d86bf1ff           call 0x6b9a70
// 007a2e98  8bd8                 mov ebx, eax
// 007a2e9a  8d442420             lea eax, [esp + 0x20]
// 007a2e9e  50                   push eax
// 007a2e9f  8bcf                 mov ecx, edi
// 007a2ea1  e84afdfeff           call 0x792bf0
// 007a2ea6  8b4804               mov ecx, dword ptr [eax + 4]
// 007a2ea9  8b10                 mov edx, dword ptr [eax]
// 007a2eab  51                   push ecx
// 007a2eac  52                   push edx
// 007a2ead  53                   push ebx
// 007a2eae  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a2eb2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a2eb6  50                   push eax
// 007a2eb7  51                   push ecx
// 007a2eb8  55                   push ebp
// 007a2eb9  8bce                 mov ecx, esi
// 007a2ebb  e8c0e9f1ff           call 0x6c1880
// 007a2ec0  5d                   pop ebp
// 007a2ec1  5e                   pop esi
// 007a2ec2  5f                   pop edi
// 007a2ec3  5b                   pop ebx
// 007a2ec4  83c418               add esp, 0x18
// 007a2ec7  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOfficeXP@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
