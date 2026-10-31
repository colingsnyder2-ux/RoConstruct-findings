// roc 2010-06 00431710  unit: COutputView  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00431710
//
// 00431710  56                   push esi
// 00431711  8bf1                 mov esi, ecx
// 00431713  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00431716  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00431719  03c8                 add ecx, eax
// 0043171b  f6c103               test cl, 3
// 0043171e  7514                 jne 0x431734
// 00431720  83c004               add eax, 4
// 00431723  c1e802               shr eax, 2
// 00431726  394614               cmp dword ptr [esi + 0x14], eax
// 00431729  7709                 ja 0x431734
// 0043172b  6a01                 push 1
// 0043172d  8bce                 mov ecx, esi
// 0043172f  e8bcfcffff           call 0x4313f0
// 00431734  8b4614               mov eax, dword ptr [esi + 0x14]
// 00431737  53                   push ebx
// 00431738  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0043173b  035e1c               add ebx, dword ptr [esi + 0x1c]
// 0043173e  57                   push edi
// 0043173f  8bfb                 mov edi, ebx
// 00431741  c1ef02               shr edi, 2
// 00431744  3bc7                 cmp eax, edi
// 00431746  7702                 ja 0x43174a
// 00431748  2bf8                 sub edi, eax
// 0043174a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043174d  833cba00             cmp dword ptr [edx + edi*4], 0
// 00431751  7510                 jne 0x431763
// 00431753  6a10                 push 0x10
// 00431755  e846623700           call 0x7a79a0
// 0043175a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043175d  83c404               add esp, 4
// 00431760  8904b9               mov dword ptr [ecx + edi*4], eax
// 00431763  8b5610               mov edx, dword ptr [esi + 0x10]
// 00431766  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00431769  83e303               and ebx, 3
// 0043176c  8d0c98               lea ecx, [eax + ebx*4]
// 0043176f  5f                   pop edi
// 00431770  5b                   pop ebx
// 00431771  85c9                 test ecx, ecx
// 00431773  7414                 je 0x431789
// 00431775  8b542408             mov edx, dword ptr [esp + 8]
// 00431779  8b02                 mov eax, dword ptr [edx]
// 0043177b  8901                 mov dword ptr [ecx], eax
// 0043177d  85c0                 test eax, eax
// 0043177f  7408                 je 0x431789
// 00431781  8b08                 mov ecx, dword ptr [eax]
// 00431783  8b5104               mov edx, dword ptr [ecx + 4]
// 00431786  50                   push eax
// 00431787  ffd2                 call edx
// 00431789  ff461c               inc dword ptr [esi + 0x1c]
// 0043178c  5e                   pop esi
// 0043178d  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$deque@V?$CComPtr@UIUnknown@@@ATL@@V?$allocator@V?$CComPtr@UIUnknown@@@ATL@@@std@@@std@@QAEXABV?$CComPtr@UIUnknown@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_outputdequecomptr7681cb2019cac6fe.cpp