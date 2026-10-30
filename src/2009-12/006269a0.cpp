// roc 2009-12 006269a0  unit: seg_00620000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006269a0
//
// 006269a0  83ec08               sub esp, 8
// 006269a3  53                   push ebx
// 006269a4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006269a8  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 006269ac  55                   push ebp
// 006269ad  8bab54010000         mov ebp, dword ptr [ebx + 0x154]
// 006269b3  57                   push edi
// 006269b4  8b7b44               mov edi, dword ptr [ebx + 0x44]
// 006269b7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006269bf  7e5f                 jle 0x626a20
// 006269c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 006269c5  8d0c8500000000       lea ecx, [eax*4]
// 006269cc  8b442424             mov eax, dword ptr [esp + 0x24]
// 006269d0  56                   push esi
// 006269d1  8b742420             mov esi, dword ptr [esp + 0x20]
// 006269d5  83c50c               add ebp, 0xc
// 006269d8  2bc6                 sub eax, esi
// 006269da  894c2414             mov dword ptr [esp + 0x14], ecx
// 006269de  89442410             mov dword ptr [esp + 0x10], eax
// 006269e2  eb04                 jmp 0x6269e8
// 006269e4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006269e8  8b570c               mov edx, dword ptr [edi + 0xc]
// 006269eb  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 006269f0  8b0430               mov eax, dword ptr [eax + esi]
// 006269f3  8d0c90               lea ecx, [eax + edx*4]
// 006269f6  8b16                 mov edx, dword ptr [esi]
// 006269f8  03542414             add edx, dword ptr [esp + 0x14]
// 006269fc  8b4500               mov eax, dword ptr [ebp]
// 006269ff  51                   push ecx
// 00626a00  52                   push edx
// 00626a01  57                   push edi
// 00626a02  53                   push ebx
// 00626a03  ffd0                 call eax
// 00626a05  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00626a09  40                   inc eax
// 00626a0a  83c410               add esp, 0x10
// 00626a0d  83c604               add esi, 4
// 00626a10  83c504               add ebp, 4
// 00626a13  83c754               add edi, 0x54
// 00626a16  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00626a19  8944241c             mov dword ptr [esp + 0x1c], eax
// 00626a1d  7cc5                 jl 0x6269e4
// 00626a1f  5e                   pop esi
// 00626a20  5f                   pop edi
// 00626a21  5d                   pop ebp
// 00626a22  5b                   pop ebx
// 00626a23  83c408               add esp, 8
// 00626a26  c3                   ret 
// library jpeg-6b/jcsample.c (function _sep_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
