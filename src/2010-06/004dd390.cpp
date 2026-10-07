// roc 2010-06 004dd390  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd390
//
// 004dd390  56                   push esi
// 004dd391  6a01                 push 1
// 004dd393  8bf1                 mov esi, ecx
// 004dd395  e8c6fdffff           call 0x4dd160
// 004dd39a  8b06                 mov eax, dword ptr [esi]
// 004dd39c  a807                 test al, 7
// 004dd39e  750a                 jne 0x4dd3aa
// 004dd3a0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004dd3a3  c1e803               shr eax, 3
// 004dd3a6  c6040800             mov byte ptr [eax + ecx], 0
// 004dd3aa  ff06                 inc dword ptr [esi]
// 004dd3ac  5e                   pop esi
// 004dd3ad  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?Write0@BitStream@RakNet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
