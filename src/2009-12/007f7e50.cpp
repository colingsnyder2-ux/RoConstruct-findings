// roc 2009-12 007f7e50  unit: IIHH::?$CMap  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7e50
//
// 007f7e50  53                   push ebx
// 007f7e51  56                   push esi
// 007f7e52  57                   push edi
// 007f7e53  8bf9                 mov edi, ecx
// 007f7e55  33f6                 xor esi, esi
// 007f7e57  e8245e0500           call 0x84dc80
// 007f7e5c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007f7e60  85c0                 test eax, eax
// 007f7e62  7e1c                 jle 0x7f7e80
// 007f7e64  56                   push esi
// 007f7e65  8bcf                 mov ecx, edi
// 007f7e67  e8c4b00a00           call 0x8a2f30
// 007f7e6c  8b4028               mov eax, dword ptr [eax + 0x28]
// 007f7e6f  3b4328               cmp eax, dword ptr [ebx + 0x28]
// 007f7e72  7f0c                 jg 0x7f7e80
// 007f7e74  8bcf                 mov ecx, edi
// 007f7e76  46                   inc esi
// 007f7e77  e8045e0500           call 0x84dc80
// 007f7e7c  3bf0                 cmp esi, eax
// 007f7e7e  7ce4                 jl 0x7f7e64
// 007f7e80  6a01                 push 1
// 007f7e82  53                   push ebx
// 007f7e83  56                   push esi
// 007f7e84  8d4f20               lea ecx, [edi + 0x20]
// 007f7e87  e8b45c0f00           call 0x8edb40
// 007f7e8c  5f                   pop edi
// 007f7e8d  5e                   pop esi
// 007f7e8e  5b                   pop ebx
// 007f7e8f  c20400               ret 4
// copied from an identical function in another client (function ?Insert@CXTPControlActions@@AAEXPAVCXTPControlAction@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp