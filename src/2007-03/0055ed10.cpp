// roc 2007-03 0055ed10  unit: seg_00550000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055ed10
//
// 0055ed10  8b4104               mov eax, dword ptr [ecx + 4]
// 0055ed13  83e801               sub eax, 1
// 0055ed16  7425                 je 0x55ed3d
// 0055ed18  83e801               sub eax, 1
// 0055ed1b  7405                 je 0x55ed22
// 0055ed1d  32c0                 xor al, al
// 0055ed1f  c20400               ret 4
// 0055ed22  8b4908               mov ecx, dword ptr [ecx + 8]
// 0055ed25  51                   push ecx
// 0055ed26  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055ed2a  83c104               add ecx, 4
// 0055ed2d  ff1520e77700         call dword ptr [0x77e720]
// 0055ed33  f7d8                 neg eax
// 0055ed35  1bc0                 sbb eax, eax
// 0055ed37  83c001               add eax, 1
// 0055ed3a  c20400               ret 4
// 0055ed3d  8b542404             mov edx, dword ptr [esp + 4]
// 0055ed41  33c0                 xor eax, eax
// 0055ed43  3b5108               cmp edx, dword ptr [ecx + 8]
// 0055ed46  0f94c0               sete al
// 0055ed49  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?isValueEqual@XmlNameValuePair@@QBE_NPBVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
