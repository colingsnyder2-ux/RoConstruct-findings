// roc 2009-06 005690c0  unit: RBX::RbxG3D::RenderScene  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005690c0
//
// 005690c0  55                   push ebp
// 005690c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005690c5  56                   push esi
// 005690c6  57                   push edi
// 005690c7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005690cb  8d47ff               lea eax, [edi - 1]
// 005690ce  99                   cdq 
// 005690cf  2bc2                 sub eax, edx
// 005690d1  8bf0                 mov esi, eax
// 005690d3  d1fe                 sar esi, 1
// 005690d5  397c2418             cmp dword ptr [esp + 0x18], edi
// 005690d9  7d40                 jge 0x56911b
// 005690db  53                   push ebx
// 005690dc  8d642400             lea esp, [esp]
// 005690e0  8d04b6               lea eax, [esi + esi*4]
// 005690e3  c1e004               shl eax, 4
// 005690e6  8d4c2420             lea ecx, [esp + 0x20]
// 005690ea  8d1c28               lea ebx, [eax + ebp]
// 005690ed  51                   push ecx
// 005690ee  53                   push ebx
// 005690ef  ff542478             call dword ptr [esp + 0x78]
// 005690f3  83c408               add esp, 8
// 005690f6  84c0                 test al, al
// 005690f8  7420                 je 0x56911a
// 005690fa  8d0cbf               lea ecx, [edi + edi*4]
// 005690fd  c1e104               shl ecx, 4
// 00569100  53                   push ebx
// 00569101  03cd                 add ecx, ebp
// 00569103  e8084ff3ff           call 0x49e010
// 00569108  8d46ff               lea eax, [esi - 1]
// 0056910b  99                   cdq 
// 0056910c  2bc2                 sub eax, edx
// 0056910e  8bfe                 mov edi, esi
// 00569110  d1f8                 sar eax, 1
// 00569112  397c241c             cmp dword ptr [esp + 0x1c], edi
// 00569116  8bf0                 mov esi, eax
// 00569118  7cc6                 jl 0x5690e0
// 0056911a  5b                   pop ebx
// 0056911b  d944241c             fld dword ptr [esp + 0x1c]
// 0056911f  8d04bf               lea eax, [edi + edi*4]
// 00569122  c1e004               shl eax, 4
// 00569125  d91c28               fstp dword ptr [eax + ebp]
// 00569128  03c5                 add eax, ebp
// 0056912a  d9442420             fld dword ptr [esp + 0x20]
// 0056912e  8a542468             mov dl, byte ptr [esp + 0x68]
// 00569132  d95804               fstp dword ptr [eax + 4]
// 00569135  8a4c2469             mov cl, byte ptr [esp + 0x69]
// 00569139  d9442424             fld dword ptr [esp + 0x24]
// 0056913d  5f                   pop edi
// 0056913e  d95808               fstp dword ptr [eax + 8]
// 00569141  5e                   pop esi
// 00569142  d9442420             fld dword ptr [esp + 0x20]
// 00569146  5d                   pop ebp
// 00569147  d9580c               fstp dword ptr [eax + 0xc]
// 0056914a  d9442420             fld dword ptr [esp + 0x20]
// 0056914e  d95810               fstp dword ptr [eax + 0x10]
// 00569151  d9442424             fld dword ptr [esp + 0x24]
// 00569155  d95814               fstp dword ptr [eax + 0x14]
// 00569158  d9442428             fld dword ptr [esp + 0x28]
// 0056915c  d95818               fstp dword ptr [eax + 0x18]
// 0056915f  dd442430             fld qword ptr [esp + 0x30]
// 00569163  dd5820               fstp qword ptr [eax + 0x20]
// 00569166  dd442438             fld qword ptr [esp + 0x38]
// 0056916a  dd5828               fstp qword ptr [eax + 0x28]
// 0056916d  dd442440             fld qword ptr [esp + 0x40]
// 00569171  dd5830               fstp qword ptr [eax + 0x30]
// 00569174  dd442448             fld qword ptr [esp + 0x48]
// 00569178  dd5838               fstp qword ptr [eax + 0x38]
// 0056917b  d9442450             fld dword ptr [esp + 0x50]
// 0056917f  d95840               fstp dword ptr [eax + 0x40]
// 00569182  d9442454             fld dword ptr [esp + 0x54]
// 00569186  d95844               fstp dword ptr [eax + 0x44]
// 00569189  d9442458             fld dword ptr [esp + 0x58]
// 0056918d  d95848               fstp dword ptr [eax + 0x48]
// 00569190  88504c               mov byte ptr [eax + 0x4c], dl
// 00569193  8a54245e             mov dl, byte ptr [esp + 0x5e]
// 00569197  88484d               mov byte ptr [eax + 0x4d], cl
// 0056919a  88504e               mov byte ptr [eax + 0x4e], dl
// 0056919d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Push_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
