// roc 2012-06 008544e0  unit: lua_exception  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008544e0
//
// 008544e0  56                   push esi
// 008544e1  8bf1                 mov esi, ecx
// 008544e3  807e1400             cmp byte ptr [esi + 0x14], 0
// 008544e7  c706fc38bd00         mov dword ptr [esi], 0xbd38fc
// 008544ed  7518                 jne 0x854507
// 008544ef  8b4610               mov eax, dword ptr [esi + 0x10]
// 008544f2  c7400800000000       mov dword ptr [eax + 8], 0
// 008544f9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008544fc  6afe                 push -2
// 008544fe  51                   push ecx
// 008544ff  e8fcd5fdff           call 0x831b00
// 00854504  83c408               add esp, 8
// 00854507  8bce                 mov ecx, esi
// 00854509  ff15d829b200         call dword ptr [0xb229d8]
// 0085450f  f644240801           test byte ptr [esp + 8], 1
// 00854514  7409                 je 0x85451f
// 00854516  56                   push esi
// 00854517  e8f8db1200           call 0x982114
// 0085451c  83c404               add esp, 4
// 0085451f  8bc6                 mov eax, esi
// 00854521  5e                   pop esi
// 00854522  c20400               ret 4
// copied from an identical function in another client (function ??_Glua_exception@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp