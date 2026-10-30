// roc 2009-06 0080fb30  unit: CXTPRibbonTab  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fb30
//
// 0080fb30  53                   push ebx
// 0080fb31  56                   push esi
// 0080fb32  57                   push edi
// 0080fb33  8bf9                 mov edi, ecx
// 0080fb35  33f6                 xor esi, esi
// 0080fb37  e884cbfdff           call 0x7ec6c0
// 0080fb3c  85c0                 test eax, eax
// 0080fb3e  7e35                 jle 0x80fb75
// 0080fb40  8b1dc0ed8900         mov ebx, dword ptr [0x89edc0]
// 0080fb46  85f6                 test esi, esi
// 0080fb48  7c44                 jl 0x80fb8e
// 0080fb4a  3b7708               cmp esi, dword ptr [edi + 8]
// 0080fb4d  7d3f                 jge 0x80fb8e
// 0080fb4f  8b4704               mov eax, dword ptr [edi + 4]
// 0080fb52  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080fb56  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0080fb59  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080fb5d  51                   push ecx
// 0080fb5e  83c010               add eax, 0x10
// 0080fb61  52                   push edx
// 0080fb62  50                   push eax
// 0080fb63  ffd3                 call ebx
// 0080fb65  85c0                 test eax, eax
// 0080fb67  7514                 jne 0x80fb7d
// 0080fb69  8bcf                 mov ecx, edi
// 0080fb6b  46                   inc esi
// 0080fb6c  e84fcbfdff           call 0x7ec6c0
// 0080fb71  3bf0                 cmp esi, eax
// 0080fb73  7cd1                 jl 0x80fb46
// 0080fb75  5f                   pop edi
// 0080fb76  5e                   pop esi
// 0080fb77  33c0                 xor eax, eax
// 0080fb79  5b                   pop ebx
// 0080fb7a  c20800               ret 8
// 0080fb7d  3b7708               cmp esi, dword ptr [edi + 8]
// 0080fb80  7d0c                 jge 0x80fb8e
// 0080fb82  8b4704               mov eax, dword ptr [edi + 4]
// 0080fb85  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0080fb88  5f                   pop edi
// 0080fb89  5e                   pop esi
// 0080fb8a  5b                   pop ebx
// 0080fb8b  c20800               ret 8
// 0080fb8e  e85191f0ff           call 0x718ce4
// copied from an identical function in another client (function ?HitTest@CXTPRibbonTabContextHeaders@@QBEPAVCXTPRibbonTabContextHeader@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp