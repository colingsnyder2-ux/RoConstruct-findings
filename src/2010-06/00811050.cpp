// roc 2010-06 00811050  unit: CXTPDockingPane  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811050
//
// 00811050  56                   push esi
// 00811051  57                   push edi
// 00811052  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00811056  8bf1                 mov esi, ecx
// 00811058  85ff                 test edi, edi
// 0081105a  7471                 je 0x8110cd
// 0081105c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0081105f  53                   push ebx
// 00811060  8d5e20               lea ebx, [esi + 0x20]
// 00811063  8bcb                 mov ecx, ebx
// 00811065  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0081106b  e8a0380500           call 0x864910
// 00811070  8bc8                 mov ecx, eax
// 00811072  e839cdfdff           call 0x7eddb0
// 00811077  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0081107a  85c9                 test ecx, ecx
// 0081107c  7415                 je 0x811093
// 0081107e  8b01                 mov eax, dword ptr [ecx]
// 00811080  8b5020               mov edx, dword ptr [eax + 0x20]
// 00811083  ffd2                 call edx
// 00811085  50                   push eax
// 00811086  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0081108c  50                   push eax
// 0081108d  ff15f0b99e00         call dword ptr [0x9eb9f0]
// 00811093  8bcb                 mov ecx, ebx
// 00811095  e876380500           call 0x864910
// 0081109a  83b84401000000       cmp dword ptr [eax + 0x144], 0
// 008110a1  5b                   pop ebx
// 008110a2  7429                 je 0x8110cd
// 008110a4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008110a7  6a00                 push 0
// 008110a9  6a00                 push 0
// 008110ab  6864030000           push 0x364
// 008110b0  51                   push ecx
// 008110b1  ff1554ba9e00         call dword ptr [0x9eba54]
// 008110b7  8b5720               mov edx, dword ptr [edi + 0x20]
// 008110ba  6a01                 push 1
// 008110bc  6a01                 push 1
// 008110be  6a00                 push 0
// 008110c0  6a00                 push 0
// 008110c2  6864030000           push 0x364
// 008110c7  52                   push edx
// 008110c8  e835c01600           call 0x97d102
// 008110cd  5f                   pop edi
// 008110ce  5e                   pop esi
// 008110cf  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Attach@CXTPDockingPane@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
