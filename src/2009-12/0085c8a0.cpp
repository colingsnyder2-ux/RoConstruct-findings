// roc 2009-12 0085c8a0  unit: CXTPDockingPane  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c8a0
//
// 0085c8a0  56                   push esi
// 0085c8a1  57                   push edi
// 0085c8a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085c8a6  8b4724               mov eax, dword ptr [edi + 0x24]
// 0085c8a9  8bf1                 mov esi, ecx
// 0085c8ab  894624               mov dword ptr [esi + 0x24], eax
// 0085c8ae  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0085c8b1  8d97c0000000         lea edx, [edi + 0xc0]
// 0085c8b7  894e28               mov dword ptr [esi + 0x28], ecx
// 0085c8ba  52                   push edx
// 0085c8bb  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0085c8c1  ff1538d59800         call dword ptr [0x98d538]
// 0085c8c7  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0085c8cd  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0085c8d3  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 0085c8d9  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0085c8df  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 0085c8e5  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 0085c8eb  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0085c8f1  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 0085c8f7  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 0085c8fd  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 0085c903  8b97cc000000         mov edx, dword ptr [edi + 0xcc]
// 0085c909  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0085c90f  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 0085c915  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0085c91b  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 0085c921  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 0085c927  8b97d8000000         mov edx, dword ptr [edi + 0xd8]
// 0085c92d  5f                   pop edi
// 0085c92e  8996d8000000         mov dword ptr [esi + 0xd8], edx
// 0085c934  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0085c93e  5e                   pop esi
// 0085c93f  c20400               ret 4
// copied from an identical function in another client (function ?Copy@CXTPDockingPane@@MAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp