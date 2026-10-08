// roc 2007-08 00774cc0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774cc0
//
// 00774cc0  53                   push ebx
// 00774cc1  55                   push ebp
// 00774cc2  56                   push esi
// 00774cc3  57                   push edi
// 00774cc4  6a01                 push 1
// 00774cc6  83ec0c               sub esp, 0xc
// 00774cc9  8bc4                 mov eax, esp
// 00774ccb  b9403e5d00           mov ecx, 0x5d3e40
// 00774cd0  8908                 mov dword ptr [eax], ecx
// 00774cd2  33d2                 xor edx, edx
// 00774cd4  895004               mov dword ptr [eax + 4], edx
// 00774cd7  83ec0c               sub esp, 0xc
// 00774cda  33f6                 xor esi, esi
// 00774cdc  897008               mov dword ptr [eax + 8], esi
// 00774cdf  8bc4                 mov eax, esp
// 00774ce1  bfa01c5d00           mov edi, 0x5d1ca0
// 00774ce6  8938                 mov dword ptr [eax], edi
// 00774ce8  6840a87a00           push 0x7aa840
// 00774ced  33db                 xor ebx, ebx
// 00774cef  33ed                 xor ebp, ebp
// 00774cf1  895804               mov dword ptr [eax + 4], ebx
// 00774cf4  684cb77b00           push 0x7bb74c
// 00774cf9  b95c698c00           mov ecx, 0x8c695c
// 00774cfe  896808               mov dword ptr [eax + 8], ebp
// 00774d01  e86aeae5ff           call 0x5d3770
// 00774d06  6880bc7700           push 0x77bc80
// 00774d0b  e813c0ebff           call 0x630d23
// 00774d10  83c404               add esp, 4
// 00774d13  5f                   pop edi
// 00774d14  5e                   pop esi
// 00774d15  5d                   pop ebp
// 00774d16  5b                   pop ebx
// 00774d17  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
