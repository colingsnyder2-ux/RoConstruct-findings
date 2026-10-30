// from server: 100% by auto
// roc 2008-06 00745920  unit: CXTPDockContext  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745920
//
// 00745920  8b442404             mov eax, dword ptr [esp + 4]
// 00745924  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00745928  53                   push ebx
// 00745929  8b1d342e8000         mov ebx, dword ptr [0x802e34]
// 0074592f  56                   push esi
// 00745930  8bf1                 mov esi, ecx
// 00745932  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00745936  57                   push edi
// 00745937  894608               mov dword ptr [esi + 8], eax
// 0074593a  8b4604               mov eax, dword ptr [esi + 4]
// 0074593d  894e0c               mov dword ptr [esi + 0xc], ecx
// 00745940  895610               mov dword ptr [esi + 0x10], edx
// 00745943  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00745946  8d7e40               lea edi, [esi + 0x40]
// 00745949  57                   push edi
// 0074594a  51                   push ecx
// 0074594b  ffd3                 call ebx
// 0074594d  8b16                 mov edx, dword ptr [esi]
// 0074594f  8b4210               mov eax, dword ptr [edx + 0x10]
// 00745952  8bce                 mov ecx, esi
// 00745954  ffd0                 call eax
// 00745956  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745959  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0074595c  57                   push edi
// 0074595d  52                   push edx
// 0074595e  ffd3                 call ebx
// 00745960  8b4604               mov eax, dword ptr [esi + 4]
// 00745963  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 0074596a  750b                 jne 0x745977
// 0074596c  8b0f                 mov ecx, dword ptr [edi]
// 0074596e  8b5704               mov edx, dword ptr [edi + 4]
// 00745971  894e28               mov dword ptr [esi + 0x28], ecx
// 00745974  89562c               mov dword ptr [esi + 0x2c], edx
// 00745977  8b4f08               mov ecx, dword ptr [edi + 8]
// 0074597a  2b0f                 sub ecx, dword ptr [edi]
// 0074597c  5f                   pop edi
// 0074597d  5e                   pop esi
// 0074597e  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 00745984  5b                   pop ebx
// 00745985  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?StartResize@CXTPDockContext@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
