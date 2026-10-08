// roc 2007-03 0055aed0  unit: seg_00550000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055aed0
//
// 0055aed0  6aff                 push -1
// 0055aed2  689e437500           push 0x75439e
// 0055aed7  64a100000000         mov eax, dword ptr fs:[0]
// 0055aedd  50                   push eax
// 0055aede  64892500000000       mov dword ptr fs:[0], esp
// 0055aee5  51                   push ecx
// 0055aee6  56                   push esi
// 0055aee7  8bf1                 mov esi, ecx
// 0055aee9  89742404             mov dword ptr [esp + 4], esi
// 0055aeed  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0055aef0  85c9                 test ecx, ecx
// 0055aef2  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0055aefa  7408                 je 0x55af04
// 0055aefc  8b01                 mov eax, dword ptr [ecx]
// 0055aefe  8b10                 mov edx, dword ptr [eax]
// 0055af00  6a01                 push 1
// 0055af02  ffd2                 call edx
// 0055af04  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0055af07  85c9                 test ecx, ecx
// 0055af09  c644241001           mov byte ptr [esp + 0x10], 1
// 0055af0e  7408                 je 0x55af18
// 0055af10  8b01                 mov eax, dword ptr [ecx]
// 0055af12  8b10                 mov edx, dword ptr [eax]
// 0055af14  6a01                 push 1
// 0055af16  ffd2                 call edx
// 0055af18  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0055af1b  85c9                 test ecx, ecx
// 0055af1d  c644241000           mov byte ptr [esp + 0x10], 0
// 0055af22  7408                 je 0x55af2c
// 0055af24  8b01                 mov eax, dword ptr [ecx]
// 0055af26  8b10                 mov edx, dword ptr [eax]
// 0055af28  6a01                 push 1
// 0055af2a  ffd2                 call edx
// 0055af2c  8bce                 mov ecx, esi
// 0055af2e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055af36  e835dcebff           call 0x418b70
// 0055af3b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055af3f  5e                   pop esi
// 0055af40  64890d00000000       mov dword ptr fs:[0], ecx
// 0055af47  83c410               add esp, 0x10
// 0055af4a  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??1?$BoundFuncDesc@VDataModel@RBX@@$$A6A?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@0_N@Z$02@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
