// roc 2009-06 005b9bb0  unit: seg_005b0000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9bb0
//
// 005b9bb0  55                   push ebp
// 005b9bb1  8bec                 mov ebp, esp
// 005b9bb3  51                   push ecx
// 005b9bb4  8b4508               mov eax, dword ptr [ebp + 8]
// 005b9bb7  3b450c               cmp eax, dword ptr [ebp + 0xc]
// 005b9bba  741a                 je 0x5b9bd6
// 005b9bbc  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b9bbf  8b11                 mov edx, dword ptr [ecx]
// 005b9bc1  8955fc               mov dword ptr [ebp - 4], edx
// 005b9bc4  8b4508               mov eax, dword ptr [ebp + 8]
// 005b9bc7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005b9bca  8b11                 mov edx, dword ptr [ecx]
// 005b9bcc  8910                 mov dword ptr [eax], edx
// 005b9bce  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b9bd1  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b9bd4  8908                 mov dword ptr [eax], ecx
// 005b9bd6  8be5                 mov esp, ebp
// 005b9bd8  5d                   pop ebp
// 005b9bd9  c3                   ret 
// copied from an identical function in another client (function ??$swap@PAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@std@@YAXAAPAV?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_boost_finish_239abb6d60853838.cpp