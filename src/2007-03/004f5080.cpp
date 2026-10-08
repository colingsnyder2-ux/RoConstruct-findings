// roc 2007-03 004f5080  unit: seg_004f0000  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5080
//
// 004f5080  51                   push ecx
// 004f5081  56                   push esi
// 004f5082  8bf1                 mov esi, ecx
// 004f5084  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f5087  8d4804               lea ecx, [eax + 4]
// 004f508a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f508d  7e0f                 jle 0x4f509e
// 004f508f  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f5092  6a04                 push 4
// 004f5094  03d0                 add edx, eax
// 004f5096  52                   push edx
// 004f5097  8bce                 mov ecx, esi
// 004f5099  e8d2c20000           call 0x501370
// 004f509e  83464404             add dword ptr [esi + 0x44], 4
// 004f50a2  807e2400             cmp byte ptr [esi + 0x24], 0
// 004f50a6  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f50a9  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f50ac  7428                 je 0x4f50d6
// 004f50ae  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 004f50b3  03c1                 add eax, ecx
// 004f50b5  8a48fe               mov cl, byte ptr [eax - 2]
// 004f50b8  88542404             mov byte ptr [esp + 4], dl
// 004f50bc  0fb650fd             movzx edx, byte ptr [eax - 3]
// 004f50c0  8a40fc               mov al, byte ptr [eax - 4]
// 004f50c3  884c2405             mov byte ptr [esp + 5], cl
// 004f50c7  88542406             mov byte ptr [esp + 6], dl
// 004f50cb  88442407             mov byte ptr [esp + 7], al
// 004f50cf  8b442404             mov eax, dword ptr [esp + 4]
// 004f50d3  5e                   pop esi
// 004f50d4  59                   pop ecx
// 004f50d5  c3                   ret 
// 004f50d6  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 004f50da  5e                   pop esi
// 004f50db  59                   pop ecx
// 004f50dc  c3                   ret 
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readUInt32@BinaryInput@G3D@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
