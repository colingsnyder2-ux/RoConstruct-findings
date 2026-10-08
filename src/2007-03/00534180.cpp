// roc 2007-03 00534180  unit: seg_00530000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534180
//
// 00534180  83ec54               sub esp, 0x54
// 00534183  56                   push esi
// 00534184  57                   push edi
// 00534185  8bf9                 mov edi, ecx
// 00534187  8b87b8feffff         mov eax, dword ptr [edi - 0x148]
// 0053418d  8b4804               mov ecx, dword ptr [eax + 4]
// 00534190  8b9439b8feffff       mov edx, dword ptr [ecx + edi - 0x148]
// 00534197  8b4204               mov eax, dword ptr [edx + 4]
// 0053419a  8d8c39b8feffff       lea ecx, [ecx + edi - 0x148]
// 005341a1  ffd0                 call eax
// 005341a3  85c0                 test eax, eax
// 005341a5  746c                 je 0x534213
// 005341a7  8b8f64ffffff         mov ecx, dword ptr [edi - 0x9c]
// 005341ad  e8dee70300           call 0x572990
// 005341b2  8bf0                 mov esi, eax
// 005341b4  56                   push esi
// 005341b5  8d4c2430             lea ecx, [esp + 0x30]
// 005341b9  e8c2a7fcff           call 0x4fe980
// 005341be  d94624               fld dword ptr [esi + 0x24]
// 005341c1  d95c2450             fstp dword ptr [esp + 0x50]
// 005341c5  81c734ffffff         add edi, 0xffffff34
// 005341cb  d94628               fld dword ptr [esi + 0x28]
// 005341ce  57                   push edi
// 005341cf  d95c2458             fstp dword ptr [esp + 0x58]
// 005341d3  8d4c240c             lea ecx, [esp + 0xc]
// 005341d7  d9462c               fld dword ptr [esi + 0x2c]
// 005341da  51                   push ecx
// 005341db  8d4c2434             lea ecx, [esp + 0x34]
// 005341df  d95c2460             fstp dword ptr [esp + 0x60]
// 005341e3  e818a9fcff           call 0x4feb00
// 005341e8  8b742460             mov esi, dword ptr [esp + 0x60]
// 005341ec  50                   push eax
// 005341ed  8bce                 mov ecx, esi
// 005341ef  e88ca7fcff           call 0x4fe980
// 005341f4  d9442450             fld dword ptr [esp + 0x50]
// 005341f8  d95e24               fstp dword ptr [esi + 0x24]
// 005341fb  5f                   pop edi
// 005341fc  d9442450             fld dword ptr [esp + 0x50]
// 00534200  8bc6                 mov eax, esi
// 00534202  d95e28               fstp dword ptr [esi + 0x28]
// 00534205  d9442454             fld dword ptr [esp + 0x54]
// 00534209  d95e2c               fstp dword ptr [esi + 0x2c]
// 0053420c  5e                   pop esi
// 0053420d  83c454               add esp, 0x54
// 00534210  c20400               ret 4
// 00534213  8b742460             mov esi, dword ptr [esp + 0x60]
// 00534217  8bce                 mov ecx, esi
// 00534219  e8520ff4ff           call 0x475170
// 0053421e  5f                   pop edi
// 0053421f  8bc6                 mov eax, esi
// 00534221  5e                   pop esi
// 00534222  83c454               add esp, 0x54
// 00534225  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getLocation@ModelInstance@RBX@@UBE?BVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
