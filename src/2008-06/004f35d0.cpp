// roc 2008-06 004f35d0  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f35d0
//
// 004f35d0  d9ee                 fldz 
// 004f35d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f35d6  53                   push ebx
// 004f35d7  d911                 fst dword ptr [ecx]
// 004f35d9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f35dd  d95104               fst dword ptr [ecx + 4]
// 004f35e0  56                   push esi
// 004f35e1  d95108               fst dword ptr [ecx + 8]
// 004f35e4  57                   push edi
// 004f35e5  d9590c               fstp dword ptr [ecx + 0xc]
// 004f35e8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f35ec  d94304               fld dword ptr [ebx + 4]
// 004f35ef  d85f04               fcomp dword ptr [edi + 4]
// 004f35f2  8d7304               lea esi, [ebx + 4]
// 004f35f5  8d5704               lea edx, [edi + 4]
// 004f35f8  dfe0                 fnstsw ax
// 004f35fa  f6c441               test ah, 0x41
// 004f35fd  8bc2                 mov eax, edx
// 004f35ff  7402                 je 0x4f3603
// 004f3601  8bc6                 mov eax, esi
// 004f3603  d900                 fld dword ptr [eax]
// 004f3605  d903                 fld dword ptr [ebx]
// 004f3607  d81f                 fcomp dword ptr [edi]
// 004f3609  dfe0                 fnstsw ax
// 004f360b  f6c441               test ah, 0x41
// 004f360e  8bc7                 mov eax, edi
// 004f3610  7402                 je 0x4f3614
// 004f3612  8bc3                 mov eax, ebx
// 004f3614  d900                 fld dword ptr [eax]
// 004f3616  d919                 fstp dword ptr [ecx]
// 004f3618  d95904               fstp dword ptr [ecx + 4]
// 004f361b  d902                 fld dword ptr [edx]
// 004f361d  d81e                 fcomp dword ptr [esi]
// 004f361f  dfe0                 fnstsw ax
// 004f3621  f6c441               test ah, 0x41
// 004f3624  7402                 je 0x4f3628
// 004f3626  8bd6                 mov edx, esi
// 004f3628  d902                 fld dword ptr [edx]
// 004f362a  d907                 fld dword ptr [edi]
// 004f362c  d81b                 fcomp dword ptr [ebx]
// 004f362e  dfe0                 fnstsw ax
// 004f3630  f6c441               test ah, 0x41
// 004f3633  7402                 je 0x4f3637
// 004f3635  8bfb                 mov edi, ebx
// 004f3637  d907                 fld dword ptr [edi]
// 004f3639  5f                   pop edi
// 004f363a  d95908               fstp dword ptr [ecx + 8]
// 004f363d  5e                   pop esi
// 004f363e  8bc1                 mov eax, ecx
// 004f3640  d9590c               fstp dword ptr [ecx + 0xc]
// 004f3643  5b                   pop ebx
// 004f3644  c3                   ret 
// library rbxgs-dll/gui\Widget.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@ABVVector2@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll gui/Widget.cpp
