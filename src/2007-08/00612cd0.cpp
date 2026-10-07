// roc 2007-08 00612cd0  unit: seg_00610000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612cd0
//
// 00612cd0  55                   push ebp
// 00612cd1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00612cd5  8d4701               lea eax, [edi + 1]
// 00612cd8  83f8ed               cmp eax, -0x13
// 00612cdb  56                   push esi
// 00612cdc  7609                 jbe 0x612ce7
// 00612cde  53                   push ebx
// 00612cdf  e8ec0c0000           call 0x6139d0
// 00612ce4  83c404               add esp, 4
// 00612ce7  8d4f11               lea ecx, [edi + 0x11]
// 00612cea  51                   push ecx
// 00612ceb  6a00                 push 0
// 00612ced  6a00                 push 0
// 00612cef  53                   push ebx
// 00612cf0  e8fb0c0000           call 0x6139f0
// 00612cf5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00612cf9  8bf0                 mov esi, eax
// 00612cfb  897e0c               mov dword ptr [esi + 0xc], edi
// 00612cfe  896e08               mov dword ptr [esi + 8], ebp
// 00612d01  8b5310               mov edx, dword ptr [ebx + 0x10]
// 00612d04  8a4214               mov al, byte ptr [edx + 0x14]
// 00612d07  57                   push edi
// 00612d08  51                   push ecx
// 00612d09  8d5610               lea edx, [esi + 0x10]
// 00612d0c  2403                 and al, 3
// 00612d0e  52                   push edx
// 00612d0f  884605               mov byte ptr [esi + 5], al
// 00612d12  c6460404             mov byte ptr [esi + 4], 4
// 00612d16  c6460600             mov byte ptr [esi + 6], 0
// 00612d1a  e82de00100           call 0x630d4c
// 00612d1f  c6443e1000           mov byte ptr [esi + edi + 0x10], 0
// 00612d24  8b4310               mov eax, dword ptr [ebx + 0x10]
// 00612d27  8b4808               mov ecx, dword ptr [eax + 8]
// 00612d2a  8b10                 mov edx, dword ptr [eax]
// 00612d2c  83e901               sub ecx, 1
// 00612d2f  23e9                 and ebp, ecx
// 00612d31  8b0caa               mov ecx, dword ptr [edx + ebp*4]
// 00612d34  890e                 mov dword ptr [esi], ecx
// 00612d36  8b10                 mov edx, dword ptr [eax]
// 00612d38  8934aa               mov dword ptr [edx + ebp*4], esi
// 00612d3b  83400401             add dword ptr [eax + 4], 1
// 00612d3f  8b4804               mov ecx, dword ptr [eax + 4]
// 00612d42  8b4008               mov eax, dword ptr [eax + 8]
// 00612d45  83c41c               add esp, 0x1c
// 00612d48  3bc8                 cmp ecx, eax
// 00612d4a  7613                 jbe 0x612d5f
// 00612d4c  3dfeffff3f           cmp eax, 0x3ffffffe
// 00612d51  7f0c                 jg 0x612d5f
// 00612d53  03c0                 add eax, eax
// 00612d55  50                   push eax
// 00612d56  53                   push ebx
// 00612d57  e8b4feffff           call 0x612c10
// 00612d5c  83c408               add esp, 8
// 00612d5f  8bc6                 mov eax, esi
// 00612d61  5e                   pop esi
// 00612d62  5d                   pop ebp
// 00612d63  c3                   ret 
// library lua-5.1.4/lstring.c (function _newlstr)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
