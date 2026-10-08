// roc 2007-03 005f2e20  unit: seg_005f0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f2e20
//
// 005f2e20  56                   push esi
// 005f2e21  8bf1                 mov esi, ecx
// 005f2e23  8d442408             lea eax, [esp + 8]
// 005f2e27  50                   push eax
// 005f2e28  8d4e44               lea ecx, [esi + 0x44]
// 005f2e2b  e8c097fbff           call 0x5ac5f0
// 005f2e30  85c0                 test eax, eax
// 005f2e32  7538                 jne 0x5f2e6c
// 005f2e34  8d4c2408             lea ecx, [esp + 8]
// 005f2e38  51                   push ecx
// 005f2e39  8d4e5c               lea ecx, [esi + 0x5c]
// 005f2e3c  e8af97fbff           call 0x5ac5f0
// 005f2e41  85c0                 test eax, eax
// 005f2e43  7527                 jne 0x5f2e6c
// 005f2e45  57                   push edi
// 005f2e46  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f2e4a  57                   push edi
// 005f2e4b  8bce                 mov ecx, esi
// 005f2e4d  e88ef3ffff           call 0x5f21e0
// 005f2e52  84c0                 test al, al
// 005f2e54  740f                 je 0x5f2e65
// 005f2e56  57                   push edi
// 005f2e57  8bce                 mov ecx, esi
// 005f2e59  e832f8ffff           call 0x5f2690
// 005f2e5e  5f                   pop edi
// 005f2e5f  b001                 mov al, 1
// 005f2e61  5e                   pop esi
// 005f2e62  c20400               ret 4
// 005f2e65  5f                   pop edi
// 005f2e66  32c0                 xor al, al
// 005f2e68  5e                   pop esi
// 005f2e69  c20400               ret 4
// 005f2e6c  b001                 mov al, 1
// 005f2e6e  5e                   pop esi
// 005f2e6f  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?removeFromBuffers@ClumpStage@RBX@@AAE_NPAVRigidJoint@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
