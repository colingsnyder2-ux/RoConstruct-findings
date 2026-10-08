// from server: 100% by auto
// roc 2011-06 0086bd90  unit: CXTThemeManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bd90
//
// 0086bd90  56                   push esi
// 0086bd91  57                   push edi
// 0086bd92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086bd96  8bf1                 mov esi, ecx
// 0086bd98  85ff                 test edi, edi
// 0086bd9a  742c                 je 0x86bdc8
// 0086bd9c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0086bd9f  85c0                 test eax, eax
// 0086bda1  7409                 je 0x86bdac
// 0086bda3  56                   push esi
// 0086bda4  8d4808               lea ecx, [eax + 8]
// 0086bda7  e8160d1600           call 0x9ccac2
// 0086bdac  57                   push edi
// 0086bdad  897e08               mov dword ptr [esi + 8], edi
// 0086bdb0  e8fbfeffff           call 0x86bcb0
// 0086bdb5  8bc8                 mov ecx, eax
// 0086bdb7  e854fcffff           call 0x86ba10
// 0086bdbc  56                   push esi
// 0086bdbd  8d4808               lea ecx, [eax + 8]
// 0086bdc0  894610               mov dword ptr [esi + 0x10], eax
// 0086bdc3  e8f40c1600           call 0x9ccabc
// 0086bdc8  5f                   pop edi
// 0086bdc9  5e                   pop esi
// 0086bdca  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?InitStyleHost@CXTThemeManagerStyleHost@@IAEXPAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
