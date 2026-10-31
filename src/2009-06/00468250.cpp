// roc 2009-06 00468250  unit: CSettingsDialog  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00468250
//
// 00468250  55                   push ebp
// 00468251  8bec                 mov ebp, esp
// 00468253  6aff                 push -1
// 00468255  68d82f8500           push 0x852fd8
// 0046825a  64a100000000         mov eax, dword ptr fs:[0]
// 00468260  50                   push eax
// 00468261  64892500000000       mov dword ptr fs:[0], esp
// 00468268  51                   push ecx
// 00468269  53                   push ebx
// 0046826a  56                   push esi
// 0046826b  57                   push edi
// 0046826c  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0046826f  33f6                 xor esi, esi
// 00468271  3bfe                 cmp edi, esi
// 00468273  750a                 jne 0x46827f
// 00468275  b803400080           mov eax, 0x80004003
// 0046827a  e907010000           jmp 0x468386
// 0046827f  89750c               mov dword ptr [ebp + 0xc], esi
// 00468282  8b1de0e18900         mov ebx, dword ptr [0x89e1e0]
// 00468288  57                   push edi
// 00468289  8975fc               mov dword ptr [ebp - 4], esi
// 0046828c  ffd3                 call ebx
// 0046828e  56                   push esi
// 0046828f  40                   inc eax
// 00468290  99                   cdq 
// 00468291  6a02                 push 2
// 00468293  52                   push edx
// 00468294  50                   push eax
// 00468295  e8a6192b00           call 0x719c40
// 0046829a  8bf0                 mov esi, eax
// 0046829c  0500000080           add eax, 0x80000000
// 004682a1  83d200               adc edx, 0
// 004682a4  85d2                 test edx, edx
// 004682a6  7745                 ja 0x4682ed
// 004682a8  7205                 jb 0x4682af
// 004682aa  83f8ff               cmp eax, -1
// 004682ad  773e                 ja 0x4682ed
// 004682af  81fe00040000         cmp esi, 0x400
// 004682b5  7f18                 jg 0x4682cf
// 004682b7  56                   push esi
// 004682b8  e873bbf9ff           call 0x403e30
// 004682bd  83c404               add esp, 4
// 004682c0  84c0                 test al, al
// 004682c2  740b                 je 0x4682cf
// 004682c4  8bc6                 mov eax, esi
// 004682c6  e845192b00           call 0x719c10
// 004682cb  8bc4                 mov eax, esp
// 004682cd  eb09                 jmp 0x4682d8
// 004682cf  56                   push esi
// 004682d0  8d4d0c               lea ecx, [ebp + 0xc]
// 004682d3  e8f8c0f9ff           call 0x4043d0
// 004682d8  6a03                 push 3
// 004682da  d1ee                 shr esi, 1
// 004682dc  56                   push esi
// 004682dd  57                   push edi
// 004682de  50                   push eax
// 004682df  e81cabf9ff           call 0x402e00
// 004682e4  8bc8                 mov ecx, eax
// 004682e6  894df0               mov dword ptr [ebp - 0x10], ecx
// 004682e9  85c9                 test ecx, ecx
// 004682eb  7512                 jne 0x4682ff
// 004682ed  8d4d0c               lea ecx, [ebp + 0xc]
// 004682f0  e8bbb8f9ff           call 0x403bb0
// 004682f5  b80e000780           mov eax, 0x8007000e
// 004682fa  e987000000           jmp 0x468386
// 004682ff  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 00468302  33c0                 xor eax, eax
// 00468304  85ff                 test edi, edi
// 00468306  7459                 je 0x468361
// 00468308  57                   push edi
// 00468309  ffd3                 call ebx
// 0046830b  40                   inc eax
// 0046830c  6a02                 push 2
// 0046830e  50                   push eax
// 0046830f  894514               mov dword ptr [ebp + 0x14], eax
// 00468312  8d4514               lea eax, [ebp + 0x14]
// 00468315  50                   push eax
// 00468316  e895aaf9ff           call 0x402db0
// 0046831b  83c40c               add esp, 0xc
// 0046831e  85c0                 test eax, eax
// 00468320  7ccb                 jl 0x4682ed
// 00468322  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00468325  81fe00040000         cmp esi, 0x400
// 0046832b  7f18                 jg 0x468345
// 0046832d  56                   push esi
// 0046832e  e8fdbaf9ff           call 0x403e30
// 00468333  83c404               add esp, 4
// 00468336  84c0                 test al, al
// 00468338  740b                 je 0x468345
// 0046833a  8bc6                 mov eax, esi
// 0046833c  e8cf182b00           call 0x719c10
// 00468341  8bc4                 mov eax, esp
// 00468343  eb09                 jmp 0x46834e
// 00468345  56                   push esi
// 00468346  8d4d0c               lea ecx, [ebp + 0xc]
// 00468349  e882c0f9ff           call 0x4043d0
// 0046834e  6a03                 push 3
// 00468350  d1ee                 shr esi, 1
// 00468352  56                   push esi
// 00468353  57                   push edi
// 00468354  50                   push eax
// 00468355  e8a6aaf9ff           call 0x402e00
// 0046835a  85c0                 test eax, eax
// 0046835c  748f                 je 0x4682ed
// 0046835e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00468361  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00468364  6a00                 push 0
// 00468366  52                   push edx
// 00468367  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0046836a  52                   push edx
// 0046836b  50                   push eax
// 0046836c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0046836f  50                   push eax
// 00468370  51                   push ecx
// 00468371  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00468374  51                   push ecx
// 00468375  e8e6b8fbff           call 0x423c60
// 0046837a  8d4d0c               lea ecx, [ebp + 0xc]
// 0046837d  8bf0                 mov esi, eax
// 0046837f  e82cb8f9ff           call 0x403bb0
// 00468384  8bc6                 mov eax, esi
// 00468386  8d65e4               lea esp, [ebp - 0x1c]
// 00468389  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046838c  64890d00000000       mov dword ptr fs:[0], ecx
// 00468393  5f                   pop edi
// 00468394  5e                   pop esi
// 00468395  5b                   pop ebx
// 00468396  8be5                 mov esp, ebp
// 00468398  5d                   pop ebp
// 00468399  c21800               ret 0x18
// copied from an identical function in another client (function ?AtlReportError@ATL@@YGJABU_GUID@@PBDK10J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll roc_espeon_atlreporterrorunwind59eab001a8c0d0a3.cpp