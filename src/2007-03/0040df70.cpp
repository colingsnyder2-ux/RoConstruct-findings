// roc 2007-03 0040df70  unit: seg_00400000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040df70
//
// 0040df70  8b442404             mov eax, dword ptr [esp + 4]
// 0040df74  53                   push ebx
// 0040df75  8b18                 mov ebx, dword ptr [eax]
// 0040df77  57                   push edi
// 0040df78  8bf9                 mov edi, ecx
// 0040df7a  3b1f                 cmp ebx, dword ptr [edi]
// 0040df7c  7444                 je 0x40dfc2
// 0040df7e  85db                 test ebx, ebx
// 0040df80  740c                 je 0x40df8e
// 0040df82  8d4b04               lea ecx, [ebx + 4]
// 0040df85  ba01000000           mov edx, 1
// 0040df8a  f00fc111             lock xadd dword ptr [ecx], edx
// 0040df8e  56                   push esi
// 0040df8f  8b37                 mov esi, dword ptr [edi]
// 0040df91  85f6                 test esi, esi
// 0040df93  742a                 je 0x40dfbf
// 0040df95  8d4604               lea eax, [esi + 4]
// 0040df98  83c9ff               or ecx, 0xffffffff
// 0040df9b  f00fc108             lock xadd dword ptr [eax], ecx
// 0040df9f  751e                 jne 0x40dfbf
// 0040dfa1  8b16                 mov edx, dword ptr [esi]
// 0040dfa3  8b4204               mov eax, dword ptr [edx + 4]
// 0040dfa6  8bce                 mov ecx, esi
// 0040dfa8  ffd0                 call eax
// 0040dfaa  8d4e08               lea ecx, [esi + 8]
// 0040dfad  83caff               or edx, 0xffffffff
// 0040dfb0  f00fc111             lock xadd dword ptr [ecx], edx
// 0040dfb4  7509                 jne 0x40dfbf
// 0040dfb6  8b06                 mov eax, dword ptr [esi]
// 0040dfb8  8b5008               mov edx, dword ptr [eax + 8]
// 0040dfbb  8bce                 mov ecx, esi
// 0040dfbd  ffd2                 call edx
// 0040dfbf  891f                 mov dword ptr [edi], ebx
// 0040dfc1  5e                   pop esi
// 0040dfc2  8bc7                 mov eax, edi
// 0040dfc4  5f                   pop edi
// 0040dfc5  5b                   pop ebx
// 0040dfc6  c20400               ret 4
// library rbxgs/gui\GUI.cpp (function ??4shared_count@detail@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
