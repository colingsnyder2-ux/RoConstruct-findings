// roc 2009-06 00808b70  unit: CXTShadowHook  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808b70
//
// 00808b70  6aff                 push -1
// 00808b72  68831c8800           push 0x881c83
// 00808b77  64a100000000         mov eax, dword ptr fs:[0]
// 00808b7d  50                   push eax
// 00808b7e  51                   push ecx
// 00808b7f  56                   push esi
// 00808b80  57                   push edi
// 00808b81  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00808b86  33c4                 xor eax, esp
// 00808b88  50                   push eax
// 00808b89  8d442410             lea eax, [esp + 0x10]
// 00808b8d  64a300000000         mov dword ptr fs:[0], eax
// 00808b93  8bf1                 mov esi, ecx
// 00808b95  8974240c             mov dword ptr [esp + 0xc], esi
// 00808b99  837e2800             cmp dword ptr [esi + 0x28], 0
// 00808b9d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00808ba5  7425                 je 0x808bcc
// 00808ba7  8d7e1c               lea edi, [esi + 0x1c]
// 00808baa  8d9b00000000         lea ebx, [ebx]
// 00808bb0  8bcf                 mov ecx, edi
// 00808bb2  e8d9feffff           call 0x808a90
// 00808bb7  85c0                 test eax, eax
// 00808bb9  740b                 je 0x808bc6
// 00808bbb  8b10                 mov edx, dword ptr [eax]
// 00808bbd  8bc8                 mov ecx, eax
// 00808bbf  8b4204               mov eax, dword ptr [edx + 4]
// 00808bc2  6a01                 push 1
// 00808bc4  ffd0                 call eax
// 00808bc6  837e2800             cmp dword ptr [esi + 0x28], 0
// 00808bca  75e4                 jne 0x808bb0
// 00808bcc  8d4e1c               lea ecx, [esi + 0x1c]
// 00808bcf  c644241800           mov byte ptr [esp + 0x18], 0
// 00808bd4  e8f7feffff           call 0x808ad0
// 00808bd9  8bce                 mov ecx, esi
// 00808bdb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00808be3  e8e8feffff           call 0x808ad0
// 00808be8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00808bec  64890d00000000       mov dword ptr fs:[0], ecx
// 00808bf3  59                   pop ecx
// 00808bf4  5f                   pop edi
// 00808bf5  5e                   pop esi
// 00808bf6  83c410               add esp, 0x10
// 00808bf9  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp