// roc 2007-08 00772960  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772960
//
// 00772960  53                   push ebx
// 00772961  55                   push ebp
// 00772962  56                   push esi
// 00772963  57                   push edi
// 00772964  6a01                 push 1
// 00772966  83ec0c               sub esp, 0xc
// 00772969  8bc4                 mov eax, esp
// 0077296b  b9e0295800           mov ecx, 0x5829e0
// 00772970  8908                 mov dword ptr [eax], ecx
// 00772972  33d2                 xor edx, edx
// 00772974  895004               mov dword ptr [eax + 4], edx
// 00772977  83ec0c               sub esp, 0xc
// 0077297a  33f6                 xor esi, esi
// 0077297c  897008               mov dword ptr [eax + 8], esi
// 0077297f  8bc4                 mov eax, esp
// 00772981  bf100f5800           mov edi, 0x580f10
// 00772986  8938                 mov dword ptr [eax], edi
// 00772988  6840a87a00           push 0x7aa840
// 0077298d  33db                 xor ebx, ebx
// 0077298f  33ed                 xor ebp, ebp
// 00772991  895804               mov dword ptr [eax + 4], ebx
// 00772994  6890c77a00           push 0x7ac790
// 00772999  b930318c00           mov ecx, 0x8c3130
// 0077299e  896808               mov dword ptr [eax + 8], ebp
// 007729a1  e88afbe0ff           call 0x582530
// 007729a6  68b0a57700           push 0x77a5b0
// 007729ab  e873e3ebff           call 0x630d23
// 007729b0  83c404               add esp, 4
// 007729b3  5f                   pop edi
// 007729b4  5e                   pop esi
// 007729b5  5d                   pop ebp
// 007729b6  5b                   pop ebx
// 007729b7  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentPos@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
