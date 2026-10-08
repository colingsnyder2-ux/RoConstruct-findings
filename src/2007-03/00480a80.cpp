// roc 2007-03 00480a80  unit: seg_00480000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480a80
//
// 00480a80  8b442404             mov eax, dword ptr [esp + 4]
// 00480a84  3d538b0000           cmp eax, 0x8b53
// 00480a89  770f                 ja 0x480a9a
// 00480a8b  7426                 je 0x480ab3
// 00480a8d  3d04140000           cmp eax, 0x1404
// 00480a92  7542                 jne 0x480ad6
// 00480a94  b806140000           mov eax, 0x1406
// 00480a99  c3                   ret 
// 00480a9a  8d88ac74ffff         lea ecx, [eax - 0x8b54]
// 00480aa0  83f910               cmp ecx, 0x10
// 00480aa3  7731                 ja 0x480ad6
// 00480aa5  0fb689f80a4800       movzx ecx, byte ptr [ecx + 0x480af8]
// 00480aac  ff248dd80a4800       jmp dword ptr [ecx*4 + 0x480ad8]
// 00480ab3  b8508b0000           mov eax, 0x8b50
// 00480ab8  c3                   ret 
// 00480ab9  b8518b0000           mov eax, 0x8b51
// 00480abe  c3                   ret 
// 00480abf  b8528b0000           mov eax, 0x8b52
// 00480ac4  c3                   ret 
// 00480ac5  b8e10d0000           mov eax, 0xde1
// 00480aca  c3                   ret 
// 00480acb  b813850000           mov eax, 0x8513
// 00480ad0  c3                   ret 
// 00480ad1  b8f5840000           mov eax, 0x84f5
// 00480ad6  c3                   ret 
// 00480ad7  90                   nop 
// 00480ad8  b90a4800bf           mov ecx, 0xbf00480a
// 00480add  0a4800               or cl, byte ptr [eax]
// 00480ae0  94                   xchg esp, eax
// 00480ae1  0a4800               or cl, byte ptr [eax]
// 00480ae4  b30a                 mov bl, 0xa
// 00480ae6  48                   dec eax
// 00480ae7  00c5                 add ch, al
// 00480ae9  0a4800               or cl, byte ptr [eax]
// 00480aec  cb                   retf 
// 00480aed  0a4800               or cl, byte ptr [eax]
// 00480af0  d10a                 ror dword ptr [edx], 1
// 00480af2  48                   dec eax
// 00480af3  00d6                 add dh, dl
// 00480af5  0a4800               or cl, byte ptr [eax]
// 00480af8  0001                 add byte ptr [ecx], al
// 00480afa  0203                 add al, byte ptr [ebx]
// 00480afc  0001                 add byte ptr [ecx], al
// 00480afe  07                   pop es
// 00480aff  07                   pop es
// 00480b00  07                   pop es
// 00480b01  07                   pop es
// 00480b02  0407                 add al, 7
// 00480b04  0507040606           add eax, 0x6060407
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?canonicalType@VertexAndPixelShader@G3D@@KAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
