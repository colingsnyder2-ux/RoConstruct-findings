// roc 2012-06 004a6860  unit: CSettingsDialog  size: 332 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a6860
//
// 004a6860  55                   push ebp
// 004a6861  8bec                 mov ebp, esp
// 004a6863  6aff                 push -1
// 004a6865  6828a2a900           push 0xa9a228
// 004a686a  64a100000000         mov eax, dword ptr fs:[0]
// 004a6870  50                   push eax
// 004a6871  64892500000000       mov dword ptr fs:[0], esp
// 004a6878  51                   push ecx
// 004a6879  53                   push ebx
// 004a687a  56                   push esi
// 004a687b  57                   push edi
// 004a687c  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004a687f  33f6                 xor esi, esi
// 004a6881  3bfe                 cmp edi, esi
// 004a6883  750a                 jne 0x4a688f
// 004a6885  b803400080           mov eax, 0x80004003
// 004a688a  e907010000           jmp 0x4a6996
// 004a688f  89750c               mov dword ptr [ebp + 0xc], esi
// 004a6892  8b1da821b200         mov ebx, dword ptr [0xb221a8]
// 004a6898  57                   push edi
// 004a6899  8975fc               mov dword ptr [ebp - 4], esi
// 004a689c  ffd3                 call ebx
// 004a689e  56                   push esi
// 004a689f  40                   inc eax
// 004a68a0  99                   cdq 
// 004a68a1  6a02                 push 2
// 004a68a3  52                   push edx
// 004a68a4  50                   push eax
// 004a68a5  e896ca4d00           call 0x983340
// 004a68aa  8bf0                 mov esi, eax
// 004a68ac  0500000080           add eax, 0x80000000
// 004a68b1  83d200               adc edx, 0
// 004a68b4  85d2                 test edx, edx
// 004a68b6  7745                 ja 0x4a68fd
// 004a68b8  7205                 jb 0x4a68bf
// 004a68ba  83f8ff               cmp eax, -1
// 004a68bd  773e                 ja 0x4a68fd
// 004a68bf  81fe00040000         cmp esi, 0x400
// 004a68c5  7f18                 jg 0x4a68df
// 004a68c7  56                   push esi
// 004a68c8  e8a3e4f5ff           call 0x404d70
// 004a68cd  83c404               add esp, 4
// 004a68d0  84c0                 test al, al
// 004a68d2  740b                 je 0x4a68df
// 004a68d4  8bc6                 mov eax, esi
// 004a68d6  e835ca4d00           call 0x983310
// 004a68db  8bc4                 mov eax, esp
// 004a68dd  eb09                 jmp 0x4a68e8
// 004a68df  56                   push esi
// 004a68e0  8d4d0c               lea ecx, [ebp + 0xc]
// 004a68e3  e838e9f5ff           call 0x405220
// 004a68e8  6a03                 push 3
// 004a68ea  d1ee                 shr esi, 1
// 004a68ec  56                   push esi
// 004a68ed  57                   push edi
// 004a68ee  50                   push eax
// 004a68ef  e80cd8f5ff           call 0x404100
// 004a68f4  8bc8                 mov ecx, eax
// 004a68f6  894df0               mov dword ptr [ebp - 0x10], ecx
// 004a68f9  85c9                 test ecx, ecx
// 004a68fb  7512                 jne 0x4a690f
// 004a68fd  8d4d0c               lea ecx, [ebp + 0xc]
// 004a6900  e85be1f5ff           call 0x404a60
// 004a6905  b80e000780           mov eax, 0x8007000e
// 004a690a  e987000000           jmp 0x4a6996
// 004a690f  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004a6912  33c0                 xor eax, eax
// 004a6914  85ff                 test edi, edi
// 004a6916  7459                 je 0x4a6971
// 004a6918  57                   push edi
// 004a6919  ffd3                 call ebx
// 004a691b  40                   inc eax
// 004a691c  6a02                 push 2
// 004a691e  50                   push eax
// 004a691f  894514               mov dword ptr [ebp + 0x14], eax
// 004a6922  8d4514               lea eax, [ebp + 0x14]
// 004a6925  50                   push eax
// 004a6926  e885d7f5ff           call 0x4040b0
// 004a692b  83c40c               add esp, 0xc
// 004a692e  85c0                 test eax, eax
// 004a6930  7ccb                 jl 0x4a68fd
// 004a6932  8b7514               mov esi, dword ptr [ebp + 0x14]
// 004a6935  81fe00040000         cmp esi, 0x400
// 004a693b  7f18                 jg 0x4a6955
// 004a693d  56                   push esi
// 004a693e  e82de4f5ff           call 0x404d70
// 004a6943  83c404               add esp, 4
// 004a6946  84c0                 test al, al
// 004a6948  740b                 je 0x4a6955
// 004a694a  8bc6                 mov eax, esi
// 004a694c  e8bfc94d00           call 0x983310
// 004a6951  8bc4                 mov eax, esp
// 004a6953  eb09                 jmp 0x4a695e
// 004a6955  56                   push esi
// 004a6956  8d4d0c               lea ecx, [ebp + 0xc]
// 004a6959  e8c2e8f5ff           call 0x405220
// 004a695e  6a03                 push 3
// 004a6960  d1ee                 shr esi, 1
// 004a6962  56                   push esi
// 004a6963  57                   push edi
// 004a6964  50                   push eax
// 004a6965  e896d7f5ff           call 0x404100
// 004a696a  85c0                 test eax, eax
// 004a696c  748f                 je 0x4a68fd
// 004a696e  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004a6971  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 004a6974  6a00                 push 0
// 004a6976  52                   push edx
// 004a6977  8b5518               mov edx, dword ptr [ebp + 0x18]
// 004a697a  52                   push edx
// 004a697b  50                   push eax
// 004a697c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004a697f  50                   push eax
// 004a6980  51                   push ecx
// 004a6981  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004a6984  51                   push ecx
// 004a6985  e836bcf8ff           call 0x4325c0
// 004a698a  8d4d0c               lea ecx, [ebp + 0xc]
// 004a698d  8bf0                 mov esi, eax
// 004a698f  e8cce0f5ff           call 0x404a60
// 004a6994  8bc6                 mov eax, esi
// 004a6996  8d65e4               lea esp, [ebp - 0x1c]
// 004a6999  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004a699c  64890d00000000       mov dword ptr fs:[0], ecx
// 004a69a3  5f                   pop edi
// 004a69a4  5e                   pop esi
// 004a69a5  5b                   pop ebx
// 004a69a6  8be5                 mov esp, ebp
// 004a69a8  5d                   pop ebp
// 004a69a9  c21800               ret 0x18
// copied from an identical function in another client (function ?AtlReportError@ATL@@YGJABU_GUID@@PBDK10J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll roc_espeon_atlreporterrorunwind59eab001a8c0d0a3.cpp