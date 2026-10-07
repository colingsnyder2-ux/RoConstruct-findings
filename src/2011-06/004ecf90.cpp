// roc 2011-06 004ecf90  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecf90
//
// 004ecf90  56                   push esi
// 004ecf91  6a01                 push 1
// 004ecf93  8bf1                 mov esi, ecx
// 004ecf95  e836fcffff           call 0x4ecbd0
// 004ecf9a  8b06                 mov eax, dword ptr [esi]
// 004ecf9c  8bc8                 mov ecx, eax
// 004ecf9e  c1e803               shr eax, 3
// 004ecfa1  83e107               and ecx, 7
// 004ecfa4  750b                 jne 0x4ecfb1
// 004ecfa6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ecfa9  c6040880             mov byte ptr [eax + ecx], 0x80
// 004ecfad  ff06                 inc dword ptr [esi]
// 004ecfaf  5e                   pop esi
// 004ecfb0  c3                   ret 
// 004ecfb1  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ecfb4  03c2                 add eax, edx
// 004ecfb6  ba80000000           mov edx, 0x80
// 004ecfbb  d3fa                 sar edx, cl
// 004ecfbd  0810                 or byte ptr [eax], dl
// 004ecfbf  ff06                 inc dword ptr [esi]
// 004ecfc1  5e                   pop esi
// 004ecfc2  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?Write1@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
