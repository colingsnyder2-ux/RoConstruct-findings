// roc 2007-08 004fd3e0  unit: RBX::Render::AggregateChunk  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd3e0
//
// 004fd3e0  55                   push ebp
// 004fd3e1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004fd3e5  56                   push esi
// 004fd3e6  57                   push edi
// 004fd3e7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004fd3eb  8d47ff               lea eax, [edi - 1]
// 004fd3ee  99                   cdq 
// 004fd3ef  2bc2                 sub eax, edx
// 004fd3f1  8bf0                 mov esi, eax
// 004fd3f3  d1fe                 sar esi, 1
// 004fd3f5  397c2418             cmp dword ptr [esp + 0x18], edi
// 004fd3f9  7d40                 jge 0x4fd43b
// 004fd3fb  53                   push ebx
// 004fd3fc  8d642400             lea esp, [esp]
// 004fd400  8d04b6               lea eax, [esi + esi*4]
// 004fd403  c1e004               shl eax, 4
// 004fd406  8d4c2420             lea ecx, [esp + 0x20]
// 004fd40a  8d1c28               lea ebx, [eax + ebp]
// 004fd40d  51                   push ecx
// 004fd40e  53                   push ebx
// 004fd40f  ff542478             call dword ptr [esp + 0x78]
// 004fd413  83c408               add esp, 8
// 004fd416  84c0                 test al, al
// 004fd418  7420                 je 0x4fd43a
// 004fd41a  8d0cbf               lea ecx, [edi + edi*4]
// 004fd41d  c1e104               shl ecx, 4
// 004fd420  53                   push ebx
// 004fd421  03cd                 add ecx, ebp
// 004fd423  e8a860f7ff           call 0x4734d0
// 004fd428  8d46ff               lea eax, [esi - 1]
// 004fd42b  99                   cdq 
// 004fd42c  2bc2                 sub eax, edx
// 004fd42e  8bfe                 mov edi, esi
// 004fd430  d1f8                 sar eax, 1
// 004fd432  397c241c             cmp dword ptr [esp + 0x1c], edi
// 004fd436  8bf0                 mov esi, eax
// 004fd438  7cc6                 jl 0x4fd400
// 004fd43a  5b                   pop ebx
// 004fd43b  d944241c             fld dword ptr [esp + 0x1c]
// 004fd43f  8d04bf               lea eax, [edi + edi*4]
// 004fd442  c1e004               shl eax, 4
// 004fd445  d91c28               fstp dword ptr [eax + ebp]
// 004fd448  03c5                 add eax, ebp
// 004fd44a  d9442420             fld dword ptr [esp + 0x20]
// 004fd44e  8a542468             mov dl, byte ptr [esp + 0x68]
// 004fd452  d95804               fstp dword ptr [eax + 4]
// 004fd455  8a4c2469             mov cl, byte ptr [esp + 0x69]
// 004fd459  d9442424             fld dword ptr [esp + 0x24]
// 004fd45d  5f                   pop edi
// 004fd45e  d95808               fstp dword ptr [eax + 8]
// 004fd461  5e                   pop esi
// 004fd462  d9442420             fld dword ptr [esp + 0x20]
// 004fd466  5d                   pop ebp
// 004fd467  d9580c               fstp dword ptr [eax + 0xc]
// 004fd46a  d9442420             fld dword ptr [esp + 0x20]
// 004fd46e  d95810               fstp dword ptr [eax + 0x10]
// 004fd471  d9442424             fld dword ptr [esp + 0x24]
// 004fd475  d95814               fstp dword ptr [eax + 0x14]
// 004fd478  d9442428             fld dword ptr [esp + 0x28]
// 004fd47c  d95818               fstp dword ptr [eax + 0x18]
// 004fd47f  dd442430             fld qword ptr [esp + 0x30]
// 004fd483  dd5820               fstp qword ptr [eax + 0x20]
// 004fd486  dd442438             fld qword ptr [esp + 0x38]
// 004fd48a  dd5828               fstp qword ptr [eax + 0x28]
// 004fd48d  dd442440             fld qword ptr [esp + 0x40]
// 004fd491  dd5830               fstp qword ptr [eax + 0x30]
// 004fd494  dd442448             fld qword ptr [esp + 0x48]
// 004fd498  dd5838               fstp qword ptr [eax + 0x38]
// 004fd49b  d9442450             fld dword ptr [esp + 0x50]
// 004fd49f  d95840               fstp dword ptr [eax + 0x40]
// 004fd4a2  d9442454             fld dword ptr [esp + 0x54]
// 004fd4a6  d95844               fstp dword ptr [eax + 0x44]
// 004fd4a9  d9442458             fld dword ptr [esp + 0x58]
// 004fd4ad  d95848               fstp dword ptr [eax + 0x48]
// 004fd4b0  88504c               mov byte ptr [eax + 0x4c], dl
// 004fd4b3  8a54245e             mov dl, byte ptr [esp + 0x5e]
// 004fd4b7  88484d               mov byte ptr [eax + 0x4d], cl
// 004fd4ba  88504e               mov byte ptr [eax + 0x4e], dl
// 004fd4bd  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Push_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
