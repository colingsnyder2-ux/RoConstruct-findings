// roc 2008-06 006376e0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006376e0
//
// 006376e0  6aff                 push -1
// 006376e2  68d8a17d00           push 0x7da1d8
// 006376e7  64a100000000         mov eax, dword ptr fs:[0]
// 006376ed  50                   push eax
// 006376ee  64892500000000       mov dword ptr fs:[0], esp
// 006376f5  83ec08               sub esp, 8
// 006376f8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006376fc  56                   push esi
// 006376fd  57                   push edi
// 006376fe  8bf1                 mov esi, ecx
// 00637700  89742408             mov dword ptr [esp + 8], esi
// 00637704  50                   push eax
// 00637705  51                   push ecx
// 00637706  8bc4                 mov eax, esp
// 00637708  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00637710  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00637718  89642414             mov dword ptr [esp + 0x14], esp
// 0063771c  c70000000000         mov dword ptr [eax], 0
// 00637722  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00637726  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063772a  51                   push ecx
// 0063772b  52                   push edx
// 0063772c  c644242801           mov byte ptr [esp + 0x28], 1
// 00637731  e8daf7ffff           call 0x636f10
// 00637736  50                   push eax
// 00637737  8bce                 mov ecx, esi
// 00637739  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063773e  e8fdccf4ff           call 0x584440
// 00637743  6a18                 push 0x18
// 00637745  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063774a  c70620748400         mov dword ptr [esi], 0x847420
// 00637750  e8cb910600           call 0x6a0920
// 00637755  83c404               add esp, 4
// 00637758  85c0                 test eax, eax
// 0063775a  7422                 je 0x63777e
// 0063775c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00637760  c70048838400         mov dword ptr [eax], 0x848348
// 00637766  897004               mov dword ptr [eax + 4], esi
// 00637769  894808               mov dword ptr [eax + 8], ecx
// 0063776c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00637770  895010               mov dword ptr [eax + 0x10], edx
// 00637773  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00637777  894814               mov dword ptr [eax + 0x14], ecx
// 0063777a  8bf8                 mov edi, eax
// 0063777c  eb02                 jmp 0x637780
// 0063777e  33ff                 xor edi, edi
// 00637780  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637783  3bf8                 cmp edi, eax
// 00637785  740d                 je 0x637794
// 00637787  85c0                 test eax, eax
// 00637789  7409                 je 0x637794
// 0063778b  50                   push eax
// 0063778c  e8e98e0600           call 0x6a067a
// 00637791  83c404               add esp, 4
// 00637794  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637798  897e18               mov dword ptr [esi + 0x18], edi
// 0063779b  5f                   pop edi
// 0063779c  8bc6                 mov eax, esi
// 0063779e  64890d00000000       mov dword ptr fs:[0], ecx
// 006377a5  5e                   pop esi
// 006377a6  83c414               add esp, 0x14
// 006377a9  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
