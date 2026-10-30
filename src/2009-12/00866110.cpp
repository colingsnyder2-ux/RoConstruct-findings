// roc 2009-12 00866110  unit: CXTPPropertyGridItem  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00866110
//
// 00866110  83ec14               sub esp, 0x14
// 00866113  53                   push ebx
// 00866114  55                   push ebp
// 00866115  56                   push esi
// 00866116  57                   push edi
// 00866117  8d442414             lea eax, [esp + 0x14]
// 0086611b  50                   push eax
// 0086611c  8bf1                 mov esi, ecx
// 0086611e  e8cdf2ffff           call 0x8653f0
// 00866123  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00866127  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0086612b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0086612f  41                   inc ecx
// 00866130  894c2410             mov dword ptr [esp + 0x10], ecx
// 00866134  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0086613a  4b                   dec ebx
// 0086613b  e820260000           call 0x868760
// 00866140  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00866144  8b542410             mov edx, dword ptr [esp + 0x10]
// 00866148  40                   inc eax
// 00866149  895704               mov dword ptr [edi + 4], edx
// 0086614c  8907                 mov dword ptr [edi], eax
// 0086614e  896f08               mov dword ptr [edi + 8], ebp
// 00866151  895f0c               mov dword ptr [edi + 0xc], ebx
// 00866154  8b06                 mov eax, dword ptr [esi]
// 00866156  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0086615c  8bce                 mov ecx, esi
// 0086615e  ffd2                 call edx
// 00866160  85c0                 test eax, eax
// 00866162  7434                 je 0x866198
// 00866164  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0086616a  33db                 xor ebx, ebx
// 0086616c  395828               cmp dword ptr [eax + 0x28], ebx
// 0086616f  7e27                 jle 0x866198
// 00866171  85db                 test ebx, ebx
// 00866173  7c0d                 jl 0x866182
// 00866175  3b5828               cmp ebx, dword ptr [eax + 0x28]
// 00866178  7d08                 jge 0x866182
// 0086617a  8b4024               mov eax, dword ptr [eax + 0x24]
// 0086617d  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00866180  eb02                 jmp 0x866184
// 00866182  33c9                 xor ecx, ecx
// 00866184  e897010600           call 0x8c6320
// 00866189  294708               sub dword ptr [edi + 8], eax
// 0086618c  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00866192  43                   inc ebx
// 00866193  3b5828               cmp ebx, dword ptr [eax + 0x28]
// 00866196  7cd9                 jl 0x866171
// 00866198  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0086619e  e8ad170000           call 0x867950
// 008661a3  8b10                 mov edx, dword ptr [eax]
// 008661a5  57                   push edi
// 008661a6  8bc8                 mov ecx, eax
// 008661a8  8b4224               mov eax, dword ptr [edx + 0x24]
// 008661ab  56                   push esi
// 008661ac  ffd0                 call eax
// 008661ae  8bc7                 mov eax, edi
// 008661b0  5f                   pop edi
// 008661b1  5e                   pop esi
// 008661b2  5d                   pop ebp
// 008661b3  5b                   pop ebx
// 008661b4  83c414               add esp, 0x14
// 008661b7  c20400               ret 4
// copied from an identical function in another client (function ?GetInplaceWindowsRect@CXTPPropertyGridItem@@AAE?AVCRect@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp