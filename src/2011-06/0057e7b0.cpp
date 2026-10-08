// from server: 100% by auto
// roc 2011-06 0057e7b0  unit: seg_00570000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e7b0
//
// 0057e7b0  83ec08               sub esp, 8
// 0057e7b3  53                   push ebx
// 0057e7b4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057e7b8  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 0057e7bc  55                   push ebp
// 0057e7bd  8bab54010000         mov ebp, dword ptr [ebx + 0x154]
// 0057e7c3  57                   push edi
// 0057e7c4  8b7b44               mov edi, dword ptr [ebx + 0x44]
// 0057e7c7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057e7cf  7e5f                 jle 0x57e830
// 0057e7d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057e7d5  8d0c8500000000       lea ecx, [eax*4]
// 0057e7dc  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057e7e0  56                   push esi
// 0057e7e1  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057e7e5  83c50c               add ebp, 0xc
// 0057e7e8  2bc6                 sub eax, esi
// 0057e7ea  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057e7ee  89442410             mov dword ptr [esp + 0x10], eax
// 0057e7f2  eb04                 jmp 0x57e7f8
// 0057e7f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057e7f8  8b570c               mov edx, dword ptr [edi + 0xc]
// 0057e7fb  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 0057e800  8b0430               mov eax, dword ptr [eax + esi]
// 0057e803  8d0c90               lea ecx, [eax + edx*4]
// 0057e806  8b16                 mov edx, dword ptr [esi]
// 0057e808  03542414             add edx, dword ptr [esp + 0x14]
// 0057e80c  8b4500               mov eax, dword ptr [ebp]
// 0057e80f  51                   push ecx
// 0057e810  52                   push edx
// 0057e811  57                   push edi
// 0057e812  53                   push ebx
// 0057e813  ffd0                 call eax
// 0057e815  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057e819  40                   inc eax
// 0057e81a  83c410               add esp, 0x10
// 0057e81d  83c604               add esi, 4
// 0057e820  83c504               add ebp, 4
// 0057e823  83c754               add edi, 0x54
// 0057e826  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0057e829  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e82d  7cc5                 jl 0x57e7f4
// 0057e82f  5e                   pop esi
// 0057e830  5f                   pop edi
// 0057e831  5d                   pop ebp
// 0057e832  5b                   pop ebx
// 0057e833  83c408               add esp, 8
// 0057e836  c3                   ret 
// library jpeg-6b/jcsample.c (function _sep_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
