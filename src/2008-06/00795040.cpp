// from server: 100% by auto
// roc 2008-06 00795040  unit: CXTPRibbonGroup  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795040
//
// 00795040  53                   push ebx
// 00795041  55                   push ebp
// 00795042  57                   push edi
// 00795043  8be9                 mov ebp, ecx
// 00795045  e826ffffff           call 0x794f70
// 0079504a  6a01                 push 1
// 0079504c  33ff                 xor edi, edi
// 0079504e  57                   push edi
// 0079504f  8bcd                 mov ecx, ebp
// 00795051  8bd8                 mov ebx, eax
// 00795053  e878f8ffff           call 0x7948d0
// 00795058  83f802               cmp eax, 2
// 0079505b  7d06                 jge 0x795063
// 0079505d  5f                   pop edi
// 0079505e  5d                   pop ebp
// 0079505f  33c0                 xor eax, eax
// 00795061  5b                   pop ebx
// 00795062  c3                   ret 
// 00795063  7447                 je 0x7950ac
// 00795065  85db                 test ebx, ebx
// 00795067  7e43                 jle 0x7950ac
// 00795069  56                   push esi
// 0079506a  8d9b00000000         lea ebx, [ebx]
// 00795070  8d041f               lea eax, [edi + ebx]
// 00795073  99                   cdq 
// 00795074  2bc2                 sub eax, edx
// 00795076  8bf0                 mov esi, eax
// 00795078  6a01                 push 1
// 0079507a  d1fe                 sar esi, 1
// 0079507c  56                   push esi
// 0079507d  8bcd                 mov ecx, ebp
// 0079507f  e84cf8ffff           call 0x7948d0
// 00795084  83f802               cmp eax, 2
// 00795087  7f04                 jg 0x79508d
// 00795089  8bde                 mov ebx, esi
// 0079508b  eb06                 jmp 0x795093
// 0079508d  3bfe                 cmp edi, esi
// 0079508f  7410                 je 0x7950a1
// 00795091  8bfe                 mov edi, esi
// 00795093  3bfb                 cmp edi, ebx
// 00795095  7cd9                 jl 0x795070
// 00795097  5e                   pop esi
// 00795098  5f                   pop edi
// 00795099  5d                   pop ebp
// 0079509a  b801000000           mov eax, 1
// 0079509f  5b                   pop ebx
// 007950a0  c3                   ret 
// 007950a1  6a01                 push 1
// 007950a3  53                   push ebx
// 007950a4  8bcd                 mov ecx, ebp
// 007950a6  e825f8ffff           call 0x7948d0
// 007950ab  5e                   pop esi
// 007950ac  5f                   pop edi
// 007950ad  5d                   pop ebp
// 007950ae  b801000000           mov eax, 1
// 007950b3  5b                   pop ebx
// 007950b4  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?_FindBestWrapSpecialDynamicSize@CXTPRibbonGroup@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
