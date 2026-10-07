// roc 2010-06 00588500  unit: seg_00580000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588500
//
// 00588500  83ec08               sub esp, 8
// 00588503  53                   push ebx
// 00588504  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00588508  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 0058850c  55                   push ebp
// 0058850d  8bab54010000         mov ebp, dword ptr [ebx + 0x154]
// 00588513  57                   push edi
// 00588514  8b7b44               mov edi, dword ptr [ebx + 0x44]
// 00588517  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058851f  7e5f                 jle 0x588580
// 00588521  8b442420             mov eax, dword ptr [esp + 0x20]
// 00588525  8d0c8500000000       lea ecx, [eax*4]
// 0058852c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00588530  56                   push esi
// 00588531  8b742420             mov esi, dword ptr [esp + 0x20]
// 00588535  83c50c               add ebp, 0xc
// 00588538  2bc6                 sub eax, esi
// 0058853a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058853e  89442410             mov dword ptr [esp + 0x10], eax
// 00588542  eb04                 jmp 0x588548
// 00588544  8b442410             mov eax, dword ptr [esp + 0x10]
// 00588548  8b570c               mov edx, dword ptr [edi + 0xc]
// 0058854b  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 00588550  8b0430               mov eax, dword ptr [eax + esi]
// 00588553  8d0c90               lea ecx, [eax + edx*4]
// 00588556  8b16                 mov edx, dword ptr [esi]
// 00588558  03542414             add edx, dword ptr [esp + 0x14]
// 0058855c  8b4500               mov eax, dword ptr [ebp]
// 0058855f  51                   push ecx
// 00588560  52                   push edx
// 00588561  57                   push edi
// 00588562  53                   push ebx
// 00588563  ffd0                 call eax
// 00588565  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00588569  40                   inc eax
// 0058856a  83c410               add esp, 0x10
// 0058856d  83c604               add esi, 4
// 00588570  83c504               add ebp, 4
// 00588573  83c754               add edi, 0x54
// 00588576  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00588579  8944241c             mov dword ptr [esp + 0x1c], eax
// 0058857d  7cc5                 jl 0x588544
// 0058857f  5e                   pop esi
// 00588580  5f                   pop edi
// 00588581  5d                   pop ebp
// 00588582  5b                   pop ebx
// 00588583  83c408               add esp, 8
// 00588586  c3                   ret 
// library jpeg-6b/jcsample.c (function _sep_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
