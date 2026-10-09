// roc 2008-06 00599300  unit: RBX::VPartInstance::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599300
//
// 00599300  56                   push esi
// 00599301  8b742408             mov esi, dword ptr [esp + 8]
// 00599305  8b06                 mov eax, dword ptr [esi]
// 00599307  8b500c               mov edx, dword ptr [eax + 0xc]
// 0059930a  8bce                 mov ecx, esi
// 0059930c  ffd2                 call edx
// 0059930e  85c0                 test eax, eax
// 00599310  751a                 jne 0x59932c
// 00599312  8b06                 mov eax, dword ptr [esi]
// 00599314  8b5014               mov edx, dword ptr [eax + 0x14]
// 00599317  8bce                 mov ecx, esi
// 00599319  ffd2                 call edx
// 0059931b  83f806               cmp eax, 6
// 0059931e  7405                 je 0x599325
// 00599320  83f807               cmp eax, 7
// 00599323  7507                 jne 0x59932c
// 00599325  b801000000           mov eax, 1
// 0059932a  5e                   pop esi
// 0059932b  c3                   ret 
// 0059932c  33c0                 xor eax, eax
// 0059932e  5e                   pop esi
// 0059932f  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?isRigidJoint@RigidJoint@RBX@@SA_NPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
