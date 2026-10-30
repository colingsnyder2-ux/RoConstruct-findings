// roc 2009-12 0089def0  unit: CXTPReportPaintManager  size: 746 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089def0
//
// 0089def0  6aff                 push -1
// 0089def2  68b81d9600           push 0x961db8
// 0089def7  64a100000000         mov eax, dword ptr fs:[0]
// 0089defd  50                   push eax
// 0089defe  83ec50               sub esp, 0x50
// 0089df01  53                   push ebx
// 0089df02  55                   push ebp
// 0089df03  56                   push esi
// 0089df04  57                   push edi
// 0089df05  a10052b600           mov eax, dword ptr [0xb65200]
// 0089df0a  33c4                 xor eax, esp
// 0089df0c  50                   push eax
// 0089df0d  8d442464             lea eax, [esp + 0x64]
// 0089df11  64a300000000         mov dword ptr fs:[0], eax
// 0089df17  8bf9                 mov edi, ecx
// 0089df19  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0089df1d  53                   push ebx
// 0089df1e  8d4c2418             lea ecx, [esp + 0x18]
// 0089df22  e8a9d3faff           call 0x84b2d0
// 0089df27  83bf5c02000000       cmp dword ptr [edi + 0x25c], 0
// 0089df2e  0f8452010000         je 0x89e086
// 0089df34  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 0089df38  7559                 jne 0x89df93
// 0089df3a  8db7d8020000         lea esi, [edi + 0x2d8]
// 0089df40  8bce                 mov ecx, esi
// 0089df42  e879dcfcff           call 0x86bbc0
// 0089df47  85c0                 test eax, eax
// 0089df49  7448                 je 0x89df93
// 0089df4b  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 0089df52  7410                 je 0x89df64
// 0089df54  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 0089df5b  7407                 je 0x89df64
// 0089df5d  b901000000           mov ecx, 1
// 0089df62  eb02                 jmp 0x89df66
// 0089df64  33c9                 xor ecx, ecx
// 0089df66  8b442474             mov eax, dword ptr [esp + 0x74]
// 0089df6a  85c0                 test eax, eax
// 0089df6c  7403                 je 0x89df71
// 0089df6e  8b4004               mov eax, dword ptr [eax + 4]
// 0089df71  6a00                 push 0
// 0089df73  8d542418             lea edx, [esp + 0x18]
// 0089df77  52                   push edx
// 0089df78  33d2                 xor edx, edx
// 0089df7a  85c9                 test ecx, ecx
// 0089df7c  0f95c2               setne dl
// 0089df7f  8bce                 mov ecx, esi
// 0089df81  8d541201             lea edx, [edx + edx + 1]
// 0089df85  52                   push edx
// 0089df86  6a01                 push 1
// 0089df88  50                   push eax
// 0089df89  e8b2d8fcff           call 0x86b840
// 0089df8e  e931020000           jmp 0x89e1c4
// 0089df93  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 0089df97  0f85e9000000         jne 0x89e086
// 0089df9d  8dafcc020000         lea ebp, [edi + 0x2cc]
// 0089dfa3  8bcd                 mov ecx, ebp
// 0089dfa5  e816dcfcff           call 0x86bbc0
// 0089dfaa  85c0                 test eax, eax
// 0089dfac  0f84d4000000         je 0x89e086
// 0089dfb2  e8191af9ff           call 0x82f9d0
// 0089dfb7  6a0f                 push 0xf
// 0089dfb9  8bc8                 mov ecx, eax
// 0089dfbb  e84011f9ff           call 0x82f100
// 0089dfc0  8b742474             mov esi, dword ptr [esp + 0x74]
// 0089dfc4  50                   push eax
// 0089dfc5  8d442418             lea eax, [esp + 0x18]
// 0089dfc9  50                   push eax
// 0089dfca  8bce                 mov ecx, esi
// 0089dfcc  e82d66f5ff           call 0x7f45fe
// 0089dfd1  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 0089dfd8  7410                 je 0x89dfea
// 0089dfda  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 0089dfe1  7407                 je 0x89dfea
// 0089dfe3  b903000000           mov ecx, 3
// 0089dfe8  eb1a                 jmp 0x89e004
// 0089dfea  ff15eccb9800         call dword ptr [0x98cbec]
// 0089dff0  50                   push eax
// 0089dff1  e8345bf5ff           call 0x7f3b2a
// 0089dff6  33c9                 xor ecx, ecx
// 0089dff8  3bc3                 cmp eax, ebx
// 0089dffa  0f94c1               sete cl
// 0089dffd  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 0089e004  85f6                 test esi, esi
// 0089e006  7504                 jne 0x89e00c
// 0089e008  33c0                 xor eax, eax
// 0089e00a  eb03                 jmp 0x89e00f
// 0089e00c  8b4604               mov eax, dword ptr [esi + 4]
// 0089e00f  6a00                 push 0
// 0089e011  8d542418             lea edx, [esp + 0x18]
// 0089e015  52                   push edx
// 0089e016  51                   push ecx
// 0089e017  6a01                 push 1
// 0089e019  50                   push eax
// 0089e01a  8bcd                 mov ecx, ebp
// 0089e01c  e81fd8fcff           call 0x86b840
// 0089e021  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e025  8b3dc0b09800         mov edi, dword ptr [0x98b0c0]
// 0089e02b  8d48fd               lea ecx, [eax - 3]
// 0089e02e  51                   push ecx
// 0089e02f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089e033  8d5105               lea edx, [ecx + 5]
// 0089e036  52                   push edx
// 0089e037  83c0fb               add eax, -5
// 0089e03a  50                   push eax
// 0089e03b  8b4604               mov eax, dword ptr [esi + 4]
// 0089e03e  83c103               add ecx, 3
// 0089e041  51                   push ecx
// 0089e042  50                   push eax
// 0089e043  ffd7                 call edi
// 0089e045  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e049  8d48fd               lea ecx, [eax - 3]
// 0089e04c  51                   push ecx
// 0089e04d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089e051  8d5109               lea edx, [ecx + 9]
// 0089e054  52                   push edx
// 0089e055  83c0fb               add eax, -5
// 0089e058  50                   push eax
// 0089e059  8b4604               mov eax, dword ptr [esi + 4]
// 0089e05c  83c107               add ecx, 7
// 0089e05f  51                   push ecx
// 0089e060  50                   push eax
// 0089e061  ffd7                 call edi
// 0089e063  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e067  8d48fd               lea ecx, [eax - 3]
// 0089e06a  51                   push ecx
// 0089e06b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089e06f  8d510d               lea edx, [ecx + 0xd]
// 0089e072  52                   push edx
// 0089e073  83c0fb               add eax, -5
// 0089e076  50                   push eax
// 0089e077  8b4604               mov eax, dword ptr [esi + 4]
// 0089e07a  83c10b               add ecx, 0xb
// 0089e07d  51                   push ecx
// 0089e07e  50                   push eax
// 0089e07f  ffd7                 call edi
// 0089e081  e93e010000           jmp 0x89e1c4
// 0089e086  8b17                 mov edx, dword ptr [edi]
// 0089e088  8b742474             mov esi, dword ptr [esp + 0x74]
// 0089e08c  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 0089e092  53                   push ebx
// 0089e093  56                   push esi
// 0089e094  8bcf                 mov ecx, edi
// 0089e096  ffd0                 call eax
// 0089e098  e83319f9ff           call 0x82f9d0
// 0089e09d  6a12                 push 0x12
// 0089e09f  8bc8                 mov ecx, eax
// 0089e0a1  e85a10f9ff           call 0x82f100
// 0089e0a6  85f6                 test esi, esi
// 0089e0a8  7504                 jne 0x89e0ae
// 0089e0aa  33c9                 xor ecx, ecx
// 0089e0ac  eb03                 jmp 0x89e0b1
// 0089e0ae  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089e0b1  50                   push eax
// 0089e0b2  51                   push ecx
// 0089e0b3  8d4c2440             lea ecx, [esp + 0x40]
// 0089e0b7  e844d6faff           call 0x84b700
// 0089e0bc  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0089e0c4  e80719f9ff           call 0x82f9d0
// 0089e0c9  6a12                 push 0x12
// 0089e0cb  8bc8                 mov ecx, eax
// 0089e0cd  e82e10f9ff           call 0x82f100
// 0089e0d2  85f6                 test esi, esi
// 0089e0d4  7504                 jne 0x89e0da
// 0089e0d6  33c9                 xor ecx, ecx
// 0089e0d8  eb03                 jmp 0x89e0dd
// 0089e0da  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089e0dd  50                   push eax
// 0089e0de  51                   push ecx
// 0089e0df  8d4c242c             lea ecx, [esp + 0x2c]
// 0089e0e3  e8d8d6faff           call 0x84b7c0
// 0089e0e8  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 0089e0ec  7556                 jne 0x89e144
// 0089e0ee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089e0f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089e0f6  8d040a               lea eax, [edx + ecx]
// 0089e0f9  99                   cdq 
// 0089e0fa  2bc2                 sub eax, edx
// 0089e0fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089e100  8bc8                 mov ecx, eax
// 0089e102  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089e106  03c2                 add eax, edx
// 0089e108  99                   cdq 
// 0089e109  2bc2                 sub eax, edx
// 0089e10b  d1f8                 sar eax, 1
// 0089e10d  d1f9                 sar ecx, 1
// 0089e10f  8d78fd               lea edi, [eax - 3]
// 0089e112  8d51ff               lea edx, [ecx - 1]
// 0089e115  897c244c             mov dword ptr [esp + 0x4c], edi
// 0089e119  8d7803               lea edi, [eax + 3]
// 0089e11c  83c102               add ecx, 2
// 0089e11f  8944245c             mov dword ptr [esp + 0x5c], eax
// 0089e123  6a03                 push 3
// 0089e125  8d442450             lea eax, [esp + 0x50]
// 0089e129  894c2464             mov dword ptr [esp + 0x64], ecx
// 0089e12d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089e130  50                   push eax
// 0089e131  51                   push ecx
// 0089e132  8954245c             mov dword ptr [esp + 0x5c], edx
// 0089e136  897c2460             mov dword ptr [esp + 0x60], edi
// 0089e13a  89542464             mov dword ptr [esp + 0x64], edx
// 0089e13e  ff1520b19800         call dword ptr [0x98b120]
// 0089e144  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 0089e148  7560                 jne 0x89e1aa
// 0089e14a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e14e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089e152  8d48fd               lea ecx, [eax - 3]
// 0089e155  8d7a05               lea edi, [edx + 5]
// 0089e158  51                   push ecx
// 0089e159  57                   push edi
// 0089e15a  8b3dc0b09800         mov edi, dword ptr [0x98b0c0]
// 0089e160  83c0fb               add eax, -5
// 0089e163  83c203               add edx, 3
// 0089e166  50                   push eax
// 0089e167  52                   push edx
// 0089e168  8b5604               mov edx, dword ptr [esi + 4]
// 0089e16b  52                   push edx
// 0089e16c  ffd7                 call edi
// 0089e16e  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e172  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089e176  8d48fd               lea ecx, [eax - 3]
// 0089e179  51                   push ecx
// 0089e17a  8d5a09               lea ebx, [edx + 9]
// 0089e17d  53                   push ebx
// 0089e17e  83c0fb               add eax, -5
// 0089e181  50                   push eax
// 0089e182  8b4604               mov eax, dword ptr [esi + 4]
// 0089e185  83c207               add edx, 7
// 0089e188  52                   push edx
// 0089e189  50                   push eax
// 0089e18a  ffd7                 call edi
// 0089e18c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089e190  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089e194  8d48fd               lea ecx, [eax - 3]
// 0089e197  51                   push ecx
// 0089e198  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089e19b  8d5a0d               lea ebx, [edx + 0xd]
// 0089e19e  53                   push ebx
// 0089e19f  83c0fb               add eax, -5
// 0089e1a2  50                   push eax
// 0089e1a3  83c20b               add edx, 0xb
// 0089e1a6  52                   push edx
// 0089e1a7  51                   push ecx
// 0089e1a8  ffd7                 call edi
// 0089e1aa  8d4c2424             lea ecx, [esp + 0x24]
// 0089e1ae  e89dd6faff           call 0x84b850
// 0089e1b3  8d4c2438             lea ecx, [esp + 0x38]
// 0089e1b7  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0089e1bf  e8ccd5faff           call 0x84b790
// 0089e1c4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0089e1c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0089e1cf  59                   pop ecx
// 0089e1d0  5f                   pop edi
// 0089e1d1  5e                   pop esi
// 0089e1d2  5d                   pop ebp
// 0089e1d3  5b                   pop ebx
// 0089e1d4  83c45c               add esp, 0x5c
// 0089e1d7  c20800               ret 8
// copied from an identical function in another client (function ?DrawInplaceButton@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp