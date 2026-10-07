// roc 2012-06 00567ad0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00567ad0
//
// 00567ad0  8b442404             mov eax, dword ptr [esp + 4]
// 00567ad4  8d14c500000000       lea edx, [eax*8]
// 00567adb  015108               add dword ptr [ecx + 8], edx
// 00567ade  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?IgnoreBytes@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
