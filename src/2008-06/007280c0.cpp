// roc 2008-06 007280c0  unit: CXTPRibbonTheme  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007280c0
//
// 007280c0  56                   push esi
// 007280c1  8b742408             mov esi, dword ptr [esp + 8]
// 007280c5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007280cb  57                   push edi
// 007280cc  8bf9                 mov edi, ecx
// 007280ce  83f8ff               cmp eax, -1
// 007280d1  750f                 jne 0x7280e2
// 007280d3  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007280d9  85c9                 test ecx, ecx
// 007280db  7405                 je 0x7280e2
// 007280dd  e8de36f8ff           call 0x6ab7c0
// 007280e2  85c0                 test eax, eax
// 007280e4  750e                 jne 0x7280f4
// 007280e6  6a0f                 push 0xf
// 007280e8  8bcf                 mov ecx, edi
// 007280ea  e8815ff8ff           call 0x6ae070
// 007280ef  5f                   pop edi
// 007280f0  5e                   pop esi
// 007280f1  c20400               ret 4
// 007280f4  8b06                 mov eax, dword ptr [esi]
// 007280f6  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007280f9  8bce                 mov ecx, esi
// 007280fb  ffd2                 call edx
// 007280fd  85c0                 test eax, eax
// 007280ff  740e                 je 0x72810f
// 00728101  6a05                 push 5
// 00728103  8bcf                 mov ecx, edi
// 00728105  e8665ff8ff           call 0x6ae070
// 0072810a  5f                   pop edi
// 0072810b  5e                   pop esi
// 0072810c  c20400               ret 4
// 0072810f  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00728115  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0072811c  750e                 jne 0x72812c
// 0072811e  6a29                 push 0x29
// 00728120  8bcf                 mov ecx, edi
// 00728122  e8495ff8ff           call 0x6ae070
// 00728127  5f                   pop edi
// 00728128  5e                   pop esi
// 00728129  c20400               ret 4
// 0072812c  8b8778060000         mov eax, dword ptr [edi + 0x678]
// 00728132  5f                   pop edi
// 00728133  5e                   pop esi
// 00728134  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetControlEditBackColor@CXTPRibbonTheme@@MAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
