// roc 2009-06 00808cc0  unit: CXTShadowHook  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808cc0
//
// 00808cc0  53                   push ebx
// 00808cc1  56                   push esi
// 00808cc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00808cc6  57                   push edi
// 00808cc7  8bd9                 mov ebx, ecx
// 00808cc9  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00808ccf  33ff                 xor edi, edi
// 00808cd1  3bcf                 cmp ecx, edi
// 00808cd3  740f                 je 0x808ce4
// 00808cd5  8b01                 mov eax, dword ptr [ecx]
// 00808cd7  8b5004               mov edx, dword ptr [eax + 4]
// 00808cda  6a01                 push 1
// 00808cdc  ffd2                 call edx
// 00808cde  89be80000000         mov dword ptr [esi + 0x80], edi
// 00808ce4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00808ce7  3bcf                 cmp ecx, edi
// 00808ce9  740c                 je 0x808cf7
// 00808ceb  8b01                 mov eax, dword ptr [ecx]
// 00808ced  8b5004               mov edx, dword ptr [eax + 4]
// 00808cf0  6a01                 push 1
// 00808cf2  ffd2                 call edx
// 00808cf4  897e7c               mov dword ptr [esi + 0x7c], edi
// 00808cf7  897e58               mov dword ptr [esi + 0x58], edi
// 00808cfa  897e68               mov dword ptr [esi + 0x68], edi
// 00808cfd  397e20               cmp dword ptr [esi + 0x20], edi
// 00808d00  7408                 je 0x808d0a
// 00808d02  57                   push edi
// 00808d03  8bce                 mov ecx, esi
// 00808d05  e81600f1ff           call 0x718d20
// 00808d0a  56                   push esi
// 00808d0b  8bcb                 mov ecx, ebx
// 00808d0d  e8eefdffff           call 0x808b00
// 00808d12  56                   push esi
// 00808d13  8d4b1c               lea ecx, [ebx + 0x1c]
// 00808d16  e8b5cbfdff           call 0x7e58d0
// 00808d1b  5f                   pop edi
// 00808d1c  5e                   pop esi
// 00808d1d  5b                   pop ebx
// 00808d1e  c20400               ret 4
// copied from an identical function in another client (function ?DestroyShadow@CXTShadowsManager@@AAEXPAVCXTShadowWnd@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp