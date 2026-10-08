// roc 2007-08 005cccf0  unit: RBX::IPipelined  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cccf0
//
// 005cccf0  d9442404             fld dword ptr [esp + 4]
// 005cccf4  56                   push esi
// 005cccf5  8bf1                 mov esi, ecx
// 005cccf7  8b06                 mov eax, dword ptr [esi]
// 005cccf9  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005cccfc  51                   push ecx
// 005cccfd  d91c24               fstp dword ptr [esp]
// 005ccd00  ffd2                 call edx
// 005ccd02  84c0                 test al, al
// 005ccd04  7406                 je 0x5ccd0c
// 005ccd06  32c0                 xor al, al
// 005ccd08  5e                   pop esi
// 005ccd09  c20400               ret 4
// 005ccd0c  8b06                 mov eax, dword ptr [esi]
// 005ccd0e  d9442408             fld dword ptr [esp + 8]
// 005ccd12  8b501c               mov edx, dword ptr [eax + 0x1c]
// 005ccd15  d9e0                 fchs 
// 005ccd17  51                   push ecx
// 005ccd18  8bce                 mov ecx, esi
// 005ccd1a  d91c24               fstp dword ptr [esp]
// 005ccd1d  ffd2                 call edx
// 005ccd1f  5e                   pop esi
// 005ccd20  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?computeIsAdjacent@Contact@RBX@@QAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
