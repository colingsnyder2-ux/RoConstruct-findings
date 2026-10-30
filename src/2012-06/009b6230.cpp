// roc 2012-06 009b6230  unit: CXTPReportHeader  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b6230
//
// 009b6230  8b442408             mov eax, dword ptr [esp + 8]
// 009b6234  83ec20               sub esp, 0x20
// 009b6237  53                   push ebx
// 009b6238  8bd9                 mov ebx, ecx
// 009b623a  3b436c               cmp eax, dword ptr [ebx + 0x6c]
// 009b623d  0f8d03010000         jge 0x9b6346
// 009b6243  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 009b6246  0f8efa000000         jle 0x9b6346
// 009b624c  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 009b624f  55                   push ebp
// 009b6250  e8fbfb0300           call 0x9f5e50
// 009b6255  8b5324               mov edx, dword ptr [ebx + 0x24]
// 009b6258  8bc8                 mov ecx, eax
// 009b625a  33c0                 xor eax, eax
// 009b625c  33ed                 xor ebp, ebp
// 009b625e  39ab8c000000         cmp dword ptr [ebx + 0x8c], ebp
// 009b6264  0f95c0               setne al
// 009b6267  2bc8                 sub ecx, eax
// 009b6269  8b8210010000         mov eax, dword ptr [edx + 0x110]
// 009b626f  3bc1                 cmp eax, ecx
// 009b6271  894c2414             mov dword ptr [esp + 0x14], ecx
// 009b6275  89442408             mov dword ptr [esp + 8], eax
// 009b6279  7c04                 jl 0x9b627f
// 009b627b  894c2408             mov dword ptr [esp + 8], ecx
// 009b627f  3bcd                 cmp ecx, ebp
// 009b6281  56                   push esi
// 009b6282  57                   push edi
// 009b6283  896c2414             mov dword ptr [esp + 0x14], ebp
// 009b6287  0f8ea1000000         jle 0x9b632e
// 009b628d  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b6291  8d4c08ff             lea ecx, [eax + ecx - 1]
// 009b6295  894c2418             mov dword ptr [esp + 0x18], ecx
// 009b6299  8da42400000000       lea esp, [esp]
// 009b62a0  33d2                 xor edx, edx
// 009b62a2  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 009b62a6  8bc5                 mov eax, ebp
// 009b62a8  0f9cc2               setl dl
// 009b62ab  8bfa                 mov edi, edx
// 009b62ad  85ff                 test edi, edi
// 009b62af  7504                 jne 0x9b62b5
// 009b62b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 009b62b5  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 009b62b8  50                   push eax
// 009b62b9  e892fc0300           call 0x9f5f50
// 009b62be  8bf0                 mov esi, eax
// 009b62c0  837e6800             cmp dword ptr [esi + 0x68], 0
// 009b62c4  7459                 je 0x9b631f
// 009b62c6  8d442420             lea eax, [esp + 0x20]
// 009b62ca  50                   push eax
// 009b62cb  8bce                 mov ecx, esi
// 009b62cd  e82e1fffff           call 0x9a8200
// 009b62d2  8b4808               mov ecx, dword ptr [eax + 8]
// 009b62d5  85ff                 test edi, edi
// 009b62d7  740c                 je 0x9b62e5
// 009b62d9  394c2414             cmp dword ptr [esp + 0x14], ecx
// 009b62dd  7f0c                 jg 0x9b62eb
// 009b62df  894c2414             mov dword ptr [esp + 0x14], ecx
// 009b62e3  eb06                 jmp 0x9b62eb
// 009b62e5  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 009b62e9  7e43                 jle 0x9b632e
// 009b62eb  8b442434             mov eax, dword ptr [esp + 0x34]
// 009b62ef  2bc1                 sub eax, ecx
// 009b62f1  99                   cdq 
// 009b62f2  33c2                 xor eax, edx
// 009b62f4  2bc2                 sub eax, edx
// 009b62f6  3b8390000000         cmp eax, dword ptr [ebx + 0x90]
// 009b62fc  7f21                 jg 0x9b631f
// 009b62fe  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 009b6305  7433                 je 0x9b633a
// 009b6307  56                   push esi
// 009b6308  8bcb                 mov ecx, ebx
// 009b630a  e8a1f6ffff           call 0x9b59b0
// 009b630f  85c0                 test eax, eax
// 009b6311  750c                 jne 0x9b631f
// 009b6313  56                   push esi
// 009b6314  8bcb                 mov ecx, ebx
// 009b6316  e835f6ffff           call 0x9b5950
// 009b631b  85c0                 test eax, eax
// 009b631d  741b                 je 0x9b633a
// 009b631f  ff4c2418             dec dword ptr [esp + 0x18]
// 009b6323  45                   inc ebp
// 009b6324  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 009b6328  0f8c72ffffff         jl 0x9b62a0
// 009b632e  5f                   pop edi
// 009b632f  5e                   pop esi
// 009b6330  5d                   pop ebp
// 009b6331  33c0                 xor eax, eax
// 009b6333  5b                   pop ebx
// 009b6334  83c420               add esp, 0x20
// 009b6337  c20800               ret 8
// 009b633a  5f                   pop edi
// 009b633b  8bc6                 mov eax, esi
// 009b633d  5e                   pop esi
// 009b633e  5d                   pop ebp
// 009b633f  5b                   pop ebx
// 009b6340  83c420               add esp, 0x20
// 009b6343  c20800               ret 8
// 009b6346  33c0                 xor eax, eax
// 009b6348  5b                   pop ebx
// 009b6349  83c420               add esp, 0x20
// 009b634c  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?MouseOverColumnResizeArea@CXTPReportHeader@@QAEPAVCXTPReportColumn@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
