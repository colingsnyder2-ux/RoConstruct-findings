// from server: 100% by auto
// roc 2007-08 00707e10  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00707e10
//
// 00707e10  53                   push ebx
// 00707e11  56                   push esi
// 00707e12  57                   push edi
// 00707e13  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00707e17  8b5f04               mov ebx, dword ptr [edi + 4]
// 00707e1a  85db                 test ebx, ebx
// 00707e1c  8bf1                 mov esi, ecx
// 00707e1e  744c                 je 0x707e6c
// 00707e20  8b06                 mov eax, dword ptr [esi]
// 00707e22  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00707e25  55                   push ebp
// 00707e26  57                   push edi
// 00707e27  ffd2                 call edx
// 00707e29  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00707e2c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00707e30  8b7f5c               mov edi, dword ptr [edi + 0x5c]
// 00707e33  8d5101               lea edx, [ecx + 1]
// 00707e36  0fafd0               imul edx, eax
// 00707e39  8d542a01             lea edx, [edx + ebp + 1]
// 00707e3d  8bef                 mov ebp, edi
// 00707e3f  2be9                 sub ebp, ecx
// 00707e41  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00707e45  83ed01               sub ebp, 1
// 00707e48  0fafe8               imul ebp, eax
// 00707e4b  2bcd                 sub ecx, ebp
// 00707e4d  03c2                 add eax, edx
// 00707e4f  3bc1                 cmp eax, ecx
// 00707e51  5d                   pop ebp
// 00707e52  7e02                 jle 0x707e56
// 00707e54  8bc8                 mov ecx, eax
// 00707e56  83c7ff               add edi, -1
// 00707e59  397b2c               cmp dword ptr [ebx + 0x2c], edi
// 00707e5c  7516                 jne 0x707e74
// 00707e5e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00707e61  83783802             cmp dword ptr [eax + 0x38], 2
// 00707e65  740d                 je 0x707e74
// 00707e67  83e901               sub ecx, 1
// 00707e6a  eb08                 jmp 0x707e74
// 00707e6c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00707e70  8b542418             mov edx, dword ptr [esp + 0x18]
// 00707e74  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00707e77  83783802             cmp dword ptr [eax + 0x38], 2
// 00707e7b  740d                 je 0x707e8a
// 00707e7d  b801000000           mov eax, 1
// 00707e82  01442414             add dword ptr [esp + 0x14], eax
// 00707e86  2944241c             sub dword ptr [esp + 0x1c], eax
// 00707e8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00707e8e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00707e92  8930                 mov dword ptr [eax], esi
// 00707e94  895004               mov dword ptr [eax + 4], edx
// 00707e97  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00707e9b  5f                   pop edi
// 00707e9c  5e                   pop esi
// 00707e9d  895008               mov dword ptr [eax + 8], edx
// 00707ea0  89480c               mov dword ptr [eax + 0xc], ecx
// 00707ea3  5b                   pop ebx
// 00707ea4  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
