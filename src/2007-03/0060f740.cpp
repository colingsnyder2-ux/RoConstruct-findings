// roc 2007-03 0060f740  unit: seg_00600000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060f740
//
// 0060f740  56                   push esi
// 0060f741  8bf1                 mov esi, ecx
// 0060f743  837e0400             cmp dword ptr [esi + 4], 0
// 0060f747  7434                 je 0x60f77d
// 0060f749  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0060f74d  742e                 je 0x60f77d
// 0060f74f  8b442408             mov eax, dword ptr [esp + 8]
// 0060f753  50                   push eax
// 0060f754  e8f72ff6ff           call 0x572750
// 0060f759  8b4e04               mov ecx, dword ptr [esi + 4]
// 0060f75c  83c404               add esp, 4
// 0060f75f  51                   push ecx
// 0060f760  8bc8                 mov ecx, eax
// 0060f762  e889f9f2ff           call 0x53f0f0
// 0060f767  84c0                 test al, al
// 0060f769  7412                 je 0x60f77d
// 0060f76b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0060f76e  e87dffffff           call 0x60f6f0
// 0060f773  f6d8                 neg al
// 0060f775  5e                   pop esi
// 0060f776  1bc0                 sbb eax, eax
// 0060f778  f7d8                 neg eax
// 0060f77a  c20400               ret 4
// 0060f77d  b802000000           mov eax, 2
// 0060f782  5e                   pop esi
// 0060f783  c20400               ret 4
// library rbxgs/v8datamodel\Filters.cpp (function ?filterResult@PartByLocalCharacter@RBX@@UBE?AW4Result@HitTestFilter@2@PBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
