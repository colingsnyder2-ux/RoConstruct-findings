// roc 2007-03 0047aaf0  unit: seg_00470000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047aaf0
//
// 0047aaf0  51                   push ecx
// 0047aaf1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047aaf5  8d14c500000000       lea edx, [eax*8]
// 0047aafc  2bd0                 sub edx, eax
// 0047aafe  8b4104               mov eax, dword ptr [ecx + 4]
// 0047ab01  56                   push esi
// 0047ab02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047ab06  8d4cd004             lea ecx, [eax + edx*8 + 4]
// 0047ab0a  51                   push ecx
// 0047ab0b  8bce                 mov ecx, esi
// 0047ab0d  c744240800000000     mov dword ptr [esp + 8], 0
// 0047ab15  ff157ce77700         call dword ptr [0x77e77c]
// 0047ab1b  8bc6                 mov eax, esi
// 0047ab1d  5e                   pop esi
// 0047ab1e  59                   pop ecx
// 0047ab1f  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?getJoystickName@_DirectInput@_internal@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
