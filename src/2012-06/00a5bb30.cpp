// roc 2012-06 00a5bb30  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5bb30
//
// 00a5bb30  83ec10               sub esp, 0x10
// 00a5bb33  53                   push ebx
// 00a5bb34  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a5bb38  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 00a5bb3f  0f8478010000         je 0xa5bcbd
// 00a5bb45  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5bb49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5bb4d  03c1                 add eax, ecx
// 00a5bb4f  99                   cdq 
// 00a5bb50  2bc2                 sub eax, edx
// 00a5bb52  d1f8                 sar eax, 1
// 00a5bb54  83e804               sub eax, 4
// 00a5bb57  89442408             mov dword ptr [esp + 8], eax
// 00a5bb5b  83c009               add eax, 9
// 00a5bb5e  89442410             mov dword ptr [esp + 0x10], eax
// 00a5bb62  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 00a5bb68  c744240402000000     mov dword ptr [esp + 4], 2
// 00a5bb70  c744240c0b000000     mov dword ptr [esp + 0xc], 0xb
// 00a5bb78  85c0                 test eax, eax
// 00a5bb7a  7e26                 jle 0xa5bba2
// 00a5bb7c  33d2                 xor edx, edx
// 00a5bb7e  399398000000         cmp dword ptr [ebx + 0x98], edx
// 00a5bb84  6a00                 push 0
// 00a5bb86  0f94c2               sete dl
// 00a5bb89  2bc2                 sub eax, edx
// 00a5bb8b  8d0cc500000000       lea ecx, [eax*8]
// 00a5bb92  2bc8                 sub ecx, eax
// 00a5bb94  03c9                 add ecx, ecx
// 00a5bb96  51                   push ecx
// 00a5bb97  8d54240c             lea edx, [esp + 0xc]
// 00a5bb9b  52                   push edx
// 00a5bb9c  ff15f43ab200         call dword ptr [0xb23af4]
// 00a5bba2  56                   push esi
// 00a5bba3  57                   push edi
// 00a5bba4  e8b71cf6ff           call 0x9bd860
// 00a5bba9  6a0f                 push 0xf
// 00a5bbab  8bc8                 mov ecx, eax
// 00a5bbad  e82e14f6ff           call 0x9bcfe0
// 00a5bbb2  8bf0                 mov esi, eax
// 00a5bbb4  e8a71cf6ff           call 0x9bd860
// 00a5bbb9  6a10                 push 0x10
// 00a5bbbb  8bc8                 mov ecx, eax
// 00a5bbbd  e81e14f6ff           call 0x9bcfe0
// 00a5bbc2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5bbc6  56                   push esi
// 00a5bbc7  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a5bbcb  8bf8                 mov edi, eax
// 00a5bbcd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5bbd1  6a07                 push 7
// 00a5bbd3  6a07                 push 7
// 00a5bbd5  40                   inc eax
// 00a5bbd6  41                   inc ecx
// 00a5bbd7  50                   push eax
// 00a5bbd8  51                   push ecx
// 00a5bbd9  8bce                 mov ecx, esi
// 00a5bbdb  e8b0d90300           call 0xa99590
// 00a5bbe0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5bbe4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a5bbe8  57                   push edi
// 00a5bbe9  6a01                 push 1
// 00a5bbeb  6a07                 push 7
// 00a5bbed  52                   push edx
// 00a5bbee  40                   inc eax
// 00a5bbef  50                   push eax
// 00a5bbf0  8bce                 mov ecx, esi
// 00a5bbf2  e899d90300           call 0xa99590
// 00a5bbf7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5bbfb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a5bbff  57                   push edi
// 00a5bc00  6a01                 push 1
// 00a5bc02  6a07                 push 7
// 00a5bc04  49                   dec ecx
// 00a5bc05  51                   push ecx
// 00a5bc06  42                   inc edx
// 00a5bc07  52                   push edx
// 00a5bc08  8bce                 mov ecx, esi
// 00a5bc0a  e881d90300           call 0xa99590
// 00a5bc0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5bc13  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a5bc17  57                   push edi
// 00a5bc18  6a07                 push 7
// 00a5bc1a  6a01                 push 1
// 00a5bc1c  40                   inc eax
// 00a5bc1d  50                   push eax
// 00a5bc1e  51                   push ecx
// 00a5bc1f  8bce                 mov ecx, esi
// 00a5bc21  e86ad90300           call 0xa99590
// 00a5bc26  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5bc2a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5bc2e  57                   push edi
// 00a5bc2f  6a07                 push 7
// 00a5bc31  6a01                 push 1
// 00a5bc33  42                   inc edx
// 00a5bc34  52                   push edx
// 00a5bc35  48                   dec eax
// 00a5bc36  50                   push eax
// 00a5bc37  8bce                 mov ecx, esi
// 00a5bc39  e852d90300           call 0xa99590
// 00a5bc3e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5bc42  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a5bc46  68ffffff00           push 0xffffff
// 00a5bc4b  6a03                 push 3
// 00a5bc4d  6a07                 push 7
// 00a5bc4f  41                   inc ecx
// 00a5bc50  51                   push ecx
// 00a5bc51  42                   inc edx
// 00a5bc52  52                   push edx
// 00a5bc53  8bce                 mov ecx, esi
// 00a5bc55  e836d90300           call 0xa99590
// 00a5bc5a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5bc5e  68ffffff00           push 0xffffff
// 00a5bc63  6a02                 push 2
// 00a5bc65  6a05                 push 5
// 00a5bc67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5bc6b  83c004               add eax, 4
// 00a5bc6e  41                   inc ecx
// 00a5bc6f  50                   push eax
// 00a5bc70  51                   push ecx
// 00a5bc71  8bce                 mov ecx, esi
// 00a5bc73  e818d90300           call 0xa99590
// 00a5bc78  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5bc7c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a5bc80  6a00                 push 0
// 00a5bc82  6a01                 push 1
// 00a5bc84  6a05                 push 5
// 00a5bc86  83c204               add edx, 4
// 00a5bc89  52                   push edx
// 00a5bc8a  83c002               add eax, 2
// 00a5bc8d  50                   push eax
// 00a5bc8e  8bce                 mov ecx, esi
// 00a5bc90  e8fbd80300           call 0xa99590
// 00a5bc95  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 00a5bc9c  751d                 jne 0xa5bcbb
// 00a5bc9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5bca2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a5bca6  6a00                 push 0
// 00a5bca8  6a05                 push 5
// 00a5bcaa  6a01                 push 1
// 00a5bcac  83c102               add ecx, 2
// 00a5bcaf  51                   push ecx
// 00a5bcb0  83c204               add edx, 4
// 00a5bcb3  52                   push edx
// 00a5bcb4  8bce                 mov ecx, esi
// 00a5bcb6  e8d5d80300           call 0xa99590
// 00a5bcbb  5f                   pop edi
// 00a5bcbc  5e                   pop esi
// 00a5bcbd  5b                   pop ebx
// 00a5bcbe  83c410               add esp, 0x10
// 00a5bcc1  c21800               ret 0x18
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawExpandButton@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXAAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
