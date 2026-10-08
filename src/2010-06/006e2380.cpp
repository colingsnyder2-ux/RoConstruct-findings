// roc 2010-06 006e2380  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e2380
//
// 006e2380  56                   push esi
// 006e2381  8bf1                 mov esi, ecx
// 006e2383  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006e2386  50                   push eax
// 006e2387  e80e560c00           call 0x7a799a
// 006e238c  83c404               add esp, 4
// 006e238f  f644240801           test byte ptr [esp + 8], 1
// 006e2394  c7061809a000         mov dword ptr [esi], 0xa00918
// 006e239a  7409                 je 0x6e23a5
// 006e239c  56                   push esi
// 006e239d  e8f8550c00           call 0x7a799a
// 006e23a2  83c404               add esp, 4
// 006e23a5  8bc6                 mov eax, esi
// 006e23a7  5e                   pop esi
// 006e23a8  c20400               ret 4
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??_G?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
