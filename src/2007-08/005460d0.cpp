// roc 2007-08 005460d0  unit: RBX::MD5HasherImpl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005460d0
//
// 005460d0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005460d4  55                   push ebp
// 005460d5  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005460d9  56                   push esi
// 005460da  57                   push edi
// 005460db  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005460df  8d3407               lea esi, [edi + eax]
// 005460e2  8b4500               mov eax, dword ptr [ebp]
// 005460e5  8b50f8               mov edx, dword ptr [eax - 8]
// 005460e8  83e810               sub eax, 0x10
// 005460eb  b901000000           mov ecx, 1
// 005460f0  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005460f3  2bd6                 sub edx, esi
// 005460f5  0bca                 or ecx, edx
// 005460f7  7d08                 jge 0x546101
// 005460f9  56                   push esi
// 005460fa  8bcd                 mov ecx, ebp
// 005460fc  e83fd0ecff           call 0x413140
// 00546101  8b442414             mov eax, dword ptr [esp + 0x14]
// 00546105  53                   push ebx
// 00546106  8b5d00               mov ebx, dword ptr [ebp]
// 00546109  57                   push edi
// 0054610a  50                   push eax
// 0054610b  57                   push edi
// 0054610c  53                   push ebx
// 0054610d  ff15d4e67700         call dword ptr [0x77e6d4]
// 00546113  8b442434             mov eax, dword ptr [esp + 0x34]
// 00546117  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0054611b  50                   push eax
// 0054611c  51                   push ecx
// 0054611d  50                   push eax
// 0054611e  03df                 add ebx, edi
// 00546120  53                   push ebx
// 00546121  ff15d4e67700         call dword ptr [0x77e6d4]
// 00546127  83c420               add esp, 0x20
// 0054612a  85f6                 test esi, esi
// 0054612c  5b                   pop ebx
// 0054612d  7c16                 jl 0x546145
// 0054612f  8b4500               mov eax, dword ptr [ebp]
// 00546132  3b70f8               cmp esi, dword ptr [eax - 8]
// 00546135  7f0e                 jg 0x546145
// 00546137  8970f4               mov dword ptr [eax - 0xc], esi
// 0054613a  8b5500               mov edx, dword ptr [ebp]
// 0054613d  5f                   pop edi
// 0054613e  c6041600             mov byte ptr [esi + edx], 0
// 00546142  5e                   pop esi
// 00546143  5d                   pop ebp
// 00546144  c3                   ret 
// 00546145  6857000780           push 0x80070057
// 0054614a  e8b1aeebff           call 0x401000
// copied from an identical function in another client (function ?Concatenate@?$CSimpleStringT@D$0A@@ATL@@KAXAAV12@PBDH1H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp