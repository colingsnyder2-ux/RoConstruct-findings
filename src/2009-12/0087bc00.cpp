// roc 2009-12 0087bc00  unit: CXTPControlGallery  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087bc00
//
// 0087bc00  6aff                 push -1
// 0087bc02  68c8fc9500           push 0x95fcc8
// 0087bc07  64a100000000         mov eax, dword ptr fs:[0]
// 0087bc0d  50                   push eax
// 0087bc0e  83ec10               sub esp, 0x10
// 0087bc11  56                   push esi
// 0087bc12  57                   push edi
// 0087bc13  a10052b600           mov eax, dword ptr [0xb65200]
// 0087bc18  33c4                 xor eax, esp
// 0087bc1a  50                   push eax
// 0087bc1b  8d44241c             lea eax, [esp + 0x1c]
// 0087bc1f  64a300000000         mov dword ptr fs:[0], eax
// 0087bc25  8bf1                 mov esi, ecx
// 0087bc27  8b46fc               mov eax, dword ptr [esi - 4]
// 0087bc2a  50                   push eax
// 0087bc2b  8d4c2410             lea ecx, [esp + 0x10]
// 0087bc2f  e8fc7ef7ff           call 0x7f3b30
// 0087bc34  8d4c242c             lea ecx, [esp + 0x2c]
// 0087bc38  51                   push ecx
// 0087bc39  8bce                 mov ecx, esi
// 0087bc3b  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0087bc43  e858fdfbff           call 0x83b9a0
// 0087bc48  85c0                 test eax, eax
// 0087bc4a  7569                 jne 0x87bcb5
// 0087bc4c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087bc50  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087bc54  83ec10               sub esp, 0x10
// 0087bc57  8bc4                 mov eax, esp
// 0087bc59  8910                 mov dword ptr [eax], edx
// 0087bc5b  8b542444             mov edx, dword ptr [esp + 0x44]
// 0087bc5f  894804               mov dword ptr [eax + 4], ecx
// 0087bc62  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087bc66  895008               mov dword ptr [eax + 8], edx
// 0087bc69  89480c               mov dword ptr [eax + 0xc], ecx
// 0087bc6c  8bce                 mov ecx, esi
// 0087bc6e  e84db9f7ff           call 0x7f75c0
// 0087bc73  8bf0                 mov esi, eax
// 0087bc75  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087bc79  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0087bc81  85c0                 test eax, eax
// 0087bc83  7407                 je 0x87bc8c
// 0087bc85  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087bc89  895004               mov dword ptr [eax + 4], edx
// 0087bc8c  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087bc91  740c                 je 0x87bc9f
// 0087bc93  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087bc97  50                   push eax
// 0087bc98  6a00                 push 0
// 0087bc9a  e8857ef7ff           call 0x7f3b24
// 0087bc9f  8bc6                 mov eax, esi
// 0087bca1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087bca5  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bcac  59                   pop ecx
// 0087bcad  5f                   pop edi
// 0087bcae  5e                   pop esi
// 0087bcaf  83c41c               add esp, 0x1c
// 0087bcb2  c21000               ret 0x10
// 0087bcb5  8d78ff               lea edi, [eax - 1]
// 0087bcb8  83c6e0               add esi, -0x20
// 0087bcbb  57                   push edi
// 0087bcbc  8bce                 mov ecx, esi
// 0087bcbe  e83dc5ffff           call 0x878200
// 0087bcc3  85c0                 test eax, eax
// 0087bcc5  7543                 jne 0x87bd0a
// 0087bcc7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087bccb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0087bcd3  85c0                 test eax, eax
// 0087bcd5  7407                 je 0x87bcde
// 0087bcd7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087bcdb  894804               mov dword ptr [eax + 4], ecx
// 0087bcde  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087bce3  740c                 je 0x87bcf1
// 0087bce5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087bce9  52                   push edx
// 0087bcea  6a00                 push 0
// 0087bcec  e8337ef7ff           call 0x7f3b24
// 0087bcf1  b857000780           mov eax, 0x80070057
// 0087bcf6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087bcfa  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bd01  59                   pop ecx
// 0087bd02  5f                   pop edi
// 0087bd03  5e                   pop esi
// 0087bd04  83c41c               add esp, 0x1c
// 0087bd07  c21000               ret 0x10
// 0087bd0a  57                   push edi
// 0087bd0b  8bce                 mov ecx, esi
// 0087bd0d  e87ef5ffff           call 0x87b290
// 0087bd12  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087bd16  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0087bd1e  85c0                 test eax, eax
// 0087bd20  7407                 je 0x87bd29
// 0087bd22  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087bd26  894804               mov dword ptr [eax + 4], ecx
// 0087bd29  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087bd2e  740c                 je 0x87bd3c
// 0087bd30  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087bd34  52                   push edx
// 0087bd35  6a00                 push 0
// 0087bd37  e8e87df7ff           call 0x7f3b24
// 0087bd3c  33c0                 xor eax, eax
// 0087bd3e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087bd42  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bd49  59                   pop ecx
// 0087bd4a  5f                   pop edi
// 0087bd4b  5e                   pop esi
// 0087bd4c  83c41c               add esp, 0x1c
// 0087bd4f  c21000               ret 0x10
// copied from an identical function in another client (function ?AccessibleDoDefaultAction@CXTPControlGallery@@MAEJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp