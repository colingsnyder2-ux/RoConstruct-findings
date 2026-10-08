// roc 2008-06 004a5560  unit: RBX::VHint::?$FactoryProduct::Creator  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5560
//
// 004a5560  56                   push esi
// 004a5561  6a01                 push 1
// 004a5563  8bf1                 mov esi, ecx
// 004a5565  e846feffff           call 0x4a53b0
// 004a556a  8b06                 mov eax, dword ptr [esi]
// 004a556c  8bc8                 mov ecx, eax
// 004a556e  c1f803               sar eax, 3
// 004a5571  83e107               and ecx, 7
// 004a5574  750b                 jne 0x4a5581
// 004a5576  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a5579  c6040880             mov byte ptr [eax + ecx], 0x80
// 004a557d  ff06                 inc dword ptr [esi]
// 004a557f  5e                   pop esi
// 004a5580  c3                   ret 
// 004a5581  8b560c               mov edx, dword ptr [esi + 0xc]
// 004a5584  03c2                 add eax, edx
// 004a5586  ba80000000           mov edx, 0x80
// 004a558b  d3fa                 sar edx, cl
// 004a558d  0810                 or byte ptr [eax], dl
// 004a558f  ff06                 inc dword ptr [esi]
// 004a5591  5e                   pop esi
// 004a5592  c3                   ret 
// library rbxgs-raknet/BitStream.cpp (function ?Write1@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
