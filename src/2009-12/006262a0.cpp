// roc 2009-12 006262a0  unit: seg_00620000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006262a0
//
// 006262a0  53                   push ebx
// 006262a1  56                   push esi
// 006262a2  57                   push edi
// 006262a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006262a7  8b4704               mov eax, dword ptr [edi + 4]
// 006262aa  8b08                 mov ecx, dword ptr [eax]
// 006262ac  6a30                 push 0x30
// 006262ae  6a01                 push 1
// 006262b0  57                   push edi
// 006262b1  ffd1                 call ecx
// 006262b3  8bf0                 mov esi, eax
// 006262b5  89b758010000         mov dword ptr [edi + 0x158], esi
// 006262bb  c70670566200         mov dword ptr [esi], 0x625670
// 006262c1  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 006262c7  33db                 xor ebx, ebx
// 006262c9  83c40c               add esp, 0xc
// 006262cc  2bc3                 sub eax, ebx
// 006262ce  7438                 je 0x626308
// 006262d0  83e801               sub eax, 1
// 006262d3  742a                 je 0x6262ff
// 006262d5  83e801               sub eax, 1
// 006262d8  7415                 je 0x6262ef
// 006262da  8b17                 mov edx, dword ptr [edi]
// 006262dc  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 006262e3  8b07                 mov eax, dword ptr [edi]
// 006262e5  8b08                 mov ecx, dword ptr [eax]
// 006262e7  57                   push edi
// 006262e8  ffd1                 call ecx
// 006262ea  83c404               add esp, 4
// 006262ed  eb27                 jmp 0x626316
// 006262ef  c74604d05c6200       mov dword ptr [esi + 4], 0x625cd0
// 006262f6  c7461c20a46200       mov dword ptr [esi + 0x1c], 0x62a420
// 006262fd  eb17                 jmp 0x626316
// 006262ff  c74608509d6200       mov dword ptr [esi + 8], 0x629d50
// 00626306  eb07                 jmp 0x62630f
// 00626308  c74608309a6200       mov dword ptr [esi + 8], 0x629a30
// 0062630f  c7460450596200       mov dword ptr [esi + 4], 0x625950
// 00626316  5f                   pop edi
// 00626317  895e0c               mov dword ptr [esi + 0xc], ebx
// 0062631a  895e20               mov dword ptr [esi + 0x20], ebx
// 0062631d  895e10               mov dword ptr [esi + 0x10], ebx
// 00626320  895e24               mov dword ptr [esi + 0x24], ebx
// 00626323  895e14               mov dword ptr [esi + 0x14], ebx
// 00626326  895e28               mov dword ptr [esi + 0x28], ebx
// 00626329  895e18               mov dword ptr [esi + 0x18], ebx
// 0062632c  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0062632f  5e                   pop esi
// 00626330  5b                   pop ebx
// 00626331  c3                   ret 
// library jpeg-6b/jcdctmgr.c (function _jinit_forward_dct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcdctmgr.c
