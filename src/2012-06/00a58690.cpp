// roc 2012-06 00a58690  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a58690
//
// 00a58690  53                   push ebx
// 00a58691  56                   push esi
// 00a58692  8bf1                 mov esi, ecx
// 00a58694  57                   push edi
// 00a58695  8d8e84000000         lea ecx, [esi + 0x84]
// 00a5869b  ff155846b200         call dword ptr [0xb24658]
// 00a586a1  8bd8                 mov ebx, eax
// 00a586a3  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a586a6  3bc3                 cmp eax, ebx
// 00a586a8  8d7e54               lea edi, [esi + 0x54]
// 00a586ab  7c12                 jl 0xa586bf
// 00a586ad  8b06                 mov eax, dword ptr [esi]
// 00a586af  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00a586b5  8bce                 mov ecx, esi
// 00a586b7  ffd2                 call edx
// 00a586b9  5f                   pop edi
// 00a586ba  5e                   pop esi
// 00a586bb  5b                   pop ebx
// 00a586bc  c20400               ret 4
// 00a586bf  3b4658               cmp eax, dword ptr [esi + 0x58]
// 00a586c2  7407                 je 0xa586cb
// 00a586c4  8bce                 mov ecx, esi
// 00a586c6  e8d5feffff           call 0xa585a0
// 00a586cb  6a01                 push 1
// 00a586cd  57                   push edi
// 00a586ce  8bce                 mov ecx, esi
// 00a586d0  e8abf8ffff           call 0xa57f80
// 00a586d5  837e6000             cmp dword ptr [esi + 0x60], 0
// 00a586d9  7416                 je 0xa586f1
// 00a586db  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a586df  8b0f                 mov ecx, dword ptr [edi]
// 00a586e1  50                   push eax
// 00a586e2  51                   push ecx
// 00a586e3  8d8e80000000         lea ecx, [esi + 0x80]
// 00a586e9  ff15f84cb200         call dword ptr [0xb24cf8]
// 00a586ef  eb0f                 jmp 0xa58700
// 00a586f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a586f5  8b07                 mov eax, dword ptr [edi]
// 00a586f7  52                   push edx
// 00a586f8  50                   push eax
// 00a586f9  8bce                 mov ecx, esi
// 00a586fb  e820faffff           call 0xa58120
// 00a58700  8b07                 mov eax, dword ptr [edi]
// 00a58702  3bc3                 cmp eax, ebx
// 00a58704  7d03                 jge 0xa58709
// 00a58706  40                   inc eax
// 00a58707  8907                 mov dword ptr [edi], eax
// 00a58709  6a01                 push 1
// 00a5870b  57                   push edi
// 00a5870c  8bce                 mov ecx, esi
// 00a5870e  e86df8ffff           call 0xa57f80
// 00a58713  8b0f                 mov ecx, dword ptr [edi]
// 00a58715  5f                   pop edi
// 00a58716  894e58               mov dword ptr [esi + 0x58], ecx
// 00a58719  5e                   pop esi
// 00a5871a  5b                   pop ebx
// 00a5871b  c20400               ret 4
// copied from an identical function in another client (function ?ProcessChar@?$CXTMaskEditT@VCEdit@@@@IAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp