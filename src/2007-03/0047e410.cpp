// roc 2007-03 0047e410  unit: seg_00470000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e410
//
// 0047e410  51                   push ecx
// 0047e411  56                   push esi
// 0047e412  57                   push edi
// 0047e413  8bf1                 mov esi, ecx
// 0047e415  c744240800000000     mov dword ptr [esp + 8], 0
// 0047e41d  e85effffff           call 0x47e380
// 0047e422  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047e426  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047e42a  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0047e430  50                   push eax
// 0047e431  57                   push edi
// 0047e432  e8b9c6ffff           call 0x47aaf0
// 0047e437  8bc7                 mov eax, edi
// 0047e439  5f                   pop edi
// 0047e43a  5e                   pop esi
// 0047e43b  59                   pop ecx
// 0047e43c  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?joystickName@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
