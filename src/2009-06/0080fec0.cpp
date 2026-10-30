// roc 2009-06 0080fec0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fec0
//
// 0080fec0  53                   push ebx
// 0080fec1  56                   push esi
// 0080fec2  57                   push edi
// 0080fec3  8bf9                 mov edi, ecx
// 0080fec5  33f6                 xor esi, esi
// 0080fec7  e8f4c7fdff           call 0x7ec6c0
// 0080fecc  85c0                 test eax, eax
// 0080fece  7e31                 jle 0x80ff01
// 0080fed0  85f6                 test esi, esi
// 0080fed2  7c3c                 jl 0x80ff10
// 0080fed4  3b7708               cmp esi, dword ptr [edi + 8]
// 0080fed7  7d37                 jge 0x80ff10
// 0080fed9  8b4704               mov eax, dword ptr [edi + 4]
// 0080fedc  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0080fedf  85db                 test ebx, ebx
// 0080fee1  7412                 je 0x80fef5
// 0080fee3  8d4b08               lea ecx, [ebx + 8]
// 0080fee6  ff1510fd8900         call dword ptr [0x89fd10]
// 0080feec  53                   push ebx
// 0080feed  e8408bf0ff           call 0x718a32
// 0080fef2  83c404               add esp, 4
// 0080fef5  8bcf                 mov ecx, edi
// 0080fef7  46                   inc esi
// 0080fef8  e8c3c7fdff           call 0x7ec6c0
// 0080fefd  3bf0                 cmp esi, eax
// 0080feff  7ccf                 jl 0x80fed0
// 0080ff01  6aff                 push -1
// 0080ff03  6a00                 push 0
// 0080ff05  8bcf                 mov ecx, edi
// 0080ff07  e80426f4ff           call 0x752510
// 0080ff0c  5f                   pop edi
// 0080ff0d  5e                   pop esi
// 0080ff0e  5b                   pop ebx
// 0080ff0f  c3                   ret 
// 0080ff10  e8cf8df0ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonTabContextHeaders@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp