// roc 2011-06 004ecd30  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecd30
//
// 004ecd30  8b442404             mov eax, dword ptr [esp + 4]
// 004ecd34  8d14c500000000       lea edx, [eax*8]
// 004ecd3b  015108               add dword ptr [ecx + 8], edx
// 004ecd3e  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?IgnoreBytes@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
