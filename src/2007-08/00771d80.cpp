// roc 2007-08 00771d80  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771d80
//
// 00771d80  53                   push ebx
// 00771d81  55                   push ebp
// 00771d82  56                   push esi
// 00771d83  57                   push edi
// 00771d84  6a05                 push 5
// 00771d86  83ec0c               sub esp, 0xc
// 00771d89  8bc4                 mov eax, esp
// 00771d8b  b9407f5700           mov ecx, 0x577f40
// 00771d90  8908                 mov dword ptr [eax], ecx
// 00771d92  33d2                 xor edx, edx
// 00771d94  895004               mov dword ptr [eax + 4], edx
// 00771d97  83ec0c               sub esp, 0xc
// 00771d9a  33f6                 xor esi, esi
// 00771d9c  897008               mov dword ptr [eax + 8], esi
// 00771d9f  8bc4                 mov eax, esp
// 00771da1  bfd03f5700           mov edi, 0x573fd0
// 00771da6  8938                 mov dword ptr [eax], edi
// 00771da8  6898b67900           push 0x79b698
// 00771dad  33db                 xor ebx, ebx
// 00771daf  33ed                 xor ebp, ebp
// 00771db1  895804               mov dword ptr [eax + 4], ebx
// 00771db4  6804b07a00           push 0x7ab004
// 00771db9  b9d42a8c00           mov ecx, 0x8c2ad4
// 00771dbe  896808               mov dword ptr [eax + 8], ebp
// 00771dc1  e83a56e0ff           call 0x577400
// 00771dc6  6830a27700           push 0x77a230
// 00771dcb  e853efebff           call 0x630d23
// 00771dd0  83c404               add esp, 4
// 00771dd3  5f                   pop edi
// 00771dd4  5e                   pop esi
// 00771dd5  5d                   pop ebp
// 00771dd6  5b                   pop ebx
// 00771dd7  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Velocity@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
