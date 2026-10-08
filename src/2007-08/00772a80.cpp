// roc 2007-08 00772a80  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772a80
//
// 00772a80  53                   push ebx
// 00772a81  55                   push ebp
// 00772a82  56                   push esi
// 00772a83  57                   push edi
// 00772a84  6a01                 push 1
// 00772a86  83ec0c               sub esp, 0xc
// 00772a89  8bc4                 mov eax, esp
// 00772a8b  b9202d5800           mov ecx, 0x582d20
// 00772a90  8908                 mov dword ptr [eax], ecx
// 00772a92  33d2                 xor edx, edx
// 00772a94  895004               mov dword ptr [eax + 4], edx
// 00772a97  83ec0c               sub esp, 0xc
// 00772a9a  33f6                 xor esi, esi
// 00772a9c  897008               mov dword ptr [eax + 8], esi
// 00772a9f  8bc4                 mov eax, esp
// 00772aa1  bfb00f5800           mov edi, 0x580fb0
// 00772aa6  8938                 mov dword ptr [eax], edi
// 00772aa8  6840a87a00           push 0x7aa840
// 00772aad  33db                 xor ebx, ebx
// 00772aaf  33ed                 xor ebp, ebp
// 00772ab1  895804               mov dword ptr [eax + 4], ebx
// 00772ab4  68c4c77a00           push 0x7ac7c4
// 00772ab9  b94c318c00           mov ecx, 0x8c314c
// 00772abe  896808               mov dword ptr [eax + 8], ebp
// 00772ac1  e86afae0ff           call 0x582530
// 00772ac6  6870a57700           push 0x77a570
// 00772acb  e853e2ebff           call 0x630d23
// 00772ad0  83c404               add esp, 4
// 00772ad3  5f                   pop edi
// 00772ad4  5e                   pop esi
// 00772ad5  5d                   pop ebp
// 00772ad6  5b                   pop ebx
// 00772ad7  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
