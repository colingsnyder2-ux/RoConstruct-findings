// roc 2007-08 0053e400  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e400
//
// 0053e400  8b442404             mov eax, dword ptr [esp + 4]
// 0053e404  85c0                 test eax, eax
// 0053e406  740a                 je 0x53e412
// 0053e408  8b4908               mov ecx, dword ptr [ecx + 8]
// 0053e40b  8a4408fc             mov al, byte ptr [eax + ecx - 4]
// 0053e40f  c20400               ret 4
// 0053e412  8b5108               mov edx, dword ptr [ecx + 8]
// 0053e415  33c0                 xor eax, eax
// 0053e417  8a0410               mov al, byte ptr [eax + edx]
// 0053e41a  c20400               ret 4
// library rbxgs/script\Script.cpp (function ?getValue@?$BoundPropGetSet@VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@UBE_NPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
