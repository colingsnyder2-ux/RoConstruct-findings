// from server: 100% by auto
// roc 2008-06 00783390  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00783390
//
// 00783390  83ec40               sub esp, 0x40
// 00783393  53                   push ebx
// 00783394  55                   push ebp
// 00783395  56                   push esi
// 00783396  57                   push edi
// 00783397  8bf1                 mov esi, ecx
// 00783399  e8d2b20000           call 0x78e670
// 0078339e  8bc8                 mov ecx, eax
// 007833a0  e8ab990000           call 0x78cd50
// 007833a5  85c0                 test eax, eax
// 007833a7  7518                 jne 0x7833c1
// 007833a9  8b742454             mov esi, dword ptr [esp + 0x54]
// 007833ad  50                   push eax
// 007833ae  56                   push esi
// 007833af  ff15702d8000         call dword ptr [0x802d70]
// 007833b5  8bc6                 mov eax, esi
// 007833b7  5f                   pop edi
// 007833b8  5e                   pop esi
// 007833b9  5d                   pop ebp
// 007833ba  5b                   pop ebx
// 007833bb  83c440               add esp, 0x40
// 007833be  c21c00               ret 0x1c
// 007833c1  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007833c5  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007833c9  8b16                 mov edx, dword ptr [esi]
// 007833cb  8b5208               mov edx, dword ptr [edx + 8]
// 007833ce  53                   push ebx
// 007833cf  83ec10               sub esp, 0x10
// 007833d2  8bc4                 mov eax, esp
// 007833d4  8908                 mov dword ptr [eax], ecx
// 007833d6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007833da  894804               mov dword ptr [eax + 4], ecx
// 007833dd  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007833e1  894808               mov dword ptr [eax + 8], ecx
// 007833e4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 007833eb  89480c               mov dword ptr [eax + 0xc], ecx
// 007833ee  8d442434             lea eax, [esp + 0x34]
// 007833f2  50                   push eax
// 007833f3  8bce                 mov ecx, esi
// 007833f5  ffd2                 call edx
// 007833f7  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007833fa  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00783400  bd08000000           mov ebp, 8
// 00783405  8b4c2808             mov ecx, dword ptr [eax + ebp + 8]
// 00783409  03c5                 add eax, ebp
// 0078340b  83f9ff               cmp ecx, -1
// 0078340e  7505                 jne 0x783415
// 00783410  8b4004               mov eax, dword ptr [eax + 4]
// 00783413  eb02                 jmp 0x783417
// 00783415  8bc1                 mov eax, ecx
// 00783417  50                   push eax
// 00783418  8d4c2424             lea ecx, [esp + 0x24]
// 0078341c  51                   push ecx
// 0078341d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00783421  e838dff1ff           call 0x6a135e
// 00783426  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0078342a  8b16                 mov edx, dword ptr [esi]
// 0078342c  8b520c               mov edx, dword ptr [edx + 0xc]
// 0078342f  53                   push ebx
// 00783430  83ec10               sub esp, 0x10
// 00783433  8bc4                 mov eax, esp
// 00783435  8908                 mov dword ptr [eax], ecx
// 00783437  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0078343b  894804               mov dword ptr [eax + 4], ecx
// 0078343e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00783442  894808               mov dword ptr [eax + 8], ecx
// 00783445  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0078344c  89480c               mov dword ptr [eax + 0xc], ecx
// 0078344f  8d442424             lea eax, [esp + 0x24]
// 00783453  50                   push eax
// 00783454  8bce                 mov ecx, esi
// 00783456  ffd2                 call edx
// 00783458  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0078345b  83783800             cmp dword ptr [eax + 0x38], 0
// 0078345f  756f                 jne 0x7834d0
// 00783461  686c1b8600           push 0x861b6c
// 00783466  e805b20000           call 0x78e670
// 0078346b  8bc8                 mov ecx, eax
// 0078346d  e81eb10000           call 0x78e590
// 00783472  8bf8                 mov edi, eax
// 00783474  85ff                 test edi, edi
// 00783476  7458                 je 0x7834d0
// 00783478  6a01                 push 1
// 0078347a  6a00                 push 0
// 0078347c  8d4c2448             lea ecx, [esp + 0x48]
// 00783480  51                   push ecx
// 00783481  8bcf                 mov ecx, edi
// 00783483  8bdd                 mov ebx, ebp
// 00783485  896c2448             mov dword ptr [esp + 0x48], ebp
// 00783489  e8a2a20000           call 0x78d730
// 0078348e  83ec10               sub esp, 0x10
// 00783491  8bcc                 mov ecx, esp
// 00783493  8919                 mov dword ptr [ecx], ebx
// 00783495  896904               mov dword ptr [ecx + 4], ebp
// 00783498  8bd3                 mov edx, ebx
// 0078349a  895108               mov dword ptr [ecx + 8], edx
// 0078349d  89510c               mov dword ptr [ecx + 0xc], edx
// 007834a0  8b10                 mov edx, dword ptr [eax]
// 007834a2  83ec10               sub esp, 0x10
// 007834a5  8bcc                 mov ecx, esp
// 007834a7  8911                 mov dword ptr [ecx], edx
// 007834a9  8b5004               mov edx, dword ptr [eax + 4]
// 007834ac  895104               mov dword ptr [ecx + 4], edx
// 007834af  8b5008               mov edx, dword ptr [eax + 8]
// 007834b2  8b400c               mov eax, dword ptr [eax + 0xc]
// 007834b5  895108               mov dword ptr [ecx + 8], edx
// 007834b8  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007834bc  89410c               mov dword ptr [ecx + 0xc], eax
// 007834bf  8d4c2430             lea ecx, [esp + 0x30]
// 007834c3  51                   push ecx
// 007834c4  52                   push edx
// 007834c5  8bcf                 mov ecx, edi
// 007834c7  e8349b0000           call 0x78d000
// 007834cc  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007834d0  8b761c               mov esi, dword ptr [esi + 0x1c]
// 007834d3  837e3801             cmp dword ptr [esi + 0x38], 1
// 007834d7  7565                 jne 0x78353e
// 007834d9  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 007834df  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 007834e5  83f9ff               cmp ecx, -1
// 007834e8  7506                 jne 0x7834f0
// 007834ea  8b8830010000         mov ecx, dword ptr [eax + 0x130]
// 007834f0  8b9034010000         mov edx, dword ptr [eax + 0x134]
// 007834f6  83faff               cmp edx, -1
// 007834f9  7508                 jne 0x783503
// 007834fb  8b8030010000         mov eax, dword ptr [eax + 0x130]
// 00783501  eb02                 jmp 0x783505
// 00783503  8bc2                 mov eax, edx
// 00783505  51                   push ecx
// 00783506  50                   push eax
// 00783507  8b03                 mov eax, dword ptr [ebx]
// 00783509  8b5048               mov edx, dword ptr [eax + 0x48]
// 0078350c  8bcb                 mov ecx, ebx
// 0078350e  ffd2                 call edx
// 00783510  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00783514  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00783518  50                   push eax
// 00783519  83ec10               sub esp, 0x10
// 0078351c  8bc4                 mov eax, esp
// 0078351e  8908                 mov dword ptr [eax], ecx
// 00783520  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00783524  895004               mov dword ptr [eax + 4], edx
// 00783527  8b542438             mov edx, dword ptr [esp + 0x38]
// 0078352b  894808               mov dword ptr [eax + 8], ecx
// 0078352e  89500c               mov dword ptr [eax + 0xc], edx
// 00783531  8b442478             mov eax, dword ptr [esp + 0x78]
// 00783535  50                   push eax
// 00783536  e865e0ffff           call 0x7815a0
// 0078353b  83c420               add esp, 0x20
// 0078353e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00783542  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00783546  8b542424             mov edx, dword ptr [esp + 0x24]
// 0078354a  5f                   pop edi
// 0078354b  8908                 mov dword ptr [eax], ecx
// 0078354d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00783551  895004               mov dword ptr [eax + 4], edx
// 00783554  8b542428             mov edx, dword ptr [esp + 0x28]
// 00783558  5e                   pop esi
// 00783559  5d                   pop ebp
// 0078355a  894808               mov dword ptr [eax + 8], ecx
// 0078355d  89500c               mov dword ptr [eax + 0xc], edx
// 00783560  5b                   pop ebx
// 00783561  83c440               add esp, 0x40
// 00783564  c21c00               ret 0x1c
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
