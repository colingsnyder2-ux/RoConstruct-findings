// roc 2012-06 0093aac0  unit: seg_00930000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093aac0
//
// 0093aac0  51                   push ecx
// 0093aac1  53                   push ebx
// 0093aac2  56                   push esi
// 0093aac3  8bf0                 mov esi, eax
// 0093aac5  57                   push edi
// 0093aac6  8b7e30               mov edi, dword ptr [esi + 0x30]
// 0093aac9  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0093aad1  e86affffff           call 0x93aa40
// 0093aad6  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 0093aadd  8bd8                 mov ebx, eax
// 0093aadf  752c                 jne 0x93ab0d
// 0093aae1  57                   push edi
// 0093aae2  e8f9cd0200           call 0x9678e0
// 0093aae7  50                   push eax
// 0093aae8  8d442414             lea eax, [esp + 0x14]
// 0093aaec  50                   push eax
// 0093aaed  57                   push edi
// 0093aaee  e8fdc60200           call 0x9671f0
// 0093aaf3  53                   push ebx
// 0093aaf4  57                   push edi
// 0093aaf5  e8b6ce0200           call 0x9679b0
// 0093aafa  83c418               add esp, 0x18
// 0093aafd  e83effffff           call 0x93aa40
// 0093ab02  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 0093ab09  8bd8                 mov ebx, eax
// 0093ab0b  74d4                 je 0x93aae1
// 0093ab0d  817e1004010000       cmp dword ptr [esi + 0x10], 0x104
// 0093ab14  752b                 jne 0x93ab41
// 0093ab16  57                   push edi
// 0093ab17  e8c4cd0200           call 0x9678e0
// 0093ab1c  50                   push eax
// 0093ab1d  8d4c2414             lea ecx, [esp + 0x14]
// 0093ab21  51                   push ecx
// 0093ab22  57                   push edi
// 0093ab23  e8c8c60200           call 0x9671f0
// 0093ab28  53                   push ebx
// 0093ab29  57                   push edi
// 0093ab2a  e881ce0200           call 0x9679b0
// 0093ab2f  56                   push esi
// 0093ab30  e88bd8ffff           call 0x9383c0
// 0093ab35  83c41c               add esp, 0x1c
// 0093ab38  8bc6                 mov eax, esi
// 0093ab3a  e871f2ffff           call 0x939db0
// 0093ab3f  eb0f                 jmp 0x93ab50
// 0093ab41  53                   push ebx
// 0093ab42  8d542410             lea edx, [esp + 0x10]
// 0093ab46  52                   push edx
// 0093ab47  57                   push edi
// 0093ab48  e8a3c60200           call 0x9671f0
// 0093ab4d  83c40c               add esp, 0xc
// 0093ab50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093ab54  50                   push eax
// 0093ab55  57                   push edi
// 0093ab56  e855ce0200           call 0x9679b0
// 0093ab5b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0093ab5f  680a010000           push 0x10a
// 0093ab64  bf06010000           mov edi, 0x106
// 0093ab69  e812d9ffff           call 0x938480
// 0093ab6e  83c40c               add esp, 0xc
// 0093ab71  5f                   pop edi
// 0093ab72  5e                   pop esi
// 0093ab73  5b                   pop ebx
// 0093ab74  59                   pop ecx
// 0093ab75  c3                   ret 
// library lua-5.1.4/lparser.c (function _ifstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
