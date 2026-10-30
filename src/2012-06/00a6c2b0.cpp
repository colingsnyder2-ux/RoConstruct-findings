// roc 2012-06 00a6c2b0  unit: CXTPScrollBase  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c2b0
//
// 00a6c2b0  53                   push ebx
// 00a6c2b1  8bd9                 mov ebx, ecx
// 00a6c2b3  56                   push esi
// 00a6c2b4  8b7360               mov esi, dword ptr [ebx + 0x60]
// 00a6c2b7  85f6                 test esi, esi
// 00a6c2b9  0f8483000000         je 0xa6c342
// 00a6c2bf  55                   push ebp
// 00a6c2c0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a6c2c4  8bc5                 mov eax, ebp
// 00a6c2c6  c1e808               shr eax, 8
// 00a6c2c9  57                   push edi
// 00a6c2ca  8b7e34               mov edi, dword ptr [esi + 0x34]
// 00a6c2cd  3c02                 cmp al, 2
// 00a6c2cf  756f                 jne 0xa6c340
// 00a6c2d1  85ff                 test edi, edi
// 00a6c2d3  746b                 je 0xa6c340
// 00a6c2d5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a6c2d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6c2dd  51                   push ecx
// 00a6c2de  52                   push edx
// 00a6c2df  8d4604               lea eax, [esi + 4]
// 00a6c2e2  50                   push eax
// 00a6c2e3  ff15483bb200         call dword ptr [0xb23b48]
// 00a6c2e9  85c0                 test eax, eax
// 00a6c2eb  7505                 jne 0xa6c2f2
// 00a6c2ed  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a6c2f0  eb28                 jmp 0xa6c31a
// 00a6c2f2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00a6c2f5  83795800             cmp dword ptr [ecx + 0x58], 0
// 00a6c2f9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a6c2fd  7504                 jne 0xa6c303
// 00a6c2ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a6c303  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a6c306  03c1                 add eax, ecx
// 00a6c308  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00a6c30b  3bc1                 cmp eax, ecx
// 00a6c30d  7c09                 jl 0xa6c318
// 00a6c30f  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00a6c312  03ca                 add ecx, edx
// 00a6c314  3bc1                 cmp eax, ecx
// 00a6c316  7c02                 jl 0xa6c31a
// 00a6c318  8bc1                 mov eax, ecx
// 00a6c31a  50                   push eax
// 00a6c31b  8bcb                 mov ecx, ebx
// 00a6c31d  e8fefeffff           call 0xa6c220
// 00a6c322  81fd02020000         cmp ebp, 0x202
// 00a6c328  740d                 je 0xa6c337
// 00a6c32a  6a01                 push 1
// 00a6c32c  ff15843ab200         call dword ptr [0xb23a84]
// 00a6c332  6685c0               test ax, ax
// 00a6c335  7c09                 jl 0xa6c340
// 00a6c337  6a00                 push 0
// 00a6c339  8bcb                 mov ecx, ebx
// 00a6c33b  e8e0fdffff           call 0xa6c120
// 00a6c340  5f                   pop edi
// 00a6c341  5d                   pop ebp
// 00a6c342  5e                   pop esi
// 00a6c343  5b                   pop ebx
// 00a6c344  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?TrackThumb@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
