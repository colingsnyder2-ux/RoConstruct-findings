// roc 2007-08 005f09d0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f09d0
//
// 005f09d0  8b442404             mov eax, dword ptr [esp + 4]
// 005f09d4  85c0                 test eax, eax
// 005f09d6  740a                 je 0x5f09e2
// 005f09d8  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f09db  8b4408fc             mov eax, dword ptr [eax + ecx - 4]
// 005f09df  c20400               ret 4
// 005f09e2  8b5108               mov edx, dword ptr [ecx + 8]
// 005f09e5  33c0                 xor eax, eax
// 005f09e7  8b0410               mov eax, dword ptr [eax + edx]
// 005f09ea  c20400               ret 4
// library rbxgs/v8datamodel\GameSettings.cpp (function ?getValue@?$BoundPropGetSet@VGameSettings@RBX@@@?$BoundProp@H$00@Reflection@RBX@@UBEHPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GameSettings.cpp
