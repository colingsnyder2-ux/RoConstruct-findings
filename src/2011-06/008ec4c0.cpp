// from server: 100% by auto
// roc 2011-06 008ec4c0  unit: CXTColorPageCustom  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec4c0
//
// 008ec4c0  8b542404             mov edx, dword ptr [esp + 4]
// 008ec4c4  8bc1                 mov eax, ecx
// 008ec4c6  85d2                 test edx, edx
// 008ec4c8  7433                 je 0x8ec4fd
// 008ec4ca  56                   push esi
// 008ec4cb  57                   push edi
// 008ec4cc  8d7828               lea edi, [eax + 0x28]
// 008ec4cf  b917000000           mov ecx, 0x17
// 008ec4d4  8bf2                 mov esi, edx
// 008ec4d6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008ec4d8  8b4824               mov ecx, dword ptr [eax + 0x24]
// 008ec4db  85c9                 test ecx, ecx
// 008ec4dd  741c                 je 0x8ec4fb
// 008ec4df  8d74240c             lea esi, [esp + 0xc]
// 008ec4e3  56                   push esi
// 008ec4e4  52                   push edx
// 008ec4e5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008ec4ed  8b01                 mov eax, dword ptr [ecx]
// 008ec4ef  8b500c               mov edx, dword ptr [eax + 0xc]
// 008ec4f2  6a00                 push 0
// 008ec4f4  6844040000           push 0x444
// 008ec4f9  ffd2                 call edx
// 008ec4fb  5f                   pop edi
// 008ec4fc  5e                   pop esi
// 008ec4fd  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?SetDefaultCharFormat@CXTPRichRender@@QAEXPAU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
