// roc 2011-06 00441420  unit: COutputView  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00441420
//
// 00441420  56                   push esi
// 00441421  8bf1                 mov esi, ecx
// 00441423  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00441426  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00441429  03c8                 add ecx, eax
// 0044142b  f6c103               test cl, 3
// 0044142e  7514                 jne 0x441444
// 00441430  83c004               add eax, 4
// 00441433  c1e802               shr eax, 2
// 00441436  394614               cmp dword ptr [esi + 0x14], eax
// 00441439  7709                 ja 0x441444
// 0044143b  6a01                 push 1
// 0044143d  8bce                 mov ecx, esi
// 0044143f  e82c0b3700           call 0x7b1f70
// 00441444  8b4614               mov eax, dword ptr [esi + 0x14]
// 00441447  53                   push ebx
// 00441448  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0044144b  035e1c               add ebx, dword ptr [esi + 0x1c]
// 0044144e  57                   push edi
// 0044144f  8bfb                 mov edi, ebx
// 00441451  c1ef02               shr edi, 2
// 00441454  3bc7                 cmp eax, edi
// 00441456  7702                 ja 0x44145a
// 00441458  2bf8                 sub edi, eax
// 0044145a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0044145d  833cba00             cmp dword ptr [edx + edi*4], 0
// 00441461  7510                 jne 0x441473
// 00441463  6a10                 push 0x10
// 00441465  e8f48b3c00           call 0x80a05e
// 0044146a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0044146d  83c404               add esp, 4
// 00441470  8904b9               mov dword ptr [ecx + edi*4], eax
// 00441473  8b5610               mov edx, dword ptr [esi + 0x10]
// 00441476  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00441479  83e303               and ebx, 3
// 0044147c  8d0c98               lea ecx, [eax + ebx*4]
// 0044147f  5f                   pop edi
// 00441480  5b                   pop ebx
// 00441481  85c9                 test ecx, ecx
// 00441483  7414                 je 0x441499
// 00441485  8b542408             mov edx, dword ptr [esp + 8]
// 00441489  8b02                 mov eax, dword ptr [edx]
// 0044148b  8901                 mov dword ptr [ecx], eax
// 0044148d  85c0                 test eax, eax
// 0044148f  7408                 je 0x441499
// 00441491  8b08                 mov ecx, dword ptr [eax]
// 00441493  8b5104               mov edx, dword ptr [ecx + 4]
// 00441496  50                   push eax
// 00441497  ffd2                 call edx
// 00441499  ff461c               inc dword ptr [esi + 0x1c]
// 0044149c  5e                   pop esi
// 0044149d  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$deque@V?$CComPtr@UIUnknown@@@ATL@@V?$allocator@V?$CComPtr@UIUnknown@@@ATL@@@std@@@std@@QAEXABV?$CComPtr@UIUnknown@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_outputdequecomptr7681cb2019cac6fe.cpp