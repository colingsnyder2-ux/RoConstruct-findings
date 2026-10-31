// roc 2011-06 004935f0  unit: CSettingsDialog  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004935f0
//
// 004935f0  55                   push ebp
// 004935f1  8bec                 mov ebp, esp
// 004935f3  6aff                 push -1
// 004935f5  6808d29c00           push 0x9cd208
// 004935fa  64a100000000         mov eax, dword ptr fs:[0]
// 00493600  50                   push eax
// 00493601  64892500000000       mov dword ptr fs:[0], esp
// 00493608  51                   push ecx
// 00493609  53                   push ebx
// 0049360a  56                   push esi
// 0049360b  57                   push edi
// 0049360c  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 0049360f  33f6                 xor esi, esi
// 00493611  3bfe                 cmp edi, esi
// 00493613  750a                 jne 0x49361f
// 00493615  b803400080           mov eax, 0x80004003
// 0049361a  e907010000           jmp 0x493726
// 0049361f  89750c               mov dword ptr [ebp + 0xc], esi
// 00493622  8b1d6403a400         mov ebx, dword ptr [0xa40364]
// 00493628  57                   push edi
// 00493629  8975fc               mov dword ptr [ebp - 4], esi
// 0049362c  ffd3                 call ebx
// 0049362e  56                   push esi
// 0049362f  40                   inc eax
// 00493630  99                   cdq 
// 00493631  6a02                 push 2
// 00493633  52                   push edx
// 00493634  50                   push eax
// 00493635  e8767c3700           call 0x80b2b0
// 0049363a  8bf0                 mov esi, eax
// 0049363c  0500000080           add eax, 0x80000000
// 00493641  83d200               adc edx, 0
// 00493644  85d2                 test edx, edx
// 00493646  7745                 ja 0x49368d
// 00493648  7205                 jb 0x49364f
// 0049364a  83f8ff               cmp eax, -1
// 0049364d  773e                 ja 0x49368d
// 0049364f  81fe00040000         cmp esi, 0x400
// 00493655  7f18                 jg 0x49366f
// 00493657  56                   push esi
// 00493658  e8c30ff7ff           call 0x404620
// 0049365d  83c404               add esp, 4
// 00493660  84c0                 test al, al
// 00493662  740b                 je 0x49366f
// 00493664  8bc6                 mov eax, esi
// 00493666  e8157c3700           call 0x80b280
// 0049366b  8bc4                 mov eax, esp
// 0049366d  eb09                 jmp 0x493678
// 0049366f  56                   push esi
// 00493670  8d4d0c               lea ecx, [ebp + 0xc]
// 00493673  e85815f7ff           call 0x404bd0
// 00493678  6a03                 push 3
// 0049367a  d1ee                 shr esi, 1
// 0049367c  56                   push esi
// 0049367d  57                   push edi
// 0049367e  50                   push eax
// 0049367f  e86cfef6ff           call 0x4034f0
// 00493684  8bc8                 mov ecx, eax
// 00493686  894df0               mov dword ptr [ebp - 0x10], ecx
// 00493689  85c9                 test ecx, ecx
// 0049368b  7512                 jne 0x49369f
// 0049368d  8d4d0c               lea ecx, [ebp + 0xc]
// 00493690  e82b0cf7ff           call 0x4042c0
// 00493695  b80e000780           mov eax, 0x8007000e
// 0049369a  e987000000           jmp 0x493726
// 0049369f  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004936a2  33c0                 xor eax, eax
// 004936a4  85ff                 test edi, edi
// 004936a6  7459                 je 0x493701
// 004936a8  57                   push edi
// 004936a9  ffd3                 call ebx
// 004936ab  40                   inc eax
// 004936ac  6a02                 push 2
// 004936ae  50                   push eax
// 004936af  894514               mov dword ptr [ebp + 0x14], eax
// 004936b2  8d4514               lea eax, [ebp + 0x14]
// 004936b5  50                   push eax
// 004936b6  e8e5fdf6ff           call 0x4034a0
// 004936bb  83c40c               add esp, 0xc
// 004936be  85c0                 test eax, eax
// 004936c0  7ccb                 jl 0x49368d
// 004936c2  8b7514               mov esi, dword ptr [ebp + 0x14]
// 004936c5  81fe00040000         cmp esi, 0x400
// 004936cb  7f18                 jg 0x4936e5
// 004936cd  56                   push esi
// 004936ce  e84d0ff7ff           call 0x404620
// 004936d3  83c404               add esp, 4
// 004936d6  84c0                 test al, al
// 004936d8  740b                 je 0x4936e5
// 004936da  8bc6                 mov eax, esi
// 004936dc  e89f7b3700           call 0x80b280
// 004936e1  8bc4                 mov eax, esp
// 004936e3  eb09                 jmp 0x4936ee
// 004936e5  56                   push esi
// 004936e6  8d4d0c               lea ecx, [ebp + 0xc]
// 004936e9  e8e214f7ff           call 0x404bd0
// 004936ee  6a03                 push 3
// 004936f0  d1ee                 shr esi, 1
// 004936f2  56                   push esi
// 004936f3  57                   push edi
// 004936f4  50                   push eax
// 004936f5  e8f6fdf6ff           call 0x4034f0
// 004936fa  85c0                 test eax, eax
// 004936fc  748f                 je 0x49368d
// 004936fe  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 00493701  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 00493704  6a00                 push 0
// 00493706  52                   push edx
// 00493707  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0049370a  52                   push edx
// 0049370b  50                   push eax
// 0049370c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0049370f  50                   push eax
// 00493710  51                   push ecx
// 00493711  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00493714  51                   push ecx
// 00493715  e8a6a5f9ff           call 0x42dcc0
// 0049371a  8d4d0c               lea ecx, [ebp + 0xc]
// 0049371d  8bf0                 mov esi, eax
// 0049371f  e89c0bf7ff           call 0x4042c0
// 00493724  8bc6                 mov eax, esi
// 00493726  8d65e4               lea esp, [ebp - 0x1c]
// 00493729  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0049372c  64890d00000000       mov dword ptr fs:[0], ecx
// 00493733  5f                   pop edi
// 00493734  5e                   pop esi
// 00493735  5b                   pop ebx
// 00493736  8be5                 mov esp, ebp
// 00493738  5d                   pop ebp
// 00493739  c21800               ret 0x18
// copied from an identical function in another client (function ?AtlReportError@ATL@@YGJABU_GUID@@PBDK10J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll roc_espeon_atlreporterrorunwind59eab001a8c0d0a3.cpp