// roc 2007-08 0059dfc0  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059dfc0
//
// 0059dfc0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0059dfc3  8b01                 mov eax, dword ptr [ecx]
// 0059dfc5  8b542404             mov edx, dword ptr [esp + 4]
// 0059dfc9  8b4004               mov eax, dword ptr [eax + 4]
// 0059dfcc  52                   push edx
// 0059dfcd  ffd0                 call eax
// 0059dfcf  50                   push eax
// 0059dfd0  e80bfbffff           call 0x59dae0
// 0059dfd5  8bc8                 mov ecx, eax
// 0059dfd7  e8a4a00100           call 0x5b8080
// 0059dfdc  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
