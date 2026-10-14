// roc 2008-06 00677630  unit: RBX::AdornG3D  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00677630
//
// 00677630  83ec0c               sub esp, 0xc
// 00677633  56                   push esi
// 00677634  8b742414             mov esi, dword ptr [esp + 0x14]
// 00677638  57                   push edi
// 00677639  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0067763d  8b07                 mov eax, dword ptr [edi]
// 0067763f  8b5038               mov edx, dword ptr [eax + 0x38]
// 00677642  8d4e38               lea ecx, [esi + 0x38]
// 00677645  51                   push ecx
// 00677646  8bcf                 mov ecx, edi
// 00677648  ffd2                 call edx
// 0067764a  d94604               fld dword ptr [esi + 4]
// 0067764d  d905ac9b8100         fld dword ptr [0x819bac]
// 00677653  8b442424             mov eax, dword ptr [esp + 0x24]
// 00677657  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0067765b  dcc9                 fmul st(1), st(0)
// 0067765d  d9c9                 fxch st(1)
// 0067765f  50                   push eax
// 00677660  51                   push ecx
// 00677661  d95c2410             fstp dword ptr [esp + 0x10]
// 00677665  51                   push ecx
// 00677666  d94608               fld dword ptr [esi + 8]
// 00677669  8d542414             lea edx, [esp + 0x14]
// 0067766d  d8c9                 fmul st(1)
// 0067766f  d95c2418             fstp dword ptr [esp + 0x18]
// 00677673  d84e0c               fmul dword ptr [esi + 0xc]
// 00677676  d95c241c             fstp dword ptr [esp + 0x1c]
// 0067767a  d905f8498200         fld dword ptr [0x8249f8]
// 00677680  d91c24               fstp dword ptr [esp]
// 00677683  52                   push edx
// 00677684  57                   push edi
// 00677685  e816feffff           call 0x6774a0
// 0067768a  83c414               add esp, 0x14
// 0067768d  5f                   pop edi
// 0067768e  5e                   pop esi
// 0067768f  83c40c               add esp, 0xc
// 00677692  c3                   ret 
// library openrbx-client/Rendering\AppDraw\DrawAdorn.cpp (function ?partSurface@DrawAdorn@RBX@@SAXABVPart@2@HPAVAdorn@2@ABVColor4@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/DrawAdorn.cpp
