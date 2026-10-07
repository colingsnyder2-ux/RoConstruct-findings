// roc 2009-06 006efe70  unit: seg_006e0000  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006efe70
//
// 006efe70  51                   push ecx
// 006efe71  53                   push ebx
// 006efe72  56                   push esi
// 006efe73  8bf0                 mov esi, eax
// 006efe75  57                   push edi
// 006efe76  8b7e30               mov edi, dword ptr [esi + 0x30]
// 006efe79  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 006efe81  e86affffff           call 0x6efdf0
// 006efe86  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 006efe8d  8bd8                 mov ebx, eax
// 006efe8f  752c                 jne 0x6efebd
// 006efe91  57                   push edi
// 006efe92  e8c9a40000           call 0x6fa360
// 006efe97  50                   push eax
// 006efe98  8d442414             lea eax, [esp + 0x14]
// 006efe9c  50                   push eax
// 006efe9d  57                   push edi
// 006efe9e  e80d9e0000           call 0x6f9cb0
// 006efea3  53                   push ebx
// 006efea4  57                   push edi
// 006efea5  e886a50000           call 0x6fa430
// 006efeaa  83c418               add esp, 0x18
// 006efead  e83effffff           call 0x6efdf0
// 006efeb2  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 006efeb9  8bd8                 mov ebx, eax
// 006efebb  74d4                 je 0x6efe91
// 006efebd  817e1004010000       cmp dword ptr [esi + 0x10], 0x104
// 006efec4  752b                 jne 0x6efef1
// 006efec6  57                   push edi
// 006efec7  e894a40000           call 0x6fa360
// 006efecc  50                   push eax
// 006efecd  8d4c2414             lea ecx, [esp + 0x14]
// 006efed1  51                   push ecx
// 006efed2  57                   push edi
// 006efed3  e8d89d0000           call 0x6f9cb0
// 006efed8  53                   push ebx
// 006efed9  57                   push edi
// 006efeda  e851a50000           call 0x6fa430
// 006efedf  56                   push esi
// 006efee0  e8fb270000           call 0x6f26e0
// 006efee5  83c41c               add esp, 0x1c
// 006efee8  8bc6                 mov eax, esi
// 006efeea  e881f2ffff           call 0x6ef170
// 006efeef  eb0f                 jmp 0x6eff00
// 006efef1  53                   push ebx
// 006efef2  8d542410             lea edx, [esp + 0x10]
// 006efef6  52                   push edx
// 006efef7  57                   push edi
// 006efef8  e8b39d0000           call 0x6f9cb0
// 006efefd  83c40c               add esp, 0xc
// 006eff00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006eff04  50                   push eax
// 006eff05  57                   push edi
// 006eff06  e825a50000           call 0x6fa430
// 006eff0b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006eff0f  680a010000           push 0x10a
// 006eff14  bf06010000           mov edi, 0x106
// 006eff19  e872d9ffff           call 0x6ed890
// 006eff1e  83c40c               add esp, 0xc
// 006eff21  5f                   pop edi
// 006eff22  5e                   pop esi
// 006eff23  5b                   pop ebx
// 006eff24  59                   pop ecx
// 006eff25  c3                   ret 
// library lua-5.1.4/lparser.c (function _ifstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
