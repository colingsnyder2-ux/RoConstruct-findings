// roc 2007-08 0059d350  unit: ChatEnter  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d350
//
// 0059d350  51                   push ecx
// 0059d351  6a10                 push 0x10
// 0059d353  c744240400000000     mov dword ptr [esp + 4], 0
// 0059d35b  e8962b0900           call 0x62fef6
// 0059d360  83c404               add esp, 4
// 0059d363  85c0                 test eax, eax
// 0059d365  7416                 je 0x59d37d
// 0059d367  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059d36b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059d36f  c700e01c7b00         mov dword ptr [eax], 0x7b1ce0
// 0059d375  894808               mov dword ptr [eax + 8], ecx
// 0059d378  89500c               mov dword ptr [eax + 0xc], edx
// 0059d37b  eb02                 jmp 0x59d37f
// 0059d37d  33c0                 xor eax, eax
// 0059d37f  56                   push esi
// 0059d380  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d384  6a00                 push 0
// 0059d386  c744240800000000     mov dword ptr [esp + 8], 0
// 0059d38e  8906                 mov dword ptr [esi], eax
// 0059d390  e8cd280900           call 0x62fc62
// 0059d395  83c404               add esp, 4
// 0059d398  8bc6                 mov eax, esi
// 0059d39a  5e                   pop esi
// 0059d39b  59                   pop ecx
// 0059d39c  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ??$getset@P8HopperBin@RBX@@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@?$PropDescriptor@VHopperBin@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@HP8HopperBin@2@AEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
