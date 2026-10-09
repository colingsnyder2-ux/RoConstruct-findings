// roc 2008-06 00505ad0  unit: RBX::Render::RenderScene  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505ad0
//
// 00505ad0  6aff                 push -1
// 00505ad2  68feb77c00           push 0x7cb7fe
// 00505ad7  64a100000000         mov eax, dword ptr fs:[0]
// 00505add  50                   push eax
// 00505ade  64892500000000       mov dword ptr fs:[0], esp
// 00505ae5  51                   push ecx
// 00505ae6  56                   push esi
// 00505ae7  8bf1                 mov esi, ecx
// 00505ae9  57                   push edi
// 00505aea  89742408             mov dword ptr [esp + 8], esi
// 00505aee  8b4610               mov eax, dword ptr [esi + 0x10]
// 00505af1  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 00505af7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00505aff  85c0                 test eax, eax
// 00505b01  7428                 je 0x505b2b
// 00505b03  83c004               add eax, 4
// 00505b06  50                   push eax
// 00505b07  ffd7                 call edi
// 00505b09  85c0                 test eax, eax
// 00505b0b  7517                 jne 0x505b24
// 00505b0d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00505b10  e87b52f5ff           call 0x45ad90
// 00505b15  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00505b18  85c9                 test ecx, ecx
// 00505b1a  7408                 je 0x505b24
// 00505b1c  8b01                 mov eax, dword ptr [ecx]
// 00505b1e  8b10                 mov edx, dword ptr [eax]
// 00505b20  6a01                 push 1
// 00505b22  ffd2                 call edx
// 00505b24  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00505b2b  68702a5000           push 0x502a70
// 00505b30  6a02                 push 2
// 00505b32  6a04                 push 4
// 00505b34  8d4608               lea eax, [esi + 8]
// 00505b37  50                   push eax
// 00505b38  c644242400           mov byte ptr [esp + 0x24], 0
// 00505b3d  e819bb1900           call 0x6a165b
// 00505b42  8b06                 mov eax, dword ptr [esi]
// 00505b44  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00505b4c  85c0                 test eax, eax
// 00505b4e  7425                 je 0x505b75
// 00505b50  83c004               add eax, 4
// 00505b53  50                   push eax
// 00505b54  ffd7                 call edi
// 00505b56  85c0                 test eax, eax
// 00505b58  7515                 jne 0x505b6f
// 00505b5a  8b0e                 mov ecx, dword ptr [esi]
// 00505b5c  e82f52f5ff           call 0x45ad90
// 00505b61  8b0e                 mov ecx, dword ptr [esi]
// 00505b63  85c9                 test ecx, ecx
// 00505b65  7408                 je 0x505b6f
// 00505b67  8b11                 mov edx, dword ptr [ecx]
// 00505b69  8b02                 mov eax, dword ptr [edx]
// 00505b6b  6a01                 push 1
// 00505b6d  ffd0                 call eax
// 00505b6f  c70600000000         mov dword ptr [esi], 0
// 00505b75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00505b79  5f                   pop edi
// 00505b7a  5e                   pop esi
// 00505b7b  64890d00000000       mov dword ptr fs:[0], ecx
// 00505b82  83c410               add esp, 0x10
// 00505b85  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
