// roc 2009-12 008b53b0  unit: CXTPDockingPaneSplitterContainer  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b53b0
//
// 008b53b0  6aff                 push -1
// 008b53b2  6828319600           push 0x963128
// 008b53b7  64a100000000         mov eax, dword ptr fs:[0]
// 008b53bd  50                   push eax
// 008b53be  83ec20               sub esp, 0x20
// 008b53c1  53                   push ebx
// 008b53c2  55                   push ebp
// 008b53c3  56                   push esi
// 008b53c4  57                   push edi
// 008b53c5  a10052b600           mov eax, dword ptr [0xb65200]
// 008b53ca  33c4                 xor eax, esp
// 008b53cc  50                   push eax
// 008b53cd  8d442434             lea eax, [esp + 0x34]
// 008b53d1  64a300000000         mov dword ptr fs:[0], eax
// 008b53d7  8bd9                 mov ebx, ecx
// 008b53d9  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008b53dd  8d6b20               lea ebp, [ebx + 0x20]
// 008b53e0  50                   push eax
// 008b53e1  8bcd                 mov ecx, ebp
// 008b53e3  e858b4ffff           call 0x8b0840
// 008b53e8  8bc8                 mov ecx, eax
// 008b53ea  e81133f8ff           call 0x838700
// 008b53ef  83f801               cmp eax, 1
// 008b53f2  740d                 je 0x8b5401
// 008b53f4  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008b53fc  83f803               cmp eax, 3
// 008b53ff  7508                 jne 0x8b5409
// 008b5401  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 008b5409  6a0a                 push 0xa
// 008b540b  8d4c241c             lea ecx, [esp + 0x1c]
// 008b540f  e8ac42f8ff           call 0x8396c0
// 008b5414  8bcd                 mov ecx, ebp
// 008b5416  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008b541e  e86d53faff           call 0x85a790
// 008b5423  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008b5427  89442414             mov dword ptr [esp + 0x14], eax
// 008b542b  85c0                 test eax, eax
// 008b542d  7450                 je 0x8b547f
// 008b542f  90                   nop 
// 008b5430  8d4c2414             lea ecx, [esp + 0x14]
// 008b5434  51                   push ecx
// 008b5435  8bcd                 mov ecx, ebp
// 008b5437  e8d4da0300           call 0x8f2f10
// 008b543c  8bf0                 mov esi, eax
// 008b543e  8b16                 mov edx, dword ptr [esi]
// 008b5440  8b4214               mov eax, dword ptr [edx + 0x14]
// 008b5443  8bce                 mov ecx, esi
// 008b5445  ffd0                 call eax
// 008b5447  85c0                 test eax, eax
// 008b5449  752d                 jne 0x8b5478
// 008b544b  3bf7                 cmp esi, edi
// 008b544d  7429                 je 0x8b5478
// 008b544f  56                   push esi
// 008b5450  8d4c241c             lea ecx, [esp + 0x1c]
// 008b5454  e827e70000           call 0x8c3b80
// 008b5459  3b742450             cmp esi, dword ptr [esp + 0x50]
// 008b545d  7519                 jne 0x8b5478
// 008b545f  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008b5464  57                   push edi
// 008b5465  8d4c241c             lea ecx, [esp + 0x1c]
// 008b5469  50                   push eax
// 008b546a  7407                 je 0x8b5473
// 008b546c  e85ff6ffff           call 0x8b4ad0
// 008b5471  eb05                 jmp 0x8b5478
// 008b5473  e808f6ffff           call 0x8b4a80
// 008b5478  837c241400           cmp dword ptr [esp + 0x14], 0
// 008b547d  75b1                 jne 0x8b5430
// 008b547f  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 008b5482  8b5340               mov edx, dword ptr [ebx + 0x40]
// 008b5485  8b742444             mov esi, dword ptr [esp + 0x44]
// 008b5489  57                   push edi
// 008b548a  83ec10               sub esp, 0x10
// 008b548d  8bc4                 mov eax, esp
// 008b548f  8908                 mov dword ptr [eax], ecx
// 008b5491  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 008b5494  895004               mov dword ptr [eax + 4], edx
// 008b5497  8b5348               mov edx, dword ptr [ebx + 0x48]
// 008b549a  894808               mov dword ptr [eax + 8], ecx
// 008b549d  8b8b90000000         mov ecx, dword ptr [ebx + 0x90]
// 008b54a3  89500c               mov dword ptr [eax + 0xc], edx
// 008b54a6  8d44242c             lea eax, [esp + 0x2c]
// 008b54aa  50                   push eax
// 008b54ab  51                   push ecx
// 008b54ac  56                   push esi
// 008b54ad  e89ef2ffff           call 0x8b4750
// 008b54b2  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 008b54b5  83c420               add esp, 0x20
// 008b54b8  56                   push esi
// 008b54b9  e83ce9f3ff           call 0x7f3dfa
// 008b54be  8d4c2418             lea ecx, [esp + 0x18]
// 008b54c2  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008b54ca  e82142f8ff           call 0x8396f0
// 008b54cf  8bc6                 mov eax, esi
// 008b54d1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008b54d5  64890d00000000       mov dword ptr fs:[0], ecx
// 008b54dc  59                   pop ecx
// 008b54dd  5f                   pop edi
// 008b54de  5e                   pop esi
// 008b54df  5d                   pop ebp
// 008b54e0  5b                   pop ebx
// 008b54e1  83c42c               add esp, 0x2c
// 008b54e4  c21000               ret 0x10
// copied from an identical function in another client (function ?_CalculateResultDockingRectSelf@CXTPDockingPaneSplitterContainer@@AAE?AVCRect@@PAVCXTPDockingPaneBase@@W4XTPDockingPaneDirection@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp