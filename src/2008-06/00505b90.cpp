// roc 2008-06 00505b90  unit: RBX::Render::RenderScene  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505b90
//
// 00505b90  6aff                 push -1
// 00505b92  6823b87c00           push 0x7cb823
// 00505b97  64a100000000         mov eax, dword ptr fs:[0]
// 00505b9d  50                   push eax
// 00505b9e  64892500000000       mov dword ptr fs:[0], esp
// 00505ba5  51                   push ecx
// 00505ba6  56                   push esi
// 00505ba7  8bf1                 mov esi, ecx
// 00505ba9  57                   push edi
// 00505baa  89742408             mov dword ptr [esp + 8], esi
// 00505bae  8b4608               mov eax, dword ptr [esi + 8]
// 00505bb1  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 00505bb7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00505bbf  85c0                 test eax, eax
// 00505bc1  7428                 je 0x505beb
// 00505bc3  83c004               add eax, 4
// 00505bc6  50                   push eax
// 00505bc7  ffd7                 call edi
// 00505bc9  85c0                 test eax, eax
// 00505bcb  7517                 jne 0x505be4
// 00505bcd  8b4e08               mov ecx, dword ptr [esi + 8]
// 00505bd0  e8bb51f5ff           call 0x45ad90
// 00505bd5  8b4e08               mov ecx, dword ptr [esi + 8]
// 00505bd8  85c9                 test ecx, ecx
// 00505bda  7408                 je 0x505be4
// 00505bdc  8b01                 mov eax, dword ptr [ecx]
// 00505bde  8b10                 mov edx, dword ptr [eax]
// 00505be0  6a01                 push 1
// 00505be2  ffd2                 call edx
// 00505be4  c7460800000000       mov dword ptr [esi + 8], 0
// 00505beb  8b4604               mov eax, dword ptr [esi + 4]
// 00505bee  c644241400           mov byte ptr [esp + 0x14], 0
// 00505bf3  85c0                 test eax, eax
// 00505bf5  7428                 je 0x505c1f
// 00505bf7  83c004               add eax, 4
// 00505bfa  50                   push eax
// 00505bfb  ffd7                 call edi
// 00505bfd  85c0                 test eax, eax
// 00505bff  7517                 jne 0x505c18
// 00505c01  8b4e04               mov ecx, dword ptr [esi + 4]
// 00505c04  e88751f5ff           call 0x45ad90
// 00505c09  8b4e04               mov ecx, dword ptr [esi + 4]
// 00505c0c  85c9                 test ecx, ecx
// 00505c0e  7408                 je 0x505c18
// 00505c10  8b01                 mov eax, dword ptr [ecx]
// 00505c12  8b10                 mov edx, dword ptr [eax]
// 00505c14  6a01                 push 1
// 00505c16  ffd2                 call edx
// 00505c18  c7460400000000       mov dword ptr [esi + 4], 0
// 00505c1f  8b06                 mov eax, dword ptr [esi]
// 00505c21  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00505c29  85c0                 test eax, eax
// 00505c2b  7425                 je 0x505c52
// 00505c2d  83c004               add eax, 4
// 00505c30  50                   push eax
// 00505c31  ffd7                 call edi
// 00505c33  85c0                 test eax, eax
// 00505c35  7515                 jne 0x505c4c
// 00505c37  8b0e                 mov ecx, dword ptr [esi]
// 00505c39  e85251f5ff           call 0x45ad90
// 00505c3e  8b0e                 mov ecx, dword ptr [esi]
// 00505c40  85c9                 test ecx, ecx
// 00505c42  7408                 je 0x505c4c
// 00505c44  8b01                 mov eax, dword ptr [ecx]
// 00505c46  8b10                 mov edx, dword ptr [eax]
// 00505c48  6a01                 push 1
// 00505c4a  ffd2                 call edx
// 00505c4c  c70600000000         mov dword ptr [esi], 0
// 00505c52  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00505c56  5f                   pop edi
// 00505c57  5e                   pop esi
// 00505c58  64890d00000000       mov dword ptr fs:[0], ecx
// 00505c5f  83c410               add esp, 0x10
// 00505c62  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1DepthBlur@Render@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
