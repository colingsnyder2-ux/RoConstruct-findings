// roc 2008-06 00505940  unit: RBX::Render::RenderScene  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505940
//
// 00505940  55                   push ebp
// 00505941  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00505945  56                   push esi
// 00505946  57                   push edi
// 00505947  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0050594b  8d47ff               lea eax, [edi - 1]
// 0050594e  99                   cdq 
// 0050594f  2bc2                 sub eax, edx
// 00505951  8bf0                 mov esi, eax
// 00505953  d1fe                 sar esi, 1
// 00505955  397c2418             cmp dword ptr [esp + 0x18], edi
// 00505959  7d40                 jge 0x50599b
// 0050595b  53                   push ebx
// 0050595c  8d642400             lea esp, [esp]
// 00505960  8d04b6               lea eax, [esi + esi*4]
// 00505963  c1e004               shl eax, 4
// 00505966  8d4c2420             lea ecx, [esp + 0x20]
// 0050596a  8d1c28               lea ebx, [eax + ebp]
// 0050596d  51                   push ecx
// 0050596e  53                   push ebx
// 0050596f  ff542478             call dword ptr [esp + 0x78]
// 00505973  83c408               add esp, 8
// 00505976  84c0                 test al, al
// 00505978  7420                 je 0x50599a
// 0050597a  8d0cbf               lea ecx, [edi + edi*4]
// 0050597d  c1e104               shl ecx, 4
// 00505980  53                   push ebx
// 00505981  03cd                 add ecx, ebp
// 00505983  e81810f7ff           call 0x4769a0
// 00505988  8d46ff               lea eax, [esi - 1]
// 0050598b  99                   cdq 
// 0050598c  2bc2                 sub eax, edx
// 0050598e  8bfe                 mov edi, esi
// 00505990  d1f8                 sar eax, 1
// 00505992  397c241c             cmp dword ptr [esp + 0x1c], edi
// 00505996  8bf0                 mov esi, eax
// 00505998  7cc6                 jl 0x505960
// 0050599a  5b                   pop ebx
// 0050599b  d944241c             fld dword ptr [esp + 0x1c]
// 0050599f  8d04bf               lea eax, [edi + edi*4]
// 005059a2  c1e004               shl eax, 4
// 005059a5  d91c28               fstp dword ptr [eax + ebp]
// 005059a8  03c5                 add eax, ebp
// 005059aa  d9442420             fld dword ptr [esp + 0x20]
// 005059ae  8a542468             mov dl, byte ptr [esp + 0x68]
// 005059b2  d95804               fstp dword ptr [eax + 4]
// 005059b5  8a4c2469             mov cl, byte ptr [esp + 0x69]
// 005059b9  d9442424             fld dword ptr [esp + 0x24]
// 005059bd  5f                   pop edi
// 005059be  d95808               fstp dword ptr [eax + 8]
// 005059c1  5e                   pop esi
// 005059c2  d9442420             fld dword ptr [esp + 0x20]
// 005059c6  5d                   pop ebp
// 005059c7  d9580c               fstp dword ptr [eax + 0xc]
// 005059ca  d9442420             fld dword ptr [esp + 0x20]
// 005059ce  d95810               fstp dword ptr [eax + 0x10]
// 005059d1  d9442424             fld dword ptr [esp + 0x24]
// 005059d5  d95814               fstp dword ptr [eax + 0x14]
// 005059d8  d9442428             fld dword ptr [esp + 0x28]
// 005059dc  d95818               fstp dword ptr [eax + 0x18]
// 005059df  dd442430             fld qword ptr [esp + 0x30]
// 005059e3  dd5820               fstp qword ptr [eax + 0x20]
// 005059e6  dd442438             fld qword ptr [esp + 0x38]
// 005059ea  dd5828               fstp qword ptr [eax + 0x28]
// 005059ed  dd442440             fld qword ptr [esp + 0x40]
// 005059f1  dd5830               fstp qword ptr [eax + 0x30]
// 005059f4  dd442448             fld qword ptr [esp + 0x48]
// 005059f8  dd5838               fstp qword ptr [eax + 0x38]
// 005059fb  d9442450             fld dword ptr [esp + 0x50]
// 005059ff  d95840               fstp dword ptr [eax + 0x40]
// 00505a02  d9442454             fld dword ptr [esp + 0x54]
// 00505a06  d95844               fstp dword ptr [eax + 0x44]
// 00505a09  d9442458             fld dword ptr [esp + 0x58]
// 00505a0d  d95848               fstp dword ptr [eax + 0x48]
// 00505a10  88504c               mov byte ptr [eax + 0x4c], dl
// 00505a13  8a54245e             mov dl, byte ptr [esp + 0x5e]
// 00505a17  88484d               mov byte ptr [eax + 0x4d], cl
// 00505a1a  88504e               mov byte ptr [eax + 0x4e], dl
// 00505a1d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Push_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
