// roc 2008-06 006457e0  unit: RBX::RigidJoint  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006457e0
//
// 006457e0  56                   push esi
// 006457e1  8b7104               mov esi, dword ptr [ecx + 4]
// 006457e4  8b06                 mov eax, dword ptr [esi]
// 006457e6  8b5004               mov edx, dword ptr [eax + 4]
// 006457e9  57                   push edi
// 006457ea  8bce                 mov ecx, esi
// 006457ec  ffd2                 call edx
// 006457ee  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006457f2  3bc7                 cmp eax, edi
// 006457f4  7422                 je 0x645818
// 006457f6  8b06                 mov eax, dword ptr [esi]
// 006457f8  8b5004               mov edx, dword ptr [eax + 4]
// 006457fb  8bce                 mov ecx, esi
// 006457fd  ffd2                 call edx
// 006457ff  3bc7                 cmp eax, edi
// 00645801  7e05                 jle 0x645808
// 00645803  8b7604               mov esi, dword ptr [esi + 4]
// 00645806  eb03                 jmp 0x64580b
// 00645808  8b7608               mov esi, dword ptr [esi + 8]
// 0064580b  8b06                 mov eax, dword ptr [esi]
// 0064580d  8b5004               mov edx, dword ptr [eax + 4]
// 00645810  8bce                 mov ecx, esi
// 00645812  ffd2                 call edx
// 00645814  3bc7                 cmp eax, edi
// 00645816  75de                 jne 0x6457f6
// 00645818  5f                   pop edi
// 00645819  8bc6                 mov eax, esi
// 0064581b  5e                   pop esi
// 0064581c  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?getStage@IPipelined@RBX@@ABEPAVIStage@2@W4StageType@32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
