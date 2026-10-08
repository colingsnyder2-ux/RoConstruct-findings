// roc 2008-06 007f7820  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7820
//
// 007f7820  53                   push ebx
// 007f7821  55                   push ebp
// 007f7822  56                   push esi
// 007f7823  57                   push edi
// 007f7824  6a04                 push 4
// 007f7826  83ec0c               sub esp, 0xc
// 007f7829  8bc4                 mov eax, esp
// 007f782b  b9d0f85f00           mov ecx, 0x5ff8d0
// 007f7830  8908                 mov dword ptr [eax], ecx
// 007f7832  33d2                 xor edx, edx
// 007f7834  895004               mov dword ptr [eax + 4], edx
// 007f7837  83ec0c               sub esp, 0xc
// 007f783a  33f6                 xor esi, esi
// 007f783c  897008               mov dword ptr [eax + 8], esi
// 007f783f  8bc4                 mov eax, esp
// 007f7841  bfb0d35f00           mov edi, 0x5fd3b0
// 007f7846  8938                 mov dword ptr [eax], edi
// 007f7848  68ac298300           push 0x8329ac
// 007f784d  33db                 xor ebx, ebx
// 007f784f  33ed                 xor ebp, ebp
// 007f7851  895804               mov dword ptr [eax + 4], ebx
// 007f7854  68e8168400           push 0x8416e8
// 007f7859  b9e0b79700           mov ecx, 0x97b7e0
// 007f785e  896808               mov dword ptr [eax + 8], ebp
// 007f7861  e89a71e0ff           call 0x5fea00
// 007f7866  6800008000           push 0x800000
// 007f786b  e83f9feaff           call 0x6a17af
// 007f7870  83c404               add esp, 4
// 007f7873  5f                   pop edi
// 007f7874  5e                   pop esi
// 007f7875  5d                   pop ebp
// 007f7876  5b                   pop ebx
// 007f7877  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_BackendToolState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
