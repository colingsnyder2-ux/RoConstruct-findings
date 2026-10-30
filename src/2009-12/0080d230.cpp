// roc 2009-12 0080d230  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d230
//
// 0080d230  6aff                 push -1
// 0080d232  68df9b9500           push 0x959bdf
// 0080d237  64a100000000         mov eax, dword ptr fs:[0]
// 0080d23d  50                   push eax
// 0080d23e  51                   push ecx
// 0080d23f  56                   push esi
// 0080d240  a10052b600           mov eax, dword ptr [0xb65200]
// 0080d245  33c4                 xor eax, esp
// 0080d247  50                   push eax
// 0080d248  8d44240c             lea eax, [esp + 0xc]
// 0080d24c  64a300000000         mov dword ptr fs:[0], eax
// 0080d252  8bf1                 mov esi, ecx
// 0080d254  89742408             mov dword ptr [esp + 8], esi
// 0080d258  c70614329f00         mov dword ptr [esi], 0x9f3214
// 0080d25e  6a01                 push 1
// 0080d260  c744241808000000     mov dword ptr [esp + 0x18], 8
// 0080d268  e813f4ffff           call 0x80c680
// 0080d26d  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0080d273  c644241407           mov byte ptr [esp + 0x14], 7
// 0080d278  e863fbffff           call 0x80cde0
// 0080d27d  8d8e08010000         lea ecx, [esi + 0x108]
// 0080d283  c644241406           mov byte ptr [esp + 0x14], 6
// 0080d288  e853fbffff           call 0x80cde0
// 0080d28d  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0080d293  c644241405           mov byte ptr [esp + 0x14], 5
// 0080d298  e843fbffff           call 0x80cde0
// 0080d29d  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0080d2a3  c644241404           mov byte ptr [esp + 0x14], 4
// 0080d2a8  e833fbffff           call 0x80cde0
// 0080d2ad  8d8e9c000000         lea ecx, [esi + 0x9c]
// 0080d2b3  c644241403           mov byte ptr [esp + 0x14], 3
// 0080d2b8  e823fbffff           call 0x80cde0
// 0080d2bd  8d4e78               lea ecx, [esi + 0x78]
// 0080d2c0  c644241402           mov byte ptr [esp + 0x14], 2
// 0080d2c5  e816fbffff           call 0x80cde0
// 0080d2ca  8d4e54               lea ecx, [esi + 0x54]
// 0080d2cd  c644241401           mov byte ptr [esp + 0x14], 1
// 0080d2d2  e809fbffff           call 0x80cde0
// 0080d2d7  8d4e30               lea ecx, [esi + 0x30]
// 0080d2da  c644241400           mov byte ptr [esp + 0x14], 0
// 0080d2df  e8fcfaffff           call 0x80cde0
// 0080d2e4  8bce                 mov ecx, esi
// 0080d2e6  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080d2ee  e8ef70feff           call 0x7f43e2
// 0080d2f3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080d2f7  64890d00000000       mov dword ptr fs:[0], ecx
// 0080d2fe  59                   pop ecx
// 0080d2ff  5e                   pop esi
// 0080d300  83c410               add esp, 0x10
// 0080d303  c3                   ret 
// copied from an identical function in another client (function ??1CXTPImageManagerIcon@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp