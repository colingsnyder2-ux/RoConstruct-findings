// roc 2008-06 0079a2d0  unit: CXTPRibbonControlTab  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a2d0
//
// 0079a2d0  56                   push esi
// 0079a2d1  8d442408             lea eax, [esp + 8]
// 0079a2d5  50                   push eax
// 0079a2d6  8bf1                 mov esi, ecx
// 0079a2d8  e8c3dff4ff           call 0x6e82a0
// 0079a2dd  85c0                 test eax, eax
// 0079a2df  754a                 jne 0x79a32b
// 0079a2e1  57                   push edi
// 0079a2e2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0079a2e6  b903000000           mov ecx, 3
// 0079a2eb  66890f               mov word ptr [edi], cx
// 0079a2ee  c7470800001000       mov dword ptr [edi + 8], 0x100000
// 0079a2f5  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0079a2fb  8b11                 mov edx, dword ptr [ecx]
// 0079a2fd  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 0079a303  ffd0                 call eax
// 0079a305  85c0                 test eax, eax
// 0079a307  7414                 je 0x79a31d
// 0079a309  8b56e0               mov edx, dword ptr [esi - 0x20]
// 0079a30c  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0079a312  8d4ee0               lea ecx, [esi - 0x20]
// 0079a315  6a00                 push 0
// 0079a317  ffd0                 call eax
// 0079a319  85c0                 test eax, eax
// 0079a31b  7507                 jne 0x79a324
// 0079a31d  814f0800800000       or dword ptr [edi + 8], 0x8000
// 0079a324  5f                   pop edi
// 0079a325  33c0                 xor eax, eax
// 0079a327  5e                   pop esi
// 0079a328  c21400               ret 0x14
// 0079a32b  83c0ff               add eax, -1
// 0079a32e  7815                 js 0x79a345
// 0079a330  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 0079a336  7d0d                 jge 0x79a345
// 0079a338  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0079a33e  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0079a341  85c0                 test eax, eax
// 0079a343  7509                 jne 0x79a34e
// 0079a345  b857000780           mov eax, 0x80070057
// 0079a34a  5e                   pop esi
// 0079a34b  c21400               ret 0x14
// 0079a34e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0079a352  ba03000000           mov edx, 3
// 0079a357  668916               mov word ptr [esi], dx
// 0079a35a  c7460800003000       mov dword ptr [esi + 8], 0x300000
// 0079a361  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0079a364  394104               cmp dword ptr [ecx + 4], eax
// 0079a367  7507                 jne 0x79a370
// 0079a369  c7460806003000       mov dword ptr [esi + 8], 0x300006
// 0079a370  8bc8                 mov ecx, eax
// 0079a372  e8693bf7ff           call 0x70dee0
// 0079a377  85c0                 test eax, eax
// 0079a379  7507                 jne 0x79a382
// 0079a37b  814e0800800000       or dword ptr [esi + 8], 0x8000
// 0079a382  33c0                 xor eax, eax
// 0079a384  5e                   pop esi
// 0079a385  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleState@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
