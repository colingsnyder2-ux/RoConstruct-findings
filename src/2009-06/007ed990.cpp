// roc 2009-06 007ed990  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ed990
//
// 007ed990  53                   push ebx
// 007ed991  56                   push esi
// 007ed992  8bf1                 mov esi, ecx
// 007ed994  57                   push edi
// 007ed995  8d8e84000000         lea ecx, [esi + 0x84]
// 007ed99b  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed9a1  8bd8                 mov ebx, eax
// 007ed9a3  8b4654               mov eax, dword ptr [esi + 0x54]
// 007ed9a6  3bc3                 cmp eax, ebx
// 007ed9a8  8d7e54               lea edi, [esi + 0x54]
// 007ed9ab  7c12                 jl 0x7ed9bf
// 007ed9ad  8b06                 mov eax, dword ptr [esi]
// 007ed9af  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 007ed9b5  8bce                 mov ecx, esi
// 007ed9b7  ffd2                 call edx
// 007ed9b9  5f                   pop edi
// 007ed9ba  5e                   pop esi
// 007ed9bb  5b                   pop ebx
// 007ed9bc  c20400               ret 4
// 007ed9bf  3b4658               cmp eax, dword ptr [esi + 0x58]
// 007ed9c2  7407                 je 0x7ed9cb
// 007ed9c4  8bce                 mov ecx, esi
// 007ed9c6  e8d5feffff           call 0x7ed8a0
// 007ed9cb  6a01                 push 1
// 007ed9cd  57                   push edi
// 007ed9ce  8bce                 mov ecx, esi
// 007ed9d0  e8abf8ffff           call 0x7ed280
// 007ed9d5  837e6000             cmp dword ptr [esi + 0x60], 0
// 007ed9d9  7416                 je 0x7ed9f1
// 007ed9db  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ed9df  8b0f                 mov ecx, dword ptr [edi]
// 007ed9e1  50                   push eax
// 007ed9e2  51                   push ecx
// 007ed9e3  8d8e80000000         lea ecx, [esi + 0x80]
// 007ed9e9  ff158cf78900         call dword ptr [0x89f78c]
// 007ed9ef  eb0f                 jmp 0x7eda00
// 007ed9f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ed9f5  8b07                 mov eax, dword ptr [edi]
// 007ed9f7  52                   push edx
// 007ed9f8  50                   push eax
// 007ed9f9  8bce                 mov ecx, esi
// 007ed9fb  e820faffff           call 0x7ed420
// 007eda00  8b07                 mov eax, dword ptr [edi]
// 007eda02  3bc3                 cmp eax, ebx
// 007eda04  7d03                 jge 0x7eda09
// 007eda06  40                   inc eax
// 007eda07  8907                 mov dword ptr [edi], eax
// 007eda09  6a01                 push 1
// 007eda0b  57                   push edi
// 007eda0c  8bce                 mov ecx, esi
// 007eda0e  e86df8ffff           call 0x7ed280
// 007eda13  8b0f                 mov ecx, dword ptr [edi]
// 007eda15  5f                   pop edi
// 007eda16  894e58               mov dword ptr [esi + 0x58], ecx
// 007eda19  5e                   pop esi
// 007eda1a  5b                   pop ebx
// 007eda1b  c20400               ret 4
// copied from an identical function in another client (function ?ProcessChar@?$CXTMaskEditT@VCEdit@@@@IAEXD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp