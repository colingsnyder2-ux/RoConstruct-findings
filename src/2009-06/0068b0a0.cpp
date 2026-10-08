// roc 2009-06 0068b0a0  unit: G3D::VCoordinateFrame::V?$Value::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0068b0a0
//
// 0068b0a0  51                   push ecx
// 0068b0a1  6a18                 push 0x18
// 0068b0a3  c744240400000000     mov dword ptr [esp + 4], 0
// 0068b0ab  e888d90800           call 0x718a38
// 0068b0b0  83c404               add esp, 4
// 0068b0b3  85c0                 test eax, eax
// 0068b0b5  7424                 je 0x68b0db
// 0068b0b7  c700f4658e00         mov dword ptr [eax], 0x8e65f4
// 0068b0bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068b0c1  894808               mov dword ptr [eax + 8], ecx
// 0068b0c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068b0c8  89500c               mov dword ptr [eax + 0xc], edx
// 0068b0cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068b0cf  894810               mov dword ptr [eax + 0x10], ecx
// 0068b0d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068b0d6  895014               mov dword ptr [eax + 0x14], edx
// 0068b0d9  eb02                 jmp 0x68b0dd
// 0068b0db  33c0                 xor eax, eax
// 0068b0dd  56                   push esi
// 0068b0de  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068b0e2  6a00                 push 0
// 0068b0e4  8906                 mov dword ptr [esi], eax
// 0068b0e6  e847d90800           call 0x718a32
// 0068b0eb  83c404               add esp, 4
// 0068b0ee  8bc6                 mov eax, esi
// 0068b0f0  5e                   pop esi
// 0068b0f1  59                   pop ecx
// 0068b0f2  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
