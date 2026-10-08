// roc 2010-06 004094f0  unit: std::logic_error  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004094f0
//
// 004094f0  56                   push esi
// 004094f1  8bf1                 mov esi, ecx
// 004094f3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004094f6  50                   push eax
// 004094f7  e89ee43900           call 0x7a799a
// 004094fc  83c404               add esp, 4
// 004094ff  c7061809a000         mov dword ptr [esi], 0xa00918
// 00409505  5e                   pop esi
// 00409506  c3                   ret 
// library rbxgs/v8datamodel\FaceInstance.cpp (function ??1?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
