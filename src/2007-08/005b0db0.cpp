// roc 2007-08 005b0db0  unit: RBX::AutoJoint  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0db0
//
// 005b0db0  56                   push esi
// 005b0db1  8b742408             mov esi, dword ptr [esp + 8]
// 005b0db5  57                   push edi
// 005b0db6  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005b0db9  e8d278e6ff           call 0x418690
// 005b0dbe  50                   push eax
// 005b0dbf  8bcf                 mov ecx, edi
// 005b0dc1  e8daf9fbff           call 0x5707a0
// 005b0dc6  84c0                 test al, al
// 005b0dc8  751b                 jne 0x5b0de5
// 005b0dca  8b760c               mov esi, dword ptr [esi + 0xc]
// 005b0dcd  e82e63fcff           call 0x577100
// 005b0dd2  50                   push eax
// 005b0dd3  8bce                 mov ecx, esi
// 005b0dd5  e8c6f9fbff           call 0x5707a0
// 005b0dda  84c0                 test al, al
// 005b0ddc  7507                 jne 0x5b0de5
// 005b0dde  5f                   pop edi
// 005b0ddf  33c0                 xor eax, eax
// 005b0de1  5e                   pop esi
// 005b0de2  c20400               ret 4
// 005b0de5  5f                   pop edi
// 005b0de6  b801000000           mov eax, 1
// 005b0deb  5e                   pop esi
// 005b0dec  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?askSetParent@AutoJoint@RBX@@EBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
