// roc 2008-06 007f5010  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5010
//
// 007f5010  53                   push ebx
// 007f5011  55                   push ebp
// 007f5012  56                   push esi
// 007f5013  57                   push edi
// 007f5014  6a01                 push 1
// 007f5016  83ec0c               sub esp, 0xc
// 007f5019  8bc4                 mov eax, esp
// 007f501b  b900275b00           mov ecx, 0x5b2700
// 007f5020  8908                 mov dword ptr [eax], ecx
// 007f5022  33d2                 xor edx, edx
// 007f5024  895004               mov dword ptr [eax + 4], edx
// 007f5027  83ec0c               sub esp, 0xc
// 007f502a  33f6                 xor esi, esi
// 007f502c  897008               mov dword ptr [eax + 8], esi
// 007f502f  8bc4                 mov eax, esp
// 007f5031  bf40095b00           mov edi, 0x5b0940
// 007f5036  8938                 mov dword ptr [eax], edi
// 007f5038  68ac298300           push 0x8329ac
// 007f503d  33db                 xor ebx, ebx
// 007f503f  33ed                 xor ebp, ebp
// 007f5041  895804               mov dword ptr [eax + 4], ebx
// 007f5044  68e4508300           push 0x8350e4
// 007f5049  b9e86c9700           mov ecx, 0x976ce8
// 007f504e  896808               mov dword ptr [eax + 8], ebp
// 007f5051  e8aacadbff           call 0x5b1b00
// 007f5056  6840e27f00           push 0x7fe240
// 007f505b  e84fc7eaff           call 0x6a17af
// 007f5060  83c404               add esp, 4
// 007f5063  5f                   pop edi
// 007f5064  5e                   pop esi
// 007f5065  5d                   pop ebp
// 007f5066  5b                   pop ebx
// 007f5067  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentPos@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
