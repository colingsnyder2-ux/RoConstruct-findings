// roc 2012-06 0059a450  unit: RBX::Network::Marker  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a450
//
// 0059a450  8b442404             mov eax, dword ptr [esp + 4]
// 0059a454  8b542408             mov edx, dword ptr [esp + 8]
// 0059a458  53                   push ebx
// 0059a459  55                   push ebp
// 0059a45a  56                   push esi
// 0059a45b  8bb170080000         mov esi, dword ptr [ecx + 0x870]
// 0059a461  57                   push edi
// 0059a462  33ff                 xor edi, edi
// 0059a464  8bde                 mov ebx, esi
// 0059a466  2bd8                 sub ebx, eax
// 0059a468  8bef                 mov ebp, edi
// 0059a46a  1bea                 sbb ebp, edx
// 0059a46c  896c2418             mov dword ptr [esp + 0x18], ebp
// 0059a470  7508                 jne 0x59a47a
// 0059a472  81fb10270000         cmp ebx, 0x2710
// 0059a478  7622                 jbe 0x59a49c
// 0059a47a  8b89c0080000         mov ecx, dword ptr [ecx + 0x8c0]
// 0059a480  2bc6                 sub eax, esi
// 0059a482  1bd7                 sbb edx, edi
// 0059a484  33f6                 xor esi, esi
// 0059a486  3bd6                 cmp edx, esi
// 0059a488  7212                 jb 0x59a49c
// 0059a48a  7704                 ja 0x59a490
// 0059a48c  3bc1                 cmp eax, ecx
// 0059a48e  760c                 jbe 0x59a49c
// 0059a490  5f                   pop edi
// 0059a491  5e                   pop esi
// 0059a492  5d                   pop ebp
// 0059a493  b801000000           mov eax, 1
// 0059a498  5b                   pop ebx
// 0059a499  c20800               ret 8
// 0059a49c  5f                   pop edi
// 0059a49d  5e                   pop esi
// 0059a49e  5d                   pop ebp
// 0059a49f  33c0                 xor eax, eax
// 0059a4a1  5b                   pop ebx
// 0059a4a2  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?AckTimeout@ReliabilityLayer@RakNet@@QAE_N_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
