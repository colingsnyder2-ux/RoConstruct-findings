// roc 2009-06 0088f520  unit: seg_00880000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088f520
//
// 0088f520  53                   push ebx
// 0088f521  55                   push ebp
// 0088f522  56                   push esi
// 0088f523  57                   push edi
// 0088f524  6a01                 push 1
// 0088f526  83ec0c               sub esp, 0xc
// 0088f529  8bc4                 mov eax, esp
// 0088f52b  b9a05f6600           mov ecx, 0x665fa0
// 0088f530  8908                 mov dword ptr [eax], ecx
// 0088f532  33d2                 xor edx, edx
// 0088f534  895004               mov dword ptr [eax + 4], edx
// 0088f537  83ec0c               sub esp, 0xc
// 0088f53a  33f6                 xor esi, esi
// 0088f53c  897008               mov dword ptr [eax + 8], esi
// 0088f53f  8bc4                 mov eax, esp
// 0088f541  bf009f5200           mov edi, 0x529f00
// 0088f546  8938                 mov dword ptr [eax], edi
// 0088f548  33db                 xor ebx, ebx
// 0088f54a  895804               mov dword ptr [eax + 4], ebx
// 0088f54d  33ed                 xor ebp, ebp
// 0088f54f  896808               mov dword ptr [eax + 8], ebp
// 0088f552  a1c04da100           mov eax, dword ptr [0xa14dc0]
// 0088f557  50                   push eax
// 0088f558  684c2b8e00           push 0x8e2b4c
// 0088f55d  b904d4a400           mov ecx, 0xa4d404
// 0088f562  e87966ddff           call 0x665be0
// 0088f567  6810b18900           push 0x89b110
// 0088f56c  e88aa5e8ff           call 0x719afb
// 0088f571  83c404               add esp, 4
// 0088f574  5f                   pop edi
// 0088f575  5e                   pop esi
// 0088f576  5d                   pop ebp
// 0088f577  5b                   pop ebx
// 0088f578  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_shapeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
