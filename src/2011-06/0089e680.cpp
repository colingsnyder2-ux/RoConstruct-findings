// from server: 100% by auto
// roc 2011-06 0089e680  unit: CXTPKeyboardManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e680
//
// 0089e680  56                   push esi
// 0089e681  8b742408             mov esi, dword ptr [esp + 8]
// 0089e685  57                   push edi
// 0089e686  8bf9                 mov edi, ecx
// 0089e688  85f6                 test esi, esi
// 0089e68a  7d05                 jge 0x89e691
// 0089e68c  e879bcf6ff           call 0x80a30a
// 0089e691  3b7708               cmp esi, dword ptr [edi + 8]
// 0089e694  7c0b                 jl 0x89e6a1
// 0089e696  6aff                 push -1
// 0089e698  8d4601               lea eax, [esi + 1]
// 0089e69b  50                   push eax
// 0089e69c  e88ffeffff           call 0x89e530
// 0089e6a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089e6a5  8b08                 mov ecx, dword ptr [eax]
// 0089e6a7  c1e604               shl esi, 4
// 0089e6aa  037704               add esi, dword ptr [edi + 4]
// 0089e6ad  5f                   pop edi
// 0089e6ae  890e                 mov dword ptr [esi], ecx
// 0089e6b0  8b5004               mov edx, dword ptr [eax + 4]
// 0089e6b3  895604               mov dword ptr [esi + 4], edx
// 0089e6b6  8b4808               mov ecx, dword ptr [eax + 8]
// 0089e6b9  894e08               mov dword ptr [esi + 8], ecx
// 0089e6bc  8b500c               mov edx, dword ptr [eax + 0xc]
// 0089e6bf  89560c               mov dword ptr [esi + 0xc], edx
// 0089e6c2  5e                   pop esi
// 0089e6c3  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetAtGrow@?$CArray@UtagRECT@@AAU1@@@QAEXHAAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
