// roc 2007-08 00772580  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772580
//
// 00772580  53                   push ebx
// 00772581  55                   push ebp
// 00772582  56                   push esi
// 00772583  57                   push edi
// 00772584  6a04                 push 4
// 00772586  83ec0c               sub esp, 0xc
// 00772589  8bc4                 mov eax, esp
// 0077258b  b950825700           mov ecx, 0x578250
// 00772590  8908                 mov dword ptr [eax], ecx
// 00772592  33d2                 xor edx, edx
// 00772594  895004               mov dword ptr [eax + 4], edx
// 00772597  83ec0c               sub esp, 0xc
// 0077259a  33f6                 xor esi, esi
// 0077259c  897008               mov dword ptr [eax + 8], esi
// 0077259f  8bc4                 mov eax, esp
// 007725a1  bf50405700           mov edi, 0x574050
// 007725a6  8938                 mov dword ptr [eax], edi
// 007725a8  6848647a00           push 0x7a6448
// 007725ad  33db                 xor ebx, ebx
// 007725af  33ed                 xor ebp, ebp
// 007725b1  895804               mov dword ptr [eax + 4], ebx
// 007725b4  68c0b07a00           push 0x7ab0c0
// 007725b9  b9d8278c00           mov ecx, 0x8c27d8
// 007725be  896808               mov dword ptr [eax + 8], ebp
// 007725c1  e83a51e0ff           call 0x577700
// 007725c6  6810a27700           push 0x77a210
// 007725cb  e853e7ebff           call 0x630d23
// 007725d0  83c404               add esp, 4
// 007725d3  5f                   pop edi
// 007725d4  5e                   pop esi
// 007725d5  5d                   pop ebp
// 007725d6  5b                   pop ebx
// 007725d7  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ??__Eprop_Dragging@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
