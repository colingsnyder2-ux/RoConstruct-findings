// roc 2010-06 004dd250  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd250
//
// 004dd250  8b442404             mov eax, dword ptr [esp + 4]
// 004dd254  8d14c500000000       lea edx, [eax*8]
// 004dd25b  015108               add dword ptr [ecx + 8], edx
// 004dd25e  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?IgnoreBytes@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
