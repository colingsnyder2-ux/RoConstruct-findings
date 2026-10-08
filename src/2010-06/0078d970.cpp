// roc 2010-06 0078d970  unit: RBX::PolyContact  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078d970
//
// 0078d970  8d4134               lea eax, [ecx + 0x34]
// 0078d973  50                   push eax
// 0078d974  e8f7feffff           call 0x78d870
// 0078d979  c3                   ret 
// library rbxgs/v8world\Contact.cpp (function ?deleteAllConnectors@BallBallContact@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
