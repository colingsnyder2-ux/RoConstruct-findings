// roc 2011-06 00902c50  unit: CXTCaptionButtonThemeOfficeXP  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00902c50
//
// 00902c50  83ec18               sub esp, 0x18
// 00902c53  53                   push ebx
// 00902c54  57                   push edi
// 00902c55  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00902c59  8bd9                 mov ebx, ecx
// 00902c5b  85ff                 test edi, edi
// 00902c5d  0f848f010000         je 0x902df2
// 00902c63  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00902c67  0f8485010000         je 0x902df2
// 00902c6d  56                   push esi
// 00902c6e  8bcf                 mov ecx, edi
// 00902c70  e80bf8feff           call 0x8f2480
// 00902c75  8bf0                 mov esi, eax
// 00902c77  85f6                 test esi, esi
// 00902c79  0f8472010000         je 0x902df1
// 00902c7f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00902c83  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00902c87  8b03                 mov eax, dword ptr [ebx]
// 00902c89  55                   push ebp
// 00902c8a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00902c8e  57                   push edi
// 00902c8f  6a00                 push 0
// 00902c91  51                   push ecx
// 00902c92  52                   push edx
// 00902c93  8b5050               mov edx, dword ptr [eax + 0x50]
// 00902c96  55                   push ebp
// 00902c97  8d4c2424             lea ecx, [esp + 0x24]
// 00902c9b  51                   push ecx
// 00902c9c  8bcb                 mov ecx, ebx
// 00902c9e  ffd2                 call edx
// 00902ca0  8a442430             mov al, byte ptr [esp + 0x30]
// 00902ca4  8bcf                 mov ecx, edi
// 00902ca6  a804                 test al, 4
// 00902ca8  7420                 je 0x902cca
// 00902caa  8d442418             lea eax, [esp + 0x18]
// 00902cae  50                   push eax
// 00902caf  e8acfffeff           call 0x8f2c60
// 00902cb4  8b4804               mov ecx, dword ptr [eax + 4]
// 00902cb7  8b10                 mov edx, dword ptr [eax]
// 00902cb9  51                   push ecx
// 00902cba  52                   push edx
// 00902cbb  6a01                 push 1
// 00902cbd  8bce                 mov ecx, esi
// 00902cbf  e86c33f2ff           call 0x826030
// 00902cc4  50                   push eax
// 00902cc5  e914010000           jmp 0x902dde
// 00902cca  a801                 test al, 1
// 00902ccc  741e                 je 0x902cec
// 00902cce  8d542418             lea edx, [esp + 0x18]
// 00902cd2  52                   push edx
// 00902cd3  e888fffeff           call 0x8f2c60
// 00902cd8  8b4804               mov ecx, dword ptr [eax + 4]
// 00902cdb  8b10                 mov edx, dword ptr [eax]
// 00902cdd  51                   push ecx
// 00902cde  52                   push edx
// 00902cdf  8bce                 mov ecx, esi
// 00902ce1  e8dae0f1ff           call 0x820dc0
// 00902ce6  50                   push eax
// 00902ce7  e9f2000000           jmp 0x902dde
// 00902cec  e8ffe5feff           call 0x8f12f0
// 00902cf1  85c0                 test eax, eax
// 00902cf3  0f84b8000000         je 0x902db1
// 00902cf9  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 00902d00  7478                 je 0x902d7a
// 00902d02  8b542414             mov edx, dword ptr [esp + 0x14]
// 00902d06  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00902d0a  8d442420             lea eax, [esp + 0x20]
// 00902d0e  42                   inc edx
// 00902d0f  50                   push eax
// 00902d10  8bcf                 mov ecx, edi
// 00902d12  43                   inc ebx
// 00902d13  89542420             mov dword ptr [esp + 0x20], edx
// 00902d17  e844fffeff           call 0x8f2c60
// 00902d1c  8b4804               mov ecx, dword ptr [eax + 4]
// 00902d1f  8b10                 mov edx, dword ptr [eax]
// 00902d21  51                   push ecx
// 00902d22  52                   push edx
// 00902d23  8bce                 mov ecx, esi
// 00902d25  e8e632f2ff           call 0x826010
// 00902d2a  50                   push eax
// 00902d2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00902d2f  50                   push eax
// 00902d30  53                   push ebx
// 00902d31  55                   push ebp
// 00902d32  8bce                 mov ecx, esi
// 00902d34  e8373df2ff           call 0x826a70
// 00902d39  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00902d3d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00902d41  49                   dec ecx
// 00902d42  8d542420             lea edx, [esp + 0x20]
// 00902d46  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00902d4a  52                   push edx
// 00902d4b  8bcf                 mov ecx, edi
// 00902d4d  4b                   dec ebx
// 00902d4e  e80dfffeff           call 0x8f2c60
// 00902d53  8b4804               mov ecx, dword ptr [eax + 4]
// 00902d56  8b10                 mov edx, dword ptr [eax]
// 00902d58  51                   push ecx
// 00902d59  52                   push edx
// 00902d5a  8bce                 mov ecx, esi
// 00902d5c  e81fe0f1ff           call 0x820d80
// 00902d61  50                   push eax
// 00902d62  8b442428             mov eax, dword ptr [esp + 0x28]
// 00902d66  50                   push eax
// 00902d67  53                   push ebx
// 00902d68  55                   push ebp
// 00902d69  8bce                 mov ecx, esi
// 00902d6b  e8003df2ff           call 0x826a70
// 00902d70  5d                   pop ebp
// 00902d71  5e                   pop esi
// 00902d72  5f                   pop edi
// 00902d73  5b                   pop ebx
// 00902d74  83c418               add esp, 0x18
// 00902d77  c21000               ret 0x10
// 00902d7a  8d4c2420             lea ecx, [esp + 0x20]
// 00902d7e  51                   push ecx
// 00902d7f  8bcf                 mov ecx, edi
// 00902d81  e8dafefeff           call 0x8f2c60
// 00902d86  8b5004               mov edx, dword ptr [eax + 4]
// 00902d89  8b00                 mov eax, dword ptr [eax]
// 00902d8b  52                   push edx
// 00902d8c  50                   push eax
// 00902d8d  8bce                 mov ecx, esi
// 00902d8f  e8ecdff1ff           call 0x820d80
// 00902d94  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00902d98  8b542418             mov edx, dword ptr [esp + 0x18]
// 00902d9c  50                   push eax
// 00902d9d  51                   push ecx
// 00902d9e  52                   push edx
// 00902d9f  55                   push ebp
// 00902da0  8bce                 mov ecx, esi
// 00902da2  e8c93cf2ff           call 0x826a70
// 00902da7  5d                   pop ebp
// 00902da8  5e                   pop esi
// 00902da9  5f                   pop edi
// 00902daa  5b                   pop ebx
// 00902dab  83c418               add esp, 0x18
// 00902dae  c21000               ret 0x10
// 00902db1  83bb8400000000       cmp dword ptr [ebx + 0x84], 0
// 00902db8  8bce                 mov ecx, esi
// 00902dba  7407                 je 0x902dc3
// 00902dbc  e81f32f2ff           call 0x825fe0
// 00902dc1  eb05                 jmp 0x902dc8
// 00902dc3  e858c9f1ff           call 0x81f720
// 00902dc8  8bd8                 mov ebx, eax
// 00902dca  8d442420             lea eax, [esp + 0x20]
// 00902dce  50                   push eax
// 00902dcf  8bcf                 mov ecx, edi
// 00902dd1  e88afefeff           call 0x8f2c60
// 00902dd6  8b4804               mov ecx, dword ptr [eax + 4]
// 00902dd9  8b10                 mov edx, dword ptr [eax]
// 00902ddb  51                   push ecx
// 00902ddc  52                   push edx
// 00902ddd  53                   push ebx
// 00902dde  8b442420             mov eax, dword ptr [esp + 0x20]
// 00902de2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00902de6  50                   push eax
// 00902de7  51                   push ecx
// 00902de8  55                   push ebp
// 00902de9  8bce                 mov ecx, esi
// 00902deb  e8803cf2ff           call 0x826a70
// 00902df0  5d                   pop ebp
// 00902df1  5e                   pop esi
// 00902df2  5f                   pop edi
// 00902df3  5b                   pop ebx
// 00902df4  83c418               add esp, 0x18
// 00902df7  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOfficeXP@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
