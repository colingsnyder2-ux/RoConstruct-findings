// roc 2011-06 004ed170  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed170
//
// 004ed170  8b01                 mov eax, dword ptr [ecx]
// 004ed172  8d50ff               lea edx, [eax - 1]
// 004ed175  83e207               and edx, 7
// 004ed178  2bc2                 sub eax, edx
// 004ed17a  83c007               add eax, 7
// 004ed17d  8901                 mov dword ptr [ecx], eax
// 004ed17f  e97cffffff           jmp 0x4ed100
// library rbx2016-raknet/BitStream.cpp (function ?WriteAlignedBytes@BitStream@RakNet@@QAEXPBEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
