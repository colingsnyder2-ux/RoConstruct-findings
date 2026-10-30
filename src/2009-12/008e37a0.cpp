// roc 2009-12 008e37a0  unit: PAVCXTShadowWnd::?$CList  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e37a0
//
// 008e37a0  53                   push ebx
// 008e37a1  56                   push esi
// 008e37a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e37a6  57                   push edi
// 008e37a7  8bd9                 mov ebx, ecx
// 008e37a9  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 008e37af  33ff                 xor edi, edi
// 008e37b1  3bcf                 cmp ecx, edi
// 008e37b3  740f                 je 0x8e37c4
// 008e37b5  8b01                 mov eax, dword ptr [ecx]
// 008e37b7  8b5004               mov edx, dword ptr [eax + 4]
// 008e37ba  6a01                 push 1
// 008e37bc  ffd2                 call edx
// 008e37be  89be80000000         mov dword ptr [esi + 0x80], edi
// 008e37c4  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008e37c7  3bcf                 cmp ecx, edi
// 008e37c9  740c                 je 0x8e37d7
// 008e37cb  8b01                 mov eax, dword ptr [ecx]
// 008e37cd  8b5004               mov edx, dword ptr [eax + 4]
// 008e37d0  6a01                 push 1
// 008e37d2  ffd2                 call edx
// 008e37d4  897e7c               mov dword ptr [esi + 0x7c], edi
// 008e37d7  897e58               mov dword ptr [esi + 0x58], edi
// 008e37da  897e68               mov dword ptr [esi + 0x68], edi
// 008e37dd  397e20               cmp dword ptr [esi + 0x20], edi
// 008e37e0  7408                 je 0x8e37ea
// 008e37e2  57                   push edi
// 008e37e3  8bce                 mov ecx, esi
// 008e37e5  e85e03f1ff           call 0x7f3b48
// 008e37ea  56                   push esi
// 008e37eb  8bcb                 mov ecx, ebx
// 008e37ed  e8cefdffff           call 0x8e35c0
// 008e37f2  56                   push esi
// 008e37f3  8d4b1c               lea ecx, [ebx + 0x1c]
// 008e37f6  e88503feff           call 0x8c3b80
// 008e37fb  5f                   pop edi
// 008e37fc  5e                   pop esi
// 008e37fd  5b                   pop ebx
// 008e37fe  c20400               ret 4
// copied from an identical function in another client (function ?DestroyShadow@CXTShadowsManager@@AAEXPAVCXTShadowWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp