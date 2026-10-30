// roc 2009-06 007c1e90  unit: CXTPReportPaintManager  size: 658 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c1e90
//
// 007c1e90  6aff                 push -1
// 007c1e92  6861db8700           push 0x87db61
// 007c1e97  64a100000000         mov eax, dword ptr fs:[0]
// 007c1e9d  50                   push eax
// 007c1e9e  83ec30               sub esp, 0x30
// 007c1ea1  53                   push ebx
// 007c1ea2  55                   push ebp
// 007c1ea3  56                   push esi
// 007c1ea4  57                   push edi
// 007c1ea5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c1eaa  33c4                 xor eax, esp
// 007c1eac  50                   push eax
// 007c1ead  8d442444             lea eax, [esp + 0x44]
// 007c1eb1  64a300000000         mov dword ptr fs:[0], eax
// 007c1eb7  8bf9                 mov edi, ecx
// 007c1eb9  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007c1ebd  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 007c1ec0  8b742454             mov esi, dword ptr [esp + 0x54]
// 007c1ec4  85c0                 test eax, eax
// 007c1ec6  7479                 je 0x7c1f41
// 007c1ec8  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 007c1ece  83f8ff               cmp eax, -1
// 007c1ed1  7506                 jne 0x7c1ed9
// 007c1ed3  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 007c1ed9  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c1edd  8b542468             mov edx, dword ptr [esp + 0x68]
// 007c1ee1  50                   push eax
// 007c1ee2  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c1ee6  2bc8                 sub ecx, eax
// 007c1ee8  83e909               sub ecx, 9
// 007c1eeb  51                   push ecx
// 007c1eec  83c006               add eax, 6
// 007c1eef  50                   push eax
// 007c1ef0  52                   push edx
// 007c1ef1  56                   push esi
// 007c1ef2  8bcf                 mov ecx, edi
// 007c1ef4  e877daffff           call 0x7bf970
// 007c1ef9  8b87bc020000         mov eax, dword ptr [edi + 0x2bc]
// 007c1eff  83f803               cmp eax, 3
// 007c1f02  740b                 je 0x7c1f0f
// 007c1f04  8d8fd0000000         lea ecx, [edi + 0xd0]
// 007c1f0a  83f804               cmp eax, 4
// 007c1f0d  7506                 jne 0x7c1f15
// 007c1f0f  8d8fc0010000         lea ecx, [edi + 0x1c0]
// 007c1f15  8b4108               mov eax, dword ptr [ecx + 8]
// 007c1f18  83f8ff               cmp eax, -1
// 007c1f1b  7503                 jne 0x7c1f20
// 007c1f1d  8b4104               mov eax, dword ptr [ecx + 4]
// 007c1f20  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c1f24  8b542468             mov edx, dword ptr [esp + 0x68]
// 007c1f28  50                   push eax
// 007c1f29  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c1f2d  2bc8                 sub ecx, eax
// 007c1f2f  83e909               sub ecx, 9
// 007c1f32  51                   push ecx
// 007c1f33  83c005               add eax, 5
// 007c1f36  50                   push eax
// 007c1f37  4a                   dec edx
// 007c1f38  52                   push edx
// 007c1f39  56                   push esi
// 007c1f3a  8bcf                 mov ecx, edi
// 007c1f3c  e82fdaffff           call 0x7bf970
// 007c1f41  6a01                 push 1
// 007c1f43  8bce                 mov ecx, esi
// 007c1f45  e8bc9f0800           call 0x84bf06
// 007c1f4a  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 007c1f50  83f8ff               cmp eax, -1
// 007c1f53  7506                 jne 0x7c1f5b
// 007c1f55  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 007c1f5b  50                   push eax
// 007c1f5c  8bcd                 mov ecx, ebp
// 007c1f5e  e89dacf8ff           call 0x74cc00
// 007c1f63  50                   push eax
// 007c1f64  56                   push esi
// 007c1f65  8d4c2440             lea ecx, [esp + 0x40]
// 007c1f69  e832e9faff           call 0x7708a0
// 007c1f6e  8d442458             lea eax, [esp + 0x58]
// 007c1f72  50                   push eax
// 007c1f73  8bcd                 mov ecx, ebp
// 007c1f75  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007c1f7d  e84ed7fbff           call 0x77f6d0
// 007c1f82  8d4c2414             lea ecx, [esp + 0x14]
// 007c1f86  51                   push ecx
// 007c1f87  8d4c245c             lea ecx, [esp + 0x5c]
// 007c1f8b  c644245001           mov byte ptr [esp + 0x50], 1
// 007c1f90  ff1554fb8900         call dword ptr [0x89fb54]
// 007c1f96  50                   push eax
// 007c1f97  8d4c2460             lea ecx, [esp + 0x60]
// 007c1f9b  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c1fa1  8b5608               mov edx, dword ptr [esi + 8]
// 007c1fa4  50                   push eax
// 007c1fa5  52                   push edx
// 007c1fa6  ff1550e18900         call dword ptr [0x89e150]
// 007c1fac  8b442460             mov eax, dword ptr [esp + 0x60]
// 007c1fb0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007c1fb4  8b542468             mov edx, dword ptr [esp + 0x68]
// 007c1fb8  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 007c1fbc  83c102               add ecx, 2
// 007c1fbf  89442424             mov dword ptr [esp + 0x24], eax
// 007c1fc3  83c003               add eax, 3
// 007c1fc6  894c2428             mov dword ptr [esp + 0x28], ecx
// 007c1fca  83ea03               sub edx, 3
// 007c1fcd  83eb02               sub ebx, 2
// 007c1fd0  8bcd                 mov ecx, ebp
// 007c1fd2  89442424             mov dword ptr [esp + 0x24], eax
// 007c1fd6  8954242c             mov dword ptr [esp + 0x2c], edx
// 007c1fda  895c2430             mov dword ptr [esp + 0x30], ebx
// 007c1fde  e8bdacf8ff           call 0x74cca0
// 007c1fe3  85c0                 test eax, eax
// 007c1fe5  7446                 je 0x7c202d
// 007c1fe7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c1feb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007c1fef  2b442424             sub eax, dword ptr [esp + 0x24]
// 007c1ff3  83c306               add ebx, 6
// 007c1ff6  3bc3                 cmp eax, ebx
// 007c1ff8  7e33                 jle 0x7c202d
// 007c1ffa  8bcd                 mov ecx, ebp
// 007c1ffc  e89facf8ff           call 0x74cca0
// 007c2001  a802                 test al, 2
// 007c2003  740a                 je 0x7c200f
// 007c2005  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c2009  2bcb                 sub ecx, ebx
// 007c200b  894c2424             mov dword ptr [esp + 0x24], ecx
// 007c200f  8bcd                 mov ecx, ebp
// 007c2011  e88aacf8ff           call 0x74cca0
// 007c2016  a801                 test al, 1
// 007c2018  7413                 je 0x7c202d
// 007c201a  8b442424             mov eax, dword ptr [esp + 0x24]
// 007c201e  2bc3                 sub eax, ebx
// 007c2020  0344242c             add eax, dword ptr [esp + 0x2c]
// 007c2024  99                   cdq 
// 007c2025  2bc2                 sub eax, edx
// 007c2027  d1f8                 sar eax, 1
// 007c2029  89442424             mov dword ptr [esp + 0x24], eax
// 007c202d  83bfa802000000       cmp dword ptr [edi + 0x2a8], 0
// 007c2034  7579                 jne 0x7c20af
// 007c2036  8bcd                 mov ecx, ebp
// 007c2038  e863acf8ff           call 0x74cca0
// 007c203d  a810                 test al, 0x10
// 007c203f  746e                 je 0x7c20af
// 007c2041  8b442428             mov eax, dword ptr [esp + 0x28]
// 007c2045  8b542424             mov edx, dword ptr [esp + 0x24]
// 007c2049  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c204d  8b3e                 mov edi, dword ptr [esi]
// 007c204f  89442418             mov dword ptr [esp + 0x18], eax
// 007c2053  89542414             mov dword ptr [esp + 0x14], edx
// 007c2057  8b542430             mov edx, dword ptr [esp + 0x30]
// 007c205b  68108c0000           push 0x8c10
// 007c2060  8d442418             lea eax, [esp + 0x18]
// 007c2064  894c2420             mov dword ptr [esp + 0x20], ecx
// 007c2068  50                   push eax
// 007c2069  8d4c2460             lea ecx, [esp + 0x60]
// 007c206d  bb10880000           mov ebx, 0x8810
// 007c2072  89542428             mov dword ptr [esp + 0x28], edx
// 007c2076  ff1554fb8900         call dword ptr [0x89fb54]
// 007c207c  50                   push eax
// 007c207d  8d4c2464             lea ecx, [esp + 0x64]
// 007c2081  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2087  8b5770               mov edx, dword ptr [edi + 0x70]
// 007c208a  50                   push eax
// 007c208b  8bce                 mov ecx, esi
// 007c208d  ffd2                 call edx
// 007c208f  8b442418             mov eax, dword ptr [esp + 0x18]
// 007c2093  2b442420             sub eax, dword ptr [esp + 0x20]
// 007c2097  2b442428             sub eax, dword ptr [esp + 0x28]
// 007c209b  03442430             add eax, dword ptr [esp + 0x30]
// 007c209f  83f801               cmp eax, 1
// 007c20a2  7e10                 jle 0x7c20b4
// 007c20a4  99                   cdq 
// 007c20a5  2bc2                 sub eax, edx
// 007c20a7  d1f8                 sar eax, 1
// 007c20a9  01442428             add dword ptr [esp + 0x28], eax
// 007c20ad  eb05                 jmp 0x7c20b4
// 007c20af  bb24880000           mov ebx, 0x8824
// 007c20b4  8d4c2458             lea ecx, [esp + 0x58]
// 007c20b8  ff1554fb8900         call dword ptr [0x89fb54]
// 007c20be  85c0                 test eax, eax
// 007c20c0  7e2f                 jle 0x7c20f1
// 007c20c2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c20c6  3b442424             cmp eax, dword ptr [esp + 0x24]
// 007c20ca  7e25                 jle 0x7c20f1
// 007c20cc  8b3e                 mov edi, dword ptr [esi]
// 007c20ce  53                   push ebx
// 007c20cf  8d4c2428             lea ecx, [esp + 0x28]
// 007c20d3  51                   push ecx
// 007c20d4  8d4c2460             lea ecx, [esp + 0x60]
// 007c20d8  ff1554fb8900         call dword ptr [0x89fb54]
// 007c20de  50                   push eax
// 007c20df  8d4c2464             lea ecx, [esp + 0x64]
// 007c20e3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c20e9  8b5770               mov edx, dword ptr [edi + 0x70]
// 007c20ec  50                   push eax
// 007c20ed  8bce                 mov ecx, esi
// 007c20ef  ffd2                 call edx
// 007c20f1  8d4c2458             lea ecx, [esp + 0x58]
// 007c20f5  ff1510fd8900         call dword ptr [0x89fd10]
// 007c20fb  8d4c2434             lea ecx, [esp + 0x34]
// 007c20ff  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 007c2107  e8d4e7faff           call 0x7708e0
// 007c210c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c2110  64890d00000000       mov dword ptr fs:[0], ecx
// 007c2117  59                   pop ecx
// 007c2118  5f                   pop edi
// 007c2119  5e                   pop esi
// 007c211a  5d                   pop ebp
// 007c211b  5b                   pop ebx
// 007c211c  83c43c               add esp, 0x3c
// 007c211f  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawColumnFooter@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp