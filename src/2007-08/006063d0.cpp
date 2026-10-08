// roc 2007-08 006063d0  unit: RBX::SleepStage  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006063d0
//
// 006063d0  56                   push esi
// 006063d1  8bf1                 mov esi, ecx
// 006063d3  8d442408             lea eax, [esp + 8]
// 006063d7  50                   push eax
// 006063d8  8d4e44               lea ecx, [esi + 0x44]
// 006063db  e850f7ffff           call 0x605b30
// 006063e0  85c0                 test eax, eax
// 006063e2  7538                 jne 0x60641c
// 006063e4  8d4c2408             lea ecx, [esp + 8]
// 006063e8  51                   push ecx
// 006063e9  8d4e5c               lea ecx, [esi + 0x5c]
// 006063ec  e83ff7ffff           call 0x605b30
// 006063f1  85c0                 test eax, eax
// 006063f3  7527                 jne 0x60641c
// 006063f5  57                   push edi
// 006063f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006063fa  57                   push edi
// 006063fb  8bce                 mov ecx, esi
// 006063fd  e85ef3ffff           call 0x605760
// 00606402  84c0                 test al, al
// 00606404  740f                 je 0x606415
// 00606406  57                   push edi
// 00606407  8bce                 mov ecx, esi
// 00606409  e872f8ffff           call 0x605c80
// 0060640e  5f                   pop edi
// 0060640f  b001                 mov al, 1
// 00606411  5e                   pop esi
// 00606412  c20400               ret 4
// 00606415  5f                   pop edi
// 00606416  32c0                 xor al, al
// 00606418  5e                   pop esi
// 00606419  c20400               ret 4
// 0060641c  b001                 mov al, 1
// 0060641e  5e                   pop esi
// 0060641f  c20400               ret 4
// library rbxgs/v8world\ClumpStage.cpp (function ?removeFromBuffers@ClumpStage@RBX@@AAE_NPAVRigidJoint@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
