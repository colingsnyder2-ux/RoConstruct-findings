// roc 2012-06 00406140  unit: ATL::CRegObject  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00406140
//
// 00406140  55                   push ebp
// 00406141  8bec                 mov ebp, esp
// 00406143  64a100000000         mov eax, dword ptr fs:[0]
// 00406149  6aff                 push -1
// 0040614b  6828a2a900           push 0xa9a228
// 00406150  50                   push eax
// 00406151  64892500000000       mov dword ptr fs:[0], esp
// 00406158  56                   push esi
// 00406159  57                   push edi
// 0040615a  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0040615d  85ff                 test edi, edi
// 0040615f  0f84b5000000         je 0x40621a
// 00406165  837d1000             cmp dword ptr [ebp + 0x10], 0
// 00406169  0f84ab000000         je 0x40621a
// 0040616f  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 00406176  57                   push edi
// 00406177  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040617e  ff15c421b200         call dword ptr [0xb221c4]
// 00406184  6a00                 push 0
// 00406186  40                   inc eax
// 00406187  99                   cdq 
// 00406188  6a02                 push 2
// 0040618a  52                   push edx
// 0040618b  50                   push eax
// 0040618c  e8afd15700           call 0x983340
// 00406191  8bf0                 mov esi, eax
// 00406193  0500000080           add eax, 0x80000000
// 00406198  83d200               adc edx, 0
// 0040619b  85d2                 test edx, edx
// 0040619d  773e                 ja 0x4061dd
// 0040619f  7205                 jb 0x4061a6
// 004061a1  83f8ff               cmp eax, -1
// 004061a4  7737                 ja 0x4061dd
// 004061a6  81fe00040000         cmp esi, 0x400
// 004061ac  7f18                 jg 0x4061c6
// 004061ae  56                   push esi
// 004061af  e8bcebffff           call 0x404d70
// 004061b4  83c404               add esp, 4
// 004061b7  84c0                 test al, al
// 004061b9  740b                 je 0x4061c6
// 004061bb  8bc6                 mov eax, esi
// 004061bd  e84ed15700           call 0x983310
// 004061c2  8bc4                 mov eax, esp
// 004061c4  eb09                 jmp 0x4061cf
// 004061c6  56                   push esi
// 004061c7  8d4d0c               lea ecx, [ebp + 0xc]
// 004061ca  e851f0ffff           call 0x405220
// 004061cf  6a03                 push 3
// 004061d1  56                   push esi
// 004061d2  57                   push edi
// 004061d3  50                   push eax
// 004061d4  e867dfffff           call 0x404140
// 004061d9  85c0                 test eax, eax
// 004061db  750f                 jne 0x4061ec
// 004061dd  8d4d0c               lea ecx, [ebp + 0xc]
// 004061e0  e87be8ffff           call 0x404a60
// 004061e5  b80e000780           mov eax, 0x8007000e
// 004061ea  eb33                 jmp 0x40621f
// 004061ec  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004061ef  51                   push ecx
// 004061f0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004061f3  50                   push eax
// 004061f4  83c104               add ecx, 4
// 004061f7  e8d4fdffff           call 0x405fd0
// 004061fc  8bf0                 mov esi, eax
// 004061fe  f7de                 neg esi
// 00406200  1bf6                 sbb esi, esi
// 00406202  81e6f2fff87f         and esi, 0x7ff8fff2
// 00406208  8d4d0c               lea ecx, [ebp + 0xc]
// 0040620b  81c60e000780         add esi, 0x8007000e
// 00406211  e84ae8ffff           call 0x404a60
// 00406216  8bc6                 mov eax, esi
// 00406218  eb05                 jmp 0x40621f
// 0040621a  b857000780           mov eax, 0x80070057
// 0040621f  8d65ec               lea esp, [ebp - 0x14]
// 00406222  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406225  64890d00000000       mov dword ptr fs:[0], ecx
// 0040622c  5f                   pop edi
// 0040622d  5e                   pop esi
// 0040622e  8be5                 mov esp, ebp
// 00406230  5d                   pop ebp
// 00406231  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddReplacement@CRegObject@ATL@@UAGJPB_W0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp