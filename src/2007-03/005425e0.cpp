// roc 2007-03 005425e0  unit: seg_00540000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005425e0
//
// 005425e0  53                   push ebx
// 005425e1  57                   push edi
// 005425e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005425e6  85ff                 test edi, edi
// 005425e8  8bd9                 mov ebx, ecx
// 005425ea  7432                 je 0x54261e
// 005425ec  a148c68b00           mov eax, dword ptr [0x8bc648]
// 005425f1  56                   push esi
// 005425f2  50                   push eax
// 005425f3  8bcf                 mov ecx, edi
// 005425f5  e896c70100           call 0x55ed90
// 005425fa  8bf0                 mov esi, eax
// 005425fc  85f6                 test esi, esi
// 005425fe  741d                 je 0x54261d
// 00542600  55                   push ebp
// 00542601  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00542605  55                   push ebp
// 00542606  56                   push esi
// 00542607  8bcb                 mov ecx, ebx
// 00542609  e8d2feffff           call 0x5424e0
// 0054260e  56                   push esi
// 0054260f  8bcf                 mov ecx, edi
// 00542611  e89ac70100           call 0x55edb0
// 00542616  8bf0                 mov esi, eax
// 00542618  85f6                 test esi, esi
// 0054261a  75e9                 jne 0x542605
// 0054261c  5d                   pop ebp
// 0054261d  5e                   pop esi
// 0054261e  5f                   pop edi
// 0054261f  5b                   pop ebx
// 00542620  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?readChildren@Instance@RBX@@QAEXPBVXmlElement@@AAVIReferenceBinder@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
