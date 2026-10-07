// roc 2008-06 0079e490  unit: CXTPScrollBase  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e490
//
// 0079e490  53                   push ebx
// 0079e491  8bd9                 mov ebx, ecx
// 0079e493  56                   push esi
// 0079e494  8b7360               mov esi, dword ptr [ebx + 0x60]
// 0079e497  85f6                 test esi, esi
// 0079e499  0f8483000000         je 0x79e522
// 0079e49f  55                   push ebp
// 0079e4a0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0079e4a4  8bc5                 mov eax, ebp
// 0079e4a6  c1e808               shr eax, 8
// 0079e4a9  57                   push edi
// 0079e4aa  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0079e4ad  3c02                 cmp al, 2
// 0079e4af  756f                 jne 0x79e520
// 0079e4b1  85ff                 test edi, edi
// 0079e4b3  746b                 je 0x79e520
// 0079e4b5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079e4b9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079e4bd  51                   push ecx
// 0079e4be  52                   push edx
// 0079e4bf  8d4604               lea eax, [esi + 4]
// 0079e4c2  50                   push eax
// 0079e4c3  ff152c2d8000         call dword ptr [0x802d2c]
// 0079e4c9  85c0                 test eax, eax
// 0079e4cb  7505                 jne 0x79e4d2
// 0079e4cd  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0079e4d0  eb28                 jmp 0x79e4fa
// 0079e4d2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0079e4d5  83795800             cmp dword ptr [ecx + 0x58], 0
// 0079e4d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079e4dd  7504                 jne 0x79e4e3
// 0079e4df  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079e4e3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079e4e6  03c1                 add eax, ecx
// 0079e4e8  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0079e4eb  3bc1                 cmp eax, ecx
// 0079e4ed  7c09                 jl 0x79e4f8
// 0079e4ef  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0079e4f2  03ca                 add ecx, edx
// 0079e4f4  3bc1                 cmp eax, ecx
// 0079e4f6  7c02                 jl 0x79e4fa
// 0079e4f8  8bc1                 mov eax, ecx
// 0079e4fa  50                   push eax
// 0079e4fb  8bcb                 mov ecx, ebx
// 0079e4fd  e8fefeffff           call 0x79e400
// 0079e502  81fd02020000         cmp ebp, 0x202
// 0079e508  740d                 je 0x79e517
// 0079e50a  6a01                 push 1
// 0079e50c  ff15a42d8000         call dword ptr [0x802da4]
// 0079e512  6685c0               test ax, ax
// 0079e515  7c09                 jl 0x79e520
// 0079e517  6a00                 push 0
// 0079e519  8bcb                 mov ecx, ebx
// 0079e51b  e8e0fdffff           call 0x79e300
// 0079e520  5f                   pop edi
// 0079e521  5d                   pop ebp
// 0079e522  5e                   pop esi
// 0079e523  5b                   pop ebx
// 0079e524  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?TrackThumb@CXTPScrollBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
