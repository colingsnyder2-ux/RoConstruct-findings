// roc 2007-03 0047c1a0  unit: seg_00470000  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047c1a0
//
// 0047c1a0  55                   push ebp
// 0047c1a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0047c1a5  56                   push esi
// 0047c1a6  6aeb                 push -0x15
// 0047c1a8  55                   push ebp
// 0047c1a9  ff1504ed7700         call dword ptr [0x77ed04]
// 0047c1af  85c0                 test eax, eax
// 0047c1b1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0047c1b5  743f                 je 0x47c1f6
// 0047c1b7  83fe10               cmp esi, 0x10
// 0047c1ba  0f87e3000000         ja 0x47c2a3
// 0047c1c0  0f84d1000000         je 0x47c297
// 0047c1c6  8d4efb               lea ecx, [esi - 5]
// 0047c1c9  83f903               cmp ecx, 3
// 0047c1cc  7728                 ja 0x47c1f6
// 0047c1ce  ff248dccc24700       jmp dword ptr [ecx*4 + 0x47c2cc]
// 0047c1d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047c1d9  6685c9               test cx, cx
// 0047c1dc  742f                 je 0x47c20d
// 0047c1de  c1e910               shr ecx, 0x10
// 0047c1e1  752a                 jne 0x47c20d
// 0047c1e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047c1e7  3b88e8010000         cmp ecx, dword ptr [eax + 0x1e8]
// 0047c1ed  741e                 je 0x47c20d
// 0047c1ef  c680ae00000001       mov byte ptr [eax + 0xae], 1
// 0047c1f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047c1fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047c1fe  50                   push eax
// 0047c1ff  51                   push ecx
// 0047c200  56                   push esi
// 0047c201  55                   push ebp
// 0047c202  ff15fcec7700         call dword ptr [0x77ecfc]
// 0047c208  5e                   pop esi
// 0047c209  5d                   pop ebp
// 0047c20a  c21000               ret 0x10
// 0047c20d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047c211  3b90e8010000         cmp edx, dword ptr [eax + 0x1e8]
// 0047c217  74dd                 je 0x47c1f6
// 0047c219  c680ae00000000       mov byte ptr [eax + 0xae], 0
// 0047c220  ebd4                 jmp 0x47c1f6
// 0047c222  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047c226  83f902               cmp ecx, 2
// 0047c229  7404                 je 0x47c22f
// 0047c22b  85c9                 test ecx, ecx
// 0047c22d  75c7                 jne 0x47c1f6
// 0047c22f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047c233  8bd1                 mov edx, ecx
// 0047c235  0fb7c9               movzx ecx, cx
// 0047c238  c1ea10               shr edx, 0x10
// 0047c23b  52                   push edx
// 0047c23c  51                   push ecx
// 0047c23d  8bc8                 mov ecx, eax
// 0047c23f  e89cf9ffff           call 0x47bbe0
// 0047c244  ebb0                 jmp 0x47c1f6
// 0047c246  c680e401000001       mov byte ptr [eax + 0x1e4], 1
// 0047c24d  eba7                 jmp 0x47c1f6
// 0047c24f  53                   push ebx
// 0047c250  57                   push edi
// 0047c251  8b3d48ee7700         mov edi, dword ptr [0x77ee48]
// 0047c257  33f6                 xor esi, esi
// 0047c259  8d98b3000000         lea ebx, [eax + 0xb3]
// 0047c25f  90                   nop 
// 0047c260  803c3300             cmp byte ptr [ebx + esi], 0
// 0047c264  740b                 je 0x47c271
// 0047c266  6a00                 push 0
// 0047c268  56                   push esi
// 0047c269  6801010000           push 0x101
// 0047c26e  55                   push ebp
// 0047c26f  ffd7                 call edi
// 0047c271  83c601               add esi, 1
// 0047c274  81feff000000         cmp esi, 0xff
// 0047c27a  72e4                 jb 0x47c260
// 0047c27c  68ff000000           push 0xff
// 0047c281  6a00                 push 0
// 0047c283  53                   push ebx
// 0047c284  e8932d1a00           call 0x61f01c
// 0047c289  8b742424             mov esi, dword ptr [esp + 0x24]
// 0047c28d  83c40c               add esp, 0xc
// 0047c290  5f                   pop edi
// 0047c291  5b                   pop ebx
// 0047c292  e95fffffff           jmp 0x47c1f6
// 0047c297  c680af00000001       mov byte ptr [eax + 0xaf], 1
// 0047c29e  e953ffffff           jmp 0x47c1f6
// 0047c2a3  81fe12010000         cmp esi, 0x112
// 0047c2a9  0f8547ffffff         jne 0x47c1f6
// 0047c2af  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047c2b3  81e2f0ff0000         and edx, 0xfff0
// 0047c2b9  81fa00f10000         cmp edx, 0xf100
// 0047c2bf  0f8531ffffff         jne 0x47c1f6
// 0047c2c5  5e                   pop esi
// 0047c2c6  33c0                 xor eax, eax
// 0047c2c8  5d                   pop ebp
// 0047c2c9  c21000               ret 0x10
// 0047c2cc  22c2                 and al, dl
// 0047c2ce  47                   inc edi
// 0047c2cf  00d5                 add ch, dl
// 0047c2d1  c1470046             rol dword ptr [edi], 0x46
// 0047c2d5  c24700               ret 0x47
// 0047c2d8  4f                   dec edi
// 0047c2d9  c24700               ret 0x47
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?window_proc@_internal@G3D@@YGJPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
