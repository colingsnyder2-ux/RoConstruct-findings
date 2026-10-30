// roc 2010-06 00897ab0  unit: CXTShadowHook  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897ab0
//
// 00897ab0  53                   push ebx
// 00897ab1  56                   push esi
// 00897ab2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00897ab6  57                   push edi
// 00897ab7  8bd9                 mov ebx, ecx
// 00897ab9  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00897abf  33ff                 xor edi, edi
// 00897ac1  3bcf                 cmp ecx, edi
// 00897ac3  740f                 je 0x897ad4
// 00897ac5  8b01                 mov eax, dword ptr [ecx]
// 00897ac7  8b5004               mov edx, dword ptr [eax + 4]
// 00897aca  6a01                 push 1
// 00897acc  ffd2                 call edx
// 00897ace  89be80000000         mov dword ptr [esi + 0x80], edi
// 00897ad4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00897ad7  3bcf                 cmp ecx, edi
// 00897ad9  740c                 je 0x897ae7
// 00897adb  8b01                 mov eax, dword ptr [ecx]
// 00897add  8b5004               mov edx, dword ptr [eax + 4]
// 00897ae0  6a01                 push 1
// 00897ae2  ffd2                 call edx
// 00897ae4  897e7c               mov dword ptr [esi + 0x7c], edi
// 00897ae7  897e58               mov dword ptr [esi + 0x58], edi
// 00897aea  897e68               mov dword ptr [esi + 0x68], edi
// 00897aed  397e20               cmp dword ptr [esi + 0x20], edi
// 00897af0  7408                 je 0x897afa
// 00897af2  57                   push edi
// 00897af3  8bce                 mov ecx, esi
// 00897af5  e88e01f1ff           call 0x7a7c88
// 00897afa  56                   push esi
// 00897afb  8bcb                 mov ecx, ebx
// 00897afd  e8eefdffff           call 0x8978f0
// 00897b02  56                   push esi
// 00897b03  8d4b1c               lea ecx, [ebx + 0x1c]
// 00897b06  e89577ffff           call 0x88f2a0
// 00897b0b  5f                   pop edi
// 00897b0c  5e                   pop esi
// 00897b0d  5b                   pop ebx
// 00897b0e  c20400               ret 4
// copied from an identical function in another client (function ?DestroyShadow@CXTShadowsManager@@AAEXPAVCXTShadowWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp