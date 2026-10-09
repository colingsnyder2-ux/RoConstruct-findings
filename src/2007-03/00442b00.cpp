// roc 2007-03 00442b00  unit: seg_00440000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442b00
//
// 00442b00  8b542404             mov edx, dword ptr [esp + 4]
// 00442b04  56                   push esi
// 00442b05  8bf1                 mov esi, ecx
// 00442b07  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00442b0a  8b01                 mov eax, dword ptr [ecx]
// 00442b0c  8b4004               mov eax, dword ptr [eax + 4]
// 00442b0f  57                   push edi
// 00442b10  52                   push edx
// 00442b11  ffd0                 call eax
// 00442b13  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00442b16  8b11                 mov edx, dword ptr [ecx]
// 00442b18  8b5204               mov edx, dword ptr [edx + 4]
// 00442b1b  8bf8                 mov edi, eax
// 00442b1d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00442b21  50                   push eax
// 00442b22  ffd2                 call edx
// 00442b24  33c9                 xor ecx, ecx
// 00442b26  3bf8                 cmp edi, eax
// 00442b28  0f94c1               sete cl
// 00442b2b  5f                   pop edi
// 00442b2c  8ac1                 mov al, cl
// 00442b2e  5e                   pop esi
// 00442b2f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Accoutrement.cpp (function ?equalValues@?$TypedPropertyDescriptor@H@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Accoutrement.cpp
