// roc 2010-06 005822d0  unit: seg_00580000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005822d0
//
// 005822d0  51                   push ecx
// 005822d1  53                   push ebx
// 005822d2  55                   push ebp
// 005822d3  56                   push esi
// 005822d4  57                   push edi
// 005822d5  8bf8                 mov edi, eax
// 005822d7  8b4704               mov eax, dword ptr [edi + 4]
// 005822da  8b08                 mov ecx, dword ptr [eax]
// 005822dc  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 005822e2  6800040000           push 0x400
// 005822e7  6a01                 push 1
// 005822e9  57                   push edi
// 005822ea  ffd1                 call ecx
// 005822ec  894608               mov dword ptr [esi + 8], eax
// 005822ef  8b5704               mov edx, dword ptr [edi + 4]
// 005822f2  8b02                 mov eax, dword ptr [edx]
// 005822f4  6800040000           push 0x400
// 005822f9  6a01                 push 1
// 005822fb  57                   push edi
// 005822fc  ffd0                 call eax
// 005822fe  89460c               mov dword ptr [esi + 0xc], eax
// 00582301  8b4f04               mov ecx, dword ptr [edi + 4]
// 00582304  8b11                 mov edx, dword ptr [ecx]
// 00582306  6800040000           push 0x400
// 0058230b  6a01                 push 1
// 0058230d  57                   push edi
// 0058230e  ffd2                 call edx
// 00582310  894610               mov dword ptr [esi + 0x10], eax
// 00582313  8b4704               mov eax, dword ptr [edi + 4]
// 00582316  8b08                 mov ecx, dword ptr [eax]
// 00582318  6800040000           push 0x400
// 0058231d  6a01                 push 1
// 0058231f  57                   push edi
// 00582320  ffd1                 call ecx
// 00582322  83c430               add esp, 0x30
// 00582325  894614               mov dword ptr [esi + 0x14], eax
// 00582328  33c0                 xor eax, eax
// 0058232a  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00582332  bf00af1dff           mov edi, 0xff1daf00
// 00582337  ba800b4dff           mov edx, 0xff4d0b80
// 0058233c  b9008d2c00           mov ecx, 0x2c8d00
// 00582341  8b6e08               mov ebp, dword ptr [esi + 8]
// 00582344  8bda                 mov ebx, edx
// 00582346  c1fb10               sar ebx, 0x10
// 00582349  891c28               mov dword ptr [eax + ebp], ebx
// 0058234c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0058234f  8bdf                 mov ebx, edi
// 00582351  c1fb10               sar ebx, 0x10
// 00582354  891c28               mov dword ptr [eax + ebp], ebx
// 00582357  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0058235a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058235e  891c28               mov dword ptr [eax + ebp], ebx
// 00582361  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00582364  890c28               mov dword ptr [eax + ebp], ecx
// 00582367  81ebd2b60000         sub ebx, 0xb6d2
// 0058236d  81e91a580000         sub ecx, 0x581a
// 00582373  81c2e9660100         add edx, 0x166e9
// 00582379  81c7a2c50100         add edi, 0x1c5a2
// 0058237f  83c004               add eax, 4
// 00582382  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00582388  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058238c  7db3                 jge 0x582341
// 0058238e  5f                   pop edi
// 0058238f  5e                   pop esi
// 00582390  5d                   pop ebp
// 00582391  5b                   pop ebx
// 00582392  59                   pop ecx
// 00582393  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
