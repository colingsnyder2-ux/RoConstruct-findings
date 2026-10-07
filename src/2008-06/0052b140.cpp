// roc 2008-06 0052b140  unit: seg_00520000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b140
//
// 0052b140  51                   push ecx
// 0052b141  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052b144  53                   push ebx
// 0052b145  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0052b148  55                   push ebp
// 0052b149  8b6e08               mov ebp, dword ptr [esi + 8]
// 0052b14c  57                   push edi
// 0052b14d  0fafdd               imul ebx, ebp
// 0052b150  33ff                 xor edi, edi
// 0052b152  896c240c             mov dword ptr [esp + 0xc], ebp
// 0052b156  85c0                 test eax, eax
// 0052b158  7e7a                 jle 0x52b1d4
// 0052b15a  eb08                 jmp 0x52b164
// 0052b15c  8d642400             lea esp, [esp]
// 0052b160  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0052b164  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0052b167  2bc7                 sub eax, edi
// 0052b169  3bc8                 cmp ecx, eax
// 0052b16b  7d02                 jge 0x52b16f
// 0052b16d  8bc1                 mov eax, ecx
// 0052b16f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0052b172  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0052b175  03cf                 add ecx, edi
// 0052b177  2bd1                 sub edx, ecx
// 0052b179  3bc2                 cmp eax, edx
// 0052b17b  7c02                 jl 0x52b17f
// 0052b17d  8bc2                 mov eax, edx
// 0052b17f  8b5604               mov edx, dword ptr [esi + 4]
// 0052b182  2bd1                 sub edx, ecx
// 0052b184  3bc2                 cmp eax, edx
// 0052b186  7c02                 jl 0x52b18a
// 0052b188  8bc2                 mov eax, edx
// 0052b18a  85c0                 test eax, eax
// 0052b18c  7e46                 jle 0x52b1d4
// 0052b18e  0fafc5               imul eax, ebp
// 0052b191  807c241800           cmp byte ptr [esp + 0x18], 0
// 0052b196  8be8                 mov ebp, eax
// 0052b198  55                   push ebp
// 0052b199  53                   push ebx
// 0052b19a  7416                 je 0x52b1b2
// 0052b19c  8b06                 mov eax, dword ptr [esi]
// 0052b19e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0052b1a1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052b1a5  51                   push ecx
// 0052b1a6  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0052b1a9  8d5628               lea edx, [esi + 0x28]
// 0052b1ac  52                   push edx
// 0052b1ad  50                   push eax
// 0052b1ae  ffd1                 call ecx
// 0052b1b0  eb13                 jmp 0x52b1c5
// 0052b1b2  8b16                 mov edx, dword ptr [esi]
// 0052b1b4  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 0052b1b7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052b1bb  8d4628               lea eax, [esi + 0x28]
// 0052b1be  51                   push ecx
// 0052b1bf  50                   push eax
// 0052b1c0  8b00                 mov eax, dword ptr [eax]
// 0052b1c2  52                   push edx
// 0052b1c3  ffd0                 call eax
// 0052b1c5  037e14               add edi, dword ptr [esi + 0x14]
// 0052b1c8  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052b1cb  83c414               add esp, 0x14
// 0052b1ce  03dd                 add ebx, ebp
// 0052b1d0  3bf8                 cmp edi, eax
// 0052b1d2  7c8c                 jl 0x52b160
// 0052b1d4  5f                   pop edi
// 0052b1d5  5d                   pop ebp
// 0052b1d6  5b                   pop ebx
// 0052b1d7  59                   pop ecx
// 0052b1d8  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_sarray_io)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
