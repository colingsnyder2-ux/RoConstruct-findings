// roc 2007-08 00774670  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774670
//
// 00774670  6a05                 push 5
// 00774672  68c0925b00           push 0x5b92c0
// 00774677  6830915b00           push 0x5b9130
// 0077467c  68fc897b00           push 0x7b89fc
// 00774681  68348a7b00           push 0x7b8a34
// 00774686  b984638c00           mov ecx, 0x8c6384
// 0077468b  e8c03be4ff           call 0x5b8250
// 00774690  6820b97700           push 0x77b920
// 00774695  e889c6ebff           call 0x630d23
// 0077469a  59                   pop ecx
// 0077469b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
