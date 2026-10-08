// roc 2007-08 00774ba0  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774ba0
//
// 00774ba0  53                   push ebx
// 00774ba1  55                   push ebp
// 00774ba2  56                   push esi
// 00774ba3  57                   push edi
// 00774ba4  6a01                 push 1
// 00774ba6  83ec0c               sub esp, 0xc
// 00774ba9  8bc4                 mov eax, esp
// 00774bab  b9003b5d00           mov ecx, 0x5d3b00
// 00774bb0  8908                 mov dword ptr [eax], ecx
// 00774bb2  33d2                 xor edx, edx
// 00774bb4  895004               mov dword ptr [eax + 4], edx
// 00774bb7  83ec0c               sub esp, 0xc
// 00774bba  33f6                 xor esi, esi
// 00774bbc  897008               mov dword ptr [eax + 8], esi
// 00774bbf  8bc4                 mov eax, esp
// 00774bc1  bf001c5d00           mov edi, 0x5d1c00
// 00774bc6  8938                 mov dword ptr [eax], edi
// 00774bc8  6840a87a00           push 0x7aa840
// 00774bcd  33db                 xor ebx, ebx
// 00774bcf  33ed                 xor ebp, ebp
// 00774bd1  895804               mov dword ptr [eax + 4], ebx
// 00774bd4  6830b77b00           push 0x7bb730
// 00774bd9  b90c6a8c00           mov ecx, 0x8c6a0c
// 00774bde  896808               mov dword ptr [eax + 8], ebp
// 00774be1  e88aebe5ff           call 0x5d3770
// 00774be6  68c0bc7700           push 0x77bcc0
// 00774beb  e833c1ebff           call 0x630d23
// 00774bf0  83c404               add esp, 4
// 00774bf3  5f                   pop edi
// 00774bf4  5e                   pop esi
// 00774bf5  5d                   pop ebp
// 00774bf6  5b                   pop ebx
// 00774bf7  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ??__Eprop_GripPos@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
