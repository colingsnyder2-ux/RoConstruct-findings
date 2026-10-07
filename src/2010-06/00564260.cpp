// roc 2010-06 00564260  unit: seg_00560000  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564260
//
// 00564260  53                   push ebx
// 00564261  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00564265  85db                 test ebx, ebx
// 00564267  0f846f010000         je 0x5643dc
// 0056426d  57                   push edi
// 0056426e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00564272  85ff                 test edi, edi
// 00564274  0f8461010000         je 0x5643db
// 0056427a  55                   push ebp
// 0056427b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0056427f  8bc5                 mov eax, ebp
// 00564281  8d5001               lea edx, [eax + 1]
// 00564284  8a08                 mov cl, byte ptr [eax]
// 00564286  40                   inc eax
// 00564287  84c9                 test cl, cl
// 00564289  75f9                 jne 0x564284
// 0056428b  56                   push esi
// 0056428c  2bc2                 sub eax, edx
// 0056428e  8d7001               lea esi, [eax + 1]
// 00564291  56                   push esi
// 00564292  53                   push ebx
// 00564293  e898e30000           call 0x572630
// 00564298  83c408               add esp, 8
// 0056429b  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 005642a1  85c0                 test eax, eax
// 005642a3  7513                 jne 0x5642b8
// 005642a5  686413a200           push 0xa21364
// 005642aa  53                   push ebx
// 005642ab  e8b0d80000           call 0x571b60
// 005642b0  83c408               add esp, 8
// 005642b3  5e                   pop esi
// 005642b4  5d                   pop ebp
// 005642b5  5f                   pop edi
// 005642b6  5b                   pop ebx
// 005642b7  c3                   ret 
// 005642b8  56                   push esi
// 005642b9  55                   push ebp
// 005642ba  50                   push eax
// 005642bb  e8664b2400           call 0x7a8e26
// 005642c0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005642c4  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 005642c8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005642cc  8a542434             mov dl, byte ptr [esp + 0x34]
// 005642d0  8987a4000000         mov dword ptr [edi + 0xa4], eax
// 005642d6  8a442438             mov al, byte ptr [esp + 0x38]
// 005642da  8887b5000000         mov byte ptr [edi + 0xb5], al
// 005642e0  8bc5                 mov eax, ebp
// 005642e2  83c40c               add esp, 0xc
// 005642e5  898fa8000000         mov dword ptr [edi + 0xa8], ecx
// 005642eb  8897b4000000         mov byte ptr [edi + 0xb4], dl
// 005642f1  8d7001               lea esi, [eax + 1]
// 005642f4  8a08                 mov cl, byte ptr [eax]
// 005642f6  40                   inc eax
// 005642f7  84c9                 test cl, cl
// 005642f9  75f9                 jne 0x5642f4
// 005642fb  2bc6                 sub eax, esi
// 005642fd  8d7001               lea esi, [eax + 1]
// 00564300  56                   push esi
// 00564301  53                   push ebx
// 00564302  e829e30000           call 0x572630
// 00564307  83c408               add esp, 8
// 0056430a  8987ac000000         mov dword ptr [edi + 0xac], eax
// 00564310  85c0                 test eax, eax
// 00564312  7513                 jne 0x564327
// 00564314  684013a200           push 0xa21340
// 00564319  53                   push ebx
// 0056431a  e841d80000           call 0x571b60
// 0056431f  83c408               add esp, 8
// 00564322  5e                   pop esi
// 00564323  5d                   pop ebp
// 00564324  5f                   pop edi
// 00564325  5b                   pop ebx
// 00564326  c3                   ret 
// 00564327  56                   push esi
// 00564328  55                   push ebp
// 00564329  50                   push eax
// 0056432a  e8f74a2400           call 0x7a8e26
// 0056432f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00564333  8d148d04000000       lea edx, [ecx*4 + 4]
// 0056433a  52                   push edx
// 0056433b  53                   push ebx
// 0056433c  e8efe20000           call 0x572630
// 00564341  83c414               add esp, 0x14
// 00564344  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 0056434a  85c0                 test eax, eax
// 0056434c  7513                 jne 0x564361
// 0056434e  681813a200           push 0xa21318
// 00564353  53                   push ebx
// 00564354  e807d80000           call 0x571b60
// 00564359  83c408               add esp, 8
// 0056435c  5e                   pop esi
// 0056435d  5d                   pop ebp
// 0056435e  5f                   pop edi
// 0056435f  5b                   pop ebx
// 00564360  c3                   ret 
// 00564361  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00564365  33f6                 xor esi, esi
// 00564367  c7048800000000       mov dword ptr [eax + ecx*4], 0
// 0056436e  85c9                 test ecx, ecx
// 00564370  7e56                 jle 0x5643c8
// 00564372  8b442434             mov eax, dword ptr [esp + 0x34]
// 00564376  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00564379  8d5001               lea edx, [eax + 1]
// 0056437c  8d642400             lea esp, [esp]
// 00564380  8a08                 mov cl, byte ptr [eax]
// 00564382  40                   inc eax
// 00564383  84c9                 test cl, cl
// 00564385  75f9                 jne 0x564380
// 00564387  2bc2                 sub eax, edx
// 00564389  8d6801               lea ebp, [eax + 1]
// 0056438c  55                   push ebp
// 0056438d  53                   push ebx
// 0056438e  e89de20000           call 0x572630
// 00564393  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00564399  8904b1               mov dword ptr [ecx + esi*4], eax
// 0056439c  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 005643a2  8d04b2               lea eax, [edx + esi*4]
// 005643a5  83c408               add esp, 8
// 005643a8  833800               cmp dword ptr [eax], 0
// 005643ab  7431                 je 0x5643de
// 005643ad  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005643b1  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 005643b4  8b00                 mov eax, dword ptr [eax]
// 005643b6  55                   push ebp
// 005643b7  52                   push edx
// 005643b8  50                   push eax
// 005643b9  e8684a2400           call 0x7a8e26
// 005643be  46                   inc esi
// 005643bf  83c40c               add esp, 0xc
// 005643c2  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 005643c6  7caa                 jl 0x564372
// 005643c8  814f0800040000       or dword ptr [edi + 8], 0x400
// 005643cf  818fb800000080000000 or dword ptr [edi + 0xb8], 0x80
// 005643d9  5e                   pop esi
// 005643da  5d                   pop ebp
// 005643db  5f                   pop edi
// 005643dc  5b                   pop ebx
// 005643dd  c3                   ret 
// 005643de  68f012a200           push 0xa212f0
// 005643e3  53                   push ebx
// 005643e4  e877d70000           call 0x571b60
// 005643e9  83c408               add esp, 8
// 005643ec  5e                   pop esi
// 005643ed  5d                   pop ebp
// 005643ee  5f                   pop edi
// 005643ef  5b                   pop ebx
// 005643f0  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
