// from server: 100% by auto
// roc 2011-06 008f4110  unit: CXTPScrollBase  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f4110
//
// 008f4110  53                   push ebx
// 008f4111  56                   push esi
// 008f4112  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f4116  8b4634               mov eax, dword ptr [esi + 0x34]
// 008f4119  83785800             cmp dword ptr [eax + 0x58], 0
// 008f411d  57                   push edi
// 008f411e  8d7e04               lea edi, [esi + 4]
// 008f4121  8bdf                 mov ebx, edi
// 008f4123  740d                 je 0x8f4132
// 008f4125  6a09                 push 9
// 008f4127  ff15e019a400         call dword ptr [0xa419e0]
// 008f412d  83c704               add edi, 4
// 008f4130  eb0b                 jmp 0x8f413d
// 008f4132  6a0a                 push 0xa
// 008f4134  ff15e019a400         call dword ptr [0xa419e0]
// 008f413a  8d5f04               lea ebx, [edi + 4]
// 008f413d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008f4140  8b5118               mov edx, dword ptr [ecx + 0x18]
// 008f4143  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008f4146  2bca                 sub ecx, edx
// 008f4148  03c9                 add ecx, ecx
// 008f414a  03c9                 add ecx, ecx
// 008f414c  03c9                 add ecx, ecx
// 008f414e  2bd1                 sub edx, ecx
// 008f4150  8913                 mov dword ptr [ebx], edx
// 008f4152  8b5634               mov edx, dword ptr [esi + 0x34]
// 008f4155  8b5210               mov edx, dword ptr [edx + 0x10]
// 008f4158  03c0                 add eax, eax
// 008f415a  2bd0                 sub edx, eax
// 008f415c  8917                 mov dword ptr [edi], edx
// 008f415e  8b5634               mov edx, dword ptr [esi + 0x34]
// 008f4161  8b521c               mov edx, dword ptr [edx + 0x1c]
// 008f4164  03d1                 add edx, ecx
// 008f4166  895308               mov dword ptr [ebx + 8], edx
// 008f4169  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008f416c  8b5114               mov edx, dword ptr [ecx + 0x14]
// 008f416f  03d0                 add edx, eax
// 008f4171  895708               mov dword ptr [edi + 8], edx
// 008f4174  5f                   pop edi
// 008f4175  5e                   pop esi
// 008f4176  5b                   pop ebx
// 008f4177  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?CalcTrackDragRect@CXTPScrollBase@@IBEXPAUSCROLLBARTRACKINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
