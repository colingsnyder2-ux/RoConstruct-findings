// roc 2009-06 007bde40  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bde40
//
// 007bde40  53                   push ebx
// 007bde41  56                   push esi
// 007bde42  57                   push edi
// 007bde43  8bf9                 mov edi, ecx
// 007bde45  33f6                 xor esi, esi
// 007bde47  397724               cmp dword ptr [edi + 0x24], esi
// 007bde4a  7e2d                 jle 0x7bde79
// 007bde4c  8d642400             lea esp, [esp]
// 007bde50  85f6                 test esi, esi
// 007bde52  7c5d                 jl 0x7bdeb1
// 007bde54  3b7724               cmp esi, dword ptr [edi + 0x24]
// 007bde57  7d58                 jge 0x7bdeb1
// 007bde59  8b4720               mov eax, dword ptr [edi + 0x20]
// 007bde5c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 007bde5f  85db                 test ebx, ebx
// 007bde61  7410                 je 0x7bde73
// 007bde63  8bcb                 mov ecx, ebx
// 007bde65  e806f8ffff           call 0x7bd670
// 007bde6a  53                   push ebx
// 007bde6b  e8c2abf5ff           call 0x718a32
// 007bde70  83c404               add esp, 4
// 007bde73  46                   inc esi
// 007bde74  3b7724               cmp esi, dword ptr [edi + 0x24]
// 007bde77  7cd7                 jl 0x7bde50
// 007bde79  6aff                 push -1
// 007bde7b  6a00                 push 0
// 007bde7d  8d4f1c               lea ecx, [edi + 0x1c]
// 007bde80  e88b46f9ff           call 0x752510
// 007bde85  837f1000             cmp dword ptr [edi + 0x10], 0
// 007bde89  741b                 je 0x7bdea6
// 007bde8b  8b07                 mov eax, dword ptr [edi]
// 007bde8d  85c0                 test eax, eax
// 007bde8f  7415                 je 0x7bdea6
// 007bde91  83782000             cmp dword ptr [eax + 0x20], 0
// 007bde95  740f                 je 0x7bdea6
// 007bde97  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007bde9a  6843cd0a00           push 0xacd43
// 007bde9f  51                   push ecx
// 007bdea0  ff1584ee8900         call dword ptr [0x89ee84]
// 007bdea6  c7471000000000       mov dword ptr [edi + 0x10], 0
// 007bdead  5f                   pop edi
// 007bdeae  5e                   pop esi
// 007bdeaf  5b                   pop ebx
// 007bdeb0  c3                   ret 
// 007bdeb1  e82eaef5ff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAnimations@CXTPCommandBarAnimation@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp