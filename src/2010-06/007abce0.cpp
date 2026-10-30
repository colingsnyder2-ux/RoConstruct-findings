// roc 2010-06 007abce0  unit: PAVCXTPControlAction::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abce0
//
// 007abce0  56                   push esi
// 007abce1  8b742408             mov esi, dword ptr [esp + 8]
// 007abce5  57                   push edi
// 007abce6  8bf9                 mov edi, ecx
// 007abce8  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 007abceb  33c0                 xor eax, eax
// 007abced  85c9                 test ecx, ecx
// 007abcef  7e19                 jle 0x7abd0a
// 007abcf1  85c0                 test eax, eax
// 007abcf3  0f8c83000000         jl 0x7abd7c
// 007abcf9  3bc1                 cmp eax, ecx
// 007abcfb  7d7f                 jge 0x7abd7c
// 007abcfd  8b5760               mov edx, dword ptr [edi + 0x60]
// 007abd00  393482               cmp dword ptr [edx + eax*4], esi
// 007abd03  7472                 je 0x7abd77
// 007abd05  40                   inc eax
// 007abd06  3bc1                 cmp eax, ecx
// 007abd08  7ce7                 jl 0x7abcf1
// 007abd0a  8b4764               mov eax, dword ptr [edi + 0x64]
// 007abd0d  8d4f5c               lea ecx, [edi + 0x5c]
// 007abd10  56                   push esi
// 007abd11  50                   push eax
// 007abd12  e899570300           call 0x7e14b0
// 007abd17  83c8ff               or eax, 0xffffffff
// 007abd1a  89869c000000         mov dword ptr [esi + 0x9c], eax
// 007abd20  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 007abd26  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007abd29  898e84000000         mov dword ptr [esi + 0x84], ecx
// 007abd2f  8d8ed8000000         lea ecx, [esi + 0xd8]
// 007abd35  ff1588c69e00         call dword ptr [0x9ec688]
// 007abd3b  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007abd41  ff1588c69e00         call dword ptr [0x9ec688]
// 007abd47  8d8eec000000         lea ecx, [esi + 0xec]
// 007abd4d  ff1588c69e00         call dword ptr [0x9ec688]
// 007abd53  8d8e08010000         lea ecx, [esi + 0x108]
// 007abd59  ff1588c69e00         call dword ptr [0x9ec688]
// 007abd5f  8d8ee0000000         lea ecx, [esi + 0xe0]
// 007abd65  ff1588c69e00         call dword ptr [0x9ec688]
// 007abd6b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007abd71  ff1588c69e00         call dword ptr [0x9ec688]
// 007abd77  5f                   pop edi
// 007abd78  5e                   pop esi
// 007abd79  c20400               ret 4
// 007abd7c  e8cbbeffff           call 0x7a7c4c
// copied from an identical function in another client (function ?AddControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp