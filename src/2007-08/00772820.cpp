// roc 2007-08 00772820  unit: seg_00770000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772820
//
// 00772820  56                   push esi
// 00772821  33f6                 xor esi, esi
// 00772823  56                   push esi
// 00772824  6820bf7a00           push 0x7abf20
// 00772829  83ec0c               sub esp, 0xc
// 0077282c  8bc4                 mov eax, esp
// 0077282e  b920ab5700           mov ecx, 0x57ab20
// 00772833  8908                 mov dword ptr [eax], ecx
// 00772835  33d2                 xor edx, edx
// 00772837  895004               mov dword ptr [eax + 4], edx
// 0077283a  b9d02e8c00           mov ecx, 0x8c2ed0
// 0077283f  897008               mov dword ptr [eax + 8], esi
// 00772842  e839c7e0ff           call 0x57ef80
// 00772847  6830a57700           push 0x77a530
// 0077284c  e8d2e4ebff           call 0x630d23
// 00772851  83c404               add esp, 4
// 00772854  5e                   pop esi
// 00772855  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??__Eworkspace_zoomToExtents@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
