// roc 2008-06 00606ca0  unit: RBX::ContactConnector  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00606ca0
//
// 00606ca0  d9442404             fld dword ptr [esp + 4]
// 00606ca4  56                   push esi
// 00606ca5  8bf1                 mov esi, ecx
// 00606ca7  8b06                 mov eax, dword ptr [esi]
// 00606ca9  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00606cac  51                   push ecx
// 00606cad  d91c24               fstp dword ptr [esp]
// 00606cb0  ffd2                 call edx
// 00606cb2  84c0                 test al, al
// 00606cb4  7406                 je 0x606cbc
// 00606cb6  32c0                 xor al, al
// 00606cb8  5e                   pop esi
// 00606cb9  c20400               ret 4
// 00606cbc  8b06                 mov eax, dword ptr [esi]
// 00606cbe  d9442408             fld dword ptr [esp + 8]
// 00606cc2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00606cc5  d9e0                 fchs 
// 00606cc7  51                   push ecx
// 00606cc8  8bce                 mov ecx, esi
// 00606cca  d91c24               fstp dword ptr [esp]
// 00606ccd  ffd2                 call edx
// 00606ccf  5e                   pop esi
// 00606cd0  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?computeIsAdjacent@Contact@RBX@@QAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
