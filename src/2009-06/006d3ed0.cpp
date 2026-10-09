// roc 2009-06 006d3ed0  unit: RBX::Block  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d3ed0
//
// 006d3ed0  83ec08               sub esp, 8
// 006d3ed3  53                   push ebx
// 006d3ed4  55                   push ebp
// 006d3ed5  56                   push esi
// 006d3ed6  57                   push edi
// 006d3ed7  8bf9                 mov edi, ecx
// 006d3ed9  8b4718               mov eax, dword ptr [edi + 0x18]
// 006d3edc  8b28                 mov ebp, dword ptr [eax]
// 006d3ede  8b37                 mov esi, dword ptr [edi]
// 006d3ee0  896c2414             mov dword ptr [esp + 0x14], ebp
// 006d3ee4  89742410             mov dword ptr [esp + 0x10], esi
// 006d3ee8  8b5f18               mov ebx, dword ptr [edi + 0x18]
// 006d3eeb  8b07                 mov eax, dword ptr [edi]
// 006d3eed  85f6                 test esi, esi
// 006d3eef  7404                 je 0x6d3ef5
// 006d3ef1  3bf0                 cmp esi, eax
// 006d3ef3  7406                 je 0x6d3efb
// 006d3ef5  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3efb  3beb                 cmp ebp, ebx
// 006d3efd  7438                 je 0x6d3f37
// 006d3eff  85f6                 test esi, esi
// 006d3f01  7530                 jne 0x6d3f33
// 006d3f03  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3f09  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 006d3f0c  7506                 jne 0x6d3f14
// 006d3f0e  ff15ace98900         call dword ptr [0x89e9ac]
// 006d3f14  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006d3f17  51                   push ecx
// 006d3f18  e8154b0400           call 0x718a32
// 006d3f1d  83c404               add esp, 4
// 006d3f20  8d4c2410             lea ecx, [esp + 0x10]
// 006d3f24  e817f0ffff           call 0x6d2f40
// 006d3f29  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006d3f2d  8b742410             mov esi, dword ptr [esp + 0x10]
// 006d3f31  ebb5                 jmp 0x6d3ee8
// 006d3f33  8b36                 mov esi, dword ptr [esi]
// 006d3f35  ebd2                 jmp 0x6d3f09
// 006d3f37  8bcf                 mov ecx, edi
// 006d3f39  5f                   pop edi
// 006d3f3a  5e                   pop esi
// 006d3f3b  5d                   pop ebp
// 006d3f3c  5b                   pop ebx
// 006d3f3d  83c408               add esp, 8
// 006d3f40  e99bfdffff           jmp 0x6d3ce0
// library openrbx-client/App\v8world\Block.cpp (function ??1BlockTemplates@BlockTemplate@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
