// from server: 100% by auto
// roc 2008-06 00701e40  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701e40
//
// 00701e40  56                   push esi
// 00701e41  8bf1                 mov esi, ecx
// 00701e43  8b06                 mov eax, dword ptr [esi]
// 00701e45  8b5048               mov edx, dword ptr [eax + 0x48]
// 00701e48  ffd2                 call edx
// 00701e4a  83f802               cmp eax, 2
// 00701e4d  740d                 je 0x701e5c
// 00701e4f  8b06                 mov eax, dword ptr [esi]
// 00701e51  8b5048               mov edx, dword ptr [eax + 0x48]
// 00701e54  8bce                 mov ecx, esi
// 00701e56  ffd2                 call edx
// 00701e58  85c0                 test eax, eax
// 00701e5a  750c                 jne 0x701e68
// 00701e5c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00701e60  2b442408             sub eax, dword ptr [esp + 8]
// 00701e64  5e                   pop esi
// 00701e65  c21000               ret 0x10
// 00701e68  8b442414             mov eax, dword ptr [esp + 0x14]
// 00701e6c  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00701e70  5e                   pop esi
// 00701e71  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
