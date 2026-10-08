// from server: 100% by auto
// roc 2012-06 009e6d20  unit: CXTThemeManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6d20
//
// 009e6d20  56                   push esi
// 009e6d21  57                   push edi
// 009e6d22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e6d26  8bf1                 mov esi, ecx
// 009e6d28  85ff                 test edi, edi
// 009e6d2a  742c                 je 0x9e6d58
// 009e6d2c  8b4610               mov eax, dword ptr [esi + 0x10]
// 009e6d2f  85c0                 test eax, eax
// 009e6d31  7409                 je 0x9e6d3c
// 009e6d33  56                   push esi
// 009e6d34  8d4808               lea ecx, [eax + 8]
// 009e6d37  e8242e0b00           call 0xa99b60
// 009e6d3c  57                   push edi
// 009e6d3d  897e08               mov dword ptr [esi + 8], edi
// 009e6d40  e8fbfeffff           call 0x9e6c40
// 009e6d45  8bc8                 mov ecx, eax
// 009e6d47  e834fcffff           call 0x9e6980
// 009e6d4c  56                   push esi
// 009e6d4d  8d4808               lea ecx, [eax + 8]
// 009e6d50  894610               mov dword ptr [esi + 0x10], eax
// 009e6d53  e8022e0b00           call 0xa99b5a
// 009e6d58  5f                   pop edi
// 009e6d59  5e                   pop esi
// 009e6d5a  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?InitStyleHost@CXTThemeManagerStyleHost@@IAEXPAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
