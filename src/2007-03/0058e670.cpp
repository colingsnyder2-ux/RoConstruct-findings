// roc 2007-03 0058e670  unit: seg_00580000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058e670
//
// 0058e670  8b819c010000         mov eax, dword ptr [ecx + 0x19c]
// 0058e676  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?getCameraSubjectInstance@Camera@RBX@@QBEPAVInstance@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
