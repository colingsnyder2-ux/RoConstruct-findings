// roc 2009-12 008262b0  unit: CXTPReportControl  size: 471 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008262b0
//
// 008262b0  83ec28               sub esp, 0x28
// 008262b3  56                   push esi
// 008262b4  8bf1                 mov esi, ecx
// 008262b6  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 008262bd  0f8549010000         jne 0x82640c
// 008262c3  8b442434             mov eax, dword ptr [esp + 0x34]
// 008262c7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008262cb  57                   push edi
// 008262cc  8d542408             lea edx, [esp + 8]
// 008262d0  89442408             mov dword ptr [esp + 8], eax
// 008262d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008262d7  52                   push edx
// 008262d8  50                   push eax
// 008262d9  894c2414             mov dword ptr [esp + 0x14], ecx
// 008262dd  ff1534cc9800         call dword ptr [0x98cc34]
// 008262e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008262e7  8b542408             mov edx, dword ptr [esp + 8]
// 008262eb  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 008262f1  51                   push ecx
// 008262f2  52                   push edx
// 008262f3  8d4670               lea eax, [esi + 0x70]
// 008262f6  50                   push eax
// 008262f7  ffd7                 call edi
// 008262f9  85c0                 test eax, eax
// 008262fb  0f8563010000         jne 0x826464
// 00826301  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826305  8b542408             mov edx, dword ptr [esp + 8]
// 00826309  51                   push ecx
// 0082630a  52                   push edx
// 0082630b  8d4660               lea eax, [esi + 0x60]
// 0082630e  50                   push eax
// 0082630f  ffd7                 call edi
// 00826311  85c0                 test eax, eax
// 00826313  0f854b010000         jne 0x826464
// 00826319  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082631d  8b542408             mov edx, dword ptr [esp + 8]
// 00826321  53                   push ebx
// 00826322  51                   push ecx
// 00826323  52                   push edx
// 00826324  8d9e90000000         lea ebx, [esi + 0x90]
// 0082632a  53                   push ebx
// 0082632b  ffd7                 call edi
// 0082632d  85c0                 test eax, eax
// 0082632f  0f85de000000         jne 0x826413
// 00826335  8b442410             mov eax, dword ptr [esp + 0x10]
// 00826339  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082633d  50                   push eax
// 0082633e  51                   push ecx
// 0082633f  8d96a0000000         lea edx, [esi + 0xa0]
// 00826345  52                   push edx
// 00826346  ffd7                 call edi
// 00826348  85c0                 test eax, eax
// 0082634a  0f85c3000000         jne 0x826413
// 00826350  8b442410             mov eax, dword ptr [esp + 0x10]
// 00826354  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826358  50                   push eax
// 00826359  51                   push ecx
// 0082635a  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00826360  e84bc3c2ff           call 0x4526b0
// 00826365  85c0                 test eax, eax
// 00826367  0f85a6000000         jne 0x826413
// 0082636d  83c8ff               or eax, 0xffffffff
// 00826370  0bc8                 or ecx, eax
// 00826372  51                   push ecx
// 00826373  50                   push eax
// 00826374  8d4c2444             lea ecx, [esp + 0x44]
// 00826378  e86366bfff           call 0x41c9e0
// 0082637d  85c0                 test eax, eax
// 0082637f  0f8485000000         je 0x82640a
// 00826385  8bce                 mov ecx, esi
// 00826387  e8d481ffff           call 0x81e560
// 0082638c  8bf8                 mov edi, eax
// 0082638e  85ff                 test edi, edi
// 00826390  7446                 je 0x8263d8
// 00826392  8b17                 mov edx, dword ptr [edi]
// 00826394  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0082639a  8d442414             lea eax, [esp + 0x14]
// 0082639e  50                   push eax
// 0082639f  8bcf                 mov ecx, edi
// 008263a1  ffd2                 call edx
// 008263a3  8b700c               mov esi, dword ptr [eax + 0xc]
// 008263a6  8b07                 mov eax, dword ptr [edi]
// 008263a8  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 008263ae  8d4c2424             lea ecx, [esp + 0x24]
// 008263b2  51                   push ecx
// 008263b3  8bcf                 mov ecx, edi
// 008263b5  ffd2                 call edx
// 008263b7  8b00                 mov eax, dword ptr [eax]
// 008263b9  8944240c             mov dword ptr [esp + 0xc], eax
// 008263bd  89742410             mov dword ptr [esp + 0x10], esi
// 008263c1  8b17                 mov edx, dword ptr [edi]
// 008263c3  56                   push esi
// 008263c4  50                   push eax
// 008263c5  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 008263cb  8bcf                 mov ecx, edi
// 008263cd  ffd0                 call eax
// 008263cf  5b                   pop ebx
// 008263d0  5f                   pop edi
// 008263d1  5e                   pop esi
// 008263d2  83c428               add esp, 0x28
// 008263d5  c20c00               ret 0xc
// 008263d8  8b0b                 mov ecx, dword ptr [ebx]
// 008263da  8b5304               mov edx, dword ptr [ebx + 4]
// 008263dd  8d44243c             lea eax, [esp + 0x3c]
// 008263e1  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008263e5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008263e8  50                   push eax
// 008263e9  51                   push ecx
// 008263ea  89542448             mov dword ptr [esp + 0x48], edx
// 008263ee  ff1554cc9800         call dword ptr [0x98cc54]
// 008263f4  6aff                 push -1
// 008263f6  8d542440             lea edx, [esp + 0x40]
// 008263fa  52                   push edx
// 008263fb  6afb                 push -5
// 008263fd  6a00                 push 0
// 008263ff  6a00                 push 0
// 00826401  6a00                 push 0
// 00826403  8bce                 mov ecx, esi
// 00826405  e8f6ceffff           call 0x823300
// 0082640a  5b                   pop ebx
// 0082640b  5f                   pop edi
// 0082640c  5e                   pop esi
// 0082640d  83c428               add esp, 0x28
// 00826410  c20c00               ret 0xc
// 00826413  8b442410             mov eax, dword ptr [esp + 0x10]
// 00826417  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082641b  50                   push eax
// 0082641c  51                   push ecx
// 0082641d  8bce                 mov ecx, esi
// 0082641f  e8bc71ffff           call 0x81d5e0
// 00826424  8bf8                 mov edi, eax
// 00826426  85ff                 test edi, edi
// 00826428  7431                 je 0x82645b
// 0082642a  8b17                 mov edx, dword ptr [edi]
// 0082642c  8b4274               mov eax, dword ptr [edx + 0x74]
// 0082642f  8bcf                 mov ecx, edi
// 00826431  ffd0                 call eax
// 00826433  50                   push eax
// 00826434  57                   push edi
// 00826435  8bce                 mov ecx, esi
// 00826437  e864f5ffff           call 0x8259a0
// 0082643c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00826440  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826444  8b17                 mov edx, dword ptr [edi]
// 00826446  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 0082644c  50                   push eax
// 0082644d  51                   push ecx
// 0082644e  8bcf                 mov ecx, edi
// 00826450  ffd2                 call edx
// 00826452  5b                   pop ebx
// 00826453  5f                   pop edi
// 00826454  5e                   pop esi
// 00826455  83c428               add esp, 0x28
// 00826458  c20c00               ret 0xc
// 0082645b  6aff                 push -1
// 0082645d  8d442440             lea eax, [esp + 0x40]
// 00826461  50                   push eax
// 00826462  eb97                 jmp 0x8263fb
// 00826464  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 0082646a  85c9                 test ecx, ecx
// 0082646c  749d                 je 0x82640b
// 0082646e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00826472  8b11                 mov edx, dword ptr [ecx]
// 00826474  8b5270               mov edx, dword ptr [edx + 0x70]
// 00826477  50                   push eax
// 00826478  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082647c  50                   push eax
// 0082647d  ffd2                 call edx
// 0082647f  5f                   pop edi
// 00826480  5e                   pop esi
// 00826481  83c428               add esp, 0x28
// 00826484  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnContextMenu@CXTPReportControl@@IAEXPAVCWnd@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp