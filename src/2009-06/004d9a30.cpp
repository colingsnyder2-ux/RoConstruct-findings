// roc 2009-06 004d9a30  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9a30
//
// 004d9a30  8b442404             mov eax, dword ptr [esp + 4]
// 004d9a34  014108               add dword ptr [ecx + 8], eax
// 004d9a37  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?IgnoreBits@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
