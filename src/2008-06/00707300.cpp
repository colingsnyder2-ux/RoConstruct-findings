// roc 2008-06 00707300  unit: CXTPDockingPane  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707300
//
// 00707300  56                   push esi
// 00707301  57                   push edi
// 00707302  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00707306  8b4724               mov eax, dword ptr [edi + 0x24]
// 00707309  8bf1                 mov esi, ecx
// 0070730b  894624               mov dword ptr [esi + 0x24], eax
// 0070730e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00707311  8d97c0000000         lea edx, [edi + 0xc0]
// 00707317  894e28               mov dword ptr [esi + 0x28], ecx
// 0070731a  52                   push edx
// 0070731b  8d8ec0000000         lea ecx, [esi + 0xc0]
// 00707321  ff1544318000         call dword ptr [0x803144]
// 00707327  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 0070732d  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00707333  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 00707339  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0070733f  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 00707345  8996c8000000         mov dword ptr [esi + 0xc8], edx
// 0070734b  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 00707351  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 00707357  8b8fe4000000         mov ecx, dword ptr [edi + 0xe4]
// 0070735d  898ee4000000         mov dword ptr [esi + 0xe4], ecx
// 00707363  8b97cc000000         mov edx, dword ptr [edi + 0xcc]
// 00707369  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0070736f  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 00707375  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0070737b  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 00707381  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 00707387  8b97d8000000         mov edx, dword ptr [edi + 0xd8]
// 0070738d  5f                   pop edi
// 0070738e  8996d8000000         mov dword ptr [esi + 0xd8], edx
// 00707394  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0070739e  5e                   pop esi
// 0070739f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPane.cpp (function ?Copy@CXTPDockingPane@@MAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp
