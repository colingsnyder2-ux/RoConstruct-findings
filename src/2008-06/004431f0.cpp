// roc 2008-06 004431f0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004431f0
//
// 004431f0  8b442404             mov eax, dword ptr [esp + 4]
// 004431f4  85c0                 test eax, eax
// 004431f6  740a                 je 0x443202
// 004431f8  8b4908               mov ecx, dword ptr [ecx + 8]
// 004431fb  8b4408ec             mov eax, dword ptr [eax + ecx - 0x14]
// 004431ff  c20400               ret 4
// 00443202  8b5108               mov edx, dword ptr [ecx + 8]
// 00443205  33c0                 xor eax, eax
// 00443207  8b0410               mov eax, dword ptr [eax + edx]
// 0044320a  c20400               ret 4
// library openrbx-client/App\v8datamodel\Sky.cpp (function ?getValue@?$BoundPropGetSet@VSky@RBX@@@?$BoundProp@H$00@Reflection@RBX@@UBEHPBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Sky.cpp
