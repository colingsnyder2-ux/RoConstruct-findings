// roc 2009-12 0080fee0  unit: CXTPImageManagerIcon  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080fee0
//
// 0080fee0  6aff                 push -1
// 0080fee2  68689f9500           push 0x959f68
// 0080fee7  64a100000000         mov eax, dword ptr fs:[0]
// 0080feed  50                   push eax
// 0080feee  83ec48               sub esp, 0x48
// 0080fef1  56                   push esi
// 0080fef2  a10052b600           mov eax, dword ptr [0xb65200]
// 0080fef7  33c4                 xor eax, esp
// 0080fef9  50                   push eax
// 0080fefa  8d442450             lea eax, [esp + 0x50]
// 0080fefe  64a300000000         mov dword ptr fs:[0], eax
// 0080ff04  8bf1                 mov esi, ecx
// 0080ff06  8b442464             mov eax, dword ptr [esp + 0x64]
// 0080ff0a  50                   push eax
// 0080ff0b  8d4c240c             lea ecx, [esp + 0xc]
// 0080ff0f  e88c1b0400           call 0x851aa0
// 0080ff14  8b542460             mov edx, dword ptr [esp + 0x60]
// 0080ff18  8d4c2408             lea ecx, [esp + 8]
// 0080ff1c  51                   push ecx
// 0080ff1d  52                   push edx
// 0080ff1e  8bce                 mov ecx, esi
// 0080ff20  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0080ff28  e8a3fcffff           call 0x80fbd0
// 0080ff2d  8d4c2408             lea ecx, [esp + 8]
// 0080ff31  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0080ff39  e832010400           call 0x850070
// 0080ff3e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0080ff42  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ff49  59                   pop ecx
// 0080ff4a  5e                   pop esi
// 0080ff4b  83c454               add esp, 0x54
// 0080ff4e  c20800               ret 8
// copied from an identical function in another client (function ?Serialize@CXTPImageManager@@QAEXIAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp