// roc 2008-06 004a5470  unit: RBX::VHint::?$FactoryProduct::Creator  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a5470
//
// 004a5470  8b442404             mov eax, dword ptr [esp + 4]
// 004a5474  014108               add dword ptr [ecx + 8], eax
// 004a5477  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?IgnoreBits@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
