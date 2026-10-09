// roc 2011-06 007a1cb0  unit: RBX::Assembly  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1cb0
//
// 007a1cb0  56                   push esi
// 007a1cb1  8b7104               mov esi, dword ptr [ecx + 4]
// 007a1cb4  8b06                 mov eax, dword ptr [esi]
// 007a1cb6  8b5004               mov edx, dword ptr [eax + 4]
// 007a1cb9  57                   push edi
// 007a1cba  8bce                 mov ecx, esi
// 007a1cbc  ffd2                 call edx
// 007a1cbe  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007a1cc2  3bc7                 cmp eax, edi
// 007a1cc4  7422                 je 0x7a1ce8
// 007a1cc6  8b06                 mov eax, dword ptr [esi]
// 007a1cc8  8b5004               mov edx, dword ptr [eax + 4]
// 007a1ccb  8bce                 mov ecx, esi
// 007a1ccd  ffd2                 call edx
// 007a1ccf  3bc7                 cmp eax, edi
// 007a1cd1  7e05                 jle 0x7a1cd8
// 007a1cd3  8b7604               mov esi, dword ptr [esi + 4]
// 007a1cd6  eb03                 jmp 0x7a1cdb
// 007a1cd8  8b7608               mov esi, dword ptr [esi + 8]
// 007a1cdb  8b06                 mov eax, dword ptr [esi]
// 007a1cdd  8b5004               mov edx, dword ptr [eax + 4]
// 007a1ce0  8bce                 mov ecx, esi
// 007a1ce2  ffd2                 call edx
// 007a1ce4  3bc7                 cmp eax, edi
// 007a1ce6  75de                 jne 0x7a1cc6
// 007a1ce8  5f                   pop edi
// 007a1ce9  8bc6                 mov eax, esi
// 007a1ceb  5e                   pop esi
// 007a1cec  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
