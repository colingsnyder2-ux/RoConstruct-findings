// roc 2007-08 00530470  unit: RBX::ModelInstance  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530470
//
// 00530470  83ec54               sub esp, 0x54
// 00530473  56                   push esi
// 00530474  57                   push edi
// 00530475  8bf9                 mov edi, ecx
// 00530477  8b87b8feffff         mov eax, dword ptr [edi - 0x148]
// 0053047d  8b4804               mov ecx, dword ptr [eax + 4]
// 00530480  8b9439b8feffff       mov edx, dword ptr [ecx + edi - 0x148]
// 00530487  8b4204               mov eax, dword ptr [edx + 4]
// 0053048a  8d8c39b8feffff       lea ecx, [ecx + edi - 0x148]
// 00530491  ffd0                 call eax
// 00530493  85c0                 test eax, eax
// 00530495  746c                 je 0x530503
// 00530497  8b8f64ffffff         mov ecx, dword ptr [edi - 0x9c]
// 0053049d  e8de3a0400           call 0x573f80
// 005304a2  8bf0                 mov esi, eax
// 005304a4  56                   push esi
// 005304a5  8d4c2430             lea ecx, [esp + 0x30]
// 005304a9  e82291fdff           call 0x5095d0
// 005304ae  d94624               fld dword ptr [esi + 0x24]
// 005304b1  d95c2450             fstp dword ptr [esp + 0x50]
// 005304b5  81c734ffffff         add edi, 0xffffff34
// 005304bb  d94628               fld dword ptr [esi + 0x28]
// 005304be  57                   push edi
// 005304bf  d95c2458             fstp dword ptr [esp + 0x58]
// 005304c3  8d4c240c             lea ecx, [esp + 0xc]
// 005304c7  d9462c               fld dword ptr [esi + 0x2c]
// 005304ca  51                   push ecx
// 005304cb  8d4c2434             lea ecx, [esp + 0x34]
// 005304cf  d95c2460             fstp dword ptr [esp + 0x60]
// 005304d3  e87892fdff           call 0x509750
// 005304d8  8b742460             mov esi, dword ptr [esp + 0x60]
// 005304dc  50                   push eax
// 005304dd  8bce                 mov ecx, esi
// 005304df  e8ec90fdff           call 0x5095d0
// 005304e4  d9442450             fld dword ptr [esp + 0x50]
// 005304e8  d95e24               fstp dword ptr [esi + 0x24]
// 005304eb  5f                   pop edi
// 005304ec  d9442450             fld dword ptr [esp + 0x50]
// 005304f0  8bc6                 mov eax, esi
// 005304f2  d95e28               fstp dword ptr [esi + 0x28]
// 005304f5  d9442454             fld dword ptr [esp + 0x54]
// 005304f9  d95e2c               fstp dword ptr [esi + 0x2c]
// 005304fc  5e                   pop esi
// 005304fd  83c454               add esp, 0x54
// 00530500  c20400               ret 4
// 00530503  8b742460             mov esi, dword ptr [esp + 0x60]
// 00530507  8bce                 mov ecx, esi
// 00530509  e8424bf4ff           call 0x475050
// 0053050e  5f                   pop edi
// 0053050f  8bc6                 mov eax, esi
// 00530511  5e                   pop esi
// 00530512  83c454               add esp, 0x54
// 00530515  c20400               ret 4
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getLocation@ModelInstance@RBX@@UBE?BVCoordinateFrame@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
