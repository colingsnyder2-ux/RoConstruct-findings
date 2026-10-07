// roc 2012-06 00669ec0  unit: seg_00660000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669ec0
//
// 00669ec0  83ec08               sub esp, 8
// 00669ec3  53                   push ebx
// 00669ec4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00669ec8  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 00669ecc  55                   push ebp
// 00669ecd  8bab54010000         mov ebp, dword ptr [ebx + 0x154]
// 00669ed3  57                   push edi
// 00669ed4  8b7b44               mov edi, dword ptr [ebx + 0x44]
// 00669ed7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00669edf  7e5f                 jle 0x669f40
// 00669ee1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00669ee5  8d0c8500000000       lea ecx, [eax*4]
// 00669eec  8b442424             mov eax, dword ptr [esp + 0x24]
// 00669ef0  56                   push esi
// 00669ef1  8b742420             mov esi, dword ptr [esp + 0x20]
// 00669ef5  83c50c               add ebp, 0xc
// 00669ef8  2bc6                 sub eax, esi
// 00669efa  894c2414             mov dword ptr [esp + 0x14], ecx
// 00669efe  89442410             mov dword ptr [esp + 0x10], eax
// 00669f02  eb04                 jmp 0x669f08
// 00669f04  8b442410             mov eax, dword ptr [esp + 0x10]
// 00669f08  8b570c               mov edx, dword ptr [edi + 0xc]
// 00669f0b  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 00669f10  8b0430               mov eax, dword ptr [eax + esi]
// 00669f13  8d0c90               lea ecx, [eax + edx*4]
// 00669f16  8b16                 mov edx, dword ptr [esi]
// 00669f18  03542414             add edx, dword ptr [esp + 0x14]
// 00669f1c  8b4500               mov eax, dword ptr [ebp]
// 00669f1f  51                   push ecx
// 00669f20  52                   push edx
// 00669f21  57                   push edi
// 00669f22  53                   push ebx
// 00669f23  ffd0                 call eax
// 00669f25  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00669f29  40                   inc eax
// 00669f2a  83c410               add esp, 0x10
// 00669f2d  83c604               add esi, 4
// 00669f30  83c504               add ebp, 4
// 00669f33  83c754               add edi, 0x54
// 00669f36  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00669f39  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669f3d  7cc5                 jl 0x669f04
// 00669f3f  5e                   pop esi
// 00669f40  5f                   pop edi
// 00669f41  5d                   pop ebp
// 00669f42  5b                   pop ebx
// 00669f43  83c408               add esp, 8
// 00669f46  c3                   ret 
// library jpeg-6b/jcsample.c (function _sep_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
