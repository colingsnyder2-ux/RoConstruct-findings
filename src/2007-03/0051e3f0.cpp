// roc 2007-03 0051e3f0  unit: seg_00510000  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e3f0
//
// 0051e3f0  53                   push ebx
// 0051e3f1  56                   push esi
// 0051e3f2  57                   push edi
// 0051e3f3  8bf1                 mov esi, ecx
// 0051e3f5  50                   push eax
// 0051e3f6  8bc6                 mov eax, esi
// 0051e3f8  e883fdffff           call 0x51e180
// 0051e3fd  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0051e400  83c404               add esp, 4
// 0051e403  8d444008             lea eax, [eax + eax*2 + 8]
// 0051e407  8bce                 mov ecx, esi
// 0051e409  e892fdffff           call 0x51e1a0
// 0051e40e  b8ffff0000           mov eax, 0xffff
// 0051e413  394620               cmp dword ptr [esi + 0x20], eax
// 0051e416  7f05                 jg 0x51e41d
// 0051e418  39461c               cmp dword ptr [esi + 0x1c], eax
// 0051e41b  7e18                 jle 0x51e435
// 0051e41d  8b0e                 mov ecx, dword ptr [esi]
// 0051e41f  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0051e426  8b16                 mov edx, dword ptr [esi]
// 0051e428  894218               mov dword ptr [edx + 0x18], eax
// 0051e42b  8b06                 mov eax, dword ptr [esi]
// 0051e42d  8b08                 mov ecx, dword ptr [eax]
// 0051e42f  56                   push esi
// 0051e430  ffd1                 call ecx
// 0051e432  83c404               add esp, 4
// 0051e435  8b5638               mov edx, dword ptr [esi + 0x38]
// 0051e438  52                   push edx
// 0051e439  e802fdffff           call 0x51e140
// 0051e43e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0051e441  8bce                 mov ecx, esi
// 0051e443  e858fdffff           call 0x51e1a0
// 0051e448  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0051e44b  8bce                 mov ecx, esi
// 0051e44d  e84efdffff           call 0x51e1a0
// 0051e452  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0051e455  50                   push eax
// 0051e456  e8e5fcffff           call 0x51e140
// 0051e45b  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0051e45e  33db                 xor ebx, ebx
// 0051e460  83c408               add esp, 8
// 0051e463  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0051e466  7e2e                 jle 0x51e496
// 0051e468  8b0f                 mov ecx, dword ptr [edi]
// 0051e46a  51                   push ecx
// 0051e46b  e8d0fcffff           call 0x51e140
// 0051e470  8b5708               mov edx, dword ptr [edi + 8]
// 0051e473  c1e204               shl edx, 4
// 0051e476  03570c               add edx, dword ptr [edi + 0xc]
// 0051e479  52                   push edx
// 0051e47a  e8c1fcffff           call 0x51e140
// 0051e47f  8b4710               mov eax, dword ptr [edi + 0x10]
// 0051e482  50                   push eax
// 0051e483  e8b8fcffff           call 0x51e140
// 0051e488  83c301               add ebx, 1
// 0051e48b  83c40c               add esp, 0xc
// 0051e48e  83c754               add edi, 0x54
// 0051e491  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0051e494  7cd2                 jl 0x51e468
// 0051e496  5f                   pop edi
// 0051e497  5e                   pop esi
// 0051e498  5b                   pop ebx
// 0051e499  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
