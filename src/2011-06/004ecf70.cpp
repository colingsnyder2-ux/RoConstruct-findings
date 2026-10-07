// roc 2011-06 004ecf70  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecf70
//
// 004ecf70  56                   push esi
// 004ecf71  6a01                 push 1
// 004ecf73  8bf1                 mov esi, ecx
// 004ecf75  e856fcffff           call 0x4ecbd0
// 004ecf7a  8b06                 mov eax, dword ptr [esi]
// 004ecf7c  a807                 test al, 7
// 004ecf7e  750a                 jne 0x4ecf8a
// 004ecf80  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ecf83  c1e803               shr eax, 3
// 004ecf86  c6040800             mov byte ptr [eax + ecx], 0
// 004ecf8a  ff06                 inc dword ptr [esi]
// 004ecf8c  5e                   pop esi
// 004ecf8d  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?Write0@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
