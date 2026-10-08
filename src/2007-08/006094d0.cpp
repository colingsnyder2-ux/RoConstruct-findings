// roc 2007-08 006094d0  unit: RBX::RotateJoint  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006094d0
//
// 006094d0  64a100000000         mov eax, dword ptr fs:[0]
// 006094d6  6aff                 push -1
// 006094d8  6851c47500           push 0x75c451
// 006094dd  50                   push eax
// 006094de  64892500000000       mov dword ptr fs:[0], esp
// 006094e5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006094e9  83e806               sub eax, 6
// 006094ec  0f849e000000         je 0x609590
// 006094f2  83e801               sub eax, 1
// 006094f5  7453                 je 0x60954a
// 006094f7  83e801               sub eax, 1
// 006094fa  0f85d6000000         jne 0x6095d6
// 00609500  68c4000000           push 0xc4
// 00609505  e8ec690200           call 0x62fef6
// 0060950a  83c404               add esp, 4
// 0060950d  89442410             mov dword ptr [esp + 0x10], eax
// 00609511  85c0                 test eax, eax
// 00609513  c744240801000000     mov dword ptr [esp + 8], 1
// 0060951b  0f84b5000000         je 0x6095d6
// 00609521  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00609525  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00609529  51                   push ecx
// 0060952a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060952e  52                   push edx
// 0060952f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00609533  51                   push ecx
// 00609534  52                   push edx
// 00609535  8bc8                 mov ecx, eax
// 00609537  e8c4feffff           call 0x609400
// 0060953c  8b0c24               mov ecx, dword ptr [esp]
// 0060953f  64890d00000000       mov dword ptr fs:[0], ecx
// 00609546  83c40c               add esp, 0xc
// 00609549  c3                   ret 
// 0060954a  68c4000000           push 0xc4
// 0060954f  e8a2690200           call 0x62fef6
// 00609554  83c404               add esp, 4
// 00609557  89442410             mov dword ptr [esp + 0x10], eax
// 0060955b  85c0                 test eax, eax
// 0060955d  c744240802000000     mov dword ptr [esp + 8], 2
// 00609565  746f                 je 0x6095d6
// 00609567  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060956b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0060956f  51                   push ecx
// 00609570  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00609574  52                   push edx
// 00609575  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00609579  51                   push ecx
// 0060957a  52                   push edx
// 0060957b  8bc8                 mov ecx, eax
// 0060957d  e8befeffff           call 0x609440
// 00609582  8b0c24               mov ecx, dword ptr [esp]
// 00609585  64890d00000000       mov dword ptr fs:[0], ecx
// 0060958c  83c40c               add esp, 0xc
// 0060958f  c3                   ret 
// 00609590  68c4000000           push 0xc4
// 00609595  e85c690200           call 0x62fef6
// 0060959a  83c404               add esp, 4
// 0060959d  89442410             mov dword ptr [esp + 0x10], eax
// 006095a1  85c0                 test eax, eax
// 006095a3  c744240800000000     mov dword ptr [esp + 8], 0
// 006095ab  7429                 je 0x6095d6
// 006095ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006095b1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006095b5  51                   push ecx
// 006095b6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006095ba  52                   push edx
// 006095bb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006095bf  51                   push ecx
// 006095c0  52                   push edx
// 006095c1  8bc8                 mov ecx, eax
// 006095c3  e818fcffff           call 0x6091e0
// 006095c8  8b0c24               mov ecx, dword ptr [esp]
// 006095cb  64890d00000000       mov dword ptr fs:[0], ecx
// 006095d2  83c40c               add esp, 0xc
// 006095d5  c3                   ret 
// 006095d6  8b0c24               mov ecx, dword ptr [esp]
// 006095d9  33c0                 xor eax, eax
// 006095db  64890d00000000       mov dword ptr fs:[0], ecx
// 006095e2  83c40c               add esp, 0xc
// 006095e5  c3                   ret 
// library openrbx-client/App\v8world\RotateJoint.cpp (function ?surfaceTypeToJoint@RotateJoint@RBX@@CAPAV12@W4SurfaceType@2@PAVPrimitive@2@1ABVCoordinateFrame@G3D@@2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/RotateJoint.cpp
