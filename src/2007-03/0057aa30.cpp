// roc 2007-03 0057aa30  unit: seg_00570000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057aa30
//
// 0057aa30  8bc1                 mov eax, ecx
// 0057aa32  8d8830020000         lea ecx, [eax + 0x230]
// 0057aa38  0574020000           add eax, 0x274
// 0057aa3d  50                   push eax
// 0057aa3e  8b01                 mov eax, dword ptr [ecx]
// 0057aa40  8b5004               mov edx, dword ptr [eax + 4]
// 0057aa43  ffd2                 call edx
// 0057aa45  8bc8                 mov ecx, eax
// 0057aa47  e874660100           call 0x5910c0
// 0057aa4c  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?zoomToExtents@Workspace@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
