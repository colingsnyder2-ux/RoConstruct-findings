// roc 2012-06 00666830  unit: seg_00660000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666830
//
// 00666830  56                   push esi
// 00666831  8b742408             mov esi, dword ptr [esp + 8]
// 00666835  8b4604               mov eax, dword ptr [esi + 4]
// 00666838  8b08                 mov ecx, dword ptr [eax]
// 0066683a  6a40                 push 0x40
// 0066683c  6a01                 push 1
// 0066683e  56                   push esi
// 0066683f  ffd1                 call ecx
// 00666841  898640010000         mov dword ptr [esi + 0x140], eax
// 00666847  83c40c               add esp, 0xc
// 0066684a  c700e0676600         mov dword ptr [eax], 0x6667e0
// 00666850  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00666857  7561                 jne 0x6668ba
// 00666859  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0066685e  7415                 je 0x666875
// 00666860  8b16                 mov edx, dword ptr [esi]
// 00666862  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00666869  8b06                 mov eax, dword ptr [esi]
// 0066686b  8b08                 mov ecx, dword ptr [eax]
// 0066686d  56                   push esi
// 0066686e  ffd1                 call ecx
// 00666870  83c404               add esp, 4
// 00666873  5e                   pop esi
// 00666874  c3                   ret 
// 00666875  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00666878  55                   push ebp
// 00666879  33ed                 xor ebp, ebp
// 0066687b  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0066687e  7e39                 jle 0x6668b9
// 00666880  53                   push ebx
// 00666881  57                   push edi
// 00666882  8d791c               lea edi, [ecx + 0x1c]
// 00666885  8d5818               lea ebx, [eax + 0x18]
// 00666888  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0066688b  8b0f                 mov ecx, dword ptr [edi]
// 0066688d  8b5604               mov edx, dword ptr [esi + 4]
// 00666890  8b5208               mov edx, dword ptr [edx + 8]
// 00666893  03c0                 add eax, eax
// 00666895  03c9                 add ecx, ecx
// 00666897  03c0                 add eax, eax
// 00666899  03c0                 add eax, eax
// 0066689b  50                   push eax
// 0066689c  03c9                 add ecx, ecx
// 0066689e  03c9                 add ecx, ecx
// 006668a0  51                   push ecx
// 006668a1  6a01                 push 1
// 006668a3  56                   push esi
// 006668a4  ffd2                 call edx
// 006668a6  8903                 mov dword ptr [ebx], eax
// 006668a8  45                   inc ebp
// 006668a9  83c410               add esp, 0x10
// 006668ac  83c304               add ebx, 4
// 006668af  83c754               add edi, 0x54
// 006668b2  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 006668b5  7cd1                 jl 0x666888
// 006668b7  5f                   pop edi
// 006668b8  5b                   pop ebx
// 006668b9  5d                   pop ebp
// 006668ba  5e                   pop esi
// 006668bb  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
