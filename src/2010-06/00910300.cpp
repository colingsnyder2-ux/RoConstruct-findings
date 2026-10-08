// roc 2010-06 00910300  unit: G3D::GFont  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00910300
//
// 00910300  51                   push ecx
// 00910301  80790400             cmp byte ptr [ecx + 4], 0
// 00910305  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00910309  56                   push esi
// 0091030a  c744240400000000     mov dword ptr [esp + 4], 0
// 00910312  7409                 je 0x91031d
// 00910314  83b8e403000002       cmp dword ptr [eax + 0x3e4], 2
// 0091031b  7409                 je 0x910326
// 0091031d  83b8e403000004       cmp dword ptr [eax + 0x3e4], 4
// 00910324  751c                 jne 0x910342
// 00910326  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0091032a  c70600000000         mov dword ptr [esi], 0
// 00910330  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00910333  50                   push eax
// 00910334  8bce                 mov ecx, esi
// 00910336  e8e569b7ff           call 0x486d20
// 0091033b  8bc6                 mov eax, esi
// 0091033d  5e                   pop esi
// 0091033e  59                   pop ecx
// 0091033f  c20800               ret 8
// 00910342  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00910346  c70600000000         mov dword ptr [esi], 0
// 0091034c  8b4908               mov ecx, dword ptr [ecx + 8]
// 0091034f  51                   push ecx
// 00910350  8bce                 mov ecx, esi
// 00910352  e8c969b7ff           call 0x486d20
// 00910357  8bc6                 mov eax, esi
// 00910359  5e                   pop esi
// 0091035a  59                   pop ecx
// 0091035b  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?getBloomMap@ToneMap@G3D@@ABE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@PAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
