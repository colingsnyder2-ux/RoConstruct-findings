// roc 2007-03 00773580  unit: seg_00770000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773580
//
// 00773580  56                   push esi
// 00773581  33f6                 xor esi, esi
// 00773583  56                   push esi
// 00773584  68a8d87a00           push 0x7ad8a8
// 00773589  83ec0c               sub esp, 0xc
// 0077358c  8bc4                 mov eax, esp
// 0077358e  b930aa5700           mov ecx, 0x57aa30
// 00773593  8908                 mov dword ptr [eax], ecx
// 00773595  33d2                 xor edx, edx
// 00773597  895004               mov dword ptr [eax + 4], edx
// 0077359a  b9f0d18b00           mov ecx, 0x8bd1f0
// 0077359f  897008               mov dword ptr [eax + 8], esi
// 007735a2  e8b9abe0ff           call 0x57e160
// 007735a7  6860a27700           push 0x77a260
// 007735ac  e802bceaff           call 0x61f1b3
// 007735b1  83c404               add esp, 4
// 007735b4  5e                   pop esi
// 007735b5  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__Eworkspace_zoomToExtents@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
