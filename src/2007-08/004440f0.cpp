// roc 2007-08 004440f0  unit: RBX::MergeBinder  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004440f0
//
// 004440f0  e8abfbffff           call 0x443ca0
// 004440f5  e82614feff           call 0x425520
// 004440fa  e82115feff           call 0x425620
// 004440ff  e89c1dfeff           call 0x425ea0
// 00444104  e89714feff           call 0x4255a0
// 00444109  e99215feff           jmp 0x4256a0
// library rbxgs/v8datamodel\Gyro.cpp (function ?registerBodyMovers@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
