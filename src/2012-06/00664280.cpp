// roc 2012-06 00664280  unit: seg_00660000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664280
//
// 00664280  51                   push ecx
// 00664281  53                   push ebx
// 00664282  55                   push ebp
// 00664283  56                   push esi
// 00664284  57                   push edi
// 00664285  8bf8                 mov edi, eax
// 00664287  8b4704               mov eax, dword ptr [edi + 4]
// 0066428a  8b08                 mov ecx, dword ptr [eax]
// 0066428c  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 00664292  6800040000           push 0x400
// 00664297  6a01                 push 1
// 00664299  57                   push edi
// 0066429a  ffd1                 call ecx
// 0066429c  894610               mov dword ptr [esi + 0x10], eax
// 0066429f  8b5704               mov edx, dword ptr [edi + 4]
// 006642a2  8b02                 mov eax, dword ptr [edx]
// 006642a4  6800040000           push 0x400
// 006642a9  6a01                 push 1
// 006642ab  57                   push edi
// 006642ac  ffd0                 call eax
// 006642ae  894614               mov dword ptr [esi + 0x14], eax
// 006642b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006642b4  8b11                 mov edx, dword ptr [ecx]
// 006642b6  6800040000           push 0x400
// 006642bb  6a01                 push 1
// 006642bd  57                   push edi
// 006642be  ffd2                 call edx
// 006642c0  894618               mov dword ptr [esi + 0x18], eax
// 006642c3  8b4704               mov eax, dword ptr [edi + 4]
// 006642c6  8b08                 mov ecx, dword ptr [eax]
// 006642c8  6800040000           push 0x400
// 006642cd  6a01                 push 1
// 006642cf  57                   push edi
// 006642d0  ffd1                 call ecx
// 006642d2  83c430               add esp, 0x30
// 006642d5  89461c               mov dword ptr [esi + 0x1c], eax
// 006642d8  33c0                 xor eax, eax
// 006642da  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 006642e2  bf00af1dff           mov edi, 0xff1daf00
// 006642e7  ba800b4dff           mov edx, 0xff4d0b80
// 006642ec  b9008d2c00           mov ecx, 0x2c8d00
// 006642f1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006642f4  8bda                 mov ebx, edx
// 006642f6  c1fb10               sar ebx, 0x10
// 006642f9  891c28               mov dword ptr [eax + ebp], ebx
// 006642fc  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 006642ff  8bdf                 mov ebx, edi
// 00664301  c1fb10               sar ebx, 0x10
// 00664304  891c28               mov dword ptr [eax + ebp], ebx
// 00664307  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0066430a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066430e  891c28               mov dword ptr [eax + ebp], ebx
// 00664311  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00664314  890c28               mov dword ptr [eax + ebp], ecx
// 00664317  81ebd2b60000         sub ebx, 0xb6d2
// 0066431d  81e91a580000         sub ecx, 0x581a
// 00664323  81c2e9660100         add edx, 0x166e9
// 00664329  81c7a2c50100         add edi, 0x1c5a2
// 0066432f  83c004               add eax, 4
// 00664332  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00664338  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066433c  7db3                 jge 0x6642f1
// 0066433e  5f                   pop edi
// 0066433f  5e                   pop esi
// 00664340  5d                   pop ebp
// 00664341  5b                   pop ebx
// 00664342  59                   pop ecx
// 00664343  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
