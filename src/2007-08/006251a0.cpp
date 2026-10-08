// roc 2007-08 006251a0  unit: RBX::PartByLocalCharacter  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006251a0
//
// 006251a0  56                   push esi
// 006251a1  8bf1                 mov esi, ecx
// 006251a3  837e0400             cmp dword ptr [esi + 4], 0
// 006251a7  7434                 je 0x6251dd
// 006251a9  837e0c00             cmp dword ptr [esi + 0xc], 0
// 006251ad  742e                 je 0x6251dd
// 006251af  8b442408             mov eax, dword ptr [esp + 8]
// 006251b3  50                   push eax
// 006251b4  e887ebf4ff           call 0x573d40
// 006251b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006251bc  83c404               add esp, 4
// 006251bf  51                   push ecx
// 006251c0  8bc8                 mov ecx, eax
// 006251c2  e8790ce8ff           call 0x4a5e40
// 006251c7  84c0                 test al, al
// 006251c9  7412                 je 0x6251dd
// 006251cb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006251ce  e87dffffff           call 0x625150
// 006251d3  f6d8                 neg al
// 006251d5  5e                   pop esi
// 006251d6  1bc0                 sbb eax, eax
// 006251d8  f7d8                 neg eax
// 006251da  c20400               ret 4
// 006251dd  b802000000           mov eax, 2
// 006251e2  5e                   pop esi
// 006251e3  c20400               ret 4
// library rbxgs/v8datamodel\Filters.cpp (function ?filterResult@PartByLocalCharacter@RBX@@UBE?AW4Result@HitTestFilter@2@PBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
