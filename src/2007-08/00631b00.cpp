// roc 2007-08 00631b00  unit: _com_error  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631b00
//
// 00631b00  51                   push ecx
// 00631b01  56                   push esi
// 00631b02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00631b06  83c158               add ecx, 0x58
// 00631b09  51                   push ecx
// 00631b0a  8bce                 mov ecx, esi
// 00631b0c  c744240800000000     mov dword ptr [esp + 8], 0
// 00631b14  ff1574dd7700         call dword ptr [0x77dd74]
// 00631b1a  8bc6                 mov eax, esi
// 00631b1c  5e                   pop esi
// 00631b1d  59                   pop ecx
// 00631b1e  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?getCardDescription@RenderDevice@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
