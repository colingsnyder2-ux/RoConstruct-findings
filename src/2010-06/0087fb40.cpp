// roc 2010-06 0087fb40  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087fb40
//
// 0087fb40  83ec10               sub esp, 0x10
// 0087fb43  53                   push ebx
// 0087fb44  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087fb48  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 0087fb4f  0f8478010000         je 0x87fccd
// 0087fb55  8b442424             mov eax, dword ptr [esp + 0x24]
// 0087fb59  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087fb5d  03c1                 add eax, ecx
// 0087fb5f  99                   cdq 
// 0087fb60  2bc2                 sub eax, edx
// 0087fb62  d1f8                 sar eax, 1
// 0087fb64  83e804               sub eax, 4
// 0087fb67  89442408             mov dword ptr [esp + 8], eax
// 0087fb6b  83c009               add eax, 9
// 0087fb6e  89442410             mov dword ptr [esp + 0x10], eax
// 0087fb72  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0087fb78  c744240402000000     mov dword ptr [esp + 4], 2
// 0087fb80  c744240c0b000000     mov dword ptr [esp + 0xc], 0xb
// 0087fb88  85c0                 test eax, eax
// 0087fb8a  7e26                 jle 0x87fbb2
// 0087fb8c  33d2                 xor edx, edx
// 0087fb8e  399398000000         cmp dword ptr [ebx + 0x98], edx
// 0087fb94  6a00                 push 0
// 0087fb96  0f94c2               sete dl
// 0087fb99  2bc2                 sub eax, edx
// 0087fb9b  8d0cc500000000       lea ecx, [eax*8]
// 0087fba2  2bc8                 sub ecx, eax
// 0087fba4  03c9                 add ecx, ecx
// 0087fba6  51                   push ecx
// 0087fba7  8d54240c             lea edx, [esp + 0xc]
// 0087fbab  52                   push edx
// 0087fbac  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0087fbb2  56                   push esi
// 0087fbb3  57                   push edi
// 0087fbb4  e8673ff6ff           call 0x7e3b20
// 0087fbb9  6a0f                 push 0xf
// 0087fbbb  8bc8                 mov ecx, eax
// 0087fbbd  e8ee36f6ff           call 0x7e32b0
// 0087fbc2  8bf0                 mov esi, eax
// 0087fbc4  e8573ff6ff           call 0x7e3b20
// 0087fbc9  6a10                 push 0x10
// 0087fbcb  8bc8                 mov ecx, eax
// 0087fbcd  e8de36f6ff           call 0x7e32b0
// 0087fbd2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087fbd6  56                   push esi
// 0087fbd7  8b742424             mov esi, dword ptr [esp + 0x24]
// 0087fbdb  8bf8                 mov edi, eax
// 0087fbdd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087fbe1  6a07                 push 7
// 0087fbe3  6a07                 push 7
// 0087fbe5  40                   inc eax
// 0087fbe6  41                   inc ecx
// 0087fbe7  50                   push eax
// 0087fbe8  51                   push ecx
// 0087fbe9  8bce                 mov ecx, esi
// 0087fbeb  e89ad10f00           call 0x97cd8a
// 0087fbf0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087fbf4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087fbf8  57                   push edi
// 0087fbf9  6a01                 push 1
// 0087fbfb  6a07                 push 7
// 0087fbfd  52                   push edx
// 0087fbfe  40                   inc eax
// 0087fbff  50                   push eax
// 0087fc00  8bce                 mov ecx, esi
// 0087fc02  e883d10f00           call 0x97cd8a
// 0087fc07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087fc0b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087fc0f  57                   push edi
// 0087fc10  6a01                 push 1
// 0087fc12  6a07                 push 7
// 0087fc14  49                   dec ecx
// 0087fc15  51                   push ecx
// 0087fc16  42                   inc edx
// 0087fc17  52                   push edx
// 0087fc18  8bce                 mov ecx, esi
// 0087fc1a  e86bd10f00           call 0x97cd8a
// 0087fc1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087fc23  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087fc27  57                   push edi
// 0087fc28  6a07                 push 7
// 0087fc2a  6a01                 push 1
// 0087fc2c  40                   inc eax
// 0087fc2d  50                   push eax
// 0087fc2e  51                   push ecx
// 0087fc2f  8bce                 mov ecx, esi
// 0087fc31  e854d10f00           call 0x97cd8a
// 0087fc36  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087fc3a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087fc3e  57                   push edi
// 0087fc3f  6a07                 push 7
// 0087fc41  6a01                 push 1
// 0087fc43  42                   inc edx
// 0087fc44  52                   push edx
// 0087fc45  48                   dec eax
// 0087fc46  50                   push eax
// 0087fc47  8bce                 mov ecx, esi
// 0087fc49  e83cd10f00           call 0x97cd8a
// 0087fc4e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087fc52  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087fc56  68ffffff00           push 0xffffff
// 0087fc5b  6a03                 push 3
// 0087fc5d  6a07                 push 7
// 0087fc5f  41                   inc ecx
// 0087fc60  51                   push ecx
// 0087fc61  42                   inc edx
// 0087fc62  52                   push edx
// 0087fc63  8bce                 mov ecx, esi
// 0087fc65  e820d10f00           call 0x97cd8a
// 0087fc6a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087fc6e  68ffffff00           push 0xffffff
// 0087fc73  6a02                 push 2
// 0087fc75  6a05                 push 5
// 0087fc77  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087fc7b  83c004               add eax, 4
// 0087fc7e  41                   inc ecx
// 0087fc7f  50                   push eax
// 0087fc80  51                   push ecx
// 0087fc81  8bce                 mov ecx, esi
// 0087fc83  e802d10f00           call 0x97cd8a
// 0087fc88  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087fc8c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087fc90  6a00                 push 0
// 0087fc92  6a01                 push 1
// 0087fc94  6a05                 push 5
// 0087fc96  83c204               add edx, 4
// 0087fc99  52                   push edx
// 0087fc9a  83c002               add eax, 2
// 0087fc9d  50                   push eax
// 0087fc9e  8bce                 mov ecx, esi
// 0087fca0  e8e5d00f00           call 0x97cd8a
// 0087fca5  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 0087fcac  751d                 jne 0x87fccb
// 0087fcae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087fcb2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0087fcb6  6a00                 push 0
// 0087fcb8  6a05                 push 5
// 0087fcba  6a01                 push 1
// 0087fcbc  83c102               add ecx, 2
// 0087fcbf  51                   push ecx
// 0087fcc0  83c204               add edx, 4
// 0087fcc3  52                   push edx
// 0087fcc4  8bce                 mov ecx, esi
// 0087fcc6  e8bfd00f00           call 0x97cd8a
// 0087fccb  5f                   pop edi
// 0087fccc  5e                   pop esi
// 0087fccd  5b                   pop ebx
// 0087fcce  83c410               add esp, 0x10
// 0087fcd1  c21800               ret 0x18
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawExpandButton@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXAAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
