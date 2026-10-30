// roc 2012-06 009c4ad0  unit: CXTPControlEdit  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c4ad0
//
// 009c4ad0  56                   push esi
// 009c4ad1  57                   push edi
// 009c4ad2  8bf9                 mov edi, ecx
// 009c4ad4  33f6                 xor esi, esi
// 009c4ad6  39770c               cmp dword ptr [edi + 0xc], esi
// 009c4ad9  7e27                 jle 0x9c4b02
// 009c4adb  eb03                 jmp 0x9c4ae0
// 009c4add  8d4900               lea ecx, [ecx]
// 009c4ae0  85f6                 test esi, esi
// 009c4ae2  7c2d                 jl 0x9c4b11
// 009c4ae4  3b770c               cmp esi, dword ptr [edi + 0xc]
// 009c4ae7  7d28                 jge 0x9c4b11
// 009c4ae9  8b4708               mov eax, dword ptr [edi + 8]
// 009c4aec  8b04b0               mov eax, dword ptr [eax + esi*4]
// 009c4aef  85c0                 test eax, eax
// 009c4af1  7409                 je 0x9c4afc
// 009c4af3  50                   push eax
// 009c4af4  e81bd6fbff           call 0x982114
// 009c4af9  83c404               add esp, 4
// 009c4afc  46                   inc esi
// 009c4afd  3b770c               cmp esi, dword ptr [edi + 0xc]
// 009c4b00  7cde                 jl 0x9c4ae0
// 009c4b02  6aff                 push -1
// 009c4b04  6a00                 push 0
// 009c4b06  8d4f04               lea ecx, [edi + 4]
// 009c4b09  e85237fdff           call 0x998260
// 009c4b0e  5f                   pop edi
// 009c4b0f  5e                   pop esi
// 009c4b10  c3                   ret 
// 009c4b11  e8aad8fbff           call 0x9823c0
// copied from an identical function in another client (function ?Clear@CXTPDockState@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp