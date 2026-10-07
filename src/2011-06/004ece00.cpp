// roc 2011-06 004ece00  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ece00
//
// 004ece00  56                   push esi
// 004ece01  6a08                 push 8
// 004ece03  8bf1                 mov esi, ecx
// 004ece05  e8c6fdffff           call 0x4ecbd0
// 004ece0a  8b06                 mov eax, dword ptr [esi]
// 004ece0c  8b542408             mov edx, dword ptr [esp + 8]
// 004ece10  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ece13  8a12                 mov dl, byte ptr [edx]
// 004ece15  c1e803               shr eax, 3
// 004ece18  881408               mov byte ptr [eax + ecx], dl
// 004ece1b  830608               add dword ptr [esi], 8
// 004ece1e  5e                   pop esi
// 004ece1f  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?WriteAlignedVar8@BitStream@RakNet@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
