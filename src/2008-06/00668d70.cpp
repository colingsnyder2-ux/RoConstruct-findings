// roc 2008-06 00668d70  unit: RBX::JointStage  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668d70
//
// 00668d70  51                   push ecx
// 00668d71  56                   push esi
// 00668d72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00668d76  8b460c               mov eax, dword ptr [esi + 0xc]
// 00668d79  50                   push eax
// 00668d7a  e831feffff           call 0x668bb0
// 00668d7f  d95c2410             fstp dword ptr [esp + 0x10]
// 00668d83  8b4610               mov eax, dword ptr [esi + 0x10]
// 00668d86  83c404               add esp, 4
// 00668d89  85c0                 test eax, eax
// 00668d8b  7426                 je 0x668db3
// 00668d8d  50                   push eax
// 00668d8e  e81dfeffff           call 0x668bb0
// 00668d93  d9542408             fst dword ptr [esp + 8]
// 00668d97  d85c2410             fcomp dword ptr [esp + 0x10]
// 00668d9b  83c404               add esp, 4
// 00668d9e  dfe0                 fnstsw ax
// 00668da0  f6c441               test ah, 0x41
// 00668da3  8d442404             lea eax, [esp + 4]
// 00668da7  7404                 je 0x668dad
// 00668da9  8d44240c             lea eax, [esp + 0xc]
// 00668dad  d900                 fld dword ptr [eax]
// 00668daf  d95c240c             fstp dword ptr [esp + 0xc]
// 00668db3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00668db7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00668dba  50                   push eax
// 00668dbb  e8f0fdffff           call 0x668bb0
// 00668dc0  d9542414             fst dword ptr [esp + 0x14]
// 00668dc4  8b4610               mov eax, dword ptr [esi + 0x10]
// 00668dc7  83c404               add esp, 4
// 00668dca  5e                   pop esi
// 00668dcb  85c0                 test eax, eax
// 00668dcd  7423                 je 0x668df2
// 00668dcf  50                   push eax
// 00668dd0  ddd8                 fstp st(0)
// 00668dd2  e8d9fdffff           call 0x668bb0
// 00668dd7  d9542404             fst dword ptr [esp + 4]
// 00668ddb  d85c2410             fcomp dword ptr [esp + 0x10]
// 00668ddf  83c404               add esp, 4
// 00668de2  dfe0                 fnstsw ax
// 00668de4  f6c441               test ah, 0x41
// 00668de7  8d0424               lea eax, [esp]
// 00668dea  7404                 je 0x668df0
// 00668dec  8d44240c             lea eax, [esp + 0xc]
// 00668df0  d900                 fld dword ptr [eax]
// 00668df2  d9442408             fld dword ptr [esp + 8]
// 00668df6  d8d1                 fcom st(1)
// 00668df8  dfe0                 fnstsw ax
// 00668dfa  f6c441               test ah, 0x41
// 00668dfd  750b                 jne 0x668e0a
// 00668dff  ddd9                 fstp st(1)
// 00668e01  b801000000           mov eax, 1
// 00668e06  ddd8                 fstp st(0)
// 00668e08  59                   pop ecx
// 00668e09  c3                   ret 
// 00668e0a  ded9                 fcompp 
// 00668e0c  dfe0                 fnstsw ax
// 00668e0e  f6c405               test ah, 5
// 00668e11  7a07                 jp 0x668e1a
// 00668e13  b8ffffffff           mov eax, 0xffffffff
// 00668e18  59                   pop ecx
// 00668e19  c3                   ret 
// 00668e1a  33c0                 xor eax, eax
// 00668e1c  59                   pop ecx
// 00668e1d  c3                   ret 
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?biggerJointSize@RBX@@YAHPBVJoint@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
