// roc 2009-06 004c94b0  unit: boost::X::V?$function0::?$thread_data  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c94b0
//
// 004c94b0  64a100000000         mov eax, dword ptr fs:[0]
// 004c94b6  6aff                 push -1
// 004c94b8  68c0228600           push 0x8622c0
// 004c94bd  50                   push eax
// 004c94be  64892500000000       mov dword ptr fs:[0], esp
// 004c94c5  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c94c9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c94cd  56                   push esi
// 004c94ce  50                   push eax
// 004c94cf  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c94d3  8bf1                 mov esi, ecx
// 004c94d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c94d9  51                   push ecx
// 004c94da  52                   push edx
// 004c94db  50                   push eax
// 004c94dc  8d4c2438             lea ecx, [esp + 0x38]
// 004c94e0  51                   push ecx
// 004c94e1  e87abfffff           call 0x4c5460
// 004c94e6  8b08                 mov ecx, dword ptr [eax]
// 004c94e8  83c40c               add esp, 0xc
// 004c94eb  c70000000000         mov dword ptr [eax], 0
// 004c94f1  8bc4                 mov eax, esp
// 004c94f3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c94fb  8964242c             mov dword ptr [esp + 0x2c], esp
// 004c94ff  8908                 mov dword ptr [eax], ecx
// 004c9501  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c9505  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c9509  52                   push edx
// 004c950a  50                   push eax
// 004c950b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004c9510  e82bffffff           call 0x4c9440
// 004c9515  50                   push eax
// 004c9516  8bce                 mov ecx, esi
// 004c9518  c644242000           mov byte ptr [esp + 0x20], 0
// 004c951d  e8ce47f7ff           call 0x43dcf0
// 004c9522  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c9526  51                   push ecx
// 004c9527  e806f52400           call 0x718a32
// 004c952c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c9530  83c404               add esp, 4
// 004c9533  c7069c508c00         mov dword ptr [esi], 0x8c509c
// 004c9539  8bc6                 mov eax, esi
// 004c953b  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9542  5e                   pop esi
// 004c9543  83c40c               add esp, 0xc
// 004c9546  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
