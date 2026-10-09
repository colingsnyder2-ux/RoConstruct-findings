// roc 2010-06 00750a70  unit: RBX::Assembly  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750a70
//
// 00750a70  56                   push esi
// 00750a71  8b7104               mov esi, dword ptr [ecx + 4]
// 00750a74  8b06                 mov eax, dword ptr [esi]
// 00750a76  8b5004               mov edx, dword ptr [eax + 4]
// 00750a79  57                   push edi
// 00750a7a  8bce                 mov ecx, esi
// 00750a7c  ffd2                 call edx
// 00750a7e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750a82  3bc7                 cmp eax, edi
// 00750a84  7422                 je 0x750aa8
// 00750a86  8b06                 mov eax, dword ptr [esi]
// 00750a88  8b5004               mov edx, dword ptr [eax + 4]
// 00750a8b  8bce                 mov ecx, esi
// 00750a8d  ffd2                 call edx
// 00750a8f  3bc7                 cmp eax, edi
// 00750a91  7e05                 jle 0x750a98
// 00750a93  8b7604               mov esi, dword ptr [esi + 4]
// 00750a96  eb03                 jmp 0x750a9b
// 00750a98  8b7608               mov esi, dword ptr [esi + 8]
// 00750a9b  8b06                 mov eax, dword ptr [esi]
// 00750a9d  8b5004               mov edx, dword ptr [eax + 4]
// 00750aa0  8bce                 mov ecx, esi
// 00750aa2  ffd2                 call edx
// 00750aa4  3bc7                 cmp eax, edi
// 00750aa6  75de                 jne 0x750a86
// 00750aa8  5f                   pop edi
// 00750aa9  8bc6                 mov eax, esi
// 00750aab  5e                   pop esi
// 00750aac  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
