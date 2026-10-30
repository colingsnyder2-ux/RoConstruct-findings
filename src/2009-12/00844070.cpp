// roc 2009-12 00844070  unit: CXTPPopupBar  size: 441 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844070
//
// 00844070  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00844074  83ec08               sub esp, 8
// 00844077  53                   push ebx
// 00844078  55                   push ebp
// 00844079  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0084407d  56                   push esi
// 0084407e  57                   push edi
// 0084407f  8bf1                 mov esi, ecx
// 00844081  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00844085  83ec10               sub esp, 0x10
// 00844088  8bc4                 mov eax, esp
// 0084408a  8908                 mov dword ptr [eax], ecx
// 0084408c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00844090  895004               mov dword ptr [eax + 4], edx
// 00844093  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00844097  894808               mov dword ptr [eax + 8], ecx
// 0084409a  55                   push ebp
// 0084409b  8bce                 mov ecx, esi
// 0084409d  89500c               mov dword ptr [eax + 0xc], edx
// 008440a0  e89b2dfcff           call 0x806e40
// 008440a5  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 008440ac  0f84c0000000         je 0x844172
// 008440b2  8d9e24020000         lea ebx, [esi + 0x224]
// 008440b8  53                   push ebx
// 008440b9  ff1568cc9800         call dword ptr [0x98cc68]
// 008440bf  85c0                 test eax, eax
// 008440c1  754f                 jne 0x844112
// 008440c3  8b4308               mov eax, dword ptr [ebx + 8]
// 008440c6  0303                 add eax, dword ptr [ebx]
// 008440c8  8bce                 mov ecx, esi
// 008440ca  99                   cdq 
// 008440cb  2bc2                 sub eax, edx
// 008440cd  8bf8                 mov edi, eax
// 008440cf  8b430c               mov eax, dword ptr [ebx + 0xc]
// 008440d2  034304               add eax, dword ptr [ebx + 4]
// 008440d5  d1ff                 sar edi, 1
// 008440d7  99                   cdq 
// 008440d8  2bc2                 sub eax, edx
// 008440da  8bd8                 mov ebx, eax
// 008440dc  d1fb                 sar ebx, 1
// 008440de  e8ad04fcff           call 0x804590
// 008440e3  e8e8b8feff           call 0x82f9d0
// 008440e8  6a12                 push 0x12
// 008440ea  8bc8                 mov ecx, eax
// 008440ec  e80fb0feff           call 0x82f100
// 008440f1  50                   push eax
// 008440f2  8d4b03               lea ecx, [ebx + 3]
// 008440f5  51                   push ecx
// 008440f6  57                   push edi
// 008440f7  8d5703               lea edx, [edi + 3]
// 008440fa  8954241c             mov dword ptr [esp + 0x1c], edx
// 008440fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00844102  53                   push ebx
// 00844103  50                   push eax
// 00844104  8d57fd               lea edx, [edi - 3]
// 00844107  53                   push ebx
// 00844108  52                   push edx
// 00844109  55                   push ebp
// 0084410a  e881a5fbff           call 0x7fe690
// 0084410f  83c420               add esp, 0x20
// 00844112  8d9e40020000         lea ebx, [esi + 0x240]
// 00844118  53                   push ebx
// 00844119  ff1568cc9800         call dword ptr [0x98cc68]
// 0084411f  85c0                 test eax, eax
// 00844121  754f                 jne 0x844172
// 00844123  8b4308               mov eax, dword ptr [ebx + 8]
// 00844126  0303                 add eax, dword ptr [ebx]
// 00844128  8bce                 mov ecx, esi
// 0084412a  99                   cdq 
// 0084412b  2bc2                 sub eax, edx
// 0084412d  8bf8                 mov edi, eax
// 0084412f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00844132  034304               add eax, dword ptr [ebx + 4]
// 00844135  d1ff                 sar edi, 1
// 00844137  99                   cdq 
// 00844138  2bc2                 sub eax, edx
// 0084413a  8bd8                 mov ebx, eax
// 0084413c  d1fb                 sar ebx, 1
// 0084413e  e84d04fcff           call 0x804590
// 00844143  e888b8feff           call 0x82f9d0
// 00844148  6a12                 push 0x12
// 0084414a  8bc8                 mov ecx, eax
// 0084414c  e8afaffeff           call 0x82f100
// 00844151  50                   push eax
// 00844152  8d4bfd               lea ecx, [ebx - 3]
// 00844155  51                   push ecx
// 00844156  57                   push edi
// 00844157  8d5703               lea edx, [edi + 3]
// 0084415a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0084415e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00844162  53                   push ebx
// 00844163  50                   push eax
// 00844164  8d57fd               lea edx, [edi - 3]
// 00844167  53                   push ebx
// 00844168  52                   push edx
// 00844169  55                   push ebp
// 0084416a  e821a5fbff           call 0x7fe690
// 0084416f  83c420               add esp, 0x20
// 00844172  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 00844179  7455                 je 0x8441d0
// 0084417b  8bce                 mov ecx, esi
// 0084417d  e8ce10fcff           call 0x805250
// 00844182  85c0                 test eax, eax
// 00844184  7e4a                 jle 0x8441d0
// 00844186  8bce                 mov ecx, esi
// 00844188  e80304fcff           call 0x804590
// 0084418d  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00844193  8b38                 mov edi, dword ptr [eax]
// 00844195  6a01                 push 1
// 00844197  51                   push ecx
// 00844198  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0084419e  83ec10               sub esp, 0x10
// 008441a1  8bd4                 mov edx, esp
// 008441a3  890a                 mov dword ptr [edx], ecx
// 008441a5  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 008441ab  894a04               mov dword ptr [edx + 4], ecx
// 008441ae  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008441b4  894a08               mov dword ptr [edx + 8], ecx
// 008441b7  8b8ec0010000         mov ecx, dword ptr [esi + 0x1c0]
// 008441bd  894a0c               mov dword ptr [edx + 0xc], ecx
// 008441c0  55                   push ebp
// 008441c1  8d54242c             lea edx, [esp + 0x2c]
// 008441c5  8bc8                 mov ecx, eax
// 008441c7  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 008441cd  52                   push edx
// 008441ce  ffd0                 call eax
// 008441d0  8dbec4010000         lea edi, [esi + 0x1c4]
// 008441d6  57                   push edi
// 008441d7  ff1568cc9800         call dword ptr [0x98cc68]
// 008441dd  85c0                 test eax, eax
// 008441df  753e                 jne 0x84421f
// 008441e1  3986d4010000         cmp dword ptr [esi + 0x1d4], eax
// 008441e7  7436                 je 0x84421f
// 008441e9  8bce                 mov ecx, esi
// 008441eb  e8a003fcff           call 0x804590
// 008441f0  8b8ed4010000         mov ecx, dword ptr [esi + 0x1d4]
// 008441f6  8b18                 mov ebx, dword ptr [eax]
// 008441f8  51                   push ecx
// 008441f9  8b0f                 mov ecx, dword ptr [edi]
// 008441fb  83ec10               sub esp, 0x10
// 008441fe  8bd4                 mov edx, esp
// 00844200  890a                 mov dword ptr [edx], ecx
// 00844202  8b4f04               mov ecx, dword ptr [edi + 4]
// 00844205  894a04               mov dword ptr [edx + 4], ecx
// 00844208  8b4f08               mov ecx, dword ptr [edi + 8]
// 0084420b  894a08               mov dword ptr [edx + 8], ecx
// 0084420e  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00844211  894a0c               mov dword ptr [edx + 0xc], ecx
// 00844214  8b93bc000000         mov edx, dword ptr [ebx + 0xbc]
// 0084421a  55                   push ebp
// 0084421b  8bc8                 mov ecx, eax
// 0084421d  ffd2                 call edx
// 0084421f  5f                   pop edi
// 00844220  5e                   pop esi
// 00844221  5d                   pop ebp
// 00844222  5b                   pop ebx
// 00844223  83c408               add esp, 8
// 00844226  c21400               ret 0x14
// copied from an identical function in another client (function ?DrawCommandBar@CXTPPopupBar@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp