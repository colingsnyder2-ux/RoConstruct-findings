// roc 2008-06 00573430  unit: RBX::GuiTarget  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573430
//
// 00573430  56                   push esi
// 00573431  8b742408             mov esi, dword ptr [esp + 8]
// 00573435  8b06                 mov eax, dword ptr [esi]
// 00573437  8b5018               mov edx, dword ptr [eax + 0x18]
// 0057343a  57                   push edi
// 0057343b  8bce                 mov ecx, esi
// 0057343d  ffd2                 call edx
// 0057343f  0fb7f8               movzx edi, ax
// 00573442  8b06                 mov eax, dword ptr [esi]
// 00573444  8b5014               mov edx, dword ptr [eax + 0x14]
// 00573447  8bce                 mov ecx, esi
// 00573449  ffd2                 call edx
// 0057344b  98                   cwde 
// 0057344c  8944240c             mov dword ptr [esp + 0xc], eax
// 00573450  0fbfcf               movsx ecx, di
// 00573453  db44240c             fild dword ptr [esp + 0xc]
// 00573457  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057345b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057345f  56                   push esi
// 00573460  db442410             fild dword ptr [esp + 0x10]
// 00573464  d9c9                 fxch st(1)
// 00573466  d91d784d9700         fstp dword ptr [0x974d78]
// 0057346c  d91d7c4d9700         fstp dword ptr [0x974d7c]
// 00573472  8b11                 mov edx, dword ptr [ecx]
// 00573474  8b4260               mov eax, dword ptr [edx + 0x60]
// 00573477  ffd0                 call eax
// 00573479  5f                   pop edi
// 0057347a  5e                   pop esi
// 0057347b  c3                   ret 
// library rbxgs/roc_unit_39635652f58f6bf1.cpp (function ?f@@YAXPAUS@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_39635652f58f6bf1.cpp
