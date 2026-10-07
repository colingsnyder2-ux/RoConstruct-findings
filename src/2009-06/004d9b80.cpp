// roc 2009-06 004d9b80  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9b80
//
// 004d9b80  56                   push esi
// 004d9b81  6a01                 push 1
// 004d9b83  8bf1                 mov esi, ecx
// 004d9b85  e8c6fdffff           call 0x4d9950
// 004d9b8a  8b06                 mov eax, dword ptr [esi]
// 004d9b8c  a807                 test al, 7
// 004d9b8e  750a                 jne 0x4d9b9a
// 004d9b90  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d9b93  c1e803               shr eax, 3
// 004d9b96  c6040800             mov byte ptr [eax + ecx], 0
// 004d9b9a  ff06                 inc dword ptr [esi]
// 004d9b9c  5e                   pop esi
// 004d9b9d  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?Write0@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
