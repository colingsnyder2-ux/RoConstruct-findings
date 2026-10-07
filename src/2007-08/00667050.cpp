// roc 2007-08 00667050  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667050
//
// 00667050  53                   push ebx
// 00667051  8bd9                 mov ebx, ecx
// 00667053  837b0400             cmp dword ptr [ebx + 4], 0
// 00667057  7458                 je 0x6670b1
// 00667059  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066705d  57                   push edi
// 0066705e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00667062  c70000000000         mov dword ptr [eax], 0
// 00667068  8b470c               mov eax, dword ptr [edi + 0xc]
// 0066706b  83f801               cmp eax, 1
// 0066706e  7407                 je 0x667077
// 00667070  3d00800000           cmp eax, 0x8000
// 00667075  7539                 jne 0x6670b0
// 00667077  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0066707a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0066707d  56                   push esi
// 0066707e  6a02                 push 2
// 00667080  50                   push eax
// 00667081  e8b4150d00           call 0x73863a
// 00667086  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 00667089  6a01                 push 1
// 0066708b  8bf0                 mov esi, eax
// 0066708d  6a00                 push 0
// 0066708f  51                   push ecx
// 00667090  d1ee                 shr esi, 1
// 00667092  8bcb                 mov ecx, ebx
// 00667094  83e601               and esi, 1
// 00667097  e8d4f6ffff           call 0x666770
// 0066709c  85c0                 test eax, eax
// 0066709e  740f                 je 0x6670af
// 006670a0  85f6                 test esi, esi
// 006670a2  750b                 jne 0x6670af
// 006670a4  8b573c               mov edx, dword ptr [edi + 0x3c]
// 006670a7  52                   push edx
// 006670a8  8bcb                 mov ecx, ebx
// 006670aa  e871efffff           call 0x666020
// 006670af  5e                   pop esi
// 006670b0  5f                   pop edi
// 006670b1  33c0                 xor eax, eax
// 006670b3  5b                   pop ebx
// 006670b4  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?OnItemExpanding@CXTTreeBase@@IAEHPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
