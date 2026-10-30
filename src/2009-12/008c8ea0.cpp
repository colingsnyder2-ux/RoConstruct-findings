// roc 2009-12 008c8ea0  unit: VCEdit::?$CXTMaskEditT  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8ea0
//
// 008c8ea0  56                   push esi
// 008c8ea1  8bf1                 mov esi, ecx
// 008c8ea3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c8ea7  741f                 je 0x8c8ec8
// 008c8ea9  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c8ead  7419                 je 0x8c8ec8
// 008c8eaf  e8bed50500           call 0x926472
// 008c8eb4  a900080000           test eax, 0x800
// 008c8eb9  750d                 jne 0x8c8ec8
// 008c8ebb  8d4e70               lea ecx, [esi + 0x70]
// 008c8ebe  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c8ec4  84c0                 test al, al
// 008c8ec6  7410                 je 0x8c8ed8
// 008c8ec8  8b442408             mov eax, dword ptr [esp + 8]
// 008c8ecc  50                   push eax
// 008c8ecd  8bce                 mov ecx, esi
// 008c8ecf  e88caff2ff           call 0x7f3e60
// 008c8ed4  5e                   pop esi
// 008c8ed5  c20400               ret 4
// 008c8ed8  53                   push ebx
// 008c8ed9  57                   push edi
// 008c8eda  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c8ede  817f0400010000       cmp dword ptr [edi + 4], 0x100
// 008c8ee5  0f85b2000000         jne 0x8c8f9d
// 008c8eeb  8b1d30cc9800         mov ebx, dword ptr [0x98cc30]
// 008c8ef1  6a6d                 push 0x6d
// 008c8ef3  ffd3                 call ebx
// 008c8ef5  6685c0               test ax, ax
// 008c8ef8  7d18                 jge 0x8c8f12
// 008c8efa  6a01                 push 1
// 008c8efc  6a01                 push 1
// 008c8efe  6a2d                 push 0x2d
// 008c8f00  8bce                 mov ecx, esi
// 008c8f02  e889f9ffff           call 0x8c8890
// 008c8f07  5f                   pop edi
// 008c8f08  5b                   pop ebx
// 008c8f09  b801000000           mov eax, 1
// 008c8f0e  5e                   pop esi
// 008c8f0f  c20400               ret 4
// 008c8f12  6a6b                 push 0x6b
// 008c8f14  ffd3                 call ebx
// 008c8f16  6685c0               test ax, ax
// 008c8f19  7d18                 jge 0x8c8f33
// 008c8f1b  6a01                 push 1
// 008c8f1d  6a01                 push 1
// 008c8f1f  6a2b                 push 0x2b
// 008c8f21  8bce                 mov ecx, esi
// 008c8f23  e868f9ffff           call 0x8c8890
// 008c8f28  5f                   pop edi
// 008c8f29  5b                   pop ebx
// 008c8f2a  b801000000           mov eax, 1
// 008c8f2f  5e                   pop esi
// 008c8f30  c20400               ret 4
// 008c8f33  6a11                 push 0x11
// 008c8f35  ffd3                 call ebx
// 008c8f37  6685c0               test ax, ax
// 008c8f3a  7d61                 jge 0x8c8f9d
// 008c8f3c  8b4708               mov eax, dword ptr [edi + 8]
// 008c8f3f  83c0bd               add eax, -0x43
// 008c8f42  83f837               cmp eax, 0x37
// 008c8f45  7756                 ja 0x8c8f9d
// 008c8f47  0fb688c08f8c00       movzx ecx, byte ptr [eax + 0x8c8fc0]
// 008c8f4e  ff248dac8f8c00       jmp dword ptr [ecx*4 + 0x8c8fac]
// 008c8f55  8bce                 mov ecx, esi
// 008c8f57  e804feffff           call 0x8c8d60
// 008c8f5c  5f                   pop edi
// 008c8f5d  5b                   pop ebx
// 008c8f5e  b801000000           mov eax, 1
// 008c8f63  5e                   pop esi
// 008c8f64  c20400               ret 4
// 008c8f67  8bce                 mov ecx, esi
// 008c8f69  e862f2ffff           call 0x8c81d0
// 008c8f6e  5f                   pop edi
// 008c8f6f  5b                   pop ebx
// 008c8f70  b801000000           mov eax, 1
// 008c8f75  5e                   pop esi
// 008c8f76  c20400               ret 4
// 008c8f79  8bce                 mov ecx, esi
// 008c8f7b  e840feffff           call 0x8c8dc0
// 008c8f80  5f                   pop edi
// 008c8f81  5b                   pop ebx
// 008c8f82  b801000000           mov eax, 1
// 008c8f87  5e                   pop esi
// 008c8f88  c20400               ret 4
// 008c8f8b  8bce                 mov ecx, esi
// 008c8f8d  e8deeaffff           call 0x8c7a70
// 008c8f92  5f                   pop edi
// 008c8f93  5b                   pop ebx
// 008c8f94  b801000000           mov eax, 1
// 008c8f99  5e                   pop esi
// 008c8f9a  c20400               ret 4
// 008c8f9d  57                   push edi
// 008c8f9e  8bce                 mov ecx, esi
// 008c8fa0  e8bbaef2ff           call 0x7f3e60
// 008c8fa5  5f                   pop edi
// 008c8fa6  5b                   pop ebx
// 008c8fa7  5e                   pop esi
// 008c8fa8  c20400               ret 4
// 008c8fab  90                   nop 
// copied from an identical function in another client (function ?PreTranslateMessage@?$CXTMaskEditT@VCEdit@@@@UAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp