// roc 2011-06 0057e0b0  unit: seg_00570000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e0b0
//
// 0057e0b0  53                   push ebx
// 0057e0b1  56                   push esi
// 0057e0b2  57                   push edi
// 0057e0b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0057e0b7  8b4704               mov eax, dword ptr [edi + 4]
// 0057e0ba  8b08                 mov ecx, dword ptr [eax]
// 0057e0bc  6a30                 push 0x30
// 0057e0be  6a01                 push 1
// 0057e0c0  57                   push edi
// 0057e0c1  ffd1                 call ecx
// 0057e0c3  8bf0                 mov esi, eax
// 0057e0c5  89b758010000         mov dword ptr [edi + 0x158], esi
// 0057e0cb  c70680d45700         mov dword ptr [esi], 0x57d480
// 0057e0d1  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0057e0d7  33db                 xor ebx, ebx
// 0057e0d9  83c40c               add esp, 0xc
// 0057e0dc  2bc3                 sub eax, ebx
// 0057e0de  7438                 je 0x57e118
// 0057e0e0  83e801               sub eax, 1
// 0057e0e3  742a                 je 0x57e10f
// 0057e0e5  83e801               sub eax, 1
// 0057e0e8  7415                 je 0x57e0ff
// 0057e0ea  8b17                 mov edx, dword ptr [edi]
// 0057e0ec  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 0057e0f3  8b07                 mov eax, dword ptr [edi]
// 0057e0f5  8b08                 mov ecx, dword ptr [eax]
// 0057e0f7  57                   push edi
// 0057e0f8  ffd1                 call ecx
// 0057e0fa  83c404               add esp, 4
// 0057e0fd  eb27                 jmp 0x57e126
// 0057e0ff  c74604e0da5700       mov dword ptr [esi + 4], 0x57dae0
// 0057e106  c7461c70225800       mov dword ptr [esi + 0x1c], 0x582270
// 0057e10d  eb17                 jmp 0x57e126
// 0057e10f  c74608a01b5800       mov dword ptr [esi + 8], 0x581ba0
// 0057e116  eb07                 jmp 0x57e11f
// 0057e118  c7460880185800       mov dword ptr [esi + 8], 0x581880
// 0057e11f  c7460460d75700       mov dword ptr [esi + 4], 0x57d760
// 0057e126  5f                   pop edi
// 0057e127  895e0c               mov dword ptr [esi + 0xc], ebx
// 0057e12a  895e20               mov dword ptr [esi + 0x20], ebx
// 0057e12d  895e10               mov dword ptr [esi + 0x10], ebx
// 0057e130  895e24               mov dword ptr [esi + 0x24], ebx
// 0057e133  895e14               mov dword ptr [esi + 0x14], ebx
// 0057e136  895e28               mov dword ptr [esi + 0x28], ebx
// 0057e139  895e18               mov dword ptr [esi + 0x18], ebx
// 0057e13c  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0057e13f  5e                   pop esi
// 0057e140  5b                   pop ebx
// 0057e141  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
