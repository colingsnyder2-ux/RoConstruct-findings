// roc 2009-12 008f1200  unit: CXTPRibbonControlTab  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1200
//
// 008f1200  55                   push ebp
// 008f1201  8be9                 mov ebp, ecx
// 008f1203  57                   push edi
// 008f1204  8d8d84010000         lea ecx, [ebp + 0x184]
// 008f120a  e861e2fdff           call 0x8cf470
// 008f120f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f1213  33ff                 xor edi, edi
// 008f1215  39b8e0010000         cmp dword ptr [eax + 0x1e0], edi
// 008f121b  7e5e                 jle 0x8f127b
// 008f121d  53                   push ebx
// 008f121e  56                   push esi
// 008f121f  90                   nop 
// 008f1220  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f1224  57                   push edi
// 008f1225  e8a6ffffff           call 0x8f11d0
// 008f122a  8bd8                 mov ebx, eax
// 008f122c  8b13                 mov edx, dword ptr [ebx]
// 008f122e  8b02                 mov eax, dword ptr [edx]
// 008f1230  8bcb                 mov ecx, ebx
// 008f1232  ffd0                 call eax
// 008f1234  8bc8                 mov ecx, eax
// 008f1236  e82730f0ff           call 0x7f4262
// 008f123b  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 008f1241  8bf0                 mov esi, eax
// 008f1243  898e88000000         mov dword ptr [esi + 0x88], ecx
// 008f1249  8b9500010000         mov edx, dword ptr [ebp + 0x100]
// 008f124f  56                   push esi
// 008f1250  57                   push edi
// 008f1251  8d8d84010000         lea ecx, [ebp + 0x184]
// 008f1257  89968c000000         mov dword ptr [esi + 0x8c], edx
// 008f125d  e87ee2fdff           call 0x8cf4e0
// 008f1262  8b06                 mov eax, dword ptr [esi]
// 008f1264  8b5060               mov edx, dword ptr [eax + 0x60]
// 008f1267  53                   push ebx
// 008f1268  8bce                 mov ecx, esi
// 008f126a  ffd2                 call edx
// 008f126c  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f1270  47                   inc edi
// 008f1271  3bb8e0010000         cmp edi, dword ptr [eax + 0x1e0]
// 008f1277  7ca7                 jl 0x8f1220
// 008f1279  5e                   pop esi
// 008f127a  5b                   pop ebx
// 008f127b  5f                   pop edi
// 008f127c  5d                   pop ebp
// 008f127d  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPRibbonControlTab@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp