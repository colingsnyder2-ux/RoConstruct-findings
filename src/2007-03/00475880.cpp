// roc 2007-03 00475880  unit: seg_00470000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475880
//
// 00475880  56                   push esi
// 00475881  57                   push edi
// 00475882  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00475886  68704a4700           push 0x474a70
// 0047588b  6a08                 push 8
// 0047588d  6a50                 push 0x50
// 0047588f  8bf1                 mov esi, ecx
// 00475891  57                   push edi
// 00475892  56                   push esi
// 00475893  e8b8f7ffff           call 0x475050
// 00475898  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0047589e  898680020000         mov dword ptr [esi + 0x280], eax
// 004758a4  8b8f84020000         mov ecx, dword ptr [edi + 0x284]
// 004758aa  898e84020000         mov dword ptr [esi + 0x284], ecx
// 004758b0  8a9788020000         mov dl, byte ptr [edi + 0x288]
// 004758b6  889688020000         mov byte ptr [esi + 0x288], dl
// 004758bc  d9878c020000         fld dword ptr [edi + 0x28c]
// 004758c2  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 004758c8  d98790020000         fld dword ptr [edi + 0x290]
// 004758ce  d99e90020000         fstp dword ptr [esi + 0x290]
// 004758d4  d98794020000         fld dword ptr [edi + 0x294]
// 004758da  d99e94020000         fstp dword ptr [esi + 0x294]
// 004758e0  d98798020000         fld dword ptr [edi + 0x298]
// 004758e6  d99e98020000         fstp dword ptr [esi + 0x298]
// 004758ec  8a879c020000         mov al, byte ptr [edi + 0x29c]
// 004758f2  88869c020000         mov byte ptr [esi + 0x29c], al
// 004758f8  8a8f9d020000         mov cl, byte ptr [edi + 0x29d]
// 004758fe  5f                   pop edi
// 004758ff  888e9d020000         mov byte ptr [esi + 0x29d], cl
// 00475905  8bc6                 mov eax, esi
// 00475907  5e                   pop esi
// 00475908  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0Lights@RenderState@RenderDevice@G3D@@QAE@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
