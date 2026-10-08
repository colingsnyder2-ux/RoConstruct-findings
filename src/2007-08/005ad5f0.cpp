// roc 2007-08 005ad5f0  unit: RBX::P8Instance::?$GetImpl  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ad5f0
//
// 005ad5f0  6aff                 push -1
// 005ad5f2  6873cf7500           push 0x75cf73
// 005ad5f7  64a100000000         mov eax, dword ptr fs:[0]
// 005ad5fd  50                   push eax
// 005ad5fe  64892500000000       mov dword ptr fs:[0], esp
// 005ad605  83ec20               sub esp, 0x20
// 005ad608  8bc1                 mov eax, ecx
// 005ad60a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005ad60e  85c9                 test ecx, ecx
// 005ad610  c7042400000000       mov dword ptr [esp], 0
// 005ad617  7405                 je 0x5ad61e
// 005ad619  8d51fc               lea edx, [ecx - 4]
// 005ad61c  eb02                 jmp 0x5ad620
// 005ad61e  33d2                 xor edx, edx
// 005ad620  56                   push esi
// 005ad621  8d4c2408             lea ecx, [esp + 8]
// 005ad625  51                   push ecx
// 005ad626  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005ad629  03ca                 add ecx, edx
// 005ad62b  8b5008               mov edx, dword ptr [eax + 8]
// 005ad62e  ffd2                 call edx
// 005ad630  8b742434             mov esi, dword ptr [esp + 0x34]
// 005ad634  50                   push eax
// 005ad635  8bce                 mov ecx, esi
// 005ad637  c744243001000000     mov dword ptr [esp + 0x30], 1
// 005ad63f  ff159ce67700         call dword ptr [0x77e69c]
// 005ad645  8d4c2408             lea ecx, [esp + 8]
// 005ad649  c744240401000000     mov dword ptr [esp + 4], 1
// 005ad651  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ad656  ff15ace67700         call dword ptr [0x77e6ac]
// 005ad65c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ad660  8bc6                 mov eax, esi
// 005ad662  5e                   pop esi
// 005ad663  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad66a  83c42c               add esp, 0x2c
// 005ad66d  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?getValue@?$GetSetImpl@P8Lighting@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VLighting@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
