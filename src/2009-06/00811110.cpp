// roc 2009-06 00811110  unit: CXTPRibbonGroup  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00811110
//
// 00811110  57                   push edi
// 00811111  8bf9                 mov edi, ecx
// 00811113  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00811119  85c0                 test eax, eax
// 0081111b  7475                 je 0x811192
// 0081111d  56                   push esi
// 0081111e  33f6                 xor esi, esi
// 00811120  397004               cmp dword ptr [eax + 4], esi
// 00811123  7e30                 jle 0x811155
// 00811125  85f6                 test esi, esi
// 00811127  7509                 jne 0x811132
// 00811129  8b00                 mov eax, dword ptr [eax]
// 0081112b  c7402c01000000       mov dword ptr [eax + 0x2c], 1
// 00811132  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 00811138  8b02                 mov eax, dword ptr [edx]
// 0081113a  8bce                 mov ecx, esi
// 0081113c  c1e104               shl ecx, 4
// 0081113f  03ce                 add ecx, esi
// 00811141  8d0c88               lea ecx, [eax + ecx*4]
// 00811144  e827feffff           call 0x810f70
// 00811149  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0081114f  46                   inc esi
// 00811150  3b7004               cmp esi, dword ptr [eax + 4]
// 00811153  7cd0                 jl 0x811125
// 00811155  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 0081115b  83791000             cmp dword ptr [ecx + 0x10], 0
// 0081115f  5e                   pop esi
// 00811160  7413                 je 0x811175
// 00811162  837f7000             cmp dword ptr [edi + 0x70], 0
// 00811166  750d                 jne 0x811175
// 00811168  8b575c               mov edx, dword ptr [edi + 0x5c]
// 0081116b  c7825802000001000000 mov dword ptr [edx + 0x258], 1
// 00811175  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0081117b  8b08                 mov ecx, dword ptr [eax]
// 0081117d  51                   push ecx
// 0081117e  e85b7bf0ff           call 0x718cde
// 00811183  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 00811189  52                   push edx
// 0081118a  e8a378f0ff           call 0x718a32
// 0081118f  83c408               add esp, 8
// 00811192  5f                   pop edi
// 00811193  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAfterCalcSize@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
