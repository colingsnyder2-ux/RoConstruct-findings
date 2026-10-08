// roc 2007-08 005cda80  unit: RBX::Contact  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cda80
//
// 005cda80  56                   push esi
// 005cda81  8b742408             mov esi, dword ptr [esp + 8]
// 005cda85  8b06                 mov eax, dword ptr [esi]
// 005cda87  85c0                 test eax, eax
// 005cda89  7421                 je 0x5cdaac
// 005cda8b  50                   push eax
// 005cda8c  e8bfb60300           call 0x609150
// 005cda91  8bc8                 mov ecx, eax
// 005cda93  e8e8feffff           call 0x5cd980
// 005cda98  8b0e                 mov ecx, dword ptr [esi]
// 005cda9a  85c9                 test ecx, ecx
// 005cda9c  7408                 je 0x5cdaa6
// 005cda9e  8b01                 mov eax, dword ptr [ecx]
// 005cdaa0  8b10                 mov edx, dword ptr [eax]
// 005cdaa2  6a01                 push 1
// 005cdaa4  ffd2                 call edx
// 005cdaa6  c70600000000         mov dword ptr [esi], 0
// 005cdaac  5e                   pop esi
// 005cdaad  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?deleteConnector@Contact@RBX@@IAEXAAPAVContactConnector@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
