// roc 2011-06 008e0370  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e0370
//
// 008e0370  53                   push ebx
// 008e0371  56                   push esi
// 008e0372  8bf1                 mov esi, ecx
// 008e0374  57                   push edi
// 008e0375  8d8e84000000         lea ecx, [esi + 0x84]
// 008e037b  ff15a826a400         call dword ptr [0xa426a8]
// 008e0381  8bd8                 mov ebx, eax
// 008e0383  8b4654               mov eax, dword ptr [esi + 0x54]
// 008e0386  3bc3                 cmp eax, ebx
// 008e0388  8d7e54               lea edi, [esi + 0x54]
// 008e038b  7c12                 jl 0x8e039f
// 008e038d  8b06                 mov eax, dword ptr [esi]
// 008e038f  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 008e0395  8bce                 mov ecx, esi
// 008e0397  ffd2                 call edx
// 008e0399  5f                   pop edi
// 008e039a  5e                   pop esi
// 008e039b  5b                   pop ebx
// 008e039c  c20400               ret 4
// 008e039f  3b4658               cmp eax, dword ptr [esi + 0x58]
// 008e03a2  7407                 je 0x8e03ab
// 008e03a4  8bce                 mov ecx, esi
// 008e03a6  e8d5feffff           call 0x8e0280
// 008e03ab  6a01                 push 1
// 008e03ad  57                   push edi
// 008e03ae  8bce                 mov ecx, esi
// 008e03b0  e8abf8ffff           call 0x8dfc60
// 008e03b5  837e6000             cmp dword ptr [esi + 0x60], 0
// 008e03b9  7416                 je 0x8e03d1
// 008e03bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e03bf  8b0f                 mov ecx, dword ptr [edi]
// 008e03c1  50                   push eax
// 008e03c2  51                   push ecx
// 008e03c3  8d8e80000000         lea ecx, [esi + 0x80]
// 008e03c9  ff155c2ca400         call dword ptr [0xa42c5c]
// 008e03cf  eb0f                 jmp 0x8e03e0
// 008e03d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e03d5  8b07                 mov eax, dword ptr [edi]
// 008e03d7  52                   push edx
// 008e03d8  50                   push eax
// 008e03d9  8bce                 mov ecx, esi
// 008e03db  e820faffff           call 0x8dfe00
// 008e03e0  8b07                 mov eax, dword ptr [edi]
// 008e03e2  3bc3                 cmp eax, ebx
// 008e03e4  7d03                 jge 0x8e03e9
// 008e03e6  40                   inc eax
// 008e03e7  8907                 mov dword ptr [edi], eax
// 008e03e9  6a01                 push 1
// 008e03eb  57                   push edi
// 008e03ec  8bce                 mov ecx, esi
// 008e03ee  e86df8ffff           call 0x8dfc60
// 008e03f3  8b0f                 mov ecx, dword ptr [edi]
// 008e03f5  5f                   pop edi
// 008e03f6  894e58               mov dword ptr [esi + 0x58], ecx
// 008e03f9  5e                   pop esi
// 008e03fa  5b                   pop ebx
// 008e03fb  c20400               ret 4
// copied from an identical function in another client (function ?ProcessChar@?$CXTMaskEditT@VCEdit@@@@IAEXD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp