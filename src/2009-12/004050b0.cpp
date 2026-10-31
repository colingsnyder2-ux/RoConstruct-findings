// roc 2009-12 004050b0  unit: ATL::CRegObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004050b0
//
// 004050b0  55                   push ebp
// 004050b1  8bec                 mov ebp, esp
// 004050b3  64a100000000         mov eax, dword ptr fs:[0]
// 004050b9  6aff                 push -1
// 004050bb  6838719200           push 0x927138
// 004050c0  50                   push eax
// 004050c1  64892500000000       mov dword ptr fs:[0], esp
// 004050c8  56                   push esi
// 004050c9  57                   push edi
// 004050ca  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004050cd  85ff                 test edi, edi
// 004050cf  0f84b5000000         je 0x40518a
// 004050d5  837d1000             cmp dword ptr [ebp + 0x10], 0
// 004050d9  0f84ab000000         je 0x40518a
// 004050df  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004050e6  57                   push edi
// 004050e7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004050ee  ff1538b29800         call dword ptr [0x98b238]
// 004050f4  6a00                 push 0
// 004050f6  40                   inc eax
// 004050f7  99                   cdq 
// 004050f8  6a02                 push 2
// 004050fa  52                   push edx
// 004050fb  50                   push eax
// 004050fc  e86ff93e00           call 0x7f4a70
// 00405101  8bf0                 mov esi, eax
// 00405103  0500000080           add eax, 0x80000000
// 00405108  83d200               adc edx, 0
// 0040510b  85d2                 test edx, edx
// 0040510d  773e                 ja 0x40514d
// 0040510f  7205                 jb 0x405116
// 00405111  83f8ff               cmp eax, -1
// 00405114  7737                 ja 0x40514d
// 00405116  81fe00040000         cmp esi, 0x400
// 0040511c  7f18                 jg 0x405136
// 0040511e  56                   push esi
// 0040511f  e8cce9ffff           call 0x403af0
// 00405124  83c404               add esp, 4
// 00405127  84c0                 test al, al
// 00405129  740b                 je 0x405136
// 0040512b  8bc6                 mov eax, esi
// 0040512d  e80ef93e00           call 0x7f4a40
// 00405132  8bc4                 mov eax, esp
// 00405134  eb09                 jmp 0x40513f
// 00405136  56                   push esi
// 00405137  8d4d0c               lea ecx, [ebp + 0xc]
// 0040513a  e851efffff           call 0x404090
// 0040513f  6a03                 push 3
// 00405141  56                   push esi
// 00405142  57                   push edi
// 00405143  50                   push eax
// 00405144  e8c7d9ffff           call 0x402b10
// 00405149  85c0                 test eax, eax
// 0040514b  750f                 jne 0x40515c
// 0040514d  8d4d0c               lea ecx, [ebp + 0xc]
// 00405150  e82be7ffff           call 0x403880
// 00405155  b80e000780           mov eax, 0x8007000e
// 0040515a  eb33                 jmp 0x40518f
// 0040515c  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0040515f  51                   push ecx
// 00405160  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00405163  50                   push eax
// 00405164  83c104               add ecx, 4
// 00405167  e8d4fdffff           call 0x404f40
// 0040516c  8bf0                 mov esi, eax
// 0040516e  f7de                 neg esi
// 00405170  1bf6                 sbb esi, esi
// 00405172  81e6f2fff87f         and esi, 0x7ff8fff2
// 00405178  8d4d0c               lea ecx, [ebp + 0xc]
// 0040517b  81c60e000780         add esi, 0x8007000e
// 00405181  e8fae6ffff           call 0x403880
// 00405186  8bc6                 mov eax, esi
// 00405188  eb05                 jmp 0x40518f
// 0040518a  b857000780           mov eax, 0x80070057
// 0040518f  8d65ec               lea esp, [ebp - 0x14]
// 00405192  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405195  64890d00000000       mov dword ptr fs:[0], ecx
// 0040519c  5f                   pop edi
// 0040519d  5e                   pop esi
// 0040519e  8be5                 mov esp, ebp
// 004051a0  5d                   pop ebp
// 004051a1  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddReplacement@CRegObject@ATL@@UAGJPB_W0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp