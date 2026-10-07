// roc 2012-06 00561940  unit: RBX::VHint::?$FactoryProduct::Creator  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00561940
//
// 00561940  66833902             cmp word ptr [ecx], 2
// 00561944  0f95c0               setne al
// 00561947  8d440004             lea eax, [eax + eax + 4]
// 0056194b  c3                   ret 
// library rbx2016-raknet/RakNetTypes.cpp (function ?GetIPVersion@SystemAddress@RakNet@@QBEEXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakNetTypes.cpp
