// roc 2007-03 00519cd0  unit: seg_00510000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519cd0
//
// 00519cd0  51                   push ecx
// 00519cd1  8b4610               mov eax, dword ptr [esi + 0x10]
// 00519cd4  53                   push ebx
// 00519cd5  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00519cd8  55                   push ebp
// 00519cd9  8b6e08               mov ebp, dword ptr [esi + 8]
// 00519cdc  c1e507               shl ebp, 7
// 00519cdf  57                   push edi
// 00519ce0  0fafdd               imul ebx, ebp
// 00519ce3  33ff                 xor edi, edi
// 00519ce5  85c0                 test eax, eax
// 00519ce7  896c240c             mov dword ptr [esp + 0xc], ebp
// 00519ceb  7e77                 jle 0x519d64
// 00519ced  eb05                 jmp 0x519cf4
// 00519cef  90                   nop 
// 00519cf0  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00519cf4  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00519cf7  2bc7                 sub eax, edi
// 00519cf9  3bc8                 cmp ecx, eax
// 00519cfb  7d02                 jge 0x519cff
// 00519cfd  8bc1                 mov eax, ecx
// 00519cff  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00519d02  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00519d05  03cf                 add ecx, edi
// 00519d07  2bd1                 sub edx, ecx
// 00519d09  3bc2                 cmp eax, edx
// 00519d0b  7c02                 jl 0x519d0f
// 00519d0d  8bc2                 mov eax, edx
// 00519d0f  8b5604               mov edx, dword ptr [esi + 4]
// 00519d12  2bd1                 sub edx, ecx
// 00519d14  3bc2                 cmp eax, edx
// 00519d16  7c02                 jl 0x519d1a
// 00519d18  8bc2                 mov eax, edx
// 00519d1a  85c0                 test eax, eax
// 00519d1c  7e46                 jle 0x519d64
// 00519d1e  0fafc5               imul eax, ebp
// 00519d21  807c241800           cmp byte ptr [esp + 0x18], 0
// 00519d26  8be8                 mov ebp, eax
// 00519d28  55                   push ebp
// 00519d29  53                   push ebx
// 00519d2a  7416                 je 0x519d42
// 00519d2c  8b06                 mov eax, dword ptr [esi]
// 00519d2e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00519d31  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00519d35  51                   push ecx
// 00519d36  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00519d39  8d5628               lea edx, [esi + 0x28]
// 00519d3c  52                   push edx
// 00519d3d  50                   push eax
// 00519d3e  ffd1                 call ecx
// 00519d40  eb13                 jmp 0x519d55
// 00519d42  8b16                 mov edx, dword ptr [esi]
// 00519d44  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 00519d47  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00519d4b  8d4628               lea eax, [esi + 0x28]
// 00519d4e  51                   push ecx
// 00519d4f  50                   push eax
// 00519d50  8b00                 mov eax, dword ptr [eax]
// 00519d52  52                   push edx
// 00519d53  ffd0                 call eax
// 00519d55  037e14               add edi, dword ptr [esi + 0x14]
// 00519d58  8b4610               mov eax, dword ptr [esi + 0x10]
// 00519d5b  83c414               add esp, 0x14
// 00519d5e  03dd                 add ebx, ebp
// 00519d60  3bf8                 cmp edi, eax
// 00519d62  7c8c                 jl 0x519cf0
// 00519d64  5f                   pop edi
// 00519d65  5d                   pop ebp
// 00519d66  5b                   pop ebx
// 00519d67  59                   pop ecx
// 00519d68  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_barray_io)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
