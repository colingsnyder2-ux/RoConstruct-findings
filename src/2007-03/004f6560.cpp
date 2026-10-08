// roc 2007-03 004f6560  unit: seg_004f0000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6560
//
// 004f6560  51                   push ecx
// 004f6561  56                   push esi
// 004f6562  8bf1                 mov esi, ecx
// 004f6564  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f6567  8d4802               lea ecx, [eax + 2]
// 004f656a  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f656d  7e0f                 jle 0x4f657e
// 004f656f  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f6572  6a02                 push 2
// 004f6574  03d0                 add edx, eax
// 004f6576  52                   push edx
// 004f6577  8bce                 mov ecx, esi
// 004f6579  e8f2ad0000           call 0x501370
// 004f657e  83464402             add dword ptr [esi + 0x44], 2
// 004f6582  807e2400             cmp byte ptr [esi + 0x24], 0
// 004f6586  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f6589  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004f658c  7419                 je 0x4f65a7
// 004f658e  8a5408ff             mov dl, byte ptr [eax + ecx - 1]
// 004f6592  03c1                 add eax, ecx
// 004f6594  8a40fe               mov al, byte ptr [eax - 2]
// 004f6597  88542404             mov byte ptr [esp + 4], dl
// 004f659b  88442405             mov byte ptr [esp + 5], al
// 004f659f  668b442404           mov ax, word ptr [esp + 4]
// 004f65a4  5e                   pop esi
// 004f65a5  59                   pop ecx
// 004f65a6  c3                   ret 
// 004f65a7  668b4401fe           mov ax, word ptr [ecx + eax - 2]
// 004f65ac  5e                   pop esi
// 004f65ad  59                   pop ecx
// 004f65ae  c3                   ret 
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readUInt16@BinaryInput@G3D@@QAEGXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
