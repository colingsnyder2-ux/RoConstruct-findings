// roc 2007-08 00771d20  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771d20
//
// 00771d20  53                   push ebx
// 00771d21  55                   push ebp
// 00771d22  56                   push esi
// 00771d23  57                   push edi
// 00771d24  6a01                 push 1
// 00771d26  83ec0c               sub esp, 0xc
// 00771d29  8bc4                 mov eax, esp
// 00771d2b  b9707e5700           mov ecx, 0x577e70
// 00771d30  8908                 mov dword ptr [eax], ecx
// 00771d32  33d2                 xor edx, edx
// 00771d34  895004               mov dword ptr [eax + 4], edx
// 00771d37  83ec0c               sub esp, 0xc
// 00771d3a  33f6                 xor esi, esi
// 00771d3c  897008               mov dword ptr [eax + 8], esi
// 00771d3f  8bc4                 mov eax, esp
// 00771d41  bfa03f5700           mov edi, 0x573fa0
// 00771d46  8938                 mov dword ptr [eax], edi
// 00771d48  6898b67900           push 0x79b698
// 00771d4d  33db                 xor ebx, ebx
// 00771d4f  33ed                 xor ebp, ebp
// 00771d51  895804               mov dword ptr [eax + 4], ebx
// 00771d54  68f8af7a00           push 0x7aaff8
// 00771d59  b9bc278c00           mov ecx, 0x8c27bc
// 00771d5e  896808               mov dword ptr [eax + 8], ebp
// 00771d61  e89a56e0ff           call 0x577400
// 00771d66  6850a27700           push 0x77a250
// 00771d6b  e8b3efebff           call 0x630d23
// 00771d70  83c404               add esp, 4
// 00771d73  5f                   pop edi
// 00771d74  5e                   pop esi
// 00771d75  5d                   pop ebp
// 00771d76  5b                   pop ebx
// 00771d77  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_PositionUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
