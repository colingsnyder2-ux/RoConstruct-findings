// roc 2007-03 00545a70  unit: seg_00540000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545a70
//
// 00545a70  8b442414             mov eax, dword ptr [esp + 0x14]
// 00545a74  55                   push ebp
// 00545a75  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00545a79  56                   push esi
// 00545a7a  57                   push edi
// 00545a7b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00545a7f  8d3407               lea esi, [edi + eax]
// 00545a82  8b4500               mov eax, dword ptr [ebp]
// 00545a85  8b50f8               mov edx, dword ptr [eax - 8]
// 00545a88  83e810               sub eax, 0x10
// 00545a8b  b901000000           mov ecx, 1
// 00545a90  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00545a93  2bd6                 sub edx, esi
// 00545a95  0bca                 or ecx, edx
// 00545a97  7d08                 jge 0x545aa1
// 00545a99  56                   push esi
// 00545a9a  8bcd                 mov ecx, ebp
// 00545a9c  e89fe5ecff           call 0x414040
// 00545aa1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00545aa5  53                   push ebx
// 00545aa6  8b5d00               mov ebx, dword ptr [ebp]
// 00545aa9  57                   push edi
// 00545aaa  50                   push eax
// 00545aab  57                   push edi
// 00545aac  53                   push ebx
// 00545aad  ff1540e97700         call dword ptr [0x77e940]
// 00545ab3  8b442434             mov eax, dword ptr [esp + 0x34]
// 00545ab7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00545abb  50                   push eax
// 00545abc  51                   push ecx
// 00545abd  50                   push eax
// 00545abe  03df                 add ebx, edi
// 00545ac0  53                   push ebx
// 00545ac1  ff1540e97700         call dword ptr [0x77e940]
// 00545ac7  83c420               add esp, 0x20
// 00545aca  85f6                 test esi, esi
// 00545acc  5b                   pop ebx
// 00545acd  7c16                 jl 0x545ae5
// 00545acf  8b4500               mov eax, dword ptr [ebp]
// 00545ad2  3b70f8               cmp esi, dword ptr [eax - 8]
// 00545ad5  7f0e                 jg 0x545ae5
// 00545ad7  8970f4               mov dword ptr [eax - 0xc], esi
// 00545ada  8b5500               mov edx, dword ptr [ebp]
// 00545add  5f                   pop edi
// 00545ade  c6041600             mov byte ptr [esi + edx], 0
// 00545ae2  5e                   pop esi
// 00545ae3  5d                   pop ebp
// 00545ae4  c3                   ret 
// 00545ae5  6857000780           push 0x80070057
// 00545aea  e811b5ebff           call 0x401000
// copied from an identical function in another client (function ?Concatenate@?$CSimpleStringT@D$0A@@ATL@@KAXAAV12@PBDH1H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp