// roc 2009-12 008b3150  unit: CXTPDockingPaneTabbedContainer  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3150
//
// 008b3150  53                   push ebx
// 008b3151  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008b3155  56                   push esi
// 008b3156  8bf1                 mov esi, ecx
// 008b3158  399ea4010000         cmp dword ptr [esi + 0x1a4], ebx
// 008b315e  7461                 je 0x8b31c1
// 008b3160  837c241400           cmp dword ptr [esp + 0x14], 0
// 008b3165  57                   push edi
// 008b3166  899ea4010000         mov dword ptr [esi + 0x1a4], ebx
// 008b316c  6a01                 push 1
// 008b316e  742b                 je 0x8b319b
// 008b3170  8d7e54               lea edi, [esi + 0x54]
// 008b3173  57                   push edi
// 008b3174  8bcf                 mov ecx, edi
// 008b3176  c786a001000001000000 mov dword ptr [esi + 0x1a0], 1
// 008b3180  e8bbd6ffff           call 0x8b0840
// 008b3185  8bc8                 mov ecx, eax
// 008b3187  e84461f8ff           call 0x8392d0
// 008b318c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008b318f  85c9                 test ecx, ecx
// 008b3191  7413                 je 0x8b31a6
// 008b3193  8b01                 mov eax, dword ptr [ecx]
// 008b3195  8b5034               mov edx, dword ptr [eax + 0x34]
// 008b3198  57                   push edi
// 008b3199  eb09                 jmp 0x8b31a4
// 008b319b  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b319e  8b5038               mov edx, dword ptr [eax + 0x38]
// 008b31a1  8d4e54               lea ecx, [esi + 0x54]
// 008b31a4  ffd2                 call edx
// 008b31a6  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 008b31ac  50                   push eax
// 008b31ad  8bce                 mov ecx, esi
// 008b31af  e84cffffff           call 0x8b3100
// 008b31b4  50                   push eax
// 008b31b5  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b31bb  e870b10100           call 0x8ce330
// 008b31c0  5f                   pop edi
// 008b31c1  837c241000           cmp dword ptr [esp + 0x10], 0
// 008b31c6  7433                 je 0x8b31fb
// 008b31c8  83be9401000000       cmp dword ptr [esi + 0x194], 0
// 008b31cf  741d                 je 0x8b31ee
// 008b31d1  8d4e54               lea ecx, [esi + 0x54]
// 008b31d4  e867d6ffff           call 0x8b0840
// 008b31d9  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 008b31df  8b10                 mov edx, dword ptr [eax]
// 008b31e1  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008b31e7  51                   push ecx
// 008b31e8  6a01                 push 1
// 008b31ea  8bc8                 mov ecx, eax
// 008b31ec  ffd2                 call edx
// 008b31ee  85db                 test ebx, ebx
// 008b31f0  7409                 je 0x8b31fb
// 008b31f2  8b03                 mov eax, dword ptr [ebx]
// 008b31f4  8b5058               mov edx, dword ptr [eax + 0x58]
// 008b31f7  8bcb                 mov ecx, ebx
// 008b31f9  ffd2                 call edx
// 008b31fb  5e                   pop esi
// 008b31fc  5b                   pop ebx
// 008b31fd  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectPane@CXTPDockingPaneTabbedContainer@@UAEXPAVCXTPDockingPane@@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp