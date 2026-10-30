// roc 2012-06 00a7ae50  unit: CXTCaptionButtonThemeOfficeXP  size: 426 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7ae50
//
// 00a7ae50  83ec18               sub esp, 0x18
// 00a7ae53  53                   push ebx
// 00a7ae54  57                   push edi
// 00a7ae55  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00a7ae59  8bd9                 mov ebx, ecx
// 00a7ae5b  85ff                 test edi, edi
// 00a7ae5d  0f848f010000         je 0xa7aff2
// 00a7ae63  837b1400             cmp dword ptr [ebx + 0x14], 0
// 00a7ae67  0f8485010000         je 0xa7aff2
// 00a7ae6d  56                   push esi
// 00a7ae6e  8bcf                 mov ecx, edi
// 00a7ae70  e8cbdee1ff           call 0x898d40
// 00a7ae75  8bf0                 mov esi, eax
// 00a7ae77  85f6                 test esi, esi
// 00a7ae79  0f8472010000         je 0xa7aff1
// 00a7ae7f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a7ae83  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a7ae87  8b03                 mov eax, dword ptr [ebx]
// 00a7ae89  55                   push ebp
// 00a7ae8a  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a7ae8e  57                   push edi
// 00a7ae8f  6a00                 push 0
// 00a7ae91  51                   push ecx
// 00a7ae92  52                   push edx
// 00a7ae93  8b5050               mov edx, dword ptr [eax + 0x50]
// 00a7ae96  55                   push ebp
// 00a7ae97  8d4c2424             lea ecx, [esp + 0x24]
// 00a7ae9b  51                   push ecx
// 00a7ae9c  8bcb                 mov ecx, ebx
// 00a7ae9e  ffd2                 call edx
// 00a7aea0  8a442430             mov al, byte ptr [esp + 0x30]
// 00a7aea4  8bcf                 mov ecx, edi
// 00a7aea6  a804                 test al, 4
// 00a7aea8  7420                 je 0xa7aeca
// 00a7aeaa  8d442418             lea eax, [esp + 0x18]
// 00a7aeae  50                   push eax
// 00a7aeaf  e80c01ffff           call 0xa6afc0
// 00a7aeb4  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7aeb7  8b10                 mov edx, dword ptr [eax]
// 00a7aeb9  51                   push ecx
// 00a7aeba  52                   push edx
// 00a7aebb  6a01                 push 1
// 00a7aebd  8bce                 mov ecx, esi
// 00a7aebf  e89c37f2ff           call 0x99e660
// 00a7aec4  50                   push eax
// 00a7aec5  e914010000           jmp 0xa7afde
// 00a7aeca  a801                 test al, 1
// 00a7aecc  741e                 je 0xa7aeec
// 00a7aece  8d542418             lea edx, [esp + 0x18]
// 00a7aed2  52                   push edx
// 00a7aed3  e8e800ffff           call 0xa6afc0
// 00a7aed8  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7aedb  8b10                 mov edx, dword ptr [eax]
// 00a7aedd  51                   push ecx
// 00a7aede  52                   push edx
// 00a7aedf  8bce                 mov ecx, esi
// 00a7aee1  e82ae5f1ff           call 0x999410
// 00a7aee6  50                   push eax
// 00a7aee7  e9f2000000           jmp 0xa7afde
// 00a7aeec  e86fe7feff           call 0xa69660
// 00a7aef1  85c0                 test eax, eax
// 00a7aef3  0f84b8000000         je 0xa7afb1
// 00a7aef9  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 00a7af00  7478                 je 0xa7af7a
// 00a7af02  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a7af06  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a7af0a  8d442420             lea eax, [esp + 0x20]
// 00a7af0e  42                   inc edx
// 00a7af0f  50                   push eax
// 00a7af10  8bcf                 mov ecx, edi
// 00a7af12  43                   inc ebx
// 00a7af13  89542420             mov dword ptr [esp + 0x20], edx
// 00a7af17  e8a400ffff           call 0xa6afc0
// 00a7af1c  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7af1f  8b10                 mov edx, dword ptr [eax]
// 00a7af21  51                   push ecx
// 00a7af22  52                   push edx
// 00a7af23  8bce                 mov ecx, esi
// 00a7af25  e81637f2ff           call 0x99e640
// 00a7af2a  50                   push eax
// 00a7af2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a7af2f  50                   push eax
// 00a7af30  53                   push ebx
// 00a7af31  55                   push ebp
// 00a7af32  8bce                 mov ecx, esi
// 00a7af34  e86741f2ff           call 0x99f0a0
// 00a7af39  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a7af3d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a7af41  49                   dec ecx
// 00a7af42  8d542420             lea edx, [esp + 0x20]
// 00a7af46  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a7af4a  52                   push edx
// 00a7af4b  8bcf                 mov ecx, edi
// 00a7af4d  4b                   dec ebx
// 00a7af4e  e86d00ffff           call 0xa6afc0
// 00a7af53  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7af56  8b10                 mov edx, dword ptr [eax]
// 00a7af58  51                   push ecx
// 00a7af59  52                   push edx
// 00a7af5a  8bce                 mov ecx, esi
// 00a7af5c  e86fe4f1ff           call 0x9993d0
// 00a7af61  50                   push eax
// 00a7af62  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a7af66  50                   push eax
// 00a7af67  53                   push ebx
// 00a7af68  55                   push ebp
// 00a7af69  8bce                 mov ecx, esi
// 00a7af6b  e83041f2ff           call 0x99f0a0
// 00a7af70  5d                   pop ebp
// 00a7af71  5e                   pop esi
// 00a7af72  5f                   pop edi
// 00a7af73  5b                   pop ebx
// 00a7af74  83c418               add esp, 0x18
// 00a7af77  c21000               ret 0x10
// 00a7af7a  8d4c2420             lea ecx, [esp + 0x20]
// 00a7af7e  51                   push ecx
// 00a7af7f  8bcf                 mov ecx, edi
// 00a7af81  e83a00ffff           call 0xa6afc0
// 00a7af86  8b5004               mov edx, dword ptr [eax + 4]
// 00a7af89  8b00                 mov eax, dword ptr [eax]
// 00a7af8b  52                   push edx
// 00a7af8c  50                   push eax
// 00a7af8d  8bce                 mov ecx, esi
// 00a7af8f  e83ce4f1ff           call 0x9993d0
// 00a7af94  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a7af98  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a7af9c  50                   push eax
// 00a7af9d  51                   push ecx
// 00a7af9e  52                   push edx
// 00a7af9f  55                   push ebp
// 00a7afa0  8bce                 mov ecx, esi
// 00a7afa2  e8f940f2ff           call 0x99f0a0
// 00a7afa7  5d                   pop ebp
// 00a7afa8  5e                   pop esi
// 00a7afa9  5f                   pop edi
// 00a7afaa  5b                   pop ebx
// 00a7afab  83c418               add esp, 0x18
// 00a7afae  c21000               ret 0x10
// 00a7afb1  83bb8400000000       cmp dword ptr [ebx + 0x84], 0
// 00a7afb8  8bce                 mov ecx, esi
// 00a7afba  7407                 je 0xa7afc3
// 00a7afbc  e84f36f2ff           call 0x99e610
// 00a7afc1  eb05                 jmp 0xa7afc8
// 00a7afc3  e868caf1ff           call 0x997a30
// 00a7afc8  8bd8                 mov ebx, eax
// 00a7afca  8d442420             lea eax, [esp + 0x20]
// 00a7afce  50                   push eax
// 00a7afcf  8bcf                 mov ecx, edi
// 00a7afd1  e8eafffeff           call 0xa6afc0
// 00a7afd6  8b4804               mov ecx, dword ptr [eax + 4]
// 00a7afd9  8b10                 mov edx, dword ptr [eax]
// 00a7afdb  51                   push ecx
// 00a7afdc  52                   push edx
// 00a7afdd  53                   push ebx
// 00a7afde  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a7afe2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a7afe6  50                   push eax
// 00a7afe7  51                   push ecx
// 00a7afe8  55                   push ebp
// 00a7afe9  8bce                 mov ecx, esi
// 00a7afeb  e8b040f2ff           call 0x99f0a0
// 00a7aff0  5d                   pop ebp
// 00a7aff1  5e                   pop esi
// 00a7aff2  5f                   pop edi
// 00a7aff3  5b                   pop ebx
// 00a7aff4  83c418               add esp, 0x18
// 00a7aff7  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOfficeXP@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
