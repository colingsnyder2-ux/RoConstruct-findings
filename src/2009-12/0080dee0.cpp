// roc 2009-12 0080dee0  unit: IIHH::?$CMap  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080dee0
//
// 0080dee0  6aff                 push -1
// 0080dee2  68c89c9500           push 0x959cc8
// 0080dee7  64a100000000         mov eax, dword ptr fs:[0]
// 0080deed  50                   push eax
// 0080deee  56                   push esi
// 0080deef  a10052b600           mov eax, dword ptr [0xb65200]
// 0080def4  33c4                 xor eax, esp
// 0080def6  50                   push eax
// 0080def7  8d442408             lea eax, [esp + 8]
// 0080defb  64a300000000         mov dword ptr fs:[0], eax
// 0080df01  8bf1                 mov esi, ecx
// 0080df03  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0080df0b  e8d0e7ffff           call 0x80c6e0
// 0080df10  8d442418             lea eax, [esp + 0x18]
// 0080df14  50                   push eax
// 0080df15  8d8e08010000         lea ecx, [esi + 0x108]
// 0080df1b  e8a0fcffff           call 0x80dbc0
// 0080df20  8d4c2418             lea ecx, [esp + 0x18]
// 0080df24  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0080df2c  e8afeeffff           call 0x80cde0
// 0080df31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080df35  64890d00000000       mov dword ptr fs:[0], ecx
// 0080df3c  59                   pop ecx
// 0080df3d  5e                   pop esi
// 0080df3e  83c40c               add esp, 0xc
// 0080df41  c22400               ret 0x24
// copied from an identical function in another client (function ?SetDisabledIcon@CXTPImageManagerIcon@@QAEXVCXTPImageManagerIconHandle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp