// roc 2008-06 00585db0  unit: RBX::P8Instance::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585db0
//
// 00585db0  51                   push ecx
// 00585db1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00585db5  8bd1                 mov edx, ecx
// 00585db7  c7042400000000       mov dword ptr [esp], 0
// 00585dbe  85c0                 test eax, eax
// 00585dc0  7405                 je 0x585dc7
// 00585dc2  83c0ec               add eax, -0x14
// 00585dc5  eb02                 jmp 0x585dc9
// 00585dc7  33c0                 xor eax, eax
// 00585dc9  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00585dcc  03c8                 add ecx, eax
// 00585dce  8b4208               mov eax, dword ptr [edx + 8]
// 00585dd1  56                   push esi
// 00585dd2  ffd0                 call eax
// 00585dd4  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00585dd8  50                   push eax
// 00585dd9  8bce                 mov ecx, esi
// 00585ddb  ff155c248000         call dword ptr [0x80245c]
// 00585de1  8bc6                 mov eax, esi
// 00585de3  5e                   pop esi
// 00585de4  59                   pop ecx
// 00585de5  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?getValue@?$GetSetImpl@P8Message@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VMessage@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
