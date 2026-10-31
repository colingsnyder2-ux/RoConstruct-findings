// roc 2007-08 005462b0  unit: RBX::MD5HasherImpl  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005462b0
//
// 005462b0  53                   push ebx
// 005462b1  56                   push esi
// 005462b2  8b742410             mov esi, dword ptr [esp + 0x10]
// 005462b6  85f6                 test esi, esi
// 005462b8  8bd9                 mov ebx, ecx
// 005462ba  750a                 jne 0x5462c6
// 005462bc  e86ff6ffff           call 0x545930
// 005462c1  5e                   pop esi
// 005462c2  5b                   pop ebx
// 005462c3  c20800               ret 8
// 005462c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005462ca  85c9                 test ecx, ecx
// 005462cc  750a                 jne 0x5462d8
// 005462ce  6857000780           push 0x80070057
// 005462d3  e828adebff           call 0x401000
// 005462d8  8b03                 mov eax, dword ptr [ebx]
// 005462da  55                   push ebp
// 005462db  8b68f4               mov ebp, dword ptr [eax - 0xc]
// 005462de  57                   push edi
// 005462df  8bf9                 mov edi, ecx
// 005462e1  2bf8                 sub edi, eax
// 005462e3  ba01000000           mov edx, 1
// 005462e8  2b50fc               sub edx, dword ptr [eax - 4]
// 005462eb  8b40f8               mov eax, dword ptr [eax - 8]
// 005462ee  2bc6                 sub eax, esi
// 005462f0  0bd0                 or edx, eax
// 005462f2  7d0c                 jge 0x546300
// 005462f4  56                   push esi
// 005462f5  8bcb                 mov ecx, ebx
// 005462f7  e844ceecff           call 0x413140
// 005462fc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00546300  3bfd                 cmp edi, ebp
// 00546302  8b03                 mov eax, dword ptr [ebx]
// 00546304  56                   push esi
// 00546305  770e                 ja 0x546315
// 00546307  8d0c38               lea ecx, [eax + edi]
// 0054630a  51                   push ecx
// 0054630b  56                   push esi
// 0054630c  50                   push eax
// 0054630d  ff1548e77700         call dword ptr [0x77e748]
// 00546313  eb09                 jmp 0x54631e
// 00546315  51                   push ecx
// 00546316  56                   push esi
// 00546317  50                   push eax
// 00546318  ff15d4e67700         call dword ptr [0x77e6d4]
// 0054631e  83c410               add esp, 0x10
// 00546321  85f6                 test esi, esi
// 00546323  5f                   pop edi
// 00546324  5d                   pop ebp
// 00546325  7ca7                 jl 0x5462ce
// 00546327  8b03                 mov eax, dword ptr [ebx]
// 00546329  3b70f8               cmp esi, dword ptr [eax - 8]
// 0054632c  7fa0                 jg 0x5462ce
// 0054632e  8970f4               mov dword ptr [eax - 0xc], esi
// 00546331  8b13                 mov edx, dword ptr [ebx]
// 00546333  c6041600             mov byte ptr [esi + edx], 0
// 00546337  5e                   pop esi
// 00546338  5b                   pop ebx
// 00546339  c20800               ret 8
// copied from an identical function in another client (function ?SetString@?$CSimpleStringT@D$0A@@ATL@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp