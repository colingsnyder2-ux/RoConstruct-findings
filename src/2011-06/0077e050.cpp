// roc 2011-06 0077e050  unit: lua_exception  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e050
//
// 0077e050  56                   push esi
// 0077e051  8bf1                 mov esi, ecx
// 0077e053  807e1400             cmp byte ptr [esi + 0x14], 0
// 0077e057  c7062c78ab00         mov dword ptr [esi], 0xab782c
// 0077e05d  7518                 jne 0x77e077
// 0077e05f  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e062  c7400800000000       mov dword ptr [eax + 8], 0
// 0077e069  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077e06c  6afe                 push -2
// 0077e06e  51                   push ecx
// 0077e06f  e8fc42feff           call 0x762370
// 0077e074  83c408               add esp, 8
// 0077e077  8bce                 mov ecx, esi
// 0077e079  ff15640aa400         call dword ptr [0xa40a64]
// 0077e07f  f644240801           test byte ptr [esp + 8], 1
// 0077e084  7409                 je 0x77e08f
// 0077e086  56                   push esi
// 0077e087  e8ccbf0800           call 0x80a058
// 0077e08c  83c404               add esp, 4
// 0077e08f  8bc6                 mov eax, esi
// 0077e091  5e                   pop esi
// 0077e092  c20400               ret 4
// copied from an identical function in another client (function ??_Glua_exception@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp