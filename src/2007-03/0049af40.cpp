// roc 2007-03 0049af40  unit: seg_00490000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049af40
//
// 0049af40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049af44  85c9                 test ecx, ecx
// 0049af46  7434                 je 0x49af7c
// 0049af48  803900               cmp byte ptr [ecx], 0
// 0049af4b  742f                 je 0x49af7c
// 0049af4d  8bc1                 mov eax, ecx
// 0049af4f  56                   push esi
// 0049af50  8d7001               lea esi, [eax + 1]
// 0049af53  8a10                 mov dl, byte ptr [eax]
// 0049af55  83c001               add eax, 1
// 0049af58  84d2                 test dl, dl
// 0049af5a  75f7                 jne 0x49af53
// 0049af5c  2bc6                 sub eax, esi
// 0049af5e  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 0049af62  80fa5c               cmp dl, 0x5c
// 0049af65  5e                   pop esi
// 0049af66  7506                 jne 0x49af6e
// 0049af68  c64408ff2f           mov byte ptr [eax + ecx - 1], 0x2f
// 0049af6d  c3                   ret 
// 0049af6e  80fa2f               cmp dl, 0x2f
// 0049af71  7409                 je 0x49af7c
// 0049af73  c604082f             mov byte ptr [eax + ecx], 0x2f
// 0049af77  c644080100           mov byte ptr [eax + ecx + 1], 0
// 0049af7c  c3                   ret 
// library rbxgs-raknet/FileOperations.cpp (function ?AddSlash@@YAXPAD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileOperations.cpp
