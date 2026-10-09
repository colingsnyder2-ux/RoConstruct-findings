// roc 2009-12 007b2ee0  unit: RBX::Body  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b2ee0
//
// 007b2ee0  56                   push esi
// 007b2ee1  8b7104               mov esi, dword ptr [ecx + 4]
// 007b2ee4  8b06                 mov eax, dword ptr [esi]
// 007b2ee6  8b5004               mov edx, dword ptr [eax + 4]
// 007b2ee9  57                   push edi
// 007b2eea  8bce                 mov ecx, esi
// 007b2eec  ffd2                 call edx
// 007b2eee  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b2ef2  3bc7                 cmp eax, edi
// 007b2ef4  7422                 je 0x7b2f18
// 007b2ef6  8b06                 mov eax, dword ptr [esi]
// 007b2ef8  8b5004               mov edx, dword ptr [eax + 4]
// 007b2efb  8bce                 mov ecx, esi
// 007b2efd  ffd2                 call edx
// 007b2eff  3bc7                 cmp eax, edi
// 007b2f01  7e05                 jle 0x7b2f08
// 007b2f03  8b7604               mov esi, dword ptr [esi + 4]
// 007b2f06  eb03                 jmp 0x7b2f0b
// 007b2f08  8b7608               mov esi, dword ptr [esi + 8]
// 007b2f0b  8b06                 mov eax, dword ptr [esi]
// 007b2f0d  8b5004               mov edx, dword ptr [eax + 4]
// 007b2f10  8bce                 mov ecx, esi
// 007b2f12  ffd2                 call edx
// 007b2f14  3bc7                 cmp eax, edi
// 007b2f16  75de                 jne 0x7b2ef6
// 007b2f18  5f                   pop edi
// 007b2f19  8bc6                 mov eax, esi
// 007b2f1b  5e                   pop esi
// 007b2f1c  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
