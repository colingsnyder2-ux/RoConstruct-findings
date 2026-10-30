// roc 2009-06 00798160  unit: CXTPRibbonTheme  size: 739 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00798160
//
// 00798160  6aff                 push -1
// 00798162  68a1bb8700           push 0x87bba1
// 00798167  64a100000000         mov eax, dword ptr fs:[0]
// 0079816d  50                   push eax
// 0079816e  83ec78               sub esp, 0x78
// 00798171  55                   push ebp
// 00798172  56                   push esi
// 00798173  57                   push edi
// 00798174  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00798179  33c4                 xor eax, esp
// 0079817b  50                   push eax
// 0079817c  8d842488000000       lea eax, [esp + 0x88]
// 00798183  64a300000000         mov dword ptr fs:[0], eax
// 00798189  8bf9                 mov edi, ecx
// 0079818b  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 00798192  8bcd                 mov ecx, ebp
// 00798194  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 0079819f  e8383d0b00           call 0x84bedc
// 007981a4  a900000001           test eax, 0x1000000
// 007981a9  744c                 je 0x7981f7
// 007981ab  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 007981b2  8b06                 mov eax, dword ptr [esi]
// 007981b4  8b5038               mov edx, dword ptr [eax + 0x38]
// 007981b7  68ffffff00           push 0xffffff
// 007981bc  8bce                 mov ecx, esi
// 007981be  ffd2                 call edx
// 007981c0  8b3e                 mov edi, dword ptr [esi]
// 007981c2  6824880000           push 0x8824
// 007981c7  8d8424a0000000       lea eax, [esp + 0xa0]
// 007981ce  50                   push eax
// 007981cf  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 007981d6  ff1554fb8900         call dword ptr [0x89fb54]
// 007981dc  50                   push eax
// 007981dd  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 007981e4  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007981ea  8b5770               mov edx, dword ptr [edi + 0x70]
// 007981ed  50                   push eax
// 007981ee  8bce                 mov ecx, esi
// 007981f0  ffd2                 call edx
// 007981f2  e924020000           jmp 0x79841b
// 007981f7  6a00                 push 0
// 007981f9  8d4c2420             lea ecx, [esp + 0x20]
// 007981fd  e81e85ffff           call 0x790720
// 00798202  684c0a9000           push 0x900a4c
// 00798207  6a00                 push 0
// 00798209  8d4c2424             lea ecx, [esp + 0x24]
// 0079820d  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00798215  e8c68affff           call 0x790ce0
// 0079821a  8d4c241c             lea ecx, [esp + 0x1c]
// 0079821e  e87d89ffff           call 0x790ba0
// 00798223  6a00                 push 0
// 00798225  85c0                 test eax, eax
// 00798227  7547                 jne 0x798270
// 00798229  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00798230  8b06                 mov eax, dword ptr [esi]
// 00798232  8b5038               mov edx, dword ptr [eax + 0x38]
// 00798235  8bce                 mov ecx, esi
// 00798237  ffd2                 call edx
// 00798239  8b3e                 mov edi, dword ptr [esi]
// 0079823b  6824880000           push 0x8824
// 00798240  8d8424a0000000       lea eax, [esp + 0xa0]
// 00798247  50                   push eax
// 00798248  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0079824f  ff1554fb8900         call dword ptr [0x89fb54]
// 00798255  50                   push eax
// 00798256  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 0079825d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00798263  8b5770               mov edx, dword ptr [edi + 0x70]
// 00798266  50                   push eax
// 00798267  8bce                 mov ecx, esi
// 00798269  ffd2                 call edx
// 0079826b  e99a010000           jmp 0x79840a
// 00798270  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00798277  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0079827e  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00798285  894c2430             mov dword ptr [esp + 0x30], ecx
// 00798289  8944242c             mov dword ptr [esp + 0x2c], eax
// 0079828d  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00798294  6a05                 push 5
// 00798296  8d4c2430             lea ecx, [esp + 0x30]
// 0079829a  51                   push ecx
// 0079829b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0079829f  89442440             mov dword ptr [esp + 0x40], eax
// 007982a3  ff15bced8900         call dword ptr [0x89edbc]
// 007982a9  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007982b0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007982b8  85c0                 test eax, eax
// 007982ba  7403                 je 0x7982bf
// 007982bc  8b4004               mov eax, dword ptr [eax + 4]
// 007982bf  8d542410             lea edx, [esp + 0x10]
// 007982c3  52                   push edx
// 007982c4  6a00                 push 0
// 007982c6  6a02                 push 2
// 007982c8  8d4c2434             lea ecx, [esp + 0x34]
// 007982cc  51                   push ecx
// 007982cd  50                   push eax
// 007982ce  8d4c2430             lea ecx, [esp + 0x30]
// 007982d2  e8c98bffff           call 0x790ea0
// 007982d7  8b742410             mov esi, dword ptr [esp + 0x10]
// 007982db  89442418             mov dword ptr [esp + 0x18], eax
// 007982df  85f6                 test esi, esi
// 007982e1  0f8413010000         je 0x7983fa
// 007982e7  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 007982ee  85c0                 test eax, eax
// 007982f0  7504                 jne 0x7982f6
// 007982f2  33d2                 xor edx, edx
// 007982f4  eb03                 jmp 0x7982f9
// 007982f6  8b5004               mov edx, dword ptr [eax + 4]
// 007982f9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007982fd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00798301  682000cc00           push 0xcc0020
// 00798306  50                   push eax
// 00798307  51                   push ecx
// 00798308  52                   push edx
// 00798309  8b542444             mov edx, dword ptr [esp + 0x44]
// 0079830d  2bd0                 sub edx, eax
// 0079830f  52                   push edx
// 00798310  8b542444             mov edx, dword ptr [esp + 0x44]
// 00798314  2bd1                 sub edx, ecx
// 00798316  52                   push edx
// 00798317  50                   push eax
// 00798318  51                   push ecx
// 00798319  56                   push esi
// 0079831a  ff15e0e08900         call dword ptr [0x89e0e0]
// 00798320  8b442410             mov eax, dword ptr [esp + 0x10]
// 00798324  6a00                 push 0
// 00798326  50                   push eax
// 00798327  ff15bce08900         call dword ptr [0x89e0bc]
// 0079832d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00798331  81c7b4050000         add edi, 0x5b4
// 00798337  57                   push edi
// 00798338  51                   push ecx
// 00798339  c744245040000000     mov dword ptr [esp + 0x50], 0x40
// 00798341  c744245400280000     mov dword ptr [esp + 0x54], 0x2800
// 00798349  c784248400000008000000 mov dword ptr [esp + 0x84], 8
// 00798354  e8b33b0b00           call 0x84bf0c
// 00798359  50                   push eax
// 0079835a  8d4c2440             lea ecx, [esp + 0x40]
// 0079835e  e8fd84fdff           call 0x770860
// 00798363  8d8c24ac000000       lea ecx, [esp + 0xac]
// 0079836a  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00798372  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00798378  50                   push eax
// 00798379  8d4c2418             lea ecx, [esp + 0x18]
// 0079837d  e8ae2e0000           call 0x79b230
// 00798382  8d542448             lea edx, [esp + 0x48]
// 00798386  52                   push edx
// 00798387  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0079838e  51                   push ecx
// 0079838f  6824880000           push 0x8824
// 00798394  6aff                 push -1
// 00798396  8bc8                 mov ecx, eax
// 00798398  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 007983a0  e8bb1ed4ff           call 0x4da260
// 007983a5  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 007983ac  f7da                 neg edx
// 007983ae  1bd2                 sbb edx, edx
// 007983b0  50                   push eax
// 007983b1  83c202               add edx, 2
// 007983b4  52                   push edx
// 007983b5  8bcd                 mov ecx, ebp
// 007983b7  e8203b0b00           call 0x84bedc
// 007983bc  2500000001           and eax, 0x1000000
// 007983c1  0d00004000           or eax, 0x400000
// 007983c6  c1e816               shr eax, 0x16
// 007983c9  50                   push eax
// 007983ca  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007983ce  50                   push eax
// 007983cf  8d4c243c             lea ecx, [esp + 0x3c]
// 007983d3  e8f889ffff           call 0x790dd0
// 007983d8  8d4c2414             lea ecx, [esp + 0x14]
// 007983dc  c684249000000002     mov byte ptr [esp + 0x90], 2
// 007983e4  e8b76cd1ff           call 0x4af0a0
// 007983e9  8d4c2438             lea ecx, [esp + 0x38]
// 007983ed  c684249000000001     mov byte ptr [esp + 0x90], 1
// 007983f5  e8e684fdff           call 0x7708e0
// 007983fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007983fe  6a01                 push 1
// 00798400  51                   push ecx
// 00798401  8d4c2424             lea ecx, [esp + 0x24]
// 00798405  e8468bffff           call 0x790f50
// 0079840a  8d4c241c             lea ecx, [esp + 0x1c]
// 0079840e  c684249000000000     mov byte ptr [esp + 0x90], 0
// 00798416  e8d58cffff           call 0x7910f0
// 0079841b  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00798422  ff1510fd8900         call dword ptr [0x89fd10]
// 00798428  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0079842f  64890d00000000       mov dword ptr fs:[0], ecx
// 00798436  59                   pop ecx
// 00798437  5f                   pop edi
// 00798438  5e                   pop esi
// 00798439  5d                   pop ebp
// 0079843a  81c484000000         add esp, 0x84
// 00798440  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawDwmCaptionText@CXTPRibbonTheme@@IAEXPAVCDC@@VCRect@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp