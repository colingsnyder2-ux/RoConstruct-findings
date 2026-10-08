// roc 2007-08 005444c0  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005444c0
//
// 005444c0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005444c3  8b01                 mov eax, dword ptr [ecx]
// 005444c5  8b542404             mov edx, dword ptr [esp + 4]
// 005444c9  8b4004               mov eax, dword ptr [eax + 4]
// 005444cc  52                   push edx
// 005444cd  ffd0                 call eax
// 005444cf  50                   push eax
// 005444d0  e8ebf6ffff           call 0x543bc0
// 005444d5  8bc8                 mov ecx, eax
// 005444d7  e8a43b0700           call 0x5b8080
// 005444dc  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
