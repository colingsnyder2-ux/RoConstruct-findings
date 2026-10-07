// roc 2009-06 004d9ba0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9ba0
//
// 004d9ba0  56                   push esi
// 004d9ba1  6a01                 push 1
// 004d9ba3  8bf1                 mov esi, ecx
// 004d9ba5  e8a6fdffff           call 0x4d9950
// 004d9baa  8b06                 mov eax, dword ptr [esi]
// 004d9bac  8bc8                 mov ecx, eax
// 004d9bae  c1e803               shr eax, 3
// 004d9bb1  83e107               and ecx, 7
// 004d9bb4  750b                 jne 0x4d9bc1
// 004d9bb6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d9bb9  c6040880             mov byte ptr [eax + ecx], 0x80
// 004d9bbd  ff06                 inc dword ptr [esi]
// 004d9bbf  5e                   pop esi
// 004d9bc0  c3                   ret 
// 004d9bc1  8b560c               mov edx, dword ptr [esi + 0xc]
// 004d9bc4  03c2                 add eax, edx
// 004d9bc6  ba80000000           mov edx, 0x80
// 004d9bcb  d3fa                 sar edx, cl
// 004d9bcd  0810                 or byte ptr [eax], dl
// 004d9bcf  ff06                 inc dword ptr [esi]
// 004d9bd1  5e                   pop esi
// 004d9bd2  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?Write1@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
