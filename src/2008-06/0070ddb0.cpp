// from server: 100% by auto
// roc 2008-06 0070ddb0  unit: CXTThemeManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ddb0
//
// 0070ddb0  56                   push esi
// 0070ddb1  57                   push edi
// 0070ddb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0070ddb6  8bf1                 mov esi, ecx
// 0070ddb8  85ff                 test edi, edi
// 0070ddba  742c                 je 0x70dde8
// 0070ddbc  8b4610               mov eax, dword ptr [esi + 0x10]
// 0070ddbf  85c0                 test eax, eax
// 0070ddc1  7409                 je 0x70ddcc
// 0070ddc3  56                   push esi
// 0070ddc4  8d4808               lea ecx, [eax + 8]
// 0070ddc7  e82aea0a00           call 0x7bc7f6
// 0070ddcc  57                   push edi
// 0070ddcd  897e08               mov dword ptr [esi + 8], edi
// 0070ddd0  e8fbfeffff           call 0x70dcd0
// 0070ddd5  8bc8                 mov ecx, eax
// 0070ddd7  e854fcffff           call 0x70da30
// 0070dddc  56                   push esi
// 0070dddd  8d4808               lea ecx, [eax + 8]
// 0070dde0  894610               mov dword ptr [esi + 0x10], eax
// 0070dde3  e808ea0a00           call 0x7bc7f0
// 0070dde8  5f                   pop edi
// 0070dde9  5e                   pop esi
// 0070ddea  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ?InitStyleHost@CXTThemeManagerStyleHost@@IAEXPAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
