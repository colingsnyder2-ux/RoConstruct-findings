// from server: 100% by auto
// roc 2010-06 00586070  unit: seg_00580000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586070
//
// 00586070  81ec2c080000         sub esp, 0x82c
// 00586076  53                   push ebx
// 00586077  33c0                 xor eax, eax
// 00586079  55                   push ebp
// 0058607a  56                   push esi
// 0058607b  57                   push edi
// 0058607c  6804040000           push 0x404
// 00586081  50                   push eax
// 00586082  89442418             mov dword ptr [esp + 0x18], eax
// 00586086  8944241c             mov dword ptr [esp + 0x1c], eax
// 0058608a  89442420             mov dword ptr [esp + 0x20], eax
// 0058608e  89442424             mov dword ptr [esp + 0x24], eax
// 00586092  89442428             mov dword ptr [esp + 0x28], eax
// 00586096  8944242c             mov dword ptr [esp + 0x2c], eax
// 0058609a  89442430             mov dword ptr [esp + 0x30], eax
// 0058609e  89442434             mov dword ptr [esp + 0x34], eax
// 005860a2  88442438             mov byte ptr [esp + 0x38], al
// 005860a6  8d44243c             lea eax, [esp + 0x3c]
// 005860aa  50                   push eax
// 005860ab  e8342b2200           call 0x7a8be4
// 005860b0  8b9c2454080000       mov ebx, dword ptr [esp + 0x854]
// 005860b7  83c40c               add esp, 0xc
// 005860ba  b901010000           mov ecx, 0x101
// 005860bf  83c8ff               or eax, 0xffffffff
// 005860c2  8dbc2438040000       lea edi, [esp + 0x438]
// 005860c9  bd01000000           mov ebp, 1
// 005860ce  f3ab                 rep stosd dword ptr es:[edi], eax
// 005860d0  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 005860d6  83c8ff               or eax, 0xffffffff
// 005860d9  be00ca9a3b           mov esi, 0x3b9aca00
// 005860de  33c9                 xor ecx, ecx
// 005860e0  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 005860e3  85d2                 test edx, edx
// 005860e5  7408                 je 0x5860ef
// 005860e7  3bd6                 cmp edx, esi
// 005860e9  7f04                 jg 0x5860ef
// 005860eb  8bf2                 mov esi, edx
// 005860ed  8bc1                 mov eax, ecx
// 005860ef  03cd                 add ecx, ebp
// 005860f1  81f900010000         cmp ecx, 0x100
// 005860f7  7ee7                 jle 0x5860e0
// 005860f9  83caff               or edx, 0xffffffff
// 005860fc  bf00ca9a3b           mov edi, 0x3b9aca00
// 00586101  33c9                 xor ecx, ecx
// 00586103  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 00586106  85f6                 test esi, esi
// 00586108  740c                 je 0x586116
// 0058610a  3bf7                 cmp esi, edi
// 0058610c  7f08                 jg 0x586116
// 0058610e  3bc8                 cmp ecx, eax
// 00586110  7404                 je 0x586116
// 00586112  8bfe                 mov edi, esi
// 00586114  8bd1                 mov edx, ecx
// 00586116  03cd                 add ecx, ebp
// 00586118  81f900010000         cmp ecx, 0x100
// 0058611e  7ee3                 jle 0x586103
// 00586120  85d2                 test edx, edx
// 00586122  0f8c84000000         jl 0x5861ac
// 00586128  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 0058612b  010c83               add dword ptr [ebx + eax*4], ecx
// 0058612e  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00586132  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0058613a  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 00586141  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 00586148  7c1d                 jl 0x586167
// 0058614a  8d9b00000000         lea ebx, [ebx]
// 00586150  8b01                 mov eax, dword ptr [ecx]
// 00586152  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00586156  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0058615e  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 00586165  7de9                 jge 0x586150
// 00586167  016c9434             add dword ptr [esp + edx*4 + 0x34], ebp
// 0058616b  89948438040000       mov dword ptr [esp + eax*4 + 0x438], edx
// 00586172  83bc943804000000     cmp dword ptr [esp + edx*4 + 0x438], 0
// 0058617a  8d849438040000       lea eax, [esp + edx*4 + 0x438]
// 00586181  0f8c4fffffff         jl 0x5860d6
// 00586187  eb07                 jmp 0x586190
// 00586189  8da42400000000       lea esp, [esp]
// 00586190  8b00                 mov eax, dword ptr [eax]
// 00586192  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00586196  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0058619e  8d848438040000       lea eax, [esp + eax*4 + 0x438]
// 005861a5  7de9                 jge 0x586190
// 005861a7  e92affffff           jmp 0x5860d6
// 005861ac  8b9c2440080000       mov ebx, dword ptr [esp + 0x840]
// 005861b3  33ff                 xor edi, edi
// 005861b5  8d6f27               lea ebp, [edi + 0x27]
// 005861b8  8b74bc34             mov esi, dword ptr [esp + edi*4 + 0x34]
// 005861bc  85f6                 test esi, esi
// 005861be  741c                 je 0x5861dc
// 005861c0  83fe20               cmp esi, 0x20
// 005861c3  7e0f                 jle 0x5861d4
// 005861c5  8b13                 mov edx, dword ptr [ebx]
// 005861c7  896a14               mov dword ptr [edx + 0x14], ebp
// 005861ca  8b03                 mov eax, dword ptr [ebx]
// 005861cc  8b08                 mov ecx, dword ptr [eax]
// 005861ce  53                   push ebx
// 005861cf  ffd1                 call ecx
// 005861d1  83c404               add esp, 4
// 005861d4  fe443410             inc byte ptr [esp + esi + 0x10]
// 005861d8  8d443410             lea eax, [esp + esi + 0x10]
// 005861dc  47                   inc edi
// 005861dd  81ff00010000         cmp edi, 0x100
// 005861e3  7ed3                 jle 0x5861b8
// 005861e5  be10000000           mov esi, 0x10
// 005861ea  b91e000000           mov ecx, 0x1e
// 005861ef  8bd6                 mov edx, esi
// 005861f1  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 005861f6  763d                 jbe 0x586235
// 005861f8  eb06                 jmp 0x586200
// 005861fa  8d9b00000000         lea ebx, [ebx]
// 00586200  807c0c1000           cmp byte ptr [esp + ecx + 0x10], 0
// 00586205  8bc1                 mov eax, ecx
// 00586207  750f                 jne 0x586218
// 00586209  8da42400000000       lea esp, [esp]
// 00586210  48                   dec eax
// 00586211  807c041000           cmp byte ptr [esp + eax + 0x10], 0
// 00586216  74f8                 je 0x586210
// 00586218  80440c12fe           add byte ptr [esp + ecx + 0x12], 0xfe
// 0058621d  fe440c11             inc byte ptr [esp + ecx + 0x11]
// 00586221  8044041102           add byte ptr [esp + eax + 0x11], 2
// 00586226  fe4c0410             dec byte ptr [esp + eax + 0x10]
// 0058622a  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 0058622f  8d440410             lea eax, [esp + eax + 0x10]
// 00586233  77cb                 ja 0x586200
// 00586235  49                   dec ecx
// 00586236  83ee01               sub esi, 1
// 00586239  75b6                 jne 0x5861f1
// 0058623b  807c242000           cmp byte ptr [esp + 0x20], 0
// 00586240  7508                 jne 0x58624a
// 00586242  4a                   dec edx
// 00586243  807c141000           cmp byte ptr [esp + edx + 0x10], 0
// 00586248  74f8                 je 0x586242
// 0058624a  fe4c1410             dec byte ptr [esp + edx + 0x10]
// 0058624e  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 00586255  8d441410             lea eax, [esp + edx + 0x10]
// 00586259  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058625d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586261  8911                 mov dword ptr [ecx], edx
// 00586263  8b542418             mov edx, dword ptr [esp + 0x18]
// 00586267  894104               mov dword ptr [ecx + 4], eax
// 0058626a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058626e  895108               mov dword ptr [ecx + 8], edx
// 00586271  8a542420             mov dl, byte ptr [esp + 0x20]
// 00586275  89410c               mov dword ptr [ecx + 0xc], eax
// 00586278  885110               mov byte ptr [ecx + 0x10], dl
// 0058627b  33d2                 xor edx, edx
// 0058627d  be01000000           mov esi, 1
// 00586282  33c0                 xor eax, eax
// 00586284  39748434             cmp dword ptr [esp + eax*4 + 0x34], esi
// 00586288  7505                 jne 0x58628f
// 0058628a  88440a11             mov byte ptr [edx + ecx + 0x11], al
// 0058628e  42                   inc edx
// 0058628f  40                   inc eax
// 00586290  3dff000000           cmp eax, 0xff
// 00586295  7eed                 jle 0x586284
// 00586297  46                   inc esi
// 00586298  83fe20               cmp esi, 0x20
// 0058629b  7ee5                 jle 0x586282
// 0058629d  5f                   pop edi
// 0058629e  5e                   pop esi
// 0058629f  5d                   pop ebp
// 005862a0  c6811101000000       mov byte ptr [ecx + 0x111], 0
// 005862a7  5b                   pop ebx
// 005862a8  81c42c080000         add esp, 0x82c
// 005862ae  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
