// roc 2007-08 004cd9b0  unit: RBX::Render::VMaterial::?$WeakReferenceCountedPointer  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd9b0
//
// 004cd9b0  6aff                 push -1
// 004cd9b2  6858c57400           push 0x74c558
// 004cd9b7  64a100000000         mov eax, dword ptr fs:[0]
// 004cd9bd  50                   push eax
// 004cd9be  64892500000000       mov dword ptr fs:[0], esp
// 004cd9c5  51                   push ecx
// 004cd9c6  56                   push esi
// 004cd9c7  8d710c               lea esi, [ecx + 0xc]
// 004cd9ca  89742404             mov dword ptr [esp + 4], esi
// 004cd9ce  c70634f07900         mov dword ptr [esi], 0x79f034
// 004cd9d4  8bce                 mov ecx, esi
// 004cd9d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cd9de  e8adfeffff           call 0x4cd890
// 004cd9e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cd9e7  c70610f07900         mov dword ptr [esi], 0x79f010
// 004cd9ed  5e                   pop esi
// 004cd9ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd9f5  83c410               add esp, 0x10
// 004cd9f8  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??1?$pair@$$CBUAttributes@MaterialFactory@View@RBX@@V?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
