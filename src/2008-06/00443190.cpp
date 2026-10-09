// roc 2008-06 00443190  unit: VAuthoringSettings::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443190
//
// 00443190  8b442404             mov eax, dword ptr [esp + 4]
// 00443194  85c0                 test eax, eax
// 00443196  740a                 je 0x4431a2
// 00443198  8b4908               mov ecx, dword ptr [ecx + 8]
// 0044319b  8a4408ec             mov al, byte ptr [eax + ecx - 0x14]
// 0044319f  c20400               ret 4
// 004431a2  8b5108               mov edx, dword ptr [ecx + 8]
// 004431a5  33c0                 xor eax, eax
// 004431a7  8a0410               mov al, byte ptr [eax + edx]
// 004431aa  c20400               ret 4
// library openrbx-client/App\v8datamodel\Sky.cpp (function ?getValue@?$BoundPropGetSet@VSky@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@UBE_NPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
