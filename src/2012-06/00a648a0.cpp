// from server: 100% by auto
// roc 2012-06 00a648a0  unit: CXTColorPageCustom  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a648a0
//
// 00a648a0  8b542404             mov edx, dword ptr [esp + 4]
// 00a648a4  8bc1                 mov eax, ecx
// 00a648a6  85d2                 test edx, edx
// 00a648a8  7433                 je 0xa648dd
// 00a648aa  56                   push esi
// 00a648ab  57                   push edi
// 00a648ac  8d7828               lea edi, [eax + 0x28]
// 00a648af  b917000000           mov ecx, 0x17
// 00a648b4  8bf2                 mov esi, edx
// 00a648b6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00a648b8  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00a648bb  85c9                 test ecx, ecx
// 00a648bd  741c                 je 0xa648db
// 00a648bf  8d74240c             lea esi, [esp + 0xc]
// 00a648c3  56                   push esi
// 00a648c4  52                   push edx
// 00a648c5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00a648cd  8b01                 mov eax, dword ptr [ecx]
// 00a648cf  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a648d2  6a00                 push 0
// 00a648d4  6844040000           push 0x444
// 00a648d9  ffd2                 call edx
// 00a648db  5f                   pop edi
// 00a648dc  5e                   pop esi
// 00a648dd  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?SetDefaultCharFormat@CXTPRichRender@@QAEXPAU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
