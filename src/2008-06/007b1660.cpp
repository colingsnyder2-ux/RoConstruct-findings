// roc 2008-06 007b1660  unit: RBX::RenderNew::TextureProxy  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b1660
//
// 007b1660  51                   push ecx
// 007b1661  80790400             cmp byte ptr [ecx + 4], 0
// 007b1665  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007b1669  56                   push esi
// 007b166a  c744240400000000     mov dword ptr [esp + 4], 0
// 007b1672  7409                 je 0x7b167d
// 007b1674  83b8e403000002       cmp dword ptr [eax + 0x3e4], 2
// 007b167b  7409                 je 0x7b1686
// 007b167d  83b8e403000004       cmp dword ptr [eax + 0x3e4], 4
// 007b1684  751c                 jne 0x7b16a2
// 007b1686  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b168a  c70600000000         mov dword ptr [esi], 0
// 007b1690  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007b1693  50                   push eax
// 007b1694  8bce                 mov ecx, esi
// 007b1696  e80579deff           call 0x598fa0
// 007b169b  8bc6                 mov eax, esi
// 007b169d  5e                   pop esi
// 007b169e  59                   pop ecx
// 007b169f  c20800               ret 8
// 007b16a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007b16a6  c70600000000         mov dword ptr [esi], 0
// 007b16ac  8b4908               mov ecx, dword ptr [ecx + 8]
// 007b16af  51                   push ecx
// 007b16b0  8bce                 mov ecx, esi
// 007b16b2  e8e978deff           call 0x598fa0
// 007b16b7  8bc6                 mov eax, esi
// 007b16b9  5e                   pop esi
// 007b16ba  59                   pop ecx
// 007b16bb  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?getBloomMap@ToneMap@G3D@@ABE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@PAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
