// from server: 100% by auto
// roc 2008-06 004833b0  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004833b0
//
// 004833b0  51                   push ecx
// 004833b1  56                   push esi
// 004833b2  57                   push edi
// 004833b3  8bf1                 mov esi, ecx
// 004833b5  c744240800000000     mov dword ptr [esp + 8], 0
// 004833bd  e85effffff           call 0x483320
// 004833c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004833c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004833ca  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 004833d0  50                   push eax
// 004833d1  57                   push edi
// 004833d2  e869c7ffff           call 0x47fb40
// 004833d7  8bc7                 mov eax, edi
// 004833d9  5f                   pop edi
// 004833da  5e                   pop esi
// 004833db  59                   pop ecx
// 004833dc  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?joystickName@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
