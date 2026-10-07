// roc 2010-06 004dd3b0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd3b0
//
// 004dd3b0  56                   push esi
// 004dd3b1  6a01                 push 1
// 004dd3b3  8bf1                 mov esi, ecx
// 004dd3b5  e8a6fdffff           call 0x4dd160
// 004dd3ba  8b06                 mov eax, dword ptr [esi]
// 004dd3bc  8bc8                 mov ecx, eax
// 004dd3be  c1e803               shr eax, 3
// 004dd3c1  83e107               and ecx, 7
// 004dd3c4  750b                 jne 0x4dd3d1
// 004dd3c6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004dd3c9  c6040880             mov byte ptr [eax + ecx], 0x80
// 004dd3cd  ff06                 inc dword ptr [esi]
// 004dd3cf  5e                   pop esi
// 004dd3d0  c3                   ret 
// 004dd3d1  8b560c               mov edx, dword ptr [esi + 0xc]
// 004dd3d4  03c2                 add eax, edx
// 004dd3d6  ba80000000           mov edx, 0x80
// 004dd3db  d3fa                 sar edx, cl
// 004dd3dd  0810                 or byte ptr [eax], dl
// 004dd3df  ff06                 inc dword ptr [esi]
// 004dd3e1  5e                   pop esi
// 004dd3e2  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?Write1@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
