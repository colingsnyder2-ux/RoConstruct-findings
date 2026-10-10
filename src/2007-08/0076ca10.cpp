// from server: 99% by tester
// roc 2007-08 0076ec00  unit: seg_00760000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ec00
//
// 0076ec00  6814b77900           push 0x787980
// 0076ec05  680cb77900           push 0x7879f8
// 0076ec0a  b9c8dd8b00           mov ecx, 0x8bb1d0
// 0076ec0f  e84c01d2ff           call 0x419a80
// 0076ec14  6830817700           push 0x777540
// 0076ec19  e80521ecff           call 0x630d23
// 0076ec1e  59                   pop ecx
// 0076ec1f  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eevent_Idled@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp