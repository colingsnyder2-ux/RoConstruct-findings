// roc 2007-08 004d0ea0  unit: RBX::View::Part  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d0ea0
//
// 004d0ea0  6aff                 push -1
// 004d0ea2  68f8c37400           push 0x74c3f8
// 004d0ea7  64a100000000         mov eax, dword ptr fs:[0]
// 004d0ead  50                   push eax
// 004d0eae  64892500000000       mov dword ptr fs:[0], esp
// 004d0eb5  51                   push ecx
// 004d0eb6  56                   push esi
// 004d0eb7  8bf1                 mov esi, ecx
// 004d0eb9  8d8634ffffff         lea eax, [esi - 0xcc]
// 004d0ebf  85c0                 test eax, eax
// 004d0ec1  c744240400000000     mov dword ptr [esp + 4], 0
// 004d0ec9  740e                 je 0x4d0ed9
// 004d0ecb  89442404             mov dword ptr [esp + 4], eax
// 004d0ecf  83c004               add eax, 4
// 004d0ed2  50                   push eax
// 004d0ed3  ff15ecd27700         call dword ptr [0x77d2ec]
// 004d0ed9  8b46f8               mov eax, dword ptr [esi - 8]
// 004d0edc  8b4848               mov ecx, dword ptr [eax + 0x48]
// 004d0edf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d0ee3  8b11                 mov edx, dword ptr [ecx]
// 004d0ee5  8b5210               mov edx, dword ptr [edx + 0x10]
// 004d0ee8  50                   push eax
// 004d0ee9  8d442408             lea eax, [esp + 8]
// 004d0eed  50                   push eax
// 004d0eee  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d0ef6  ffd2                 call edx
// 004d0ef8  8b442404             mov eax, dword ptr [esp + 4]
// 004d0efc  85c0                 test eax, eax
// 004d0efe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004d0f06  5e                   pop esi
// 004d0f07  7425                 je 0x4d0f2e
// 004d0f09  83c004               add eax, 4
// 004d0f0c  50                   push eax
// 004d0f0d  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d0f13  85c0                 test eax, eax
// 004d0f15  7517                 jne 0x4d0f2e
// 004d0f17  8b0c24               mov ecx, dword ptr [esp]
// 004d0f1a  e8b16ef8ff           call 0x457dd0
// 004d0f1f  8b0c24               mov ecx, dword ptr [esp]
// 004d0f22  85c9                 test ecx, ecx
// 004d0f24  7408                 je 0x4d0f2e
// 004d0f26  8b01                 mov eax, dword ptr [ecx]
// 004d0f28  8b10                 mov edx, dword ptr [eax]
// 004d0f2a  6a01                 push 1
// 004d0f2c  ffd2                 call edx
// 004d0f2e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d0f32  64890d00000000       mov dword ptr fs:[0], ecx
// 004d0f39  83c410               add esp, 0x10
// 004d0f3c  c20800               ret 8
// library rbxgs-view/Part.cpp (function ?onEvent@Part@View@RBX@@MAEXPBVPartInstance@3@UCanAggregateChanged@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
