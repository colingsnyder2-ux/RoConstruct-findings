// roc 2007-03 0042f870  unit: seg_00420000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042f870
//
// 0042f870  8bc1                 mov eax, ecx
// 0042f872  32c9                 xor cl, cl
// 0042f874  8808                 mov byte ptr [eax], cl
// 0042f876  884801               mov byte ptr [eax + 1], cl
// 0042f879  884802               mov byte ptr [eax + 2], cl
// 0042f87c  c3                   ret 
// library rbxgs/v8tree\EnumProperty.cpp (function ??0Color3uint8@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
