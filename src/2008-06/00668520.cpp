// roc 2008-06 00668520  unit: RBX::JointStage  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668520
//
// 00668520  6aff                 push -1
// 00668522  6843c77d00           push 0x7dc743
// 00668527  64a100000000         mov eax, dword ptr fs:[0]
// 0066852d  50                   push eax
// 0066852e  64892500000000       mov dword ptr fs:[0], esp
// 00668535  51                   push ecx
// 00668536  56                   push esi
// 00668537  8bf1                 mov esi, ecx
// 00668539  89742404             mov dword ptr [esp + 4], esi
// 0066853d  c70664cf8400         mov dword ptr [esi], 0x84cf64
// 00668543  8d4e30               lea ecx, [esi + 0x30]
// 00668546  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0066854e  e82db8eeff           call 0x553d80
// 00668553  8d4e10               lea ecx, [esi + 0x10]
// 00668556  c644241000           mov byte ptr [esp + 0x10], 0
// 0066855b  e8d02cfeff           call 0x64b230
// 00668560  8b4e08               mov ecx, dword ptr [esi + 8]
// 00668563  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0066856b  5e                   pop esi
// 0066856c  85c9                 test ecx, ecx
// 0066856e  7408                 je 0x668578
// 00668570  8b01                 mov eax, dword ptr [ecx]
// 00668572  8b10                 mov edx, dword ptr [eax]
// 00668574  6a01                 push 1
// 00668576  ffd2                 call edx
// 00668578  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066857c  64890d00000000       mov dword ptr fs:[0], ecx
// 00668583  83c410               add esp, 0x10
// 00668586  c3                   ret 
// library rbxgs/v8world\JointStage.cpp (function ??1JointStage@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
