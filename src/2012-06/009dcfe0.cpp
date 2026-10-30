// roc 2012-06 009dcfe0  unit: CXTPControlTabWorkspace  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcfe0
//
// 009dcfe0  56                   push esi
// 009dcfe1  8bf1                 mov esi, ecx
// 009dcfe3  8b06                 mov eax, dword ptr [esi]
// 009dcfe5  8b5048               mov edx, dword ptr [eax + 0x48]
// 009dcfe8  ffd2                 call edx
// 009dcfea  83f802               cmp eax, 2
// 009dcfed  740d                 je 0x9dcffc
// 009dcfef  8b06                 mov eax, dword ptr [esi]
// 009dcff1  8b5048               mov edx, dword ptr [eax + 0x48]
// 009dcff4  8bce                 mov ecx, esi
// 009dcff6  ffd2                 call edx
// 009dcff8  85c0                 test eax, eax
// 009dcffa  750c                 jne 0x9dd008
// 009dcffc  8b442410             mov eax, dword ptr [esp + 0x10]
// 009dd000  2b442408             sub eax, dword ptr [esp + 8]
// 009dd004  5e                   pop esi
// 009dd005  c21000               ret 0x10
// 009dd008  8b442414             mov eax, dword ptr [esp + 0x14]
// 009dd00c  2b44240c             sub eax, dword ptr [esp + 0xc]
// 009dd010  5e                   pop esi
// 009dd011  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetRectLength@CXTPTabManager@@QBEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
