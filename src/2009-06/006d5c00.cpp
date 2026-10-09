// roc 2009-06 006d5c00  unit: RBX::Body  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5c00
//
// 006d5c00  56                   push esi
// 006d5c01  8b7104               mov esi, dword ptr [ecx + 4]
// 006d5c04  8b06                 mov eax, dword ptr [esi]
// 006d5c06  8b5004               mov edx, dword ptr [eax + 4]
// 006d5c09  57                   push edi
// 006d5c0a  8bce                 mov ecx, esi
// 006d5c0c  ffd2                 call edx
// 006d5c0e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d5c12  3bc7                 cmp eax, edi
// 006d5c14  7422                 je 0x6d5c38
// 006d5c16  8b06                 mov eax, dword ptr [esi]
// 006d5c18  8b5004               mov edx, dword ptr [eax + 4]
// 006d5c1b  8bce                 mov ecx, esi
// 006d5c1d  ffd2                 call edx
// 006d5c1f  3bc7                 cmp eax, edi
// 006d5c21  7e05                 jle 0x6d5c28
// 006d5c23  8b7604               mov esi, dword ptr [esi + 4]
// 006d5c26  eb03                 jmp 0x6d5c2b
// 006d5c28  8b7608               mov esi, dword ptr [esi + 8]
// 006d5c2b  8b06                 mov eax, dword ptr [esi]
// 006d5c2d  8b5004               mov edx, dword ptr [eax + 4]
// 006d5c30  8bce                 mov ecx, esi
// 006d5c32  ffd2                 call edx
// 006d5c34  3bc7                 cmp eax, edi
// 006d5c36  75de                 jne 0x6d5c16
// 006d5c38  5f                   pop edi
// 006d5c39  8bc6                 mov eax, esi
// 006d5c3b  5e                   pop esi
// 006d5c3c  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
