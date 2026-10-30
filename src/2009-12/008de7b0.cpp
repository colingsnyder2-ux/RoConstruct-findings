// roc 2009-12 008de7b0  unit: CXTColorLum  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008de7b0
//
// 008de7b0  6aff                 push -1
// 008de7b2  68f2589600           push 0x9658f2
// 008de7b7  64a100000000         mov eax, dword ptr fs:[0]
// 008de7bd  50                   push eax
// 008de7be  51                   push ecx
// 008de7bf  56                   push esi
// 008de7c0  a10052b600           mov eax, dword ptr [0xb65200]
// 008de7c5  33c4                 xor eax, esp
// 008de7c7  50                   push eax
// 008de7c8  8d44240c             lea eax, [esp + 0xc]
// 008de7cc  64a300000000         mov dword ptr fs:[0], eax
// 008de7d2  8bf1                 mov esi, ecx
// 008de7d4  89742408             mov dword ptr [esp + 8], esi
// 008de7d8  c70664b8a000         mov dword ptr [esi], 0xa0b864
// 008de7de  8d8e14070000         lea ecx, [esi + 0x714]
// 008de7e4  c744241413000000     mov dword ptr [esp + 0x14], 0x13
// 008de7ec  e8637c0400           call 0x926454
// 008de7f1  8d8ec0060000         lea ecx, [esi + 0x6c0]
// 008de7f7  c644241412           mov byte ptr [esp + 0x14], 0x12
// 008de7fc  e8537c0400           call 0x926454
// 008de801  8d8e6c060000         lea ecx, [esi + 0x66c]
// 008de807  c644241411           mov byte ptr [esp + 0x14], 0x11
// 008de80c  e8437c0400           call 0x926454
// 008de811  8d8e18060000         lea ecx, [esi + 0x618]
// 008de817  c644241410           mov byte ptr [esp + 0x14], 0x10
// 008de81c  e8337c0400           call 0x926454
// 008de821  8d8ec4050000         lea ecx, [esi + 0x5c4]
// 008de827  c64424140f           mov byte ptr [esp + 0x14], 0xf
// 008de82c  e8237c0400           call 0x926454
// 008de831  8d8e70050000         lea ecx, [esi + 0x570]
// 008de837  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 008de83c  e8137c0400           call 0x926454
// 008de841  8d8e1c050000         lea ecx, [esi + 0x51c]
// 008de847  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 008de84c  e863850400           call 0x926db4
// 008de851  8d8ec8040000         lea ecx, [esi + 0x4c8]
// 008de857  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 008de85c  e853850400           call 0x926db4
// 008de861  8d8e74040000         lea ecx, [esi + 0x474]
// 008de867  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 008de86c  e843850400           call 0x926db4
// 008de871  8d8e20040000         lea ecx, [esi + 0x420]
// 008de877  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 008de87c  e833850400           call 0x926db4
// 008de881  8d8ecc030000         lea ecx, [esi + 0x3cc]
// 008de887  c644241409           mov byte ptr [esp + 0x14], 9
// 008de88c  e823850400           call 0x926db4
// 008de891  8d8e78030000         lea ecx, [esi + 0x378]
// 008de897  c644241408           mov byte ptr [esp + 0x14], 8
// 008de89c  e813850400           call 0x926db4
// 008de8a1  8d8e24030000         lea ecx, [esi + 0x324]
// 008de8a7  c644241407           mov byte ptr [esp + 0x14], 7
// 008de8ac  e85d7f0400           call 0x92680e
// 008de8b1  8d8ed0020000         lea ecx, [esi + 0x2d0]
// 008de8b7  c644241406           mov byte ptr [esp + 0x14], 6
// 008de8bc  e84d7f0400           call 0x92680e
// 008de8c1  8d8e7c020000         lea ecx, [esi + 0x27c]
// 008de8c7  c644241405           mov byte ptr [esp + 0x14], 5
// 008de8cc  e83d7f0400           call 0x92680e
// 008de8d1  8d8e28020000         lea ecx, [esi + 0x228]
// 008de8d7  c644241404           mov byte ptr [esp + 0x14], 4
// 008de8dc  e82d7f0400           call 0x92680e
// 008de8e1  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 008de8e7  c644241403           mov byte ptr [esp + 0x14], 3
// 008de8ec  e81d7f0400           call 0x92680e
// 008de8f1  8d8e80010000         lea ecx, [esi + 0x180]
// 008de8f7  c644241402           mov byte ptr [esp + 0x14], 2
// 008de8fc  e80d7f0400           call 0x92680e
// 008de901  8d8e08010000         lea ecx, [esi + 0x108]
// 008de907  c644241401           mov byte ptr [esp + 0x14], 1
// 008de90c  e83febffff           call 0x8dd450
// 008de911  8d8e88000000         lea ecx, [esi + 0x88]
// 008de917  c644241400           mov byte ptr [esp + 0x14], 0
// 008de91c  e8ffeeffff           call 0x8dd820
// 008de921  8bce                 mov ecx, esi
// 008de923  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008de92b  e82c7f0400           call 0x92685c
// 008de930  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008de934  64890d00000000       mov dword ptr fs:[0], ecx
// 008de93b  59                   pop ecx
// 008de93c  5e                   pop esi
// 008de93d  83c410               add esp, 0x10
// 008de940  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageCustom@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp