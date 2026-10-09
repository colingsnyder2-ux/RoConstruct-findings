// roc 2007-03 004f0f50  unit: seg_004f0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0f50
//
// 004f0f50  55                   push ebp
// 004f0f51  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004f0f55  56                   push esi
// 004f0f56  57                   push edi
// 004f0f57  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f0f5b  8d47ff               lea eax, [edi - 1]
// 004f0f5e  99                   cdq 
// 004f0f5f  2bc2                 sub eax, edx
// 004f0f61  8bf0                 mov esi, eax
// 004f0f63  d1fe                 sar esi, 1
// 004f0f65  397c2418             cmp dword ptr [esp + 0x18], edi
// 004f0f69  7d40                 jge 0x4f0fab
// 004f0f6b  53                   push ebx
// 004f0f6c  8d642400             lea esp, [esp]
// 004f0f70  8d04b6               lea eax, [esi + esi*4]
// 004f0f73  c1e004               shl eax, 4
// 004f0f76  8d4c2420             lea ecx, [esp + 0x20]
// 004f0f7a  8d1c28               lea ebx, [eax + ebp]
// 004f0f7d  51                   push ecx
// 004f0f7e  53                   push ebx
// 004f0f7f  ff542478             call dword ptr [esp + 0x78]
// 004f0f83  83c408               add esp, 8
// 004f0f86  84c0                 test al, al
// 004f0f88  7420                 je 0x4f0faa
// 004f0f8a  8d0cbf               lea ecx, [edi + edi*4]
// 004f0f8d  c1e104               shl ecx, 4
// 004f0f90  53                   push ebx
// 004f0f91  03cd                 add ecx, ebp
// 004f0f93  e82826f8ff           call 0x4735c0
// 004f0f98  8d46ff               lea eax, [esi - 1]
// 004f0f9b  99                   cdq 
// 004f0f9c  2bc2                 sub eax, edx
// 004f0f9e  8bfe                 mov edi, esi
// 004f0fa0  d1f8                 sar eax, 1
// 004f0fa2  397c241c             cmp dword ptr [esp + 0x1c], edi
// 004f0fa6  8bf0                 mov esi, eax
// 004f0fa8  7cc6                 jl 0x4f0f70
// 004f0faa  5b                   pop ebx
// 004f0fab  d944241c             fld dword ptr [esp + 0x1c]
// 004f0faf  8d04bf               lea eax, [edi + edi*4]
// 004f0fb2  c1e004               shl eax, 4
// 004f0fb5  d91c28               fstp dword ptr [eax + ebp]
// 004f0fb8  03c5                 add eax, ebp
// 004f0fba  d9442420             fld dword ptr [esp + 0x20]
// 004f0fbe  8a542468             mov dl, byte ptr [esp + 0x68]
// 004f0fc2  d95804               fstp dword ptr [eax + 4]
// 004f0fc5  8a4c2469             mov cl, byte ptr [esp + 0x69]
// 004f0fc9  d9442424             fld dword ptr [esp + 0x24]
// 004f0fcd  5f                   pop edi
// 004f0fce  d95808               fstp dword ptr [eax + 8]
// 004f0fd1  5e                   pop esi
// 004f0fd2  d9442420             fld dword ptr [esp + 0x20]
// 004f0fd6  5d                   pop ebp
// 004f0fd7  d9580c               fstp dword ptr [eax + 0xc]
// 004f0fda  d9442420             fld dword ptr [esp + 0x20]
// 004f0fde  d95810               fstp dword ptr [eax + 0x10]
// 004f0fe1  d9442424             fld dword ptr [esp + 0x24]
// 004f0fe5  d95814               fstp dword ptr [eax + 0x14]
// 004f0fe8  d9442428             fld dword ptr [esp + 0x28]
// 004f0fec  d95818               fstp dword ptr [eax + 0x18]
// 004f0fef  dd442430             fld qword ptr [esp + 0x30]
// 004f0ff3  dd5820               fstp qword ptr [eax + 0x20]
// 004f0ff6  dd442438             fld qword ptr [esp + 0x38]
// 004f0ffa  dd5828               fstp qword ptr [eax + 0x28]
// 004f0ffd  dd442440             fld qword ptr [esp + 0x40]
// 004f1001  dd5830               fstp qword ptr [eax + 0x30]
// 004f1004  dd442448             fld qword ptr [esp + 0x48]
// 004f1008  dd5838               fstp qword ptr [eax + 0x38]
// 004f100b  d9442450             fld dword ptr [esp + 0x50]
// 004f100f  d95840               fstp dword ptr [eax + 0x40]
// 004f1012  d9442454             fld dword ptr [esp + 0x54]
// 004f1016  d95844               fstp dword ptr [eax + 0x44]
// 004f1019  d9442458             fld dword ptr [esp + 0x58]
// 004f101d  d95848               fstp dword ptr [eax + 0x48]
// 004f1020  88504c               mov byte ptr [eax + 0x4c], dl
// 004f1023  8a54245e             mov dl, byte ptr [esp + 0x5e]
// 004f1027  88484d               mov byte ptr [eax + 0x4d], cl
// 004f102a  88504e               mov byte ptr [eax + 0x4e], dl
// 004f102d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Push_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@HHV12@P6A_NABV12@2@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
