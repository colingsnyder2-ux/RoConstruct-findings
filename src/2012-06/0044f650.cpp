// roc 2012-06 0044f650  unit: boost::gregorian::Ubad_day_of_year::U?$error_info_injector::?$clone_impl  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044f650
//
// 0044f650  56                   push esi
// 0044f651  8bf1                 mov esi, ecx
// 0044f653  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0044f656  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044f659  03c8                 add ecx, eax
// 0044f65b  f6c103               test cl, 3
// 0044f65e  7514                 jne 0x44f674
// 0044f660  83c004               add eax, 4
// 0044f663  c1e802               shr eax, 2
// 0044f666  394614               cmp dword ptr [esi + 0x14], eax
// 0044f669  7709                 ja 0x44f674
// 0044f66b  6a01                 push 1
// 0044f66d  8bce                 mov ecx, esi
// 0044f66f  e88c7b0b00           call 0x507200
// 0044f674  8b4614               mov eax, dword ptr [esi + 0x14]
// 0044f677  53                   push ebx
// 0044f678  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0044f67b  035e1c               add ebx, dword ptr [esi + 0x1c]
// 0044f67e  57                   push edi
// 0044f67f  8bfb                 mov edi, ebx
// 0044f681  c1ef02               shr edi, 2
// 0044f684  3bc7                 cmp eax, edi
// 0044f686  7702                 ja 0x44f68a
// 0044f688  2bf8                 sub edi, eax
// 0044f68a  8b5610               mov edx, dword ptr [esi + 0x10]
// 0044f68d  833cba00             cmp dword ptr [edx + edi*4], 0
// 0044f691  7510                 jne 0x44f6a3
// 0044f693  6a10                 push 0x10
// 0044f695  e8802a5300           call 0x98211a
// 0044f69a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0044f69d  83c404               add esp, 4
// 0044f6a0  8904b9               mov dword ptr [ecx + edi*4], eax
// 0044f6a3  8b5610               mov edx, dword ptr [esi + 0x10]
// 0044f6a6  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0044f6a9  83e303               and ebx, 3
// 0044f6ac  8d0c98               lea ecx, [eax + ebx*4]
// 0044f6af  5f                   pop edi
// 0044f6b0  5b                   pop ebx
// 0044f6b1  85c9                 test ecx, ecx
// 0044f6b3  7414                 je 0x44f6c9
// 0044f6b5  8b542408             mov edx, dword ptr [esp + 8]
// 0044f6b9  8b02                 mov eax, dword ptr [edx]
// 0044f6bb  8901                 mov dword ptr [ecx], eax
// 0044f6bd  85c0                 test eax, eax
// 0044f6bf  7408                 je 0x44f6c9
// 0044f6c1  8b08                 mov ecx, dword ptr [eax]
// 0044f6c3  8b5104               mov edx, dword ptr [ecx + 4]
// 0044f6c6  50                   push eax
// 0044f6c7  ffd2                 call edx
// 0044f6c9  ff461c               inc dword ptr [esi + 0x1c]
// 0044f6cc  5e                   pop esi
// 0044f6cd  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$deque@V?$CComPtr@UIUnknown@@@ATL@@V?$allocator@V?$CComPtr@UIUnknown@@@ATL@@@std@@@std@@QAEXABV?$CComPtr@UIUnknown@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_outputdequecomptr7681cb2019cac6fe.cpp