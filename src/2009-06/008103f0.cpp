// roc 2009-06 008103f0  unit: CXTPScrollBase  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008103f0
//
// 008103f0  53                   push ebx
// 008103f1  8bd9                 mov ebx, ecx
// 008103f3  56                   push esi
// 008103f4  8b7360               mov esi, dword ptr [ebx + 0x60]
// 008103f7  85f6                 test esi, esi
// 008103f9  0f8483000000         je 0x810482
// 008103ff  55                   push ebp
// 00810400  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00810404  8bc5                 mov eax, ebp
// 00810406  c1e808               shr eax, 8
// 00810409  57                   push edi
// 0081040a  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0081040d  3c02                 cmp al, 2
// 0081040f  756f                 jne 0x810480
// 00810411  85ff                 test edi, edi
// 00810413  746b                 je 0x810480
// 00810415  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00810419  8b542418             mov edx, dword ptr [esp + 0x18]
// 0081041d  51                   push ecx
// 0081041e  52                   push edx
// 0081041f  8d4604               lea eax, [esi + 4]
// 00810422  50                   push eax
// 00810423  ff15c0ed8900         call dword ptr [0x89edc0]
// 00810429  85c0                 test eax, eax
// 0081042b  7505                 jne 0x810432
// 0081042d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00810430  eb28                 jmp 0x81045a
// 00810432  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00810435  83795800             cmp dword ptr [ecx + 0x58], 0
// 00810439  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081043d  7504                 jne 0x810443
// 0081043f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00810443  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00810446  03c1                 add eax, ecx
// 00810448  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0081044b  3bc1                 cmp eax, ecx
// 0081044d  7c09                 jl 0x810458
// 0081044f  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00810452  03ca                 add ecx, edx
// 00810454  3bc1                 cmp eax, ecx
// 00810456  7c02                 jl 0x81045a
// 00810458  8bc1                 mov eax, ecx
// 0081045a  50                   push eax
// 0081045b  8bcb                 mov ecx, ebx
// 0081045d  e8fefeffff           call 0x810360
// 00810462  81fd02020000         cmp ebp, 0x202
// 00810468  740d                 je 0x810477
// 0081046a  6a01                 push 1
// 0081046c  ff1534ee8900         call dword ptr [0x89ee34]
// 00810472  6685c0               test ax, ax
// 00810475  7c09                 jl 0x810480
// 00810477  6a00                 push 0
// 00810479  8bcb                 mov ecx, ebx
// 0081047b  e8e0fdffff           call 0x810260
// 00810480  5f                   pop edi
// 00810481  5d                   pop ebp
// 00810482  5e                   pop esi
// 00810483  5b                   pop ebx
// 00810484  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?TrackThumb@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
