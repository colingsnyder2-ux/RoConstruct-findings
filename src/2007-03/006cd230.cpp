// roc 2007-03 006cd230  unit: seg_006c0000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cd230
//
// 006cd230  83ec0c               sub esp, 0xc
// 006cd233  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006cd237  53                   push ebx
// 006cd238  55                   push ebp
// 006cd239  56                   push esi
// 006cd23a  57                   push edi
// 006cd23b  e8e0c2ffff           call 0x6c9520
// 006cd240  8b88d4000000         mov ecx, dword ptr [eax + 0xd4]
// 006cd246  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006cd249  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006cd24d  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006cd251  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006cd255  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006cd259  89542418             mov dword ptr [esp + 0x18], edx
// 006cd25d  8d542414             lea edx, [esp + 0x14]
// 006cd261  52                   push edx
// 006cd262  33c9                 xor ecx, ecx
// 006cd264  8d542414             lea edx, [esp + 0x14]
// 006cd268  52                   push edx
// 006cd269  8b542440             mov edx, dword ptr [esp + 0x40]
// 006cd26d  51                   push ecx
// 006cd26e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006cd272  894c2420             mov dword ptr [esp + 0x20], ecx
// 006cd276  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006cd27a  51                   push ecx
// 006cd27b  83ec10               sub esp, 0x10
// 006cd27e  8bcc                 mov ecx, esp
// 006cd280  8931                 mov dword ptr [ecx], esi
// 006cd282  897904               mov dword ptr [ecx + 4], edi
// 006cd285  55                   push ebp
// 006cd286  895908               mov dword ptr [ecx + 8], ebx
// 006cd289  50                   push eax
// 006cd28a  89510c               mov dword ptr [ecx + 0xc], edx
// 006cd28d  e85efdffff           call 0x6ccff0
// 006cd292  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006cd296  8b6d04               mov ebp, dword ptr [ebp + 4]
// 006cd299  8b442460             mov eax, dword ptr [esp + 0x60]
// 006cd29d  8931                 mov dword ptr [ecx], esi
// 006cd29f  897904               mov dword ptr [ecx + 4], edi
// 006cd2a2  83c428               add esp, 0x28
// 006cd2a5  85ed                 test ebp, ebp
// 006cd2a7  895908               mov dword ptr [ecx + 8], ebx
// 006cd2aa  89410c               mov dword ptr [ecx + 0xc], eax
// 006cd2ad  0f8492000000         je 0x6cd345
// 006cd2b3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006cd2b7  8b742414             mov esi, dword ptr [esp + 0x14]
// 006cd2bb  eb03                 jmp 0x6cd2c0
// 006cd2bd  8d4900               lea ecx, [ecx]
// 006cd2c0  8bc5                 mov eax, ebp
// 006cd2c2  8b7808               mov edi, dword ptr [eax + 8]
// 006cd2c5  8b5730               mov edx, dword ptr [edi + 0x30]
// 006cd2c8  8b6d00               mov ebp, dword ptr [ebp]
// 006cd2cb  8bc2                 mov eax, edx
// 006cd2cd  f7d8                 neg eax
// 006cd2cf  85d2                 test edx, edx
// 006cd2d1  7e21                 jle 0x6cd2f4
// 006cd2d3  85db                 test ebx, ebx
// 006cd2d5  7504                 jne 0x6cd2db
// 006cd2d7  33c0                 xor eax, eax
// 006cd2d9  eb08                 jmp 0x6cd2e3
// 006cd2db  8bc2                 mov eax, edx
// 006cd2dd  0fafc6               imul eax, esi
// 006cd2e0  99                   cdq 
// 006cd2e1  f7fb                 idiv ebx
// 006cd2e3  2b5f30               sub ebx, dword ptr [edi + 0x30]
// 006cd2e6  2bf0                 sub esi, eax
// 006cd2e8  33d2                 xor edx, edx
// 006cd2ea  85f6                 test esi, esi
// 006cd2ec  0f9ec2               setle dl
// 006cd2ef  83ea01               sub edx, 1
// 006cd2f2  23f2                 and esi, edx
// 006cd2f4  837c242400           cmp dword ptr [esp + 0x24], 0
// 006cd2f9  7421                 je 0x6cd31c
// 006cd2fb  85ed                 test ebp, ebp
// 006cd2fd  7506                 jne 0x6cd305
// 006cd2ff  8b542434             mov edx, dword ptr [esp + 0x34]
// 006cd303  eb04                 jmp 0x6cd309
// 006cd305  8b11                 mov edx, dword ptr [ecx]
// 006cd307  03d0                 add edx, eax
// 006cd309  397c243c             cmp dword ptr [esp + 0x3c], edi
// 006cd30d  895108               mov dword ptr [ecx + 8], edx
// 006cd310  7433                 je 0x6cd345
// 006cd312  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cd316  03d0                 add edx, eax
// 006cd318  8911                 mov dword ptr [ecx], edx
// 006cd31a  eb21                 jmp 0x6cd33d
// 006cd31c  85ed                 test ebp, ebp
// 006cd31e  7506                 jne 0x6cd326
// 006cd320  8b542438             mov edx, dword ptr [esp + 0x38]
// 006cd324  eb05                 jmp 0x6cd32b
// 006cd326  8b5104               mov edx, dword ptr [ecx + 4]
// 006cd329  03d0                 add edx, eax
// 006cd32b  397c243c             cmp dword ptr [esp + 0x3c], edi
// 006cd32f  89510c               mov dword ptr [ecx + 0xc], edx
// 006cd332  7411                 je 0x6cd345
// 006cd334  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cd338  03d0                 add edx, eax
// 006cd33a  895104               mov dword ptr [ecx + 4], edx
// 006cd33d  85ed                 test ebp, ebp
// 006cd33f  0f857bffffff         jne 0x6cd2c0
// 006cd345  5f                   pop edi
// 006cd346  5e                   pop esi
// 006cd347  5d                   pop ebp
// 006cd348  8bc1                 mov eax, ecx
// 006cd34a  5b                   pop ebx
// 006cd34b  83c40c               add esp, 0xc
// 006cd34e  c3                   ret 
// copied from an identical function in another client (function ?_CalculateResultDockingRect@CXTPDockingPaneSplitterContainer@@CA?AVCRect@@HAAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@V2@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneSplitterContainer.cpp