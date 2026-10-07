// roc 2012-06 006b9da0  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b9da0
//
// 006b9da0  53                   push ebx
// 006b9da1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006b9da5  57                   push edi
// 006b9da6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b9daa  57                   push edi
// 006b9dab  53                   push ebx
// 006b9dac  ff158421b200         call dword ptr [0xb22184]
// 006b9db2  85c0                 test eax, eax
// 006b9db4  7503                 jne 0x6b9db9
// 006b9db6  5f                   pop edi
// 006b9db7  5b                   pop ebx
// 006b9db8  c3                   ret 
// 006b9db9  56                   push esi
// 006b9dba  50                   push eax
// 006b9dbb  ff15d422b200         call dword ptr [0xb222d4]
// 006b9dc1  8bf0                 mov esi, eax
// 006b9dc3  85f6                 test esi, esi
// 006b9dc5  742d                 je 0x6b9df4
// 006b9dc7  57                   push edi
// 006b9dc8  53                   push ebx
// 006b9dc9  ff158821b200         call dword ptr [0xb22188]
// 006b9dcf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b9dd3  03c6                 add eax, esi
// 006b9dd5  83e10f               and ecx, 0xf
// 006b9dd8  7616                 jbe 0x6b9df0
// 006b9dda  8d9b00000000         lea ebx, [ebx]
// 006b9de0  3bf0                 cmp esi, eax
// 006b9de2  7310                 jae 0x6b9df4
// 006b9de4  83e901               sub ecx, 1
// 006b9de7  0fb716               movzx edx, word ptr [esi]
// 006b9dea  8d745602             lea esi, [esi + edx*2 + 2]
// 006b9dee  75f0                 jne 0x6b9de0
// 006b9df0  3bf0                 cmp esi, eax
// 006b9df2  7206                 jb 0x6b9dfa
// 006b9df4  5e                   pop esi
// 006b9df5  5f                   pop edi
// 006b9df6  33c0                 xor eax, eax
// 006b9df8  5b                   pop ebx
// 006b9df9  c3                   ret 
// 006b9dfa  0fb706               movzx eax, word ptr [esi]
// 006b9dfd  f7d8                 neg eax
// 006b9dff  1bc0                 sbb eax, eax
// 006b9e01  23c6                 and eax, esi
// 006b9e03  5e                   pop esi
// 006b9e04  5f                   pop edi
// 006b9e05  5b                   pop ebx
// 006b9e06  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?_AtlGetStringResourceImage@ATL@@YAPBUATLSTRINGRESOURCEIMAGE@1@PAUHINSTANCE__@@PAUHRSRC__@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
