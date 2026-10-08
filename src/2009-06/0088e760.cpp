// roc 2009-06 0088e760  unit: seg_00880000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0088e760
//
// 0088e760  53                   push ebx
// 0088e761  55                   push ebp
// 0088e762  56                   push esi
// 0088e763  57                   push edi
// 0088e764  6a01                 push 1
// 0088e766  83ec0c               sub esp, 0xc
// 0088e769  8bc4                 mov eax, esp
// 0088e76b  b9f0026600           mov ecx, 0x6602f0
// 0088e770  8908                 mov dword ptr [eax], ecx
// 0088e772  33d2                 xor edx, edx
// 0088e774  895004               mov dword ptr [eax + 4], edx
// 0088e777  83ec0c               sub esp, 0xc
// 0088e77a  33f6                 xor esi, esi
// 0088e77c  897008               mov dword ptr [eax + 8], esi
// 0088e77f  8bc4                 mov eax, esp
// 0088e781  bfc0c56500           mov edi, 0x65c5c0
// 0088e786  8938                 mov dword ptr [eax], edi
// 0088e788  33db                 xor ebx, ebx
// 0088e78a  895804               mov dword ptr [eax + 4], ebx
// 0088e78d  33ed                 xor ebp, ebp
// 0088e78f  896808               mov dword ptr [eax + 8], ebp
// 0088e792  a1982ca100           mov eax, dword ptr [0xa12c98]
// 0088e797  50                   push eax
// 0088e798  68387b8c00           push 0x8c7b38
// 0088e79d  b91ccfa400           mov ecx, 0xa4cf1c
// 0088e7a2  e82912ddff           call 0x65f9d0
// 0088e7a7  6880a98900           push 0x89a980
// 0088e7ac  e84ab3e8ff           call 0x719afb
// 0088e7b1  83c404               add esp, 4
// 0088e7b4  5f                   pop edi
// 0088e7b5  5e                   pop esi
// 0088e7b6  5d                   pop ebp
// 0088e7b7  5b                   pop ebx
// 0088e7b8  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_SizeUi@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
