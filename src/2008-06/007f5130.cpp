// roc 2008-06 007f5130  unit: seg_007f0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f5130
//
// 007f5130  53                   push ebx
// 007f5131  55                   push ebp
// 007f5132  56                   push esi
// 007f5133  57                   push edi
// 007f5134  6a01                 push 1
// 007f5136  83ec0c               sub esp, 0xc
// 007f5139  8bc4                 mov eax, esp
// 007f513b  b9402a5b00           mov ecx, 0x5b2a40
// 007f5140  8908                 mov dword ptr [eax], ecx
// 007f5142  33d2                 xor edx, edx
// 007f5144  895004               mov dword ptr [eax + 4], edx
// 007f5147  83ec0c               sub esp, 0xc
// 007f514a  33f6                 xor esi, esi
// 007f514c  897008               mov dword ptr [eax + 8], esi
// 007f514f  8bc4                 mov eax, esp
// 007f5151  bfe0095b00           mov edi, 0x5b09e0
// 007f5156  8938                 mov dword ptr [eax], edi
// 007f5158  68ac298300           push 0x8329ac
// 007f515d  33db                 xor ebx, ebx
// 007f515f  33ed                 xor ebp, ebp
// 007f5161  895804               mov dword ptr [eax + 4], ebx
// 007f5164  6818518300           push 0x835118
// 007f5169  b9046d9700           mov ecx, 0x976d04
// 007f516e  896808               mov dword ptr [eax + 8], ebp
// 007f5171  e88ac9dbff           call 0x5b1b00
// 007f5176  6800e27f00           push 0x7fe200
// 007f517b  e82fc6eaff           call 0x6a17af
// 007f5180  83c404               add esp, 4
// 007f5183  5f                   pop edi
// 007f5184  5e                   pop esi
// 007f5185  5d                   pop ebp
// 007f5186  5b                   pop ebx
// 007f5187  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ??__Eprop_AttachmentRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
