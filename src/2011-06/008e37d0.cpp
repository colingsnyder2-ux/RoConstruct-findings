// roc 2011-06 008e37d0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e37d0
//
// 008e37d0  83ec10               sub esp, 0x10
// 008e37d3  53                   push ebx
// 008e37d4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008e37d8  83bb9c00000000       cmp dword ptr [ebx + 0x9c], 0
// 008e37df  0f8478010000         je 0x8e395d
// 008e37e5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e37e9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e37ed  03c1                 add eax, ecx
// 008e37ef  99                   cdq 
// 008e37f0  2bc2                 sub eax, edx
// 008e37f2  d1f8                 sar eax, 1
// 008e37f4  83e804               sub eax, 4
// 008e37f7  89442408             mov dword ptr [esp + 8], eax
// 008e37fb  83c009               add eax, 9
// 008e37fe  89442410             mov dword ptr [esp + 0x10], eax
// 008e3802  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 008e3808  c744240402000000     mov dword ptr [esp + 4], 2
// 008e3810  c744240c0b000000     mov dword ptr [esp + 0xc], 0xb
// 008e3818  85c0                 test eax, eax
// 008e381a  7e26                 jle 0x8e3842
// 008e381c  33d2                 xor edx, edx
// 008e381e  399398000000         cmp dword ptr [ebx + 0x98], edx
// 008e3824  6a00                 push 0
// 008e3826  0f94c2               sete dl
// 008e3829  2bc2                 sub eax, edx
// 008e382b  8d0cc500000000       lea ecx, [eax*8]
// 008e3832  2bc8                 sub ecx, eax
// 008e3834  03c9                 add ecx, ecx
// 008e3836  51                   push ecx
// 008e3837  8d54240c             lea edx, [esp + 0xc]
// 008e383b  52                   push edx
// 008e383c  ff15601ca400         call dword ptr [0xa41c60]
// 008e3842  56                   push esi
// 008e3843  57                   push edi
// 008e3844  e8971bf6ff           call 0x8453e0
// 008e3849  6a0f                 push 0xf
// 008e384b  8bc8                 mov ecx, eax
// 008e384d  e85e13f6ff           call 0x844bb0
// 008e3852  8bf0                 mov esi, eax
// 008e3854  e8871bf6ff           call 0x8453e0
// 008e3859  6a10                 push 0x10
// 008e385b  8bc8                 mov ecx, eax
// 008e385d  e84e13f6ff           call 0x844bb0
// 008e3862  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e3866  56                   push esi
// 008e3867  8b742424             mov esi, dword ptr [esp + 0x24]
// 008e386b  8bf8                 mov edi, eax
// 008e386d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e3871  6a07                 push 7
// 008e3873  6a07                 push 7
// 008e3875  40                   inc eax
// 008e3876  41                   inc ecx
// 008e3877  50                   push eax
// 008e3878  51                   push ecx
// 008e3879  8bce                 mov ecx, esi
// 008e387b  e8568d0e00           call 0x9cc5d6
// 008e3880  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e3884  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e3888  57                   push edi
// 008e3889  6a01                 push 1
// 008e388b  6a07                 push 7
// 008e388d  52                   push edx
// 008e388e  40                   inc eax
// 008e388f  50                   push eax
// 008e3890  8bce                 mov ecx, esi
// 008e3892  e83f8d0e00           call 0x9cc5d6
// 008e3897  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e389b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e389f  57                   push edi
// 008e38a0  6a01                 push 1
// 008e38a2  6a07                 push 7
// 008e38a4  49                   dec ecx
// 008e38a5  51                   push ecx
// 008e38a6  42                   inc edx
// 008e38a7  52                   push edx
// 008e38a8  8bce                 mov ecx, esi
// 008e38aa  e8278d0e00           call 0x9cc5d6
// 008e38af  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e38b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e38b7  57                   push edi
// 008e38b8  6a07                 push 7
// 008e38ba  6a01                 push 1
// 008e38bc  40                   inc eax
// 008e38bd  50                   push eax
// 008e38be  51                   push ecx
// 008e38bf  8bce                 mov ecx, esi
// 008e38c1  e8108d0e00           call 0x9cc5d6
// 008e38c6  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e38ca  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e38ce  57                   push edi
// 008e38cf  6a07                 push 7
// 008e38d1  6a01                 push 1
// 008e38d3  42                   inc edx
// 008e38d4  52                   push edx
// 008e38d5  48                   dec eax
// 008e38d6  50                   push eax
// 008e38d7  8bce                 mov ecx, esi
// 008e38d9  e8f88c0e00           call 0x9cc5d6
// 008e38de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e38e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e38e6  68ffffff00           push 0xffffff
// 008e38eb  6a03                 push 3
// 008e38ed  6a07                 push 7
// 008e38ef  41                   inc ecx
// 008e38f0  51                   push ecx
// 008e38f1  42                   inc edx
// 008e38f2  52                   push edx
// 008e38f3  8bce                 mov ecx, esi
// 008e38f5  e8dc8c0e00           call 0x9cc5d6
// 008e38fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e38fe  68ffffff00           push 0xffffff
// 008e3903  6a02                 push 2
// 008e3905  6a05                 push 5
// 008e3907  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e390b  83c004               add eax, 4
// 008e390e  41                   inc ecx
// 008e390f  50                   push eax
// 008e3910  51                   push ecx
// 008e3911  8bce                 mov ecx, esi
// 008e3913  e8be8c0e00           call 0x9cc5d6
// 008e3918  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e391c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e3920  6a00                 push 0
// 008e3922  6a01                 push 1
// 008e3924  6a05                 push 5
// 008e3926  83c204               add edx, 4
// 008e3929  52                   push edx
// 008e392a  83c002               add eax, 2
// 008e392d  50                   push eax
// 008e392e  8bce                 mov ecx, esi
// 008e3930  e8a18c0e00           call 0x9cc5d6
// 008e3935  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 008e393c  751d                 jne 0x8e395b
// 008e393e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e3942  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e3946  6a00                 push 0
// 008e3948  6a05                 push 5
// 008e394a  6a01                 push 1
// 008e394c  83c102               add ecx, 2
// 008e394f  51                   push ecx
// 008e3950  83c204               add edx, 4
// 008e3953  52                   push edx
// 008e3954  8bce                 mov ecx, esi
// 008e3956  e87b8c0e00           call 0x9cc5d6
// 008e395b  5f                   pop edi
// 008e395c  5e                   pop esi
// 008e395d  5b                   pop ebx
// 008e395e  83c410               add esp, 0x10
// 008e3961  c21800               ret 0x18
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawExpandButton@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXAAVCDC@@PAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
