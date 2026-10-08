// roc 2009-06 00893840  unit: seg_00890000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893840
//
// 00893840  6860d14900           push 0x49d160
// 00893845  6880ae4900           push 0x49ae80
// 0089384a  6a03                 push 3
// 0089384c  6a04                 push 4
// 0089384e  684c89a500           push 0xa5894c
// 00893853  e82864e8ff           call 0x719c80
// 00893858  68a0d68900           push 0x89d6a0
// 0089385d  e89962e8ff           call 0x719afb
// 00893862  59                   pop ecx
// 00893863  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ??__E?bloomShader@ToneMap@G3D@@0PAV?$ReferenceCountedPointer@VShader@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
