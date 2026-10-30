// roc 2010-06 0087c6b0  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087c6b0
//
// 0087c6b0  53                   push ebx
// 0087c6b1  56                   push esi
// 0087c6b2  8bf1                 mov esi, ecx
// 0087c6b4  57                   push edi
// 0087c6b5  8d8e84000000         lea ecx, [esi + 0x84]
// 0087c6bb  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087c6c1  8bd8                 mov ebx, eax
// 0087c6c3  8b4654               mov eax, dword ptr [esi + 0x54]
// 0087c6c6  3bc3                 cmp eax, ebx
// 0087c6c8  8d7e54               lea edi, [esi + 0x54]
// 0087c6cb  7c12                 jl 0x87c6df
// 0087c6cd  8b06                 mov eax, dword ptr [esi]
// 0087c6cf  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0087c6d5  8bce                 mov ecx, esi
// 0087c6d7  ffd2                 call edx
// 0087c6d9  5f                   pop edi
// 0087c6da  5e                   pop esi
// 0087c6db  5b                   pop ebx
// 0087c6dc  c20400               ret 4
// 0087c6df  3b4658               cmp eax, dword ptr [esi + 0x58]
// 0087c6e2  7407                 je 0x87c6eb
// 0087c6e4  8bce                 mov ecx, esi
// 0087c6e6  e8d5feffff           call 0x87c5c0
// 0087c6eb  6a01                 push 1
// 0087c6ed  57                   push edi
// 0087c6ee  8bce                 mov ecx, esi
// 0087c6f0  e8abf8ffff           call 0x87bfa0
// 0087c6f5  837e6000             cmp dword ptr [esi + 0x60], 0
// 0087c6f9  7416                 je 0x87c711
// 0087c6fb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087c6ff  8b0f                 mov ecx, dword ptr [edi]
// 0087c701  50                   push eax
// 0087c702  51                   push ecx
// 0087c703  8d8e80000000         lea ecx, [esi + 0x80]
// 0087c709  ff1540cc9e00         call dword ptr [0x9ecc40]
// 0087c70f  eb0f                 jmp 0x87c720
// 0087c711  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087c715  8b07                 mov eax, dword ptr [edi]
// 0087c717  52                   push edx
// 0087c718  50                   push eax
// 0087c719  8bce                 mov ecx, esi
// 0087c71b  e820faffff           call 0x87c140
// 0087c720  8b07                 mov eax, dword ptr [edi]
// 0087c722  3bc3                 cmp eax, ebx
// 0087c724  7d03                 jge 0x87c729
// 0087c726  40                   inc eax
// 0087c727  8907                 mov dword ptr [edi], eax
// 0087c729  6a01                 push 1
// 0087c72b  57                   push edi
// 0087c72c  8bce                 mov ecx, esi
// 0087c72e  e86df8ffff           call 0x87bfa0
// 0087c733  8b0f                 mov ecx, dword ptr [edi]
// 0087c735  5f                   pop edi
// 0087c736  894e58               mov dword ptr [esi + 0x58], ecx
// 0087c739  5e                   pop esi
// 0087c73a  5b                   pop ebx
// 0087c73b  c20400               ret 4
// copied from an identical function in another client (function ?ProcessChar@?$CXTMaskEditT@VCEdit@@@@IAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp