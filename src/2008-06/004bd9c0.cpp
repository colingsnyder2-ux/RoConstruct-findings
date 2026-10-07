// roc 2008-06 004bd9c0  unit: ProfiledRakPeer  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bd9c0
//
// 004bd9c0  8b4104               mov eax, dword ptr [ecx + 4]
// 004bd9c3  53                   push ebx
// 004bd9c4  8b5908               mov ebx, dword ptr [ecx + 8]
// 004bd9c7  3bc3                 cmp eax, ebx
// 004bd9c9  745d                 je 0x4bda28
// 004bd9cb  7706                 ja 0x4bd9d3
// 004bd9cd  8bd3                 mov edx, ebx
// 004bd9cf  2bd0                 sub edx, eax
// 004bd9d1  eb07                 jmp 0x4bd9da
// 004bd9d3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004bd9d6  2bd0                 sub edx, eax
// 004bd9d8  03d3                 add edx, ebx
// 004bd9da  57                   push edi
// 004bd9db  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004bd9df  3bfa                 cmp edi, edx
// 004bd9e1  7344                 jae 0x4bda27
// 004bd9e3  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004bd9e6  56                   push esi
// 004bd9e7  8d3438               lea esi, [eax + edi]
// 004bd9ea  3bf2                 cmp esi, edx
// 004bd9ec  7206                 jb 0x4bd9f4
// 004bd9ee  2bc2                 sub eax, edx
// 004bd9f0  03c7                 add eax, edi
// 004bd9f2  8bf0                 mov esi, eax
// 004bd9f4  8d4601               lea eax, [esi + 1]
// 004bd9f7  3bc2                 cmp eax, edx
// 004bd9f9  7502                 jne 0x4bd9fd
// 004bd9fb  33c0                 xor eax, eax
// 004bd9fd  3bc3                 cmp eax, ebx
// 004bd9ff  7417                 je 0x4bda18
// 004bda01  8b11                 mov edx, dword ptr [ecx]
// 004bda03  8b3c82               mov edi, dword ptr [edx + eax*4]
// 004bda06  893cb2               mov dword ptr [edx + esi*4], edi
// 004bda09  8bf0                 mov esi, eax
// 004bda0b  40                   inc eax
// 004bda0c  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 004bda0f  7502                 jne 0x4bda13
// 004bda11  33c0                 xor eax, eax
// 004bda13  3b4108               cmp eax, dword ptr [ecx + 8]
// 004bda16  75e9                 jne 0x4bda01
// 004bda18  8b4108               mov eax, dword ptr [ecx + 8]
// 004bda1b  5e                   pop esi
// 004bda1c  85c0                 test eax, eax
// 004bda1e  7503                 jne 0x4bda23
// 004bda20  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004bda23  48                   dec eax
// 004bda24  894108               mov dword ptr [ecx + 8], eax
// 004bda27  5f                   pop edi
// 004bda28  5b                   pop ebx
// 004bda29  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ?RemoveAtIndex@?$Queue@P6AHUThreadData@FileListTransfer@RakNet@@PA_NPAX@Z@DataStructures@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
