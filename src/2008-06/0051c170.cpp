// roc 2008-06 0051c170  unit: G3D::_internal::DialogTemplate  size: 806 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c170
//
// 0051c170  51                   push ecx
// 0051c171  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0051c175  83f803               cmp eax, 3
// 0051c178  7c14                 jl 0x51c18e
// 0051c17a  8b442408             mov eax, dword ptr [esp + 8]
// 0051c17e  68308e8200           push 0x828e30
// 0051c183  50                   push eax
// 0051c184  e8c7d80000           call 0x529a50
// 0051c189  83c408               add esp, 8
// 0051c18c  59                   pop ecx
// 0051c18d  c3                   ret 
// 0051c18e  85c0                 test eax, eax
// 0051c190  7505                 jne 0x51c197
// 0051c192  b801000000           mov eax, 1
// 0051c197  53                   push ebx
// 0051c198  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0051c19c  55                   push ebp
// 0051c19d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0051c1a1  56                   push esi
// 0051c1a2  57                   push edi
// 0051c1a3  85db                 test ebx, ebx
// 0051c1a5  7c09                 jl 0x51c1b0
// 0051c1a7  85ed                 test ebp, ebp
// 0051c1a9  7405                 je 0x51c1b0
// 0051c1ab  83f801               cmp eax, 1
// 0051c1ae  7502                 jne 0x51c1b2
// 0051c1b0  33db                 xor ebx, ebx
// 0051c1b2  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051c1b6  dd0538e78100         fld qword ptr [0x81e738]
// 0051c1bc  889ef9010000         mov byte ptr [esi + 0x1f9], bl
// 0051c1c2  8886f8010000         mov byte ptr [esi + 0x1f8], al
// 0051c1c8  85db                 test ebx, ebx
// 0051c1ca  0f8e43010000         jle 0x51c313
// 0051c1d0  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 0051c1d7  752d                 jne 0x51c206
// 0051c1d9  53                   push ebx
// 0051c1da  ddd8                 fstp st(0)
// 0051c1dc  56                   push esi
// 0051c1dd  e8bee20000           call 0x52a4a0
// 0051c1e2  8986fc010000         mov dword ptr [esi + 0x1fc], eax
// 0051c1e8  83c408               add esp, 8
// 0051c1eb  33c0                 xor eax, eax
// 0051c1ed  85db                 test ebx, ebx
// 0051c1ef  7e0f                 jle 0x51c200
// 0051c1f1  8b8efc010000         mov ecx, dword ptr [esi + 0x1fc]
// 0051c1f7  c60408ff             mov byte ptr [eax + ecx], 0xff
// 0051c1fb  40                   inc eax
// 0051c1fc  3bc3                 cmp eax, ebx
// 0051c1fe  7cf1                 jl 0x51c1f1
// 0051c200  dd0538e78100         fld qword ptr [0x81e738]
// 0051c206  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0051c20d  7555                 jne 0x51c264
// 0051c20f  8d3c1b               lea edi, [ebx + ebx]
// 0051c212  ddd8                 fstp st(0)
// 0051c214  57                   push edi
// 0051c215  56                   push esi
// 0051c216  e885e20000           call 0x52a4a0
// 0051c21b  57                   push edi
// 0051c21c  56                   push esi
// 0051c21d  898600020000         mov dword ptr [esi + 0x200], eax
// 0051c223  e878e20000           call 0x52a4a0
// 0051c228  898604020000         mov dword ptr [esi + 0x204], eax
// 0051c22e  83c410               add esp, 0x10
// 0051c231  33c0                 xor eax, eax
// 0051c233  85db                 test ebx, ebx
// 0051c235  7e27                 jle 0x51c25e
// 0051c237  eb07                 jmp 0x51c240
// 0051c239  8da42400000000       lea esp, [esp]
// 0051c240  8b9600020000         mov edx, dword ptr [esi + 0x200]
// 0051c246  b900010000           mov ecx, 0x100
// 0051c24b  66890c42             mov word ptr [edx + eax*2], cx
// 0051c24f  8b9604020000         mov edx, dword ptr [esi + 0x204]
// 0051c255  66890c42             mov word ptr [edx + eax*2], cx
// 0051c259  40                   inc eax
// 0051c25a  3bc3                 cmp eax, ebx
// 0051c25c  7ce2                 jl 0x51c240
// 0051c25e  dd0538e78100         fld qword ptr [0x81e738]
// 0051c264  33c9                 xor ecx, ecx
// 0051c266  85db                 test ebx, ebx
// 0051c268  0f8ea5000000         jle 0x51c313
// 0051c26e  dd05288e8200         fld qword ptr [0x828e28]
// 0051c274  d9ee                 fldz 
// 0051c276  dc54cd00             fcom qword ptr [ebp + ecx*8]
// 0051c27a  dfe0                 fnstsw ax
// 0051c27c  f6c441               test ah, 0x41
// 0051c27f  751b                 jne 0x51c29c
// 0051c281  8b9600020000         mov edx, dword ptr [esi + 0x200]
// 0051c287  b800010000           mov eax, 0x100
// 0051c28c  6689044a             mov word ptr [edx + ecx*2], ax
// 0051c290  8b9604020000         mov edx, dword ptr [esi + 0x204]
// 0051c296  6689044a             mov word ptr [edx + ecx*2], ax
// 0051c29a  eb6a                 jmp 0x51c306
// 0051c29c  dd44cd00             fld qword ptr [ebp + ecx*8]
// 0051c2a0  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0051c2a4  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0051c2a9  d8ca                 fmul st(2)
// 0051c2ab  0d000c0000           or eax, 0xc00
// 0051c2b0  89442410             mov dword ptr [esp + 0x10], eax
// 0051c2b4  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0051c2ba  d8c3                 fadd st(3)
// 0051c2bc  d96c2410             fldcw word ptr [esp + 0x10]
// 0051c2c0  db5c2410             fistp dword ptr [esp + 0x10]
// 0051c2c4  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 0051c2c9  66891448             mov word ptr [eax + ecx*2], dx
// 0051c2cd  d96c241c             fldcw word ptr [esp + 0x1c]
// 0051c2d1  d9c1                 fld st(1)
// 0051c2d3  dc74cd00             fdiv qword ptr [ebp + ecx*8]
// 0051c2d7  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0051c2db  d8c3                 fadd st(3)
// 0051c2dd  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0051c2e2  0d000c0000           or eax, 0xc00
// 0051c2e7  89442410             mov dword ptr [esp + 0x10], eax
// 0051c2eb  8b8600020000         mov eax, dword ptr [esi + 0x200]
// 0051c2f1  d96c2410             fldcw word ptr [esp + 0x10]
// 0051c2f5  db5c2410             fistp dword ptr [esp + 0x10]
// 0051c2f9  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 0051c2fe  66891448             mov word ptr [eax + ecx*2], dx
// 0051c302  d96c241c             fldcw word ptr [esp + 0x1c]
// 0051c306  41                   inc ecx
// 0051c307  3bcb                 cmp ecx, ebx
// 0051c309  0f8c67ffffff         jl 0x51c276
// 0051c30f  ddd9                 fstp st(1)
// 0051c311  ddd8                 fstp st(0)
// 0051c313  83be0802000000       cmp dword ptr [esi + 0x208], 0
// 0051c31a  0f85a0000000         jne 0x51c3c0
// 0051c320  6a0a                 push 0xa
// 0051c322  ddd8                 fstp st(0)
// 0051c324  56                   push esi
// 0051c325  e876e10000           call 0x52a4a0
// 0051c32a  6a0a                 push 0xa
// 0051c32c  56                   push esi
// 0051c32d  898608020000         mov dword ptr [esi + 0x208], eax
// 0051c333  e868e10000           call 0x52a4a0
// 0051c338  dd0538e78100         fld qword ptr [0x81e738]
// 0051c33e  89860c020000         mov dword ptr [esi + 0x20c], eax
// 0051c344  8b8e08020000         mov ecx, dword ptr [esi + 0x208]
// 0051c34a  ba08000000           mov edx, 8
// 0051c34f  668911               mov word ptr [ecx], dx
// 0051c352  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0051c358  8bca                 mov ecx, edx
// 0051c35a  668908               mov word ptr [eax], cx
// 0051c35d  8b9608020000         mov edx, dword ptr [esi + 0x208]
// 0051c363  8bc1                 mov eax, ecx
// 0051c365  66894202             mov word ptr [edx + 2], ax
// 0051c369  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 0051c36f  8bd0                 mov edx, eax
// 0051c371  66895102             mov word ptr [ecx + 2], dx
// 0051c375  8b8608020000         mov eax, dword ptr [esi + 0x208]
// 0051c37b  8bca                 mov ecx, edx
// 0051c37d  66894804             mov word ptr [eax + 4], cx
// 0051c381  8b960c020000         mov edx, dword ptr [esi + 0x20c]
// 0051c387  8bc1                 mov eax, ecx
// 0051c389  66894204             mov word ptr [edx + 4], ax
// 0051c38d  8b8e08020000         mov ecx, dword ptr [esi + 0x208]
// 0051c393  8bd0                 mov edx, eax
// 0051c395  66895106             mov word ptr [ecx + 6], dx
// 0051c399  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0051c39f  8bca                 mov ecx, edx
// 0051c3a1  66894806             mov word ptr [eax + 6], cx
// 0051c3a5  8b9608020000         mov edx, dword ptr [esi + 0x208]
// 0051c3ab  8bc1                 mov eax, ecx
// 0051c3ad  66894208             mov word ptr [edx + 8], ax
// 0051c3b1  8b8e0c020000         mov ecx, dword ptr [esi + 0x20c]
// 0051c3b7  8bd0                 mov edx, eax
// 0051c3b9  83c410               add esp, 0x10
// 0051c3bc  66895108             mov word ptr [ecx + 8], dx
// 0051c3c0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051c3c4  d9e8                 fld1 
// 0051c3c6  dd05208e8200         fld qword ptr [0x828e20]
// 0051c3cc  33c9                 xor ecx, ecx
// 0051c3ce  d9ee                 fldz 
// 0051c3d0  8bd7                 mov edx, edi
// 0051c3d2  eb02                 jmp 0x51c3d6
// 0051c3d4  d9ca                 fxch st(2)
// 0051c3d6  85ff                 test edi, edi
// 0051c3d8  0f8480000000         je 0x51c45e
// 0051c3de  dc12                 fcom qword ptr [edx]
// 0051c3e0  dfe0                 fnstsw ax
// 0051c3e2  f6c441               test ah, 0x41
// 0051c3e5  7477                 je 0x51c45e
// 0051c3e7  d9ca                 fxch st(2)
// 0051c3e9  dc12                 fcom qword ptr [edx]
// 0051c3eb  dfe0                 fnstsw ax
// 0051c3ed  f6c441               test ah, 0x41
// 0051c3f0  0f8a83000000         jp 0x51c479
// 0051c3f6  d9c1                 fld st(1)
// 0051c3f8  8b9e0c020000         mov ebx, dword ptr [esi + 0x20c]
// 0051c3fe  dc32                 fdiv qword ptr [edx]
// 0051c400  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0051c404  d8c4                 fadd st(4)
// 0051c406  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0051c40b  0d000c0000           or eax, 0xc00
// 0051c410  89442410             mov dword ptr [esp + 0x10], eax
// 0051c414  d96c2410             fldcw word ptr [esp + 0x10]
// 0051c418  db5c2410             fistp dword ptr [esp + 0x10]
// 0051c41c  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 0051c421  66890419             mov word ptr [ecx + ebx], ax
// 0051c425  8b9e08020000         mov ebx, dword ptr [esi + 0x208]
// 0051c42b  d96c241c             fldcw word ptr [esp + 0x1c]
// 0051c42f  dd02                 fld qword ptr [edx]
// 0051c431  d97c241c             fnstcw word ptr [esp + 0x1c]
// 0051c435  d8ca                 fmul st(2)
// 0051c437  0fb744241c           movzx eax, word ptr [esp + 0x1c]
// 0051c43c  0d000c0000           or eax, 0xc00
// 0051c441  89442410             mov dword ptr [esp + 0x10], eax
// 0051c445  d8c4                 fadd st(4)
// 0051c447  d96c2410             fldcw word ptr [esp + 0x10]
// 0051c44b  db5c2410             fistp dword ptr [esp + 0x10]
// 0051c44f  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 0051c454  66890419             mov word ptr [ecx + ebx], ax
// 0051c458  d96c241c             fldcw word ptr [esp + 0x1c]
// 0051c45c  eb1b                 jmp 0x51c479
// 0051c45e  8b8608020000         mov eax, dword ptr [esi + 0x208]
// 0051c464  d9ca                 fxch st(2)
// 0051c466  bb08000000           mov ebx, 8
// 0051c46b  66891c01             mov word ptr [ecx + eax], bx
// 0051c46f  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0051c475  66891c01             mov word ptr [ecx + eax], bx
// 0051c479  83c102               add ecx, 2
// 0051c47c  83c208               add edx, 8
// 0051c47f  83f90a               cmp ecx, 0xa
// 0051c482  0f8c4cffffff         jl 0x51c3d4
// 0051c488  dddb                 fstp st(3)
// 0051c48a  5f                   pop edi
// 0051c48b  ddd8                 fstp st(0)
// 0051c48d  5e                   pop esi
// 0051c48e  ddd9                 fstp st(1)
// 0051c490  5d                   pop ebp
// 0051c491  ddd8                 fstp st(0)
// 0051c493  5b                   pop ebx
// 0051c494  59                   pop ecx
// 0051c495  c3                   ret 
// library libpng-1.2.5/pngwrite.c (function _png_set_filter_heuristics)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwrite.c
