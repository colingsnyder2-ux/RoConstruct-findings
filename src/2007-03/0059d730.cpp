// roc 2007-03 0059d730  unit: seg_00590000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059d730
//
// 0059d730  51                   push ecx
// 0059d731  6a10                 push 0x10
// 0059d733  c744240400000000     mov dword ptr [esp + 4], 0
// 0059d73b  e8c8090800           call 0x61e108
// 0059d740  83c404               add esp, 4
// 0059d743  85c0                 test eax, eax
// 0059d745  7416                 je 0x59d75d
// 0059d747  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059d74b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059d74f  c70080237b00         mov dword ptr [eax], 0x7b2380
// 0059d755  894808               mov dword ptr [eax + 8], ecx
// 0059d758  89500c               mov dword ptr [eax + 0xc], edx
// 0059d75b  eb02                 jmp 0x59d75f
// 0059d75d  33c0                 xor eax, eax
// 0059d75f  56                   push esi
// 0059d760  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d764  6a00                 push 0
// 0059d766  c744240800000000     mov dword ptr [esp + 8], 0
// 0059d76e  8906                 mov dword ptr [esi], eax
// 0059d770  e87b090800           call 0x61e0f0
// 0059d775  83c404               add esp, 4
// 0059d778  8bc6                 mov eax, esi
// 0059d77a  5e                   pop esi
// 0059d77b  59                   pop ecx
// 0059d77c  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??$getset@P8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@HP8HopperBin@2@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
