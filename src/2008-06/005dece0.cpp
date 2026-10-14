// roc 2008-06 005dece0  unit: RBX::Message  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dece0
//
// 005dece0  51                   push ecx
// 005dece1  b801000000           mov eax, 1
// 005dece6  840588a69700         test byte ptr [0x97a688], al
// 005decec  7512                 jne 0x5ded00
// 005decee  d90540db8300         fld dword ptr [0x83db40]
// 005decf4  090588a69700         or dword ptr [0x97a688], eax
// 005decfa  d91d84a69700         fstp dword ptr [0x97a684]
// 005ded00  d9442408             fld dword ptr [esp + 8]
// 005ded04  d80578e38100         fadd dword ptr [0x81e378]
// 005ded0a  d83584a69700         fdiv dword ptr [0x97a684]
// 005ded10  d91c24               fstp dword ptr [esp]
// 005ded13  d90424               fld dword ptr [esp]
// 005ded16  db5c2408             fistp dword ptr [esp + 8]
// 005ded1a  8b442408             mov eax, dword ptr [esp + 8]
// 005ded1e  89442408             mov dword ptr [esp + 8], eax
// 005ded22  85c0                 test eax, eax
// 005ded24  c7042400000000       mov dword ptr [esp], 0
// 005ded2b  8d442408             lea eax, [esp + 8]
// 005ded2f  7f03                 jg 0x5ded34
// 005ded31  8d0424               lea eax, [esp]
// 005ded34  8b00                 mov eax, dword ptr [eax]
// 005ded36  89442408             mov dword ptr [esp + 8], eax
// 005ded3a  3dff000000           cmp eax, 0xff
// 005ded3f  c70424ff000000       mov dword ptr [esp], 0xff
// 005ded46  8d442408             lea eax, [esp + 8]
// 005ded4a  7c03                 jl 0x5ded4f
// 005ded4c  8d0424               lea eax, [esp]
// 005ded4f  8a00                 mov al, byte ptr [eax]
// 005ded51  59                   pop ecx
// 005ded52  c3                   ret 
// library openrbx-client/App\util\Math.cpp (function ?rotationToByteBase@RBX@@YAEM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/util/Math.cpp
