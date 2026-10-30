// roc 2007-03 0054f4b0  unit: seg_00540000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054f4b0
//
// 0054f4b0  6aff                 push -1
// 0054f4b2  686bc37500           push 0x75c36b
// 0054f4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0054f4bd  50                   push eax
// 0054f4be  64892500000000       mov dword ptr fs:[0], esp
// 0054f4c5  51                   push ecx
// 0054f4c6  53                   push ebx
// 0054f4c7  56                   push esi
// 0054f4c8  57                   push edi
// 0054f4c9  6a20                 push 0x20
// 0054f4cb  8bd9                 mov ebx, ecx
// 0054f4cd  e836ec0c00           call 0x61e108
// 0054f4d2  8bf0                 mov esi, eax
// 0054f4d4  83c404               add esp, 4
// 0054f4d7  8974240c             mov dword ptr [esp + 0xc], esi
// 0054f4db  33ff                 xor edi, edi
// 0054f4dd  3bf7                 cmp esi, edi
// 0054f4df  897c2418             mov dword ptr [esp + 0x18], edi
// 0054f4e3  742b                 je 0x54f510
// 0054f4e5  8bce                 mov ecx, esi
// 0054f4e7  e854b2ffff           call 0x54a740
// 0054f4ec  894604               mov dword ptr [esi + 4], eax
// 0054f4ef  b804000000           mov eax, 4
// 0054f4f4  897e08               mov dword ptr [esi + 8], edi
// 0054f4f7  897e0c               mov dword ptr [esi + 0xc], edi
// 0054f4fa  c7461000100000       mov dword ptr [esi + 0x10], 0x1000
// 0054f501  c7461480000000       mov dword ptr [esi + 0x14], 0x80
// 0054f508  894618               mov dword ptr [esi + 0x18], eax
// 0054f50b  89461c               mov dword ptr [esi + 0x1c], eax
// 0054f50e  eb02                 jmp 0x54f512
// 0054f510  33f6                 xor esi, esi
// 0054f512  8d7b04               lea edi, [ebx + 4]
// 0054f515  56                   push esi
// 0054f516  8bcf                 mov ecx, edi
// 0054f518  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0054f520  8933                 mov dword ptr [ebx], esi
// 0054f522  e8d9feffff           call 0x54f400
// 0054f527  56                   push esi
// 0054f528  56                   push esi
// 0054f529  57                   push edi
// 0054f52a  e891881400           call 0x697dc0
// 0054f52f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054f533  83c40c               add esp, 0xc
// 0054f536  5f                   pop edi
// 0054f537  5e                   pop esi
// 0054f538  8bc3                 mov eax, ebx
// 0054f53a  5b                   pop ebx
// 0054f53b  64890d00000000       mov dword ptr fs:[0], ecx
// 0054f542  83c410               add esp, 0x10
// 0054f545  c3                   ret 
// copied from an identical function in another client (function ??0?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@IAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp