// roc 2008-06 0047bec0  unit: CInstanceRecord::CNameItem  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047bec0
//
// 0047bec0  6aff                 push -1
// 0047bec2  68b14c7c00           push 0x7c4cb1
// 0047bec7  64a100000000         mov eax, dword ptr fs:[0]
// 0047becd  50                   push eax
// 0047bece  64892500000000       mov dword ptr fs:[0], esp
// 0047bed5  51                   push ecx
// 0047bed6  56                   push esi
// 0047bed7  8bf1                 mov esi, ecx
// 0047bed9  57                   push edi
// 0047beda  89742408             mov dword ptr [esp + 8], esi
// 0047bede  8d8e9c080000         lea ecx, [esi + 0x89c]
// 0047bee4  c744241404000000     mov dword ptr [esp + 0x14], 4
// 0047beec  c70124ce8100         mov dword ptr [ecx], 0x81ce24
// 0047bef2  e829420000           call 0x480120
// 0047bef7  8d8e80080000         lea ecx, [esi + 0x880]
// 0047befd  c644241403           mov byte ptr [esp + 0x14], 3
// 0047bf02  e8e9fcffff           call 0x47bbf0
// 0047bf07  8d8e20010000         lea ecx, [esi + 0x120]
// 0047bf0d  c644241402           mov byte ptr [esp + 0x14], 2
// 0047bf12  e859dbffff           call 0x479a70
// 0047bf17  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0047bf1d  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 0047bf23  c644241401           mov byte ptr [esp + 0x14], 1
// 0047bf28  85c0                 test eax, eax
// 0047bf2a  7431                 je 0x47bf5d
// 0047bf2c  83c004               add eax, 4
// 0047bf2f  50                   push eax
// 0047bf30  ffd7                 call edi
// 0047bf32  85c0                 test eax, eax
// 0047bf34  751d                 jne 0x47bf53
// 0047bf36  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 0047bf3c  e84feefdff           call 0x45ad90
// 0047bf41  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 0047bf47  85c9                 test ecx, ecx
// 0047bf49  7408                 je 0x47bf53
// 0047bf4b  8b01                 mov eax, dword ptr [ecx]
// 0047bf4d  8b10                 mov edx, dword ptr [eax]
// 0047bf4f  6a01                 push 1
// 0047bf51  ffd2                 call edx
// 0047bf53  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0047bf5d  8d4e50               lea ecx, [esi + 0x50]
// 0047bf60  c644241400           mov byte ptr [esp + 0x14], 0
// 0047bf65  ff1568248000         call dword ptr [0x802468]
// 0047bf6b  8b4638               mov eax, dword ptr [esi + 0x38]
// 0047bf6e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0047bf76  85c0                 test eax, eax
// 0047bf78  7428                 je 0x47bfa2
// 0047bf7a  83c004               add eax, 4
// 0047bf7d  50                   push eax
// 0047bf7e  ffd7                 call edi
// 0047bf80  85c0                 test eax, eax
// 0047bf82  7517                 jne 0x47bf9b
// 0047bf84  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0047bf87  e804eefdff           call 0x45ad90
// 0047bf8c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0047bf8f  85c9                 test ecx, ecx
// 0047bf91  7408                 je 0x47bf9b
// 0047bf93  8b01                 mov eax, dword ptr [ecx]
// 0047bf95  8b10                 mov edx, dword ptr [eax]
// 0047bf97  6a01                 push 1
// 0047bf99  ffd2                 call edx
// 0047bf9b  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0047bfa2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047bfa6  5f                   pop edi
// 0047bfa7  5e                   pop esi
// 0047bfa8  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bfaf  83c410               add esp, 0x10
// 0047bfb2  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??1RenderDevice@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
