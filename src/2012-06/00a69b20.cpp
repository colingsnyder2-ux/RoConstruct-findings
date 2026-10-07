// roc 2012-06 00a69b20  unit: CXTCaptionThemeOfficeXP  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69b20
//
// 00a69b20  83ec10               sub esp, 0x10
// 00a69b23  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a69b27  8b08                 mov ecx, dword ptr [eax]
// 00a69b29  8b5004               mov edx, dword ptr [eax + 4]
// 00a69b2c  56                   push esi
// 00a69b2d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a69b31  894c2404             mov dword ptr [esp + 4], ecx
// 00a69b35  8b4808               mov ecx, dword ptr [eax + 8]
// 00a69b38  57                   push edi
// 00a69b39  8954240c             mov dword ptr [esp + 0xc], edx
// 00a69b3d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a69b40  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a69b44  6a01                 push 1
// 00a69b46  8bce                 mov ecx, esi
// 00a69b48  89542418             mov dword ptr [esp + 0x18], edx
// 00a69b4c  e857fa0200           call 0xa995a8
// 00a69b51  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a69b55  8b4770               mov eax, dword ptr [edi + 0x70]
// 00a69b58  50                   push eax
// 00a69b59  8d4c240c             lea ecx, [esp + 0xc]
// 00a69b5d  51                   push ecx
// 00a69b5e  8bce                 mov ecx, esi
// 00a69b60  e84793f1ff           call 0x982eac
// 00a69b65  80bf8100000000       cmp byte ptr [edi + 0x81], 0
// 00a69b6c  7534                 jne 0xa69ba2
// 00a69b6e  e8ed3cf5ff           call 0x9bd860
// 00a69b73  6a10                 push 0x10
// 00a69b75  8bc8                 mov ecx, eax
// 00a69b77  e86434f5ff           call 0x9bcfe0
// 00a69b7c  8bf8                 mov edi, eax
// 00a69b7e  e8dd3cf5ff           call 0x9bd860
// 00a69b83  6a14                 push 0x14
// 00a69b85  8bc8                 mov ecx, eax
// 00a69b87  e85434f5ff           call 0x9bcfe0
// 00a69b8c  57                   push edi
// 00a69b8d  50                   push eax
// 00a69b8e  8d542410             lea edx, [esp + 0x10]
// 00a69b92  52                   push edx
// 00a69b93  8bce                 mov ecx, esi
// 00a69b95  e80c93f1ff           call 0x982ea6
// 00a69b9a  5f                   pop edi
// 00a69b9b  5e                   pop esi
// 00a69b9c  83c410               add esp, 0x10
// 00a69b9f  c20c00               ret 0xc
// 00a69ba2  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a69ba5  f7d8                 neg eax
// 00a69ba7  50                   push eax
// 00a69ba8  50                   push eax
// 00a69ba9  8d442410             lea eax, [esp + 0x10]
// 00a69bad  50                   push eax
// 00a69bae  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a69bb4  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00a69bb7  51                   push ecx
// 00a69bb8  8d54240c             lea edx, [esp + 0xc]
// 00a69bbc  52                   push edx
// 00a69bbd  8bce                 mov ecx, esi
// 00a69bbf  e8e892f1ff           call 0x982eac
// 00a69bc4  5f                   pop edi
// 00a69bc5  5e                   pop esi
// 00a69bc6  83c410               add esp, 0x10
// 00a69bc9  c20c00               ret 0xc
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionThemeOfficeXP@@MAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
