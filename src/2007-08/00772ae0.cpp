// roc 2007-08 00772ae0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00772ae0
//
// 00772ae0  53                   push ebx
// 00772ae1  55                   push ebp
// 00772ae2  56                   push esi
// 00772ae3  57                   push edi
// 00772ae4  6a04                 push 4
// 00772ae6  83ec0c               sub esp, 0xc
// 00772ae9  8bc4                 mov eax, esp
// 00772aeb  b9c0275800           mov ecx, 0x5827c0
// 00772af0  8908                 mov dword ptr [eax], ecx
// 00772af2  33d2                 xor edx, edx
// 00772af4  895004               mov dword ptr [eax + 4], edx
// 00772af7  83ec0c               sub esp, 0xc
// 00772afa  33f6                 xor esi, esi
// 00772afc  897008               mov dword ptr [eax + 8], esi
// 00772aff  8bc4                 mov eax, esp
// 00772b01  bf50fa6f00           mov edi, 0x6ffa50
// 00772b06  8938                 mov dword ptr [eax], edi
// 00772b08  6840a87a00           push 0x7aa840
// 00772b0d  33db                 xor ebx, ebx
// 00772b0f  33ed                 xor ebp, ebp
// 00772b11  895804               mov dword ptr [eax + 4], ebx
// 00772b14  6834c07a00           push 0x7ac034
// 00772b19  b914318c00           mov ecx, 0x8c3114
// 00772b1e  896808               mov dword ptr [eax + 8], ebp
// 00772b21  e8cafae0ff           call 0x5825f0
// 00772b26  68f0a57700           push 0x77a5f0
// 00772b2b  e8f3e1ebff           call 0x630d23
// 00772b30  83c404               add esp, 4
// 00772b33  5f                   pop edi
// 00772b34  5e                   pop esi
// 00772b35  5d                   pop ebp
// 00772b36  5b                   pop ebx
// 00772b37  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_BackendAccoutrementState@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
