// from server: 100% by auto
// roc 2007-08 0071d2f0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d2f0
//
// 0071d2f0  53                   push ebx
// 0071d2f1  55                   push ebp
// 0071d2f2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0071d2f6  56                   push esi
// 0071d2f7  57                   push edi
// 0071d2f8  8bf9                 mov edi, ecx
// 0071d2fa  8b07                 mov eax, dword ptr [edi]
// 0071d2fc  8b5024               mov edx, dword ptr [eax + 0x24]
// 0071d2ff  55                   push ebp
// 0071d300  ffd2                 call edx
// 0071d302  8b5d60               mov ebx, dword ptr [ebp + 0x60]
// 0071d305  396b08               cmp dword ptr [ebx + 8], ebp
// 0071d308  8bf0                 mov esi, eax
// 0071d30a  7511                 jne 0x71d31d
// 0071d30c  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0071d312  83feff               cmp esi, -1
// 0071d315  7506                 jne 0x71d31d
// 0071d317  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0071d31d  83bf1802000000       cmp dword ptr [edi + 0x218], 0
// 0071d324  745a                 je 0x71d380
// 0071d326  e845bcf4ff           call 0x668f70
// 0071d32b  8be8                 mov ebp, eax
// 0071d32d  8b03                 mov eax, dword ptr [ebx]
// 0071d32f  8b5048               mov edx, dword ptr [eax + 0x48]
// 0071d332  8bcb                 mov ecx, ebx
// 0071d334  ffd2                 call edx
// 0071d336  50                   push eax
// 0071d337  56                   push esi
// 0071d338  682c010000           push 0x12c
// 0071d33d  68ffffff00           push 0xffffff
// 0071d342  56                   push esi
// 0071d343  8bcd                 mov ecx, ebp
// 0071d345  e886b3f4ff           call 0x6686d0
// 0071d34a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071d34e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0071d352  50                   push eax
// 0071d353  83ec10               sub esp, 0x10
// 0071d356  8bc4                 mov eax, esp
// 0071d358  8908                 mov dword ptr [eax], ecx
// 0071d35a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0071d35e  895004               mov dword ptr [eax + 4], edx
// 0071d361  8b542440             mov edx, dword ptr [esp + 0x40]
// 0071d365  894808               mov dword ptr [eax + 8], ecx
// 0071d368  89500c               mov dword ptr [eax + 0xc], edx
// 0071d36b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071d36f  50                   push eax
// 0071d370  8bcf                 mov ecx, edi
// 0071d372  e899e2ffff           call 0x71b610
// 0071d377  8bc6                 mov eax, esi
// 0071d379  5f                   pop edi
// 0071d37a  5e                   pop esi
// 0071d37b  5d                   pop ebp
// 0071d37c  5b                   pop ebx
// 0071d37d  c21800               ret 0x18
// 0071d380  56                   push esi
// 0071d381  8d4c241c             lea ecx, [esp + 0x1c]
// 0071d385  51                   push ecx
// 0071d386  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071d38a  e82135f1ff           call 0x6308b0
// 0071d38f  5f                   pop edi
// 0071d390  8bc6                 mov eax, esi
// 0071d392  5e                   pop esi
// 0071d393  5d                   pop ebp
// 0071d394  5b                   pop ebx
// 0071d395  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetWhidbey@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
