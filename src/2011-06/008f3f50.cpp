// roc 2011-06 008f3f50  unit: CXTPScrollBase  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3f50
//
// 008f3f50  53                   push ebx
// 008f3f51  8bd9                 mov ebx, ecx
// 008f3f53  56                   push esi
// 008f3f54  8b7360               mov esi, dword ptr [ebx + 0x60]
// 008f3f57  85f6                 test esi, esi
// 008f3f59  0f8483000000         je 0x8f3fe2
// 008f3f5f  55                   push ebp
// 008f3f60  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008f3f64  8bc5                 mov eax, ebp
// 008f3f66  c1e808               shr eax, 8
// 008f3f69  57                   push edi
// 008f3f6a  8b7e34               mov edi, dword ptr [esi + 0x34]
// 008f3f6d  3c02                 cmp al, 2
// 008f3f6f  756f                 jne 0x8f3fe0
// 008f3f71  85ff                 test edi, edi
// 008f3f73  746b                 je 0x8f3fe0
// 008f3f75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f3f79  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f3f7d  51                   push ecx
// 008f3f7e  52                   push edx
// 008f3f7f  8d4604               lea eax, [esi + 4]
// 008f3f82  50                   push eax
// 008f3f83  ff15101ca400         call dword ptr [0xa41c10]
// 008f3f89  85c0                 test eax, eax
// 008f3f8b  7505                 jne 0x8f3f92
// 008f3f8d  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008f3f90  eb28                 jmp 0x8f3fba
// 008f3f92  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008f3f95  83795800             cmp dword ptr [ecx + 0x58], 0
// 008f3f99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f3f9d  7504                 jne 0x8f3fa3
// 008f3f9f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f3fa3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008f3fa6  03c1                 add eax, ecx
// 008f3fa8  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008f3fab  3bc1                 cmp eax, ecx
// 008f3fad  7c09                 jl 0x8f3fb8
// 008f3faf  8b573c               mov edx, dword ptr [edi + 0x3c]
// 008f3fb2  03ca                 add ecx, edx
// 008f3fb4  3bc1                 cmp eax, ecx
// 008f3fb6  7c02                 jl 0x8f3fba
// 008f3fb8  8bc1                 mov eax, ecx
// 008f3fba  50                   push eax
// 008f3fbb  8bcb                 mov ecx, ebx
// 008f3fbd  e8fefeffff           call 0x8f3ec0
// 008f3fc2  81fd02020000         cmp ebp, 0x202
// 008f3fc8  740d                 je 0x8f3fd7
// 008f3fca  6a01                 push 1
// 008f3fcc  ff15601aa400         call dword ptr [0xa41a60]
// 008f3fd2  6685c0               test ax, ax
// 008f3fd5  7c09                 jl 0x8f3fe0
// 008f3fd7  6a00                 push 0
// 008f3fd9  8bcb                 mov ecx, ebx
// 008f3fdb  e8e0fdffff           call 0x8f3dc0
// 008f3fe0  5f                   pop edi
// 008f3fe1  5d                   pop ebp
// 008f3fe2  5e                   pop esi
// 008f3fe3  5b                   pop ebx
// 008f3fe4  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?TrackThumb@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
