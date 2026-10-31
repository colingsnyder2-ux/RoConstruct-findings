// roc 2009-06 0042ffe0  unit: COutputView  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042ffe0
//
// 0042ffe0  56                   push esi
// 0042ffe1  8bf1                 mov esi, ecx
// 0042ffe3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0042ffe6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0042ffe9  03c8                 add ecx, eax
// 0042ffeb  f6c103               test cl, 3
// 0042ffee  7514                 jne 0x430004
// 0042fff0  83c004               add eax, 4
// 0042fff3  c1e802               shr eax, 2
// 0042fff6  394614               cmp dword ptr [esi + 0x14], eax
// 0042fff9  7709                 ja 0x430004
// 0042fffb  6a01                 push 1
// 0042fffd  8bce                 mov ecx, esi
// 0042ffff  e85c720b00           call 0x4e7260
// 00430004  8b4614               mov eax, dword ptr [esi + 0x14]
// 00430007  53                   push ebx
// 00430008  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0043000b  035e1c               add ebx, dword ptr [esi + 0x1c]
// 0043000e  57                   push edi
// 0043000f  8bfb                 mov edi, ebx
// 00430011  c1ef02               shr edi, 2
// 00430014  3bc7                 cmp eax, edi
// 00430016  7702                 ja 0x43001a
// 00430018  2bf8                 sub edi, eax
// 0043001a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043001d  833cba00             cmp dword ptr [edx + edi*4], 0
// 00430021  7510                 jne 0x430033
// 00430023  6a10                 push 0x10
// 00430025  e80e8a2e00           call 0x718a38
// 0043002a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043002d  83c404               add esp, 4
// 00430030  8904b9               mov dword ptr [ecx + edi*4], eax
// 00430033  8b5610               mov edx, dword ptr [esi + 0x10]
// 00430036  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00430039  83e303               and ebx, 3
// 0043003c  8d0c98               lea ecx, [eax + ebx*4]
// 0043003f  5f                   pop edi
// 00430040  5b                   pop ebx
// 00430041  85c9                 test ecx, ecx
// 00430043  7414                 je 0x430059
// 00430045  8b542408             mov edx, dword ptr [esp + 8]
// 00430049  8b02                 mov eax, dword ptr [edx]
// 0043004b  8901                 mov dword ptr [ecx], eax
// 0043004d  85c0                 test eax, eax
// 0043004f  7408                 je 0x430059
// 00430051  8b08                 mov ecx, dword ptr [eax]
// 00430053  8b5104               mov edx, dword ptr [ecx + 4]
// 00430056  50                   push eax
// 00430057  ffd2                 call edx
// 00430059  ff461c               inc dword ptr [esi + 0x1c]
// 0043005c  5e                   pop esi
// 0043005d  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$deque@V?$CComPtr@UIUnknown@@@ATL@@V?$allocator@V?$CComPtr@UIUnknown@@@ATL@@@std@@@std@@QAEXABV?$CComPtr@UIUnknown@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_outputdequecomptr7681cb2019cac6fe.cpp