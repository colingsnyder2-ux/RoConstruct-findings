// roc 2007-03 00732ed0  unit: seg_00730000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00732ed0
//
// 00732ed0  51                   push ecx
// 00732ed1  80790400             cmp byte ptr [ecx + 4], 0
// 00732ed5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00732ed9  56                   push esi
// 00732eda  c744240400000000     mov dword ptr [esp + 4], 0
// 00732ee2  7409                 je 0x732eed
// 00732ee4  83b8e403000002       cmp dword ptr [eax + 0x3e4], 2
// 00732eeb  7409                 je 0x732ef6
// 00732eed  83b8e403000004       cmp dword ptr [eax + 0x3e4], 4
// 00732ef4  751c                 jne 0x732f12
// 00732ef6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00732efa  c70600000000         mov dword ptr [esi], 0
// 00732f00  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00732f03  50                   push eax
// 00732f04  8bce                 mov ecx, esi
// 00732f06  e88521d4ff           call 0x475090
// 00732f0b  8bc6                 mov eax, esi
// 00732f0d  5e                   pop esi
// 00732f0e  59                   pop ecx
// 00732f0f  c20800               ret 8
// 00732f12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00732f16  c70600000000         mov dword ptr [esi], 0
// 00732f1c  8b4908               mov ecx, dword ptr [ecx + 8]
// 00732f1f  51                   push ecx
// 00732f20  8bce                 mov ecx, esi
// 00732f22  e86921d4ff           call 0x475090
// 00732f27  8bc6                 mov eax, esi
// 00732f29  5e                   pop esi
// 00732f2a  59                   pop ecx
// 00732f2b  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?getBloomMap@ToneMap@G3D@@ABE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@PAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
