// roc 2008-06 00645930  unit: RBX::RigidJoint  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645930
//
// 00645930  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00645933  83ec30               sub esp, 0x30
// 00645936  56                   push esi
// 00645937  57                   push edi
// 00645938  8d7928               lea edi, [ecx + 0x28]
// 0064593b  39442440             cmp dword ptr [esp + 0x40], eax
// 0064593f  7403                 je 0x645944
// 00645941  8d7958               lea edi, [ecx + 0x58]
// 00645944  39442444             cmp dword ptr [esp + 0x44], eax
// 00645948  7505                 jne 0x64594f
// 0064594a  83c128               add ecx, 0x28
// 0064594d  eb03                 jmp 0x645952
// 0064594f  83c158               add ecx, 0x58
// 00645952  8d442408             lea eax, [esp + 8]
// 00645956  50                   push eax
// 00645957  e8d429e3ff           call 0x478330
// 0064595c  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00645960  50                   push eax
// 00645961  56                   push esi
// 00645962  8bcf                 mov ecx, edi
// 00645964  e8970de3ff           call 0x476700
// 00645969  5f                   pop edi
// 0064596a  8bc6                 mov eax, esi
// 0064596c  5e                   pop esi
// 0064596d  83c430               add esp, 0x30
// 00645970  c20c00               ret 0xc
// library rbxgs/v8world\RigidJoint.cpp (function ?getChildInParent@RigidJoint@RBX@@QAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/RigidJoint.cpp
