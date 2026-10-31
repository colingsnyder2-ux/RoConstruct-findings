// roc 2009-12 004310d0  unit: COutputView  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004310d0
//
// 004310d0  56                   push esi
// 004310d1  8bf1                 mov esi, ecx
// 004310d3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004310d6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004310d9  03c8                 add ecx, eax
// 004310db  f6c103               test cl, 3
// 004310de  7514                 jne 0x4310f4
// 004310e0  83c004               add eax, 4
// 004310e3  c1e802               shr eax, 2
// 004310e6  394614               cmp dword ptr [esi + 0x14], eax
// 004310e9  7709                 ja 0x4310f4
// 004310eb  6a01                 push 1
// 004310ed  8bce                 mov ecx, esi
// 004310ef  e8ec8a2500           call 0x689be0
// 004310f4  8b4614               mov eax, dword ptr [esi + 0x14]
// 004310f7  53                   push ebx
// 004310f8  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 004310fb  035e1c               add ebx, dword ptr [esi + 0x1c]
// 004310fe  57                   push edi
// 004310ff  8bfb                 mov edi, ebx
// 00431101  c1ef02               shr edi, 2
// 00431104  3bc7                 cmp eax, edi
// 00431106  7702                 ja 0x43110a
// 00431108  2bf8                 sub edi, eax
// 0043110a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043110d  833cba00             cmp dword ptr [edx + edi*4], 0
// 00431111  7510                 jne 0x431123
// 00431113  6a10                 push 0x10
// 00431115  e846273c00           call 0x7f3860
// 0043111a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043111d  83c404               add esp, 4
// 00431120  8904b9               mov dword ptr [ecx + edi*4], eax
// 00431123  8b5610               mov edx, dword ptr [esi + 0x10]
// 00431126  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00431129  83e303               and ebx, 3
// 0043112c  8d0c98               lea ecx, [eax + ebx*4]
// 0043112f  5f                   pop edi
// 00431130  5b                   pop ebx
// 00431131  85c9                 test ecx, ecx
// 00431133  7414                 je 0x431149
// 00431135  8b542408             mov edx, dword ptr [esp + 8]
// 00431139  8b02                 mov eax, dword ptr [edx]
// 0043113b  8901                 mov dword ptr [ecx], eax
// 0043113d  85c0                 test eax, eax
// 0043113f  7408                 je 0x431149
// 00431141  8b08                 mov ecx, dword ptr [eax]
// 00431143  8b5104               mov edx, dword ptr [ecx + 4]
// 00431146  50                   push eax
// 00431147  ffd2                 call edx
// 00431149  ff461c               inc dword ptr [esi + 0x1c]
// 0043114c  5e                   pop esi
// 0043114d  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$deque@V?$CComPtr@UIUnknown@@@ATL@@V?$allocator@V?$CComPtr@UIUnknown@@@ATL@@@std@@@std@@QAEXABV?$CComPtr@UIUnknown@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_outputdequecomptr7681cb2019cac6fe.cpp