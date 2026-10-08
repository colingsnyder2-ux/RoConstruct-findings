// roc 2007-03 00443b50  unit: seg_00440000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00443b50
//
// 00443b50  e87bfbffff           call 0x4436d0
// 00443b55  e8d62ffeff           call 0x426b30
// 00443b5a  e8d130feff           call 0x426c30
// 00443b5f  e81c38feff           call 0x427380
// 00443b64  e84730feff           call 0x426bb0
// 00443b69  e94231feff           jmp 0x426cb0
// library rbxgs/v8datamodel\Gyro.cpp (function ?registerBodyMovers@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
