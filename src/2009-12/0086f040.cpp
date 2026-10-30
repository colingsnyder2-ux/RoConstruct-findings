// roc 2009-12 0086f040  unit: PAUHWND__::?$CArray  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f040
//
// 0086f040  8b5108               mov edx, dword ptr [ecx + 8]
// 0086f043  33c0                 xor eax, eax
// 0086f045  85d2                 test edx, edx
// 0086f047  7e35                 jle 0x86f07e
// 0086f049  56                   push esi
// 0086f04a  8b742408             mov esi, dword ptr [esp + 8]
// 0086f04e  57                   push edi
// 0086f04f  90                   nop 
// 0086f050  85c0                 test eax, eax
// 0086f052  7c16                 jl 0x86f06a
// 0086f054  3bc2                 cmp eax, edx
// 0086f056  7d12                 jge 0x86f06a
// 0086f058  8b7904               mov edi, dword ptr [ecx + 4]
// 0086f05b  3b3487               cmp esi, dword ptr [edi + eax*4]
// 0086f05e  740f                 je 0x86f06f
// 0086f060  40                   inc eax
// 0086f061  3bc2                 cmp eax, edx
// 0086f063  7ceb                 jl 0x86f050
// 0086f065  5f                   pop edi
// 0086f066  5e                   pop esi
// 0086f067  c20400               ret 4
// 0086f06a  e89d4af8ff           call 0x7f3b0c
// 0086f06f  83f8ff               cmp eax, -1
// 0086f072  7408                 je 0x86f07c
// 0086f074  6a01                 push 1
// 0086f076  50                   push eax
// 0086f077  e804e2fbff           call 0x82d280
// 0086f07c  5f                   pop edi
// 0086f07d  5e                   pop esi
// 0086f07e  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CTrustedArray@CXTPMouseManager@@QAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp