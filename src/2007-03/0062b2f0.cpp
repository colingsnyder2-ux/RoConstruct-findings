// roc 2007-03 0062b2f0  unit: seg_00620000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062b2f0
//
// 0062b2f0  51                   push ecx
// 0062b2f1  56                   push esi
// 0062b2f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062b2f6  83c158               add ecx, 0x58
// 0062b2f9  51                   push ecx
// 0062b2fa  8bce                 mov ecx, esi
// 0062b2fc  c744240800000000     mov dword ptr [esp + 8], 0
// 0062b304  ff152cdd7700         call dword ptr [0x77dd2c]
// 0062b30a  8bc6                 mov eax, esi
// 0062b30c  5e                   pop esi
// 0062b30d  59                   pop ecx
// 0062b30e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
