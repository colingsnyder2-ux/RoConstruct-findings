// roc 2008-06 004448f0  unit: RBX::MergeBinder  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004448f0
//
// 004448f0  e85bfcffff           call 0x444550
// 004448f5  e8c66dfcff           call 0x40b6c0
// 004448fa  e8d177fcff           call 0x40c0d0
// 004448ff  e85c7efcff           call 0x40c760
// 00444904  e80775fcff           call 0x40be10
// 00444909  e9b27afcff           jmp 0x40c3c0
// library rbxgs/v8datamodel\Gyro.cpp (function ?registerBodyMovers@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
