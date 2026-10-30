// roc 2012-06 00a68980  unit: PAVCXTShadowWnd::?$CList  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68980
//
// 00a68980  53                   push ebx
// 00a68981  56                   push esi
// 00a68982  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a68986  57                   push edi
// 00a68987  8bd9                 mov ebx, ecx
// 00a68989  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00a6898f  33ff                 xor edi, edi
// 00a68991  3bcf                 cmp ecx, edi
// 00a68993  740f                 je 0xa689a4
// 00a68995  8b01                 mov eax, dword ptr [ecx]
// 00a68997  8b5004               mov edx, dword ptr [eax + 4]
// 00a6899a  6a01                 push 1
// 00a6899c  ffd2                 call edx
// 00a6899e  89be80000000         mov dword ptr [esi + 0x80], edi
// 00a689a4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00a689a7  3bcf                 cmp ecx, edi
// 00a689a9  740c                 je 0xa689b7
// 00a689ab  8b01                 mov eax, dword ptr [ecx]
// 00a689ad  8b5004               mov edx, dword ptr [eax + 4]
// 00a689b0  6a01                 push 1
// 00a689b2  ffd2                 call edx
// 00a689b4  897e7c               mov dword ptr [esi + 0x7c], edi
// 00a689b7  897e58               mov dword ptr [esi + 0x58], edi
// 00a689ba  897e68               mov dword ptr [esi + 0x68], edi
// 00a689bd  397e20               cmp dword ptr [esi + 0x20], edi
// 00a689c0  7408                 je 0xa689ca
// 00a689c2  57                   push edi
// 00a689c3  8bce                 mov ecx, esi
// 00a689c5  e8daa0f1ff           call 0x982aa4
// 00a689ca  56                   push esi
// 00a689cb  8bcb                 mov ecx, ebx
// 00a689cd  e8cefdffff           call 0xa687a0
// 00a689d2  56                   push esi
// 00a689d3  8d4b1c               lea ecx, [ebx + 0x1c]
// 00a689d6  e885fcfdff           call 0xa48660
// 00a689db  5f                   pop edi
// 00a689dc  5e                   pop esi
// 00a689dd  5b                   pop ebx
// 00a689de  c20400               ret 4
// copied from an identical function in another client (function ?DestroyShadow@CXTShadowsManager@@AAEXPAVCXTShadowWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp