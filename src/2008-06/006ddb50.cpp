// roc 2008-06 006ddb50  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddb50
//
// 006ddb50  53                   push ebx
// 006ddb51  56                   push esi
// 006ddb52  8bf1                 mov esi, ecx
// 006ddb54  33db                 xor ebx, ebx
// 006ddb56  6a0a                 push 0xa
// 006ddb58  8d4e18               lea ecx, [esi + 0x18]
// 006ddb5b  c706745d8500         mov dword ptr [esi], 0x855d74
// 006ddb61  895e04               mov dword ptr [esi + 4], ebx
// 006ddb64  c7460801000000       mov dword ptr [esi + 8], 1
// 006ddb6b  895e0c               mov dword ptr [esi + 0xc], ebx
// 006ddb6e  895e10               mov dword ptr [esi + 0x10], ebx
// 006ddb71  895e14               mov dword ptr [esi + 0x14], ebx
// 006ddb74  e8e7fdffff           call 0x6dd960
// 006ddb79  885e38               mov byte ptr [esi + 0x38], bl
// 006ddb7c  895e34               mov dword ptr [esi + 0x34], ebx
// 006ddb7f  c6463901             mov byte ptr [esi + 0x39], 1
// 006ddb83  8bc6                 mov eax, esi
// 006ddb85  5e                   pop esi
// 006ddb86  5b                   pop ebx
// 006ddb87  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ??0CXTTreeBase@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
