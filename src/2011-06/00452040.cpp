// roc 2011-06 00452040  unit: VCRenderSettingsItem::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00452040
//
// 00452040  56                   push esi
// 00452041  6a08                 push 8
// 00452043  8bf1                 mov esi, ecx
// 00452045  e814803b00           call 0x80a05e
// 0045204a  83c404               add esp, 4
// 0045204d  85c0                 test eax, eax
// 0045204f  7411                 je 0x452062
// 00452051  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00452055  c700b0e9a500         mov dword ptr [eax], 0xa5e9b0
// 0045205b  d901                 fld dword ptr [ecx]
// 0045205d  d95804               fstp dword ptr [eax + 4]
// 00452060  eb02                 jmp 0x452064
// 00452062  33c0                 xor eax, eax
// 00452064  8d542408             lea edx, [esp + 8]
// 00452068  8bc8                 mov ecx, eax
// 0045206a  3bd6                 cmp edx, esi
// 0045206c  7404                 je 0x452072
// 0045206e  8b0e                 mov ecx, dword ptr [esi]
// 00452070  8906                 mov dword ptr [esi], eax
// 00452072  85c9                 test ecx, ecx
// 00452074  7408                 je 0x45207e
// 00452076  8b01                 mov eax, dword ptr [ecx]
// 00452078  8b10                 mov edx, dword ptr [eax]
// 0045207a  6a01                 push 1
// 0045207c  ffd2                 call edx
// 0045207e  8bc6                 mov eax, esi
// 00452080  5e                   pop esi
// 00452081  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@any@boost@@QAEAAV01@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
