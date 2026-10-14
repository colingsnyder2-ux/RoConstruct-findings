// roc 2008-06 00573130  unit: RBX::VServiceProvider::?$BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573130
//
// 00573130  51                   push ecx
// 00573131  8b442408             mov eax, dword ptr [esp + 8]
// 00573135  8bd0                 mov edx, eax
// 00573137  98                   cwde 
// 00573138  89442408             mov dword ptr [esp + 8], eax
// 0057313c  c1ea10               shr edx, 0x10
// 0057313f  db442408             fild dword ptr [esp + 8]
// 00573143  0fbfd2               movsx edx, dx
// 00573146  d811                 fcom dword ptr [ecx]
// 00573148  891424               mov dword ptr [esp], edx
// 0057314b  dfe0                 fnstsw ax
// 0057314d  f6c401               test ah, 1
// 00573150  752a                 jne 0x57317c
// 00573152  d85908               fcomp dword ptr [ecx + 8]
// 00573155  dfe0                 fnstsw ax
// 00573157  f6c441               test ah, 0x41
// 0057315a  7a22                 jp 0x57317e
// 0057315c  db0424               fild dword ptr [esp]
// 0057315f  d85104               fcom dword ptr [ecx + 4]
// 00573162  dfe0                 fnstsw ax
// 00573164  f6c401               test ah, 1
// 00573167  7513                 jne 0x57317c
// 00573169  d8590c               fcomp dword ptr [ecx + 0xc]
// 0057316c  dfe0                 fnstsw ax
// 0057316e  f6c441               test ah, 0x41
// 00573171  7a0b                 jp 0x57317e
// 00573173  b801000000           mov eax, 1
// 00573178  59                   pop ecx
// 00573179  c20400               ret 4
// 0057317c  ddd8                 fstp st(0)
// 0057317e  33c0                 xor eax, eax
// 00573180  59                   pop ecx
// 00573181  c20400               ret 4
// library rbxgs-dll/gui\GUI.cpp (function ?pointInRect@Rect@RBX@@QAE_NVVector2int16@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll gui/GUI.cpp
