// roc 2008-06 0057c1b0  unit: RBX::VInstance::?$SignalDesc  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c1b0
//
// 0057c1b0  8b4104               mov eax, dword ptr [ecx + 4]
// 0057c1b3  83e801               sub eax, 1
// 0057c1b6  7423                 je 0x57c1db
// 0057c1b8  83e801               sub eax, 1
// 0057c1bb  7405                 je 0x57c1c2
// 0057c1bd  32c0                 xor al, al
// 0057c1bf  c20400               ret 4
// 0057c1c2  8b4908               mov ecx, dword ptr [ecx + 8]
// 0057c1c5  51                   push ecx
// 0057c1c6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057c1ca  83c104               add ecx, 4
// 0057c1cd  ff1524248000         call dword ptr [0x802424]
// 0057c1d3  f7d8                 neg eax
// 0057c1d5  1bc0                 sbb eax, eax
// 0057c1d7  40                   inc eax
// 0057c1d8  c20400               ret 4
// 0057c1db  8b542404             mov edx, dword ptr [esp + 4]
// 0057c1df  33c0                 xor eax, eax
// 0057c1e1  3b5108               cmp edx, dword ptr [ecx + 8]
// 0057c1e4  0f94c0               sete al
// 0057c1e7  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isValueEqual@XmlNameValuePair@@QBE_NPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
