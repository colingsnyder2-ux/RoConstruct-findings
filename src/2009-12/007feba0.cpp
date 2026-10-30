// roc 2009-12 007feba0  unit: CXTPPaintManager  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007feba0
//
// 007feba0  6aff                 push -1
// 007feba2  6858539600           push 0x965358
// 007feba7  64a100000000         mov eax, dword ptr fs:[0]
// 007febad  50                   push eax
// 007febae  83ec1c               sub esp, 0x1c
// 007febb1  56                   push esi
// 007febb2  a10052b600           mov eax, dword ptr [0xb65200]
// 007febb7  33c4                 xor eax, esp
// 007febb9  50                   push eax
// 007febba  8d442424             lea eax, [esp + 0x24]
// 007febbe  64a300000000         mov dword ptr fs:[0], eax
// 007febc4  8b742434             mov esi, dword ptr [esp + 0x34]
// 007febc8  85f6                 test esi, esi
// 007febca  7504                 jne 0x7febd0
// 007febcc  33d2                 xor edx, edx
// 007febce  eb03                 jmp 0x7febd3
// 007febd0  8b5604               mov edx, dword ptr [esi + 4]
// 007febd3  8b442448             mov eax, dword ptr [esp + 0x48]
// 007febd7  50                   push eax
// 007febd8  e863eaffff           call 0x7fd640
// 007febdd  50                   push eax
// 007febde  52                   push edx
// 007febdf  8d4c2418             lea ecx, [esp + 0x18]
// 007febe3  e818cb0400           call 0x84b700
// 007febe8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007febec  8b542438             mov edx, dword ptr [esp + 0x38]
// 007febf0  51                   push ecx
// 007febf1  52                   push edx
// 007febf2  8d442410             lea eax, [esp + 0x10]
// 007febf6  50                   push eax
// 007febf7  8bce                 mov ecx, esi
// 007febf9  c744243800000000     mov dword ptr [esp + 0x38], 0
// 007fec01  e83c5bffff           call 0x7f4742
// 007fec06  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007fec0a  8b542440             mov edx, dword ptr [esp + 0x40]
// 007fec0e  51                   push ecx
// 007fec0f  52                   push edx
// 007fec10  8bce                 mov ecx, esi
// 007fec12  e8255bffff           call 0x7f473c
// 007fec17  8d4c2410             lea ecx, [esp + 0x10]
// 007fec1b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 007fec23  e868cb0400           call 0x84b790
// 007fec28  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fec2c  64890d00000000       mov dword ptr fs:[0], ecx
// 007fec33  59                   pop ecx
// 007fec34  5e                   pop esi
// 007fec35  83c428               add esp, 0x28
// 007fec38  c21800               ret 0x18
// copied from an identical function in another client (function ?Line@CXTPPaintManager@@QAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp