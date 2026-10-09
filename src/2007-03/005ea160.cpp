// roc 2007-03 005ea160  unit: seg_005e0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea160
//
// 005ea160  56                   push esi
// 005ea161  8b7104               mov esi, dword ptr [ecx + 4]
// 005ea164  8b06                 mov eax, dword ptr [esi]
// 005ea166  8b5004               mov edx, dword ptr [eax + 4]
// 005ea169  57                   push edi
// 005ea16a  8bce                 mov ecx, esi
// 005ea16c  ffd2                 call edx
// 005ea16e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ea172  3bc7                 cmp eax, edi
// 005ea174  7422                 je 0x5ea198
// 005ea176  8b06                 mov eax, dword ptr [esi]
// 005ea178  8b5004               mov edx, dword ptr [eax + 4]
// 005ea17b  8bce                 mov ecx, esi
// 005ea17d  ffd2                 call edx
// 005ea17f  3bc7                 cmp eax, edi
// 005ea181  7e05                 jle 0x5ea188
// 005ea183  8b7604               mov esi, dword ptr [esi + 4]
// 005ea186  eb03                 jmp 0x5ea18b
// 005ea188  8b7608               mov esi, dword ptr [esi + 8]
// 005ea18b  8b06                 mov eax, dword ptr [esi]
// 005ea18d  8b5004               mov edx, dword ptr [eax + 4]
// 005ea190  8bce                 mov ecx, esi
// 005ea192  ffd2                 call edx
// 005ea194  3bc7                 cmp eax, edi
// 005ea196  75de                 jne 0x5ea176
// 005ea198  5f                   pop edi
// 005ea199  8bc6                 mov eax, esi
// 005ea19b  5e                   pop esi
// 005ea19c  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
