// roc 2011-06 008649b0  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008649b0
//
// 008649b0  56                   push esi
// 008649b1  8bf1                 mov esi, ecx
// 008649b3  8b06                 mov eax, dword ptr [esi]
// 008649b5  8b5048               mov edx, dword ptr [eax + 0x48]
// 008649b8  ffd2                 call edx
// 008649ba  83f802               cmp eax, 2
// 008649bd  740d                 je 0x8649cc
// 008649bf  8b06                 mov eax, dword ptr [esi]
// 008649c1  8b5048               mov edx, dword ptr [eax + 0x48]
// 008649c4  8bce                 mov ecx, esi
// 008649c6  ffd2                 call edx
// 008649c8  85c0                 test eax, eax
// 008649ca  750c                 jne 0x8649d8
// 008649cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 008649d0  2b442408             sub eax, dword ptr [esp + 8]
// 008649d4  5e                   pop esi
// 008649d5  c21000               ret 0x10
// 008649d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 008649dc  2b44240c             sub eax, dword ptr [esp + 0xc]
// 008649e0  5e                   pop esi
// 008649e1  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
