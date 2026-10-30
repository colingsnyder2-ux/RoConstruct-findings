// roc 2009-12 008d0ea0  unit: CXTPTabPaintManager  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0ea0
//
// 008d0ea0  6aff                 push -1
// 008d0ea2  6870509600           push 0x965070
// 008d0ea7  64a100000000         mov eax, dword ptr fs:[0]
// 008d0ead  50                   push eax
// 008d0eae  83ec28               sub esp, 0x28
// 008d0eb1  53                   push ebx
// 008d0eb2  55                   push ebp
// 008d0eb3  56                   push esi
// 008d0eb4  57                   push edi
// 008d0eb5  a10052b600           mov eax, dword ptr [0xb65200]
// 008d0eba  33c4                 xor eax, esp
// 008d0ebc  50                   push eax
// 008d0ebd  8d44243c             lea eax, [esp + 0x3c]
// 008d0ec1  64a300000000         mov dword ptr fs:[0], eax
// 008d0ec7  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008d0ecb  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008d0ecf  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008d0ed3  57                   push edi
// 008d0ed4  55                   push ebp
// 008d0ed5  56                   push esi
// 008d0ed6  e865f9ffff           call 0x8d0840
// 008d0edb  8b4608               mov eax, dword ptr [esi + 8]
// 008d0ede  50                   push eax
// 008d0edf  ff1524b19800         call dword ptr [0x98b124]
// 008d0ee5  8bd8                 mov ebx, eax
// 008d0ee7  8b4604               mov eax, dword ptr [esi + 4]
// 008d0eea  53                   push ebx
// 008d0eeb  50                   push eax
// 008d0eec  8d4c2430             lea ecx, [esp + 0x30]
// 008d0ef0  e80ba8f7ff           call 0x84b700
// 008d0ef5  837d2000             cmp dword ptr [ebp + 0x20], 0
// 008d0ef9  c744244400000000     mov dword ptr [esp + 0x44], 0
// 008d0f01  7449                 je 0x8d0f4c
// 008d0f03  8b4604               mov eax, dword ptr [esi + 4]
// 008d0f06  53                   push ebx
// 008d0f07  50                   push eax
// 008d0f08  8d4c241c             lea ecx, [esp + 0x1c]
// 008d0f0c  e8afa8f7ff           call 0x84b7c0
// 008d0f11  8b0f                 mov ecx, dword ptr [edi]
// 008d0f13  8b5500               mov edx, dword ptr [ebp]
// 008d0f16  8b5214               mov edx, dword ptr [edx + 0x14]
// 008d0f19  83ec10               sub esp, 0x10
// 008d0f1c  8bc4                 mov eax, esp
// 008d0f1e  8908                 mov dword ptr [eax], ecx
// 008d0f20  8b4f04               mov ecx, dword ptr [edi + 4]
// 008d0f23  894804               mov dword ptr [eax + 4], ecx
// 008d0f26  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d0f29  894808               mov dword ptr [eax + 8], ecx
// 008d0f2c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d0f2f  89480c               mov dword ptr [eax + 0xc], ecx
// 008d0f32  56                   push esi
// 008d0f33  8bcd                 mov ecx, ebp
// 008d0f35  c644245801           mov byte ptr [esp + 0x58], 1
// 008d0f3a  ffd2                 call edx
// 008d0f3c  8d4c2414             lea ecx, [esp + 0x14]
// 008d0f40  c644244400           mov byte ptr [esp + 0x44], 0
// 008d0f45  e806a9f7ff           call 0x84b850
// 008d0f4a  eb3b                 jmp 0x8d0f87
// 008d0f4c  8b06                 mov eax, dword ptr [esi]
// 008d0f4e  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d0f51  6a05                 push 5
// 008d0f53  8bce                 mov ecx, esi
// 008d0f55  ffd2                 call edx
// 008d0f57  8b0f                 mov ecx, dword ptr [edi]
// 008d0f59  8b5500               mov edx, dword ptr [ebp]
// 008d0f5c  8b5214               mov edx, dword ptr [edx + 0x14]
// 008d0f5f  83ec10               sub esp, 0x10
// 008d0f62  8bd8                 mov ebx, eax
// 008d0f64  8bc4                 mov eax, esp
// 008d0f66  8908                 mov dword ptr [eax], ecx
// 008d0f68  8b4f04               mov ecx, dword ptr [edi + 4]
// 008d0f6b  894804               mov dword ptr [eax + 4], ecx
// 008d0f6e  8b4f08               mov ecx, dword ptr [edi + 8]
// 008d0f71  894808               mov dword ptr [eax + 8], ecx
// 008d0f74  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008d0f77  89480c               mov dword ptr [eax + 0xc], ecx
// 008d0f7a  56                   push esi
// 008d0f7b  8bcd                 mov ecx, ebp
// 008d0f7d  ffd2                 call edx
// 008d0f7f  53                   push ebx
// 008d0f80  8bce                 mov ecx, esi
// 008d0f82  e845550500           call 0x9264cc
// 008d0f87  8d4c2428             lea ecx, [esp + 0x28]
// 008d0f8b  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 008d0f93  e8f8a7f7ff           call 0x84b790
// 008d0f98  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008d0f9c  64890d00000000       mov dword ptr fs:[0], ecx
// 008d0fa3  59                   pop ecx
// 008d0fa4  5f                   pop edi
// 008d0fa5  5e                   pop esi
// 008d0fa6  5d                   pop ebp
// 008d0fa7  5b                   pop ebx
// 008d0fa8  83c434               add esp, 0x34
// 008d0fab  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawNavigateButton@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManager.cpp