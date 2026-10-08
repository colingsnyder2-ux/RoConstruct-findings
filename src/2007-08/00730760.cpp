// roc 2007-08 00730760  unit: seg_00730000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00730760
//
// 00730760  51                   push ecx
// 00730761  80790400             cmp byte ptr [ecx + 4], 0
// 00730765  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00730769  56                   push esi
// 0073076a  c744240400000000     mov dword ptr [esp + 4], 0
// 00730772  7409                 je 0x73077d
// 00730774  83b8e403000002       cmp dword ptr [eax + 0x3e4], 2
// 0073077b  7409                 je 0x730786
// 0073077d  83b8e403000004       cmp dword ptr [eax + 0x3e4], 4
// 00730784  751c                 jne 0x7307a2
// 00730786  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073078a  c70600000000         mov dword ptr [esi], 0
// 00730790  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00730793  50                   push eax
// 00730794  8bce                 mov ecx, esi
// 00730796  e8d547d4ff           call 0x474f70
// 0073079b  8bc6                 mov eax, esi
// 0073079d  5e                   pop esi
// 0073079e  59                   pop ecx
// 0073079f  c20800               ret 8
// 007307a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007307a6  c70600000000         mov dword ptr [esi], 0
// 007307ac  8b4908               mov ecx, dword ptr [ecx + 8]
// 007307af  51                   push ecx
// 007307b0  8bce                 mov ecx, esi
// 007307b2  e8b947d4ff           call 0x474f70
// 007307b7  8bc6                 mov eax, esi
// 007307b9  5e                   pop esi
// 007307ba  59                   pop ecx
// 007307bb  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?getBloomMap@ToneMap@G3D@@ABE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@PAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
