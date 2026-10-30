// from server: 100% by auto
// roc 2008-06 007786a0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007786a0
//
// 007786a0  83ec10               sub esp, 0x10
// 007786a3  53                   push ebx
// 007786a4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007786a8  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 007786af  0f8478010000         je 0x77882d
// 007786b5  8b442424             mov eax, dword ptr [esp + 0x24]
// 007786b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007786bd  03c1                 add eax, ecx
// 007786bf  99                   cdq 
// 007786c0  2bc2                 sub eax, edx
// 007786c2  d1f8                 sar eax, 1
// 007786c4  83e804               sub eax, 4
// 007786c7  89442408             mov dword ptr [esp + 8], eax
// 007786cb  83c009               add eax, 9
// 007786ce  89442410             mov dword ptr [esp + 0x10], eax
// 007786d2  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 007786d8  c744240402000000     mov dword ptr [esp + 4], 2
// 007786e0  c744240c0b000000     mov dword ptr [esp + 0xc], 0xb
// 007786e8  85c0                 test eax, eax
// 007786ea  7e26                 jle 0x778712
// 007786ec  33d2                 xor edx, edx
// 007786ee  399398000000         cmp dword ptr [ebx + 0x98], edx
// 007786f4  6a00                 push 0
// 007786f6  0f94c2               sete dl
// 007786f9  2bc2                 sub eax, edx
// 007786fb  8d0cc500000000       lea ecx, [eax*8]
// 00778702  2bc8                 sub ecx, eax
// 00778704  03c9                 add ecx, ecx
// 00778706  51                   push ecx
// 00778707  8d54240c             lea edx, [esp + 0xc]
// 0077870b  52                   push edx
// 0077870c  ff15682d8000         call dword ptr [0x802d68]
// 00778712  56                   push esi
// 00778713  57                   push edi
// 00778714  e82776f6ff           call 0x6dfd40
// 00778719  6a0f                 push 0xf
// 0077871b  8bc8                 mov ecx, eax
// 0077871d  e8fe6df6ff           call 0x6df520
// 00778722  8bf0                 mov esi, eax
// 00778724  e81776f6ff           call 0x6dfd40
// 00778729  6a10                 push 0x10
// 0077872b  8bc8                 mov ecx, eax
// 0077872d  e8ee6df6ff           call 0x6df520
// 00778732  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00778736  56                   push esi
// 00778737  8b742424             mov esi, dword ptr [esp + 0x24]
// 0077873b  8bf8                 mov edi, eax
// 0077873d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00778741  6a07                 push 7
// 00778743  6a07                 push 7
// 00778745  40                   inc eax
// 00778746  41                   inc ecx
// 00778747  50                   push eax
// 00778748  51                   push ecx
// 00778749  8bce                 mov ecx, esi
// 0077874b  e8f0380400           call 0x7bc040
// 00778750  8b542410             mov edx, dword ptr [esp + 0x10]
// 00778754  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00778758  57                   push edi
// 00778759  6a01                 push 1
// 0077875b  6a07                 push 7
// 0077875d  52                   push edx
// 0077875e  40                   inc eax
// 0077875f  50                   push eax
// 00778760  8bce                 mov ecx, esi
// 00778762  e8d9380400           call 0x7bc040
// 00778767  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077876b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077876f  57                   push edi
// 00778770  6a01                 push 1
// 00778772  6a07                 push 7
// 00778774  49                   dec ecx
// 00778775  51                   push ecx
// 00778776  42                   inc edx
// 00778777  52                   push edx
// 00778778  8bce                 mov ecx, esi
// 0077877a  e8c1380400           call 0x7bc040
// 0077877f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00778783  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00778787  57                   push edi
// 00778788  6a07                 push 7
// 0077878a  6a01                 push 1
// 0077878c  40                   inc eax
// 0077878d  50                   push eax
// 0077878e  51                   push ecx
// 0077878f  8bce                 mov ecx, esi
// 00778791  e8aa380400           call 0x7bc040
// 00778796  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077879a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077879e  57                   push edi
// 0077879f  6a07                 push 7
// 007787a1  6a01                 push 1
// 007787a3  42                   inc edx
// 007787a4  52                   push edx
// 007787a5  48                   dec eax
// 007787a6  50                   push eax
// 007787a7  8bce                 mov ecx, esi
// 007787a9  e892380400           call 0x7bc040
// 007787ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007787b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007787b6  68ffffff00           push 0xffffff
// 007787bb  6a03                 push 3
// 007787bd  6a07                 push 7
// 007787bf  41                   inc ecx
// 007787c0  51                   push ecx
// 007787c1  42                   inc edx
// 007787c2  52                   push edx
// 007787c3  8bce                 mov ecx, esi
// 007787c5  e876380400           call 0x7bc040
// 007787ca  8b442410             mov eax, dword ptr [esp + 0x10]
// 007787ce  68ffffff00           push 0xffffff
// 007787d3  6a02                 push 2
// 007787d5  6a05                 push 5
// 007787d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007787db  83c004               add eax, 4
// 007787de  41                   inc ecx
// 007787df  50                   push eax
// 007787e0  51                   push ecx
// 007787e1  8bce                 mov ecx, esi
// 007787e3  e858380400           call 0x7bc040
// 007787e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007787ec  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007787f0  6a00                 push 0
// 007787f2  6a01                 push 1
// 007787f4  6a05                 push 5
// 007787f6  83c204               add edx, 4
// 007787f9  52                   push edx
// 007787fa  83c002               add eax, 2
// 007787fd  50                   push eax
// 007787fe  8bce                 mov ecx, esi
// 00778800  e83b380400           call 0x7bc040
// 00778805  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 0077880c  751d                 jne 0x77882b
// 0077880e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00778812  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00778816  6a00                 push 0
// 00778818  6a05                 push 5
// 0077881a  6a01                 push 1
// 0077881c  83c102               add ecx, 2
// 0077881f  51                   push ecx
// 00778820  83c204               add edx, 4
// 00778823  52                   push edx
// 00778824  8bce                 mov ecx, esi
// 00778826  e815380400           call 0x7bc040
// 0077882b  5f                   pop edi
// 0077882c  5e                   pop esi
// 0077882d  5b                   pop ebx
// 0077882e  83c410               add esp, 0x10
// 00778831  c21800               ret 0x18
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawExpandButton@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXAAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
