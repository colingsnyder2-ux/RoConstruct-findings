// roc 2012-06 00a95730  unit: seg_00a90000  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a95730
//
// 00a95730  6aff                 push -1
// 00a95732  684961ab00           push 0xab6149
// 00a95737  64a100000000         mov eax, dword ptr fs:[0]
// 00a9573d  50                   push eax
// 00a9573e  64892500000000       mov dword ptr fs:[0], esp
// 00a95745  83ec28               sub esp, 0x28
// 00a95748  53                   push ebx
// 00a95749  55                   push ebp
// 00a9574a  68e8fac300           push 0xc3fae8
// 00a9574f  8d4c2418             lea ecx, [esp + 0x18]
// 00a95753  ff154826b200         call dword ptr [0xb22648]
// 00a95759  8d44240c             lea eax, [esp + 0xc]
// 00a9575d  50                   push eax
// 00a9575e  8d4c2418             lea ecx, [esp + 0x18]
// 00a95762  33ed                 xor ebp, ebp
// 00a95764  51                   push ecx
// 00a95765  896c2440             mov dword ptr [esp + 0x40], ebp
// 00a95769  e87271eeff           call 0x97c8e0
// 00a9576e  83c408               add esp, 8
// 00a95771  8d4c2414             lea ecx, [esp + 0x14]
// 00a95775  8ad8                 mov bl, al
// 00a95777  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00a9577f  ff153c26b200         call dword ptr [0xb2263c]
// 00a95785  84db                 test bl, bl
// 00a95787  740f                 je 0xa95798
// 00a95789  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a9578d  3d2c010000           cmp eax, 0x12c
// 00a95792  0f8f91000000         jg 0xa95829
// 00a95798  56                   push esi
// 00a95799  57                   push edi
// 00a9579a  33f6                 xor esi, esi
// 00a9579c  33ff                 xor edi, edi
// 00a9579e  33db                 xor ebx, ebx
// 00a957a0  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a957a8  eb06                 jmp 0xa957b0
// 00a957aa  8d9b00000000         lea ebx, [ebx]
// 00a957b0  6a32                 push 0x32
// 00a957b2  68f054a900           push 0xa954f0
// 00a957b7  e884fcffff           call 0xa95440
// 00a957bc  03f0                 add esi, eax
// 00a957be  6a32                 push 0x32
// 00a957c0  686055a900           push 0xa95560
// 00a957c5  13fa                 adc edi, edx
// 00a957c7  e874fcffff           call 0xa95440
// 00a957cc  83c410               add esp, 0x10
// 00a957cf  03e8                 add ebp, eax
// 00a957d1  13da                 adc ebx, edx
// 00a957d3  836c241001           sub dword ptr [esp + 0x10], 1
// 00a957d8  75d6                 jne 0xa957b0
// 00a957da  6a00                 push 0
// 00a957dc  2bf5                 sub esi, ebp
// 00a957de  6a02                 push 2
// 00a957e0  1bfb                 sbb edi, ebx
// 00a957e2  57                   push edi
// 00a957e3  56                   push esi
// 00a957e4  e877dceeff           call 0x983460
// 00a957e9  6a00                 push 0
// 00a957eb  6a32                 push 0x32
// 00a957ed  52                   push edx
// 00a957ee  50                   push eax
// 00a957ef  e86cdceeff           call 0x983460
// 00a957f4  6a00                 push 0
// 00a957f6  68e8030000           push 0x3e8
// 00a957fb  52                   push edx
// 00a957fc  50                   push eax
// 00a957fd  e85edceeff           call 0x983460
// 00a95802  5f                   pop edi
// 00a95803  5e                   pop esi
// 00a95804  85d2                 test edx, edx
// 00a95806  7c14                 jl 0xa9581c
// 00a95808  7f05                 jg 0xa9580f
// 00a9580a  83f864               cmp eax, 0x64
// 00a9580d  720d                 jb 0xa9581c
// 00a9580f  85d2                 test edx, edx
// 00a95811  7c16                 jl 0xa95829
// 00a95813  7f07                 jg 0xa9581c
// 00a95815  3d50c30000           cmp eax, 0xc350
// 00a9581a  760d                 jbe 0xa95829
// 00a9581c  b878050000           mov eax, 0x578
// 00a95821  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a95829  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a9582d  5d                   pop ebp
// 00a9582e  5b                   pop ebx
// 00a9582f  64890d00000000       mov dword ptr fs:[0], ecx
// 00a95836  83c434               add esp, 0x34
// 00a95839  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getCPUSpeed@Render@RBX@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
