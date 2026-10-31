// roc 2009-06 00405140  unit: ATL::CRegObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00405140
//
// 00405140  55                   push ebp
// 00405141  8bec                 mov ebp, esp
// 00405143  64a100000000         mov eax, dword ptr fs:[0]
// 00405149  6aff                 push -1
// 0040514b  68d82f8500           push 0x852fd8
// 00405150  50                   push eax
// 00405151  64892500000000       mov dword ptr fs:[0], esp
// 00405158  56                   push esi
// 00405159  57                   push edi
// 0040515a  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0040515d  85ff                 test edi, edi
// 0040515f  0f84b5000000         je 0x40521a
// 00405165  837d1000             cmp dword ptr [ebp + 0x10], 0
// 00405169  0f84ab000000         je 0x40521a
// 0040516f  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 00405176  57                   push edi
// 00405177  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040517e  ff1500e28900         call dword ptr [0x89e200]
// 00405184  6a00                 push 0
// 00405186  40                   inc eax
// 00405187  99                   cdq 
// 00405188  6a02                 push 2
// 0040518a  52                   push edx
// 0040518b  50                   push eax
// 0040518c  e8af4a3100           call 0x719c40
// 00405191  8bf0                 mov esi, eax
// 00405193  0500000080           add eax, 0x80000000
// 00405198  83d200               adc edx, 0
// 0040519b  85d2                 test edx, edx
// 0040519d  773e                 ja 0x4051dd
// 0040519f  7205                 jb 0x4051a6
// 004051a1  83f8ff               cmp eax, -1
// 004051a4  7737                 ja 0x4051dd
// 004051a6  81fe00040000         cmp esi, 0x400
// 004051ac  7f18                 jg 0x4051c6
// 004051ae  56                   push esi
// 004051af  e87cecffff           call 0x403e30
// 004051b4  83c404               add esp, 4
// 004051b7  84c0                 test al, al
// 004051b9  740b                 je 0x4051c6
// 004051bb  8bc6                 mov eax, esi
// 004051bd  e84e4a3100           call 0x719c10
// 004051c2  8bc4                 mov eax, esp
// 004051c4  eb09                 jmp 0x4051cf
// 004051c6  56                   push esi
// 004051c7  8d4d0c               lea ecx, [ebp + 0xc]
// 004051ca  e801f2ffff           call 0x4043d0
// 004051cf  6a03                 push 3
// 004051d1  56                   push esi
// 004051d2  57                   push edi
// 004051d3  50                   push eax
// 004051d4  e867dcffff           call 0x402e40
// 004051d9  85c0                 test eax, eax
// 004051db  750f                 jne 0x4051ec
// 004051dd  8d4d0c               lea ecx, [ebp + 0xc]
// 004051e0  e8cbe9ffff           call 0x403bb0
// 004051e5  b80e000780           mov eax, 0x8007000e
// 004051ea  eb33                 jmp 0x40521f
// 004051ec  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004051ef  51                   push ecx
// 004051f0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004051f3  50                   push eax
// 004051f4  83c104               add ecx, 4
// 004051f7  e8d4fdffff           call 0x404fd0
// 004051fc  8bf0                 mov esi, eax
// 004051fe  f7de                 neg esi
// 00405200  1bf6                 sbb esi, esi
// 00405202  81e6f2fff87f         and esi, 0x7ff8fff2
// 00405208  8d4d0c               lea ecx, [ebp + 0xc]
// 0040520b  81c60e000780         add esi, 0x8007000e
// 00405211  e89ae9ffff           call 0x403bb0
// 00405216  8bc6                 mov eax, esi
// 00405218  eb05                 jmp 0x40521f
// 0040521a  b857000780           mov eax, 0x80070057
// 0040521f  8d65ec               lea esp, [ebp - 0x14]
// 00405222  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405225  64890d00000000       mov dword ptr fs:[0], ecx
// 0040522c  5f                   pop edi
// 0040522d  5e                   pop esi
// 0040522e  8be5                 mov esp, ebp
// 00405230  5d                   pop ebp
// 00405231  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddReplacement@CRegObject@ATL@@UAGJPB_W0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp