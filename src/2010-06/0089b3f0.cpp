// roc 2010-06 0089b3f0  unit: CXTPScrollBase  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089b3f0
//
// 0089b3f0  53                   push ebx
// 0089b3f1  8bd9                 mov ebx, ecx
// 0089b3f3  56                   push esi
// 0089b3f4  8b7360               mov esi, dword ptr [ebx + 0x60]
// 0089b3f7  85f6                 test esi, esi
// 0089b3f9  0f8483000000         je 0x89b482
// 0089b3ff  55                   push ebp
// 0089b400  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0089b404  8bc5                 mov eax, ebp
// 0089b406  c1e808               shr eax, 8
// 0089b409  57                   push edi
// 0089b40a  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0089b40d  3c02                 cmp al, 2
// 0089b40f  756f                 jne 0x89b480
// 0089b411  85ff                 test edi, edi
// 0089b413  746b                 je 0x89b480
// 0089b415  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089b419  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089b41d  51                   push ecx
// 0089b41e  52                   push edx
// 0089b41f  8d4604               lea eax, [esi + 4]
// 0089b422  50                   push eax
// 0089b423  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0089b429  85c0                 test eax, eax
// 0089b42b  7505                 jne 0x89b432
// 0089b42d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0089b430  eb28                 jmp 0x89b45a
// 0089b432  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0089b435  83795800             cmp dword ptr [ecx + 0x58], 0
// 0089b439  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089b43d  7504                 jne 0x89b443
// 0089b43f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089b443  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0089b446  03c1                 add eax, ecx
// 0089b448  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0089b44b  3bc1                 cmp eax, ecx
// 0089b44d  7c09                 jl 0x89b458
// 0089b44f  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0089b452  03ca                 add ecx, edx
// 0089b454  3bc1                 cmp eax, ecx
// 0089b456  7c02                 jl 0x89b45a
// 0089b458  8bc1                 mov eax, ecx
// 0089b45a  50                   push eax
// 0089b45b  8bcb                 mov ecx, ebx
// 0089b45d  e8fefeffff           call 0x89b360
// 0089b462  81fd02020000         cmp ebp, 0x202
// 0089b468  740d                 je 0x89b477
// 0089b46a  6a01                 push 1
// 0089b46c  ff157cbc9e00         call dword ptr [0x9ebc7c]
// 0089b472  6685c0               test ax, ax
// 0089b475  7c09                 jl 0x89b480
// 0089b477  6a00                 push 0
// 0089b479  8bcb                 mov ecx, ebx
// 0089b47b  e8e0fdffff           call 0x89b260
// 0089b480  5f                   pop edi
// 0089b481  5d                   pop ebp
// 0089b482  5e                   pop esi
// 0089b483  5b                   pop ebx
// 0089b484  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?TrackThumb@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
