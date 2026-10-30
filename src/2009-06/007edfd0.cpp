// roc 2009-06 007edfd0  unit: CXTPPropertyGridInplaceEdit  size: 528 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007edfd0
//
// 007edfd0  6aff                 push -1
// 007edfd2  688b078800           push 0x88078b
// 007edfd7  64a100000000         mov eax, dword ptr fs:[0]
// 007edfdd  50                   push eax
// 007edfde  83ec08               sub esp, 8
// 007edfe1  53                   push ebx
// 007edfe2  55                   push ebp
// 007edfe3  56                   push esi
// 007edfe4  57                   push edi
// 007edfe5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007edfea  33c4                 xor eax, esp
// 007edfec  50                   push eax
// 007edfed  8d44241c             lea eax, [esp + 0x1c]
// 007edff1  64a300000000         mov dword ptr fs:[0], eax
// 007edff7  8be9                 mov ebp, ecx
// 007edff9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007edffd  83fb09               cmp ebx, 9
// 007ee000  0f84c4010000         je 0x7ee1ca
// 007ee006  83fb0d               cmp ebx, 0xd
// 007ee009  7527                 jne 0x7ee032
// 007ee00b  e8ccde0500           call 0x84bedc
// 007ee010  a900100000           test eax, 0x1000
// 007ee015  0f84a4010000         je 0x7ee1bf
// 007ee01b  8b442434             mov eax, dword ptr [esp + 0x34]
// 007ee01f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ee023  50                   push eax
// 007ee024  51                   push ecx
// 007ee025  53                   push ebx
// 007ee026  8bcd                 mov ecx, ebp
// 007ee028  e8e3fcffff           call 0x7edd10
// 007ee02d  e998010000           jmp 0x7ee1ca
// 007ee032  83fb1b               cmp ebx, 0x1b
// 007ee035  0f8484010000         je 0x7ee1bf
// 007ee03b  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 007ee041  85c9                 test ecx, ecx
// 007ee043  0f8449010000         je 0x7ee192
// 007ee049  8b11                 mov edx, dword ptr [ecx]
// 007ee04b  8b4258               mov eax, dword ptr [edx + 0x58]
// 007ee04e  ffd0                 call eax
// 007ee050  85c0                 test eax, eax
// 007ee052  0f853a010000         jne 0x7ee192
// 007ee058  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 007ee05e  83787c00             cmp dword ptr [eax + 0x7c], 0
// 007ee062  0f842a010000         je 0x7ee192
// 007ee068  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 007ee06e  837f2800             cmp dword ptr [edi + 0x28], 0
// 007ee072  0f841a010000         je 0x7ee192
// 007ee078  8d4c2430             lea ecx, [esp + 0x30]
// 007ee07c  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007ee082  8d4c2430             lea ecx, [esp + 0x30]
// 007ee086  51                   push ecx
// 007ee087  8bcd                 mov ecx, ebp
// 007ee089  c744242800000000     mov dword ptr [esp + 0x28], 0
// 007ee091  e88aaff2ff           call 0x719020
// 007ee096  8d4c2430             lea ecx, [esp + 0x30]
// 007ee09a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ee0a0  50                   push eax
// 007ee0a1  8bcf                 mov ecx, edi
// 007ee0a3  e828cdf9ff           call 0x78add0
// 007ee0a8  8bf0                 mov esi, eax
// 007ee0aa  83feff               cmp esi, -1
// 007ee0ad  750a                 jne 0x7ee0b9
// 007ee0af  8b4728               mov eax, dword ptr [edi + 0x28]
// 007ee0b2  48                   dec eax
// 007ee0b3  89442414             mov dword ptr [esp + 0x14], eax
// 007ee0b7  eb04                 jmp 0x7ee0bd
// 007ee0b9  89742414             mov dword ptr [esp + 0x14], esi
// 007ee0bd  6a01                 push 1
// 007ee0bf  53                   push ebx
// 007ee0c0  8d4c2434             lea ecx, [esp + 0x34]
// 007ee0c4  ff15dcf88900         call dword ptr [0x89f8dc]
// 007ee0ca  c644242401           mov byte ptr [esp + 0x24], 1
// 007ee0cf  90                   nop 
// 007ee0d0  8b4728               mov eax, dword ptr [edi + 0x28]
// 007ee0d3  48                   dec eax
// 007ee0d4  3bf0                 cmp esi, eax
// 007ee0d6  7d03                 jge 0x7ee0db
// 007ee0d8  46                   inc esi
// 007ee0d9  eb02                 jmp 0x7ee0dd
// 007ee0db  33f6                 xor esi, esi
// 007ee0dd  56                   push esi
// 007ee0de  8d542438             lea edx, [esp + 0x38]
// 007ee0e2  52                   push edx
// 007ee0e3  8bcf                 mov ecx, edi
// 007ee0e5  e846ccf9ff           call 0x78ad30
// 007ee0ea  6a01                 push 1
// 007ee0ec  8d44241c             lea eax, [esp + 0x1c]
// 007ee0f0  50                   push eax
// 007ee0f1  8d4c243c             lea ecx, [esp + 0x3c]
// 007ee0f5  c644242c02           mov byte ptr [esp + 0x2c], 2
// 007ee0fa  ff1510f48900         call dword ptr [0x89f410]
// 007ee100  8bc8                 mov ecx, eax
// 007ee102  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ee108  50                   push eax
// 007ee109  8d4c2430             lea ecx, [esp + 0x30]
// 007ee10d  ff158cf38900         call dword ptr [0x89f38c]
// 007ee113  85c0                 test eax, eax
// 007ee115  8d4c2418             lea ecx, [esp + 0x18]
// 007ee119  0f94c3               sete bl
// 007ee11c  ff1510fd8900         call dword ptr [0x89fd10]
// 007ee122  8d4c2434             lea ecx, [esp + 0x34]
// 007ee126  84db                 test bl, bl
// 007ee128  7513                 jne 0x7ee13d
// 007ee12a  c644242401           mov byte ptr [esp + 0x24], 1
// 007ee12f  ff1510fd8900         call dword ptr [0x89fd10]
// 007ee135  3b742414             cmp esi, dword ptr [esp + 0x14]
// 007ee139  7595                 jne 0x7ee0d0
// 007ee13b  eb3f                 jmp 0x7ee17c
// 007ee13d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ee143  50                   push eax
// 007ee144  8bcd                 mov ecx, ebp
// 007ee146  e8a1acf2ff           call 0x718dec
// 007ee14b  6aff                 push -1
// 007ee14d  6a00                 push 0
// 007ee14f  897734               mov dword ptr [edi + 0x34], esi
// 007ee152  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007ee155  8b3590ee8900         mov esi, dword ptr [0x89ee90]
// 007ee15b  68b1000000           push 0xb1
// 007ee160  51                   push ecx
// 007ee161  ffd6                 call esi
// 007ee163  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007ee166  6a00                 push 0
// 007ee168  6a00                 push 0
// 007ee16a  68b7000000           push 0xb7
// 007ee16f  52                   push edx
// 007ee170  ffd6                 call esi
// 007ee172  8d4c2434             lea ecx, [esp + 0x34]
// 007ee176  ff1510fd8900         call dword ptr [0x89fd10]
// 007ee17c  8d4c242c             lea ecx, [esp + 0x2c]
// 007ee180  ff1510fd8900         call dword ptr [0x89fd10]
// 007ee186  8d4c2430             lea ecx, [esp + 0x30]
// 007ee18a  ff1510fd8900         call dword ptr [0x89fd10]
// 007ee190  eb38                 jmp 0x7ee1ca
// 007ee192  83fb2e               cmp ebx, 0x2e
// 007ee195  740c                 je 0x7ee1a3
// 007ee197  83fb08               cmp ebx, 8
// 007ee19a  7407                 je 0x7ee1a3
// 007ee19c  b801000000           mov eax, 1
// 007ee1a1  eb02                 jmp 0x7ee1a5
// 007ee1a3  33c0                 xor eax, eax
// 007ee1a5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007ee1a9  8985b4000000         mov dword ptr [ebp + 0xb4], eax
// 007ee1af  8b442434             mov eax, dword ptr [esp + 0x34]
// 007ee1b3  50                   push eax
// 007ee1b4  51                   push ecx
// 007ee1b5  53                   push ebx
// 007ee1b6  8bcd                 mov ecx, ebp
// 007ee1b8  e853fbffff           call 0x7edd10
// 007ee1bd  eb0b                 jmp 0x7ee1ca
// 007ee1bf  8b8d9c000000         mov ecx, dword ptr [ebp + 0x9c]
// 007ee1c5  e810acf2ff           call 0x718dda
// 007ee1ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ee1ce  64890d00000000       mov dword ptr fs:[0], ecx
// 007ee1d5  59                   pop ecx
// 007ee1d6  5f                   pop edi
// 007ee1d7  5e                   pop esi
// 007ee1d8  5d                   pop ebp
// 007ee1d9  5b                   pop ebx
// 007ee1da  83c414               add esp, 0x14
// 007ee1dd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPPropertyGridInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp