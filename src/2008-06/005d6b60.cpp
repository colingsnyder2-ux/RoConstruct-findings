// roc 2008-06 005d6b60  unit: RBX::VTimerService::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6b60
//
// 005d6b60  6aff                 push -1
// 005d6b62  6811e87c00           push 0x7ce811
// 005d6b67  64a100000000         mov eax, dword ptr fs:[0]
// 005d6b6d  50                   push eax
// 005d6b6e  64892500000000       mov dword ptr fs:[0], esp
// 005d6b75  51                   push ecx
// 005d6b76  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d6b7a  89442414             mov dword ptr [esp + 0x14], eax
// 005d6b7e  890424               mov dword ptr [esp], eax
// 005d6b81  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d6b89  85c0                 test eax, eax
// 005d6b8b  742d                 je 0x5d6bba
// 005d6b8d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d6b91  dd01                 fld qword ptr [ecx]
// 005d6b93  c7400800000000       mov dword ptr [eax + 8], 0
// 005d6b9a  dd18                 fstp qword ptr [eax]
// 005d6b9c  8b5108               mov edx, dword ptr [ecx + 8]
// 005d6b9f  85d2                 test edx, edx
// 005d6ba1  7417                 je 0x5d6bba
// 005d6ba3  895008               mov dword ptr [eax + 8], edx
// 005d6ba6  8b5108               mov edx, dword ptr [ecx + 8]
// 005d6ba9  83c010               add eax, 0x10
// 005d6bac  6a00                 push 0
// 005d6bae  50                   push eax
// 005d6baf  8b02                 mov eax, dword ptr [edx]
// 005d6bb1  83c110               add ecx, 0x10
// 005d6bb4  51                   push ecx
// 005d6bb5  ffd0                 call eax
// 005d6bb7  83c40c               add esp, 0xc
// 005d6bba  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d6bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6bc5  83c410               add esp, 0x10
// 005d6bc8  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ??$_Construct@VItem@TimerService@RBX@@V123@@std@@YAXPAVItem@TimerService@RBX@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
