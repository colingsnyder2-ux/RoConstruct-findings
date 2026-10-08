// roc 2007-08 0061af00  unit: RBX::P8Camera::?$GetSetImpl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061af00
//
// 0061af00  51                   push ecx
// 0061af01  6a18                 push 0x18
// 0061af03  c744240400000000     mov dword ptr [esp + 4], 0
// 0061af0b  e8e64f0100           call 0x62fef6
// 0061af10  83c404               add esp, 4
// 0061af13  85c0                 test eax, eax
// 0061af15  7424                 je 0x61af3b
// 0061af17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061af1b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061af1f  894808               mov dword ptr [eax + 8], ecx
// 0061af22  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061af26  89500c               mov dword ptr [eax + 0xc], edx
// 0061af29  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061af2d  c700dc3a7c00         mov dword ptr [eax], 0x7c3adc
// 0061af33  894810               mov dword ptr [eax + 0x10], ecx
// 0061af36  895014               mov dword ptr [eax + 0x14], edx
// 0061af39  eb02                 jmp 0x61af3d
// 0061af3b  33c0                 xor eax, eax
// 0061af3d  56                   push esi
// 0061af3e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061af42  6a00                 push 0
// 0061af44  c744240800000000     mov dword ptr [esp + 8], 0
// 0061af4c  8906                 mov dword ptr [esi], eax
// 0061af4e  e80f4d0100           call 0x62fc62
// 0061af53  83c404               add esp, 4
// 0061af56  8bc6                 mov eax, esi
// 0061af58  5e                   pop esi
// 0061af59  59                   pop ecx
// 0061af5a  c3                   ret 
// library rbxgs/script\Script.cpp (function ??$getset@P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP812@AEXABV34@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZP852@AEXABV64@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
