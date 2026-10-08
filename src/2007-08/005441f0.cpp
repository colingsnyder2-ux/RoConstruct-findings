// roc 2007-08 005441f0  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005441f0
//
// 005441f0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005441f3  8b01                 mov eax, dword ptr [ecx]
// 005441f5  8b542404             mov edx, dword ptr [esp + 4]
// 005441f9  8b4004               mov eax, dword ptr [eax + 4]
// 005441fc  52                   push edx
// 005441fd  ffd0                 call eax
// 005441ff  50                   push eax
// 00544200  e81bfaffff           call 0x543c20
// 00544205  8bc8                 mov ecx, eax
// 00544207  e8743e0700           call 0x5b8080
// 0054420c  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
