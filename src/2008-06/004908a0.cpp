// roc 2008-06 004908a0  unit: RBX::VHumanoid::?$FactoryProduct::Creator  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004908a0
//
// 004908a0  8b442404             mov eax, dword ptr [esp + 4]
// 004908a4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004908a8  83ec1c               sub esp, 0x1c
// 004908ab  53                   push ebx
// 004908ac  56                   push esi
// 004908ad  8bf1                 mov esi, ecx
// 004908af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004908b3  8906                 mov dword ptr [esi], eax
// 004908b5  8b442434             mov eax, dword ptr [esp + 0x34]
// 004908b9  89460c               mov dword ptr [esi + 0xc], eax
// 004908bc  8a442440             mov al, byte ptr [esp + 0x40]
// 004908c0  33db                 xor ebx, ebx
// 004908c2  894e04               mov dword ptr [esi + 4], ecx
// 004908c5  895608               mov dword ptr [esi + 8], edx
// 004908c8  895e10               mov dword ptr [esi + 0x10], ebx
// 004908cb  895e14               mov dword ptr [esi + 0x14], ebx
// 004908ce  884618               mov byte ptr [esi + 0x18], al
// 004908d1  3ac3                 cmp al, bl
// 004908d3  740e                 je 0x4908e3
// 004908d5  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004908d9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 004908dd  894e10               mov dword ptr [esi + 0x10], ecx
// 004908e0  895614               mov dword ptr [esi + 0x14], edx
// 004908e3  8b442444             mov eax, dword ptr [esp + 0x44]
// 004908e7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004908eb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004908ef  89461c               mov dword ptr [esi + 0x1c], eax
// 004908f2  8b442450             mov eax, dword ptr [esp + 0x50]
// 004908f6  894628               mov dword ptr [esi + 0x28], eax
// 004908f9  8a44245c             mov al, byte ptr [esp + 0x5c]
// 004908fd  894e20               mov dword ptr [esi + 0x20], ecx
// 00490900  895624               mov dword ptr [esi + 0x24], edx
// 00490903  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00490906  895e30               mov dword ptr [esi + 0x30], ebx
// 00490909  884634               mov byte ptr [esi + 0x34], al
// 0049090c  3ac3                 cmp al, bl
// 0049090e  740e                 je 0x49091e
// 00490910  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00490914  8b542458             mov edx, dword ptr [esp + 0x58]
// 00490918  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0049091b  895630               mov dword ptr [esi + 0x30], edx
// 0049091e  8b442460             mov eax, dword ptr [esp + 0x60]
// 00490922  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00490926  894638               mov dword ptr [esi + 0x38], eax
// 00490929  894e3c               mov dword ptr [esi + 0x3c], ecx
// 0049092c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0049092f  885c2464             mov byte ptr [esp + 0x64], bl
// 00490933  8b542464             mov edx, dword ptr [esp + 0x64]
// 00490937  52                   push edx
// 00490938  83ec1c               sub esp, 0x1c
// 0049093b  8bc4                 mov eax, esp
// 0049093d  8908                 mov dword ptr [eax], ecx
// 0049093f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00490942  895004               mov dword ptr [eax + 4], edx
// 00490945  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00490948  894808               mov dword ptr [eax + 8], ecx
// 0049094b  8b5628               mov edx, dword ptr [esi + 0x28]
// 0049094e  89500c               mov dword ptr [eax + 0xc], edx
// 00490951  895810               mov dword ptr [eax + 0x10], ebx
// 00490954  895814               mov dword ptr [eax + 0x14], ebx
// 00490957  8a4e34               mov cl, byte ptr [esi + 0x34]
// 0049095a  884818               mov byte ptr [eax + 0x18], cl
// 0049095d  3acb                 cmp cl, bl
// 0049095f  740c                 je 0x49096d
// 00490961  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00490964  894810               mov dword ptr [eax + 0x10], ecx
// 00490967  8b5630               mov edx, dword ptr [esi + 0x30]
// 0049096a  895014               mov dword ptr [eax + 0x14], edx
// 0049096d  8b0e                 mov ecx, dword ptr [esi]
// 0049096f  83ec1c               sub esp, 0x1c
// 00490972  8bc4                 mov eax, esp
// 00490974  8908                 mov dword ptr [eax], ecx
// 00490976  8b5604               mov edx, dword ptr [esi + 4]
// 00490979  895004               mov dword ptr [eax + 4], edx
// 0049097c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049097f  894808               mov dword ptr [eax + 8], ecx
// 00490982  8b560c               mov edx, dword ptr [esi + 0xc]
// 00490985  89500c               mov dword ptr [eax + 0xc], edx
// 00490988  895810               mov dword ptr [eax + 0x10], ebx
// 0049098b  895814               mov dword ptr [eax + 0x14], ebx
// 0049098e  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00490991  884818               mov byte ptr [eax + 0x18], cl
// 00490994  3acb                 cmp cl, bl
// 00490996  740c                 je 0x4909a4
// 00490998  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0049099b  894810               mov dword ptr [eax + 0x10], ecx
// 0049099e  8b5614               mov edx, dword ptr [esi + 0x14]
// 004909a1  895014               mov dword ptr [eax + 0x14], edx
// 004909a4  8d442444             lea eax, [esp + 0x44]
// 004909a8  50                   push eax
// 004909a9  e882a5f7ff           call 0x40af30
// 004909ae  8a4818               mov cl, byte ptr [eax + 0x18]
// 004909b1  884e18               mov byte ptr [esi + 0x18], cl
// 004909b4  8b10                 mov edx, dword ptr [eax]
// 004909b6  8916                 mov dword ptr [esi], edx
// 004909b8  8b4804               mov ecx, dword ptr [eax + 4]
// 004909bb  894e04               mov dword ptr [esi + 4], ecx
// 004909be  8b5008               mov edx, dword ptr [eax + 8]
// 004909c1  895608               mov dword ptr [esi + 8], edx
// 004909c4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004909c7  83c440               add esp, 0x40
// 004909ca  894e0c               mov dword ptr [esi + 0xc], ecx
// 004909cd  385e18               cmp byte ptr [esi + 0x18], bl
// 004909d0  740c                 je 0x4909de
// 004909d2  8b5010               mov edx, dword ptr [eax + 0x10]
// 004909d5  895610               mov dword ptr [esi + 0x10], edx
// 004909d8  8b4014               mov eax, dword ptr [eax + 0x14]
// 004909db  894614               mov dword ptr [esi + 0x14], eax
// 004909de  8bc6                 mov eax, esi
// 004909e0  5e                   pop esi
// 004909e1  5b                   pop ebx
// 004909e2  83c41c               add esp, 0x1c
// 004909e5  c24000               ret 0x40
// library rbxgs/humanoid\FallingDown.cpp (function ??0?$slot_call_iterator@U?$caller@_NV?$function@$$A6AX_N@ZV?$allocator@X@std@@@boost@@@?$call_bound1@X@detail@signals@boost@@Vnamed_slot_map_iterator@345@@detail@signals@boost@@QAE@Vnamed_slot_map_iterator@123@0U?$caller@_NV?$function@$$A6AX_N@ZV?$allocator@X@std@@@boost@@@?$call_bound1@X@123@AAV?$optional@Uunusable@detail@signals@boost@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
