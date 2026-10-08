// roc 2007-03 00498190  unit: seg_00490000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498190
//
// 00498190  51                   push ecx
// 00498191  8bc1                 mov eax, ecx
// 00498193  8b08                 mov ecx, dword ptr [eax]
// 00498195  8b4004               mov eax, dword ptr [eax + 4]
// 00498198  8b11                 mov edx, dword ptr [ecx]
// 0049819a  8b5210               mov edx, dword ptr [edx + 0x10]
// 0049819d  56                   push esi
// 0049819e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004981a2  50                   push eax
// 004981a3  56                   push esi
// 004981a4  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004981ac  ffd2                 call edx
// 004981ae  8bc6                 mov eax, esi
// 004981b0  5e                   pop esi
// 004981b1  59                   pop ecx
// 004981b2  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?getStringValue@ConstProperty@Reflection@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
