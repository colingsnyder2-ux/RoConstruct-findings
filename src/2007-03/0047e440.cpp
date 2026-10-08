// roc 2007-03 0047e440  unit: seg_00470000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e440
//
// 0047e440  56                   push esi
// 0047e441  8bf1                 mov esi, ecx
// 0047e443  e838ffffff           call 0x47e380
// 0047e448  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0047e44e  8b442408             mov eax, dword ptr [esp + 8]
// 0047e452  394108               cmp dword ptr [ecx + 8], eax
// 0047e455  5e                   pop esi
// 0047e456  7609                 jbe 0x47e461
// 0047e458  89442404             mov dword ptr [esp + 4], eax
// 0047e45c  e94fd2ffff           jmp 0x47b6b0
// 0047e461  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?getJoystickState@Win32Window@G3D@@UAEXIAAV?$Array@M@2@AAV?$Array@_N@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
