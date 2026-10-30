// roc 2009-12 0080ca30  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ca30
//
// 0080ca30  6aff                 push -1
// 0080ca32  68f19a9500           push 0x959af1
// 0080ca37  64a100000000         mov eax, dword ptr fs:[0]
// 0080ca3d  50                   push eax
// 0080ca3e  51                   push ecx
// 0080ca3f  56                   push esi
// 0080ca40  a10052b600           mov eax, dword ptr [0xb65200]
// 0080ca45  33c4                 xor eax, esp
// 0080ca47  50                   push eax
// 0080ca48  8d44240c             lea eax, [esp + 0xc]
// 0080ca4c  64a300000000         mov dword ptr fs:[0], eax
// 0080ca52  8bf1                 mov esi, ecx
// 0080ca54  89742408             mov dword ptr [esp + 8], esi
// 0080ca58  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0080ca60  e8abf3ffff           call 0x80be10
// 0080ca65  8d4658               lea eax, [esi + 0x58]
// 0080ca68  50                   push eax
// 0080ca69  ff15d0b29800         call dword ptr [0x98b2d0]
// 0080ca6f  8d4e44               lea ecx, [esi + 0x44]
// 0080ca72  c644241401           mov byte ptr [esp + 0x14], 1
// 0080ca77  e874ecffff           call 0x80b6f0
// 0080ca7c  8d4e30               lea ecx, [esi + 0x30]
// 0080ca7f  c644241400           mov byte ptr [esp + 0x14], 0
// 0080ca84  e867ecffff           call 0x80b6f0
// 0080ca89  8b4618               mov eax, dword ptr [esi + 0x18]
// 0080ca8c  83c608               add esi, 8
// 0080ca8f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080ca97  c70604309f00         mov dword ptr [esi], 0x9f3004
// 0080ca9d  85c0                 test eax, eax
// 0080ca9f  740b                 je 0x80caac
// 0080caa1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0080caa4  50                   push eax
// 0080caa5  51                   push ecx
// 0080caa6  ff154cb19800         call dword ptr [0x98b14c]
// 0080caac  8bce                 mov ecx, esi
// 0080caae  e8f5991100           call 0x9264a8
// 0080cab3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080cab7  64890d00000000       mov dword ptr fs:[0], ecx
// 0080cabe  59                   pop ecx
// 0080cabf  5e                   pop esi
// 0080cac0  83c410               add esp, 0x10
// 0080cac3  c3                   ret 
// copied from an identical function in another client (function ??1CXTPImageManagerResource@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp