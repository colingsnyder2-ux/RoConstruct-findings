// from server: 100% by auto
// roc 2007-08 0071d960  unit: CXTPScrollBase  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d960
//
// 0071d960  53                   push ebx
// 0071d961  56                   push esi
// 0071d962  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0071d966  8b4634               mov eax, dword ptr [esi + 0x34]
// 0071d969  83785800             cmp dword ptr [eax + 0x58], 0
// 0071d96d  57                   push edi
// 0071d96e  8d7e04               lea edi, [esi + 4]
// 0071d971  8bdf                 mov ebx, edi
// 0071d973  740d                 je 0x71d982
// 0071d975  6a09                 push 9
// 0071d977  ff15b8ed7700         call dword ptr [0x77edb8]
// 0071d97d  83c704               add edi, 4
// 0071d980  eb0b                 jmp 0x71d98d
// 0071d982  6a0a                 push 0xa
// 0071d984  ff15b8ed7700         call dword ptr [0x77edb8]
// 0071d98a  8d5f04               lea ebx, [edi + 4]
// 0071d98d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0071d990  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0071d993  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0071d996  2bca                 sub ecx, edx
// 0071d998  03c9                 add ecx, ecx
// 0071d99a  03c9                 add ecx, ecx
// 0071d99c  03c9                 add ecx, ecx
// 0071d99e  2bd1                 sub edx, ecx
// 0071d9a0  8913                 mov dword ptr [ebx], edx
// 0071d9a2  8b5634               mov edx, dword ptr [esi + 0x34]
// 0071d9a5  8b5210               mov edx, dword ptr [edx + 0x10]
// 0071d9a8  03c0                 add eax, eax
// 0071d9aa  2bd0                 sub edx, eax
// 0071d9ac  8917                 mov dword ptr [edi], edx
// 0071d9ae  8b5634               mov edx, dword ptr [esi + 0x34]
// 0071d9b1  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0071d9b4  03d1                 add edx, ecx
// 0071d9b6  895308               mov dword ptr [ebx + 8], edx
// 0071d9b9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0071d9bc  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0071d9bf  03d0                 add edx, eax
// 0071d9c1  895708               mov dword ptr [edi + 8], edx
// 0071d9c4  5f                   pop edi
// 0071d9c5  5e                   pop esi
// 0071d9c6  5b                   pop ebx
// 0071d9c7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?CalcTrackDragRect@CXTPScrollBase@@IBEXPAUSCROLLBARTRACKINFO@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
