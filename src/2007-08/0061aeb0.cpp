// roc 2007-08 0061aeb0  unit: RBX::P8Camera::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061aeb0
//
// 0061aeb0  51                   push ecx
// 0061aeb1  6a10                 push 0x10
// 0061aeb3  c744240400000000     mov dword ptr [esp + 4], 0
// 0061aebb  e836500100           call 0x62fef6
// 0061aec0  83c404               add esp, 4
// 0061aec3  85c0                 test eax, eax
// 0061aec5  7416                 je 0x61aedd
// 0061aec7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061aecb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061aecf  c700cc3a7c00         mov dword ptr [eax], 0x7c3acc
// 0061aed5  894808               mov dword ptr [eax + 8], ecx
// 0061aed8  89500c               mov dword ptr [eax + 0xc], edx
// 0061aedb  eb02                 jmp 0x61aedf
// 0061aedd  33c0                 xor eax, eax
// 0061aedf  56                   push esi
// 0061aee0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061aee4  6a00                 push 0
// 0061aee6  c744240800000000     mov dword ptr [esp + 8], 0
// 0061aeee  8906                 mov dword ptr [esi], eax
// 0061aef0  e86d4d0100           call 0x62fc62
// 0061aef5  83c404               add esp, 4
// 0061aef8  8bc6                 mov eax, esi
// 0061aefa  5e                   pop esi
// 0061aefb  59                   pop ecx
// 0061aefc  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$getset@P8DebugSettings@RBX@@BEMXZ@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@M@Reflection@RBX@@@std@@P8DebugSettings@2@BEMXZH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
