// roc 2007-08 006090e0  unit: RBX::SimJobStage  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006090e0
//
// 006090e0  56                   push esi
// 006090e1  8b7104               mov esi, dword ptr [ecx + 4]
// 006090e4  8b06                 mov eax, dword ptr [esi]
// 006090e6  8b5004               mov edx, dword ptr [eax + 4]
// 006090e9  57                   push edi
// 006090ea  8bce                 mov ecx, esi
// 006090ec  ffd2                 call edx
// 006090ee  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006090f2  3bc7                 cmp eax, edi
// 006090f4  7422                 je 0x609118
// 006090f6  8b06                 mov eax, dword ptr [esi]
// 006090f8  8b5004               mov edx, dword ptr [eax + 4]
// 006090fb  8bce                 mov ecx, esi
// 006090fd  ffd2                 call edx
// 006090ff  3bc7                 cmp eax, edi
// 00609101  7e05                 jle 0x609108
// 00609103  8b7604               mov esi, dword ptr [esi + 4]
// 00609106  eb03                 jmp 0x60910b
// 00609108  8b7608               mov esi, dword ptr [esi + 8]
// 0060910b  8b06                 mov eax, dword ptr [esi]
// 0060910d  8b5004               mov edx, dword ptr [eax + 4]
// 00609110  8bce                 mov ecx, esi
// 00609112  ffd2                 call edx
// 00609114  3bc7                 cmp eax, edi
// 00609116  75de                 jne 0x6090f6
// 00609118  5f                   pop edi
// 00609119  8bc6                 mov eax, esi
// 0060911b  5e                   pop esi
// 0060911c  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
