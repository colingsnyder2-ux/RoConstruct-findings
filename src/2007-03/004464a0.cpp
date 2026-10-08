// roc 2007-03 004464a0  unit: seg_00440000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004464a0
//
// 004464a0  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 004464a3  8b01                 mov eax, dword ptr [ecx]
// 004464a5  8b542404             mov edx, dword ptr [esp + 4]
// 004464a9  8b4004               mov eax, dword ptr [eax + 4]
// 004464ac  52                   push edx
// 004464ad  ffd0                 call eax
// 004464af  50                   push eax
// 004464b0  e81bf8ffff           call 0x445cd0
// 004464b5  8bc8                 mov ecx, eax
// 004464b7  e844251300           call 0x578a00
// 004464bc  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?getIndexValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBEIPBVDescribedBase@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
