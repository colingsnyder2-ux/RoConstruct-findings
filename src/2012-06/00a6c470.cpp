// from server: 100% by auto
// roc 2012-06 00a6c470  unit: CXTPScrollBase  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c470
//
// 00a6c470  53                   push ebx
// 00a6c471  56                   push esi
// 00a6c472  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a6c476  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a6c479  83785800             cmp dword ptr [eax + 0x58], 0
// 00a6c47d  57                   push edi
// 00a6c47e  8d7e04               lea edi, [esi + 4]
// 00a6c481  8bdf                 mov ebx, edi
// 00a6c483  740d                 je 0xa6c492
// 00a6c485  6a09                 push 9
// 00a6c487  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a6c48d  83c704               add edi, 4
// 00a6c490  eb0b                 jmp 0xa6c49d
// 00a6c492  6a0a                 push 0xa
// 00a6c494  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a6c49a  8d5f04               lea ebx, [edi + 4]
// 00a6c49d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00a6c4a0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00a6c4a3  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a6c4a6  2bca                 sub ecx, edx
// 00a6c4a8  03c9                 add ecx, ecx
// 00a6c4aa  03c9                 add ecx, ecx
// 00a6c4ac  03c9                 add ecx, ecx
// 00a6c4ae  2bd1                 sub edx, ecx
// 00a6c4b0  8913                 mov dword ptr [ebx], edx
// 00a6c4b2  8b5634               mov edx, dword ptr [esi + 0x34]
// 00a6c4b5  8b5210               mov edx, dword ptr [edx + 0x10]
// 00a6c4b8  03c0                 add eax, eax
// 00a6c4ba  2bd0                 sub edx, eax
// 00a6c4bc  8917                 mov dword ptr [edi], edx
// 00a6c4be  8b5634               mov edx, dword ptr [esi + 0x34]
// 00a6c4c1  8b521c               mov edx, dword ptr [edx + 0x1c]
// 00a6c4c4  03d1                 add edx, ecx
// 00a6c4c6  895308               mov dword ptr [ebx + 8], edx
// 00a6c4c9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00a6c4cc  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00a6c4cf  03d0                 add edx, eax
// 00a6c4d1  895708               mov dword ptr [edi + 8], edx
// 00a6c4d4  5f                   pop edi
// 00a6c4d5  5e                   pop esi
// 00a6c4d6  5b                   pop ebx
// 00a6c4d7  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?CalcTrackDragRect@CXTPScrollBase@@IBEXPAUSCROLLBARTRACKINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
