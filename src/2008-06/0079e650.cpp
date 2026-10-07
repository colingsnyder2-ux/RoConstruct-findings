// roc 2008-06 0079e650  unit: CXTPScrollBase  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e650
//
// 0079e650  53                   push ebx
// 0079e651  56                   push esi
// 0079e652  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079e656  8b4634               mov eax, dword ptr [esi + 0x34]
// 0079e659  83785800             cmp dword ptr [eax + 0x58], 0
// 0079e65d  57                   push edi
// 0079e65e  8d7e04               lea edi, [esi + 4]
// 0079e661  8bdf                 mov ebx, edi
// 0079e663  740d                 je 0x79e672
// 0079e665  6a09                 push 9
// 0079e667  ff154c2d8000         call dword ptr [0x802d4c]
// 0079e66d  83c704               add edi, 4
// 0079e670  eb0b                 jmp 0x79e67d
// 0079e672  6a0a                 push 0xa
// 0079e674  ff154c2d8000         call dword ptr [0x802d4c]
// 0079e67a  8d5f04               lea ebx, [edi + 4]
// 0079e67d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0079e680  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0079e683  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0079e686  2bca                 sub ecx, edx
// 0079e688  03c9                 add ecx, ecx
// 0079e68a  03c9                 add ecx, ecx
// 0079e68c  03c9                 add ecx, ecx
// 0079e68e  2bd1                 sub edx, ecx
// 0079e690  8913                 mov dword ptr [ebx], edx
// 0079e692  8b5634               mov edx, dword ptr [esi + 0x34]
// 0079e695  8b5210               mov edx, dword ptr [edx + 0x10]
// 0079e698  03c0                 add eax, eax
// 0079e69a  2bd0                 sub edx, eax
// 0079e69c  8917                 mov dword ptr [edi], edx
// 0079e69e  8b5634               mov edx, dword ptr [esi + 0x34]
// 0079e6a1  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0079e6a4  03d1                 add edx, ecx
// 0079e6a6  895308               mov dword ptr [ebx + 8], edx
// 0079e6a9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0079e6ac  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0079e6af  03d0                 add edx, eax
// 0079e6b1  895708               mov dword ptr [edi + 8], edx
// 0079e6b4  5f                   pop edi
// 0079e6b5  5e                   pop esi
// 0079e6b6  5b                   pop ebx
// 0079e6b7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?CalcTrackDragRect@CXTPScrollBase@@IBEXPAUSCROLLBARTRACKINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
