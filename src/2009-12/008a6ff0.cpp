// roc 2009-12 008a6ff0  unit: CXTPReportHeaderDragWnd  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6ff0
//
// 008a6ff0  6aff                 push -1
// 008a6ff2  68a35d9600           push 0x965da3
// 008a6ff7  64a100000000         mov eax, dword ptr fs:[0]
// 008a6ffd  50                   push eax
// 008a6ffe  81ec98000000         sub esp, 0x98
// 008a7004  a10052b600           mov eax, dword ptr [0xb65200]
// 008a7009  33c4                 xor eax, esp
// 008a700b  89842494000000       mov dword ptr [esp + 0x94], eax
// 008a7012  56                   push esi
// 008a7013  a10052b600           mov eax, dword ptr [0xb65200]
// 008a7018  33c4                 xor eax, esp
// 008a701a  50                   push eax
// 008a701b  8d8424a0000000       lea eax, [esp + 0xa0]
// 008a7022  64a300000000         mov dword ptr fs:[0], eax
// 008a7028  8bf1                 mov esi, ecx
// 008a702a  56                   push esi
// 008a702b  8d4c244c             lea ecx, [esp + 0x4c]
// 008a702f  e8bcd1f4ff           call 0x7f41f0
// 008a7034  56                   push esi
// 008a7035  8d4c240c             lea ecx, [esp + 0xc]
// 008a7039  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 008a7044  e88742faff           call 0x84b2d0
// 008a7049  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a704d  8d442408             lea eax, [esp + 8]
// 008a7051  50                   push eax
// 008a7052  51                   push ecx
// 008a7053  8d4c2420             lea ecx, [esp + 0x20]
// 008a7057  e8d442faff           call 0x84b330
// 008a705c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a7060  8b16                 mov edx, dword ptr [esi]
// 008a7062  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008a7068  83ec10               sub esp, 0x10
// 008a706b  8bc4                 mov eax, esp
// 008a706d  8908                 mov dword ptr [eax], ecx
// 008a706f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a7073  894804               mov dword ptr [eax + 4], ecx
// 008a7076  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a707a  894808               mov dword ptr [eax + 8], ecx
// 008a707d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a7081  89480c               mov dword ptr [eax + 0xc], ecx
// 008a7084  8d442428             lea eax, [esp + 0x28]
// 008a7088  50                   push eax
// 008a7089  8bce                 mov ecx, esi
// 008a708b  c68424bc00000001     mov byte ptr [esp + 0xbc], 1
// 008a7093  ffd2                 call edx
// 008a7095  8d4c2418             lea ecx, [esp + 0x18]
// 008a7099  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 008a70a1  e89a44faff           call 0x84b540
// 008a70a6  8d4c2448             lea ecx, [esp + 0x48]
// 008a70aa  c78424a8000000ffffffff mov dword ptr [esp + 0xa8], 0xffffffff
// 008a70b5  e830d1f4ff           call 0x7f41ea
// 008a70ba  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008a70c1  64890d00000000       mov dword ptr fs:[0], ecx
// 008a70c8  59                   pop ecx
// 008a70c9  5e                   pop esi
// 008a70ca  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008a70d1  33cc                 xor ecx, esp
// 008a70d3  e8c2e2f4ff           call 0x7f539a
// 008a70d8  81c4a4000000         add esp, 0xa4
// 008a70de  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportHeaderDragWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportDragDrop.cpp