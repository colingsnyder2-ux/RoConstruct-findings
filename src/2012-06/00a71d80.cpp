// roc 2012-06 00a71d80  unit: CXTPRibbonGroup  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71d80
//
// 00a71d80  57                   push edi
// 00a71d81  8bf9                 mov edi, ecx
// 00a71d83  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00a71d89  85c0                 test eax, eax
// 00a71d8b  7475                 je 0xa71e02
// 00a71d8d  56                   push esi
// 00a71d8e  33f6                 xor esi, esi
// 00a71d90  397004               cmp dword ptr [eax + 4], esi
// 00a71d93  7e30                 jle 0xa71dc5
// 00a71d95  85f6                 test esi, esi
// 00a71d97  7509                 jne 0xa71da2
// 00a71d99  8b00                 mov eax, dword ptr [eax]
// 00a71d9b  c7402c01000000       mov dword ptr [eax + 0x2c], 1
// 00a71da2  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 00a71da8  8b02                 mov eax, dword ptr [edx]
// 00a71daa  8bce                 mov ecx, esi
// 00a71dac  c1e104               shl ecx, 4
// 00a71daf  03ce                 add ecx, esi
// 00a71db1  8d0c88               lea ecx, [eax + ecx*4]
// 00a71db4  e827feffff           call 0xa71be0
// 00a71db9  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00a71dbf  46                   inc esi
// 00a71dc0  3b7004               cmp esi, dword ptr [eax + 4]
// 00a71dc3  7cd0                 jl 0xa71d95
// 00a71dc5  8b8f80000000         mov ecx, dword ptr [edi + 0x80]
// 00a71dcb  83791000             cmp dword ptr [ecx + 0x10], 0
// 00a71dcf  5e                   pop esi
// 00a71dd0  7413                 je 0xa71de5
// 00a71dd2  837f7000             cmp dword ptr [edi + 0x70], 0
// 00a71dd6  750d                 jne 0xa71de5
// 00a71dd8  8b575c               mov edx, dword ptr [edi + 0x5c]
// 00a71ddb  c7825802000001000000 mov dword ptr [edx + 0x258], 1
// 00a71de5  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00a71deb  8b08                 mov ecx, dword ptr [eax]
// 00a71ded  51                   push ecx
// 00a71dee  e8c705f1ff           call 0x9823ba
// 00a71df3  8b9780000000         mov edx, dword ptr [edi + 0x80]
// 00a71df9  52                   push edx
// 00a71dfa  e81503f1ff           call 0x982114
// 00a71dff  83c408               add esp, 8
// 00a71e02  5f                   pop edi
// 00a71e03  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnAfterCalcSize@CXTPRibbonGroup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroups.cpp
