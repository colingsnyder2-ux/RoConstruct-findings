// roc 2012-06 00541d50  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00541d50
//
// 00541d50  8b5108               mov edx, dword ptr [ecx + 8]
// 00541d53  8b442404             mov eax, dword ptr [esp + 4]
// 00541d57  85d2                 test edx, edx
// 00541d59  7509                 jne 0x541d64
// 00541d5b  894104               mov dword ptr [ecx + 4], eax
// 00541d5e  894108               mov dword ptr [ecx + 8], eax
// 00541d61  c20400               ret 4
// 00541d64  8902                 mov dword ptr [edx], eax
// 00541d66  894108               mov dword ptr [ecx + 8], eax
// 00541d69  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?addChild@XmlElement@@QAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
