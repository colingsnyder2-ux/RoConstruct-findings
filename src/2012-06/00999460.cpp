// from server: 100% by auto
// roc 2012-06 00999460  unit: CXTPImageManagerResource::CBitmapDC  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999460
//
// 00999460  8b442408             mov eax, dword ptr [esp + 8]
// 00999464  83ec2c               sub esp, 0x2c
// 00999467  56                   push esi
// 00999468  8b742434             mov esi, dword ptr [esp + 0x34]
// 0099946c  c70600000000         mov dword ptr [esi], 0
// 00999472  c7460400000000       mov dword ptr [esi + 4], 0
// 00999479  85c0                 test eax, eax
// 0099947b  7468                 je 0x9994e5
// 0099947d  8d4c2404             lea ecx, [esp + 4]
// 00999481  51                   push ecx
// 00999482  50                   push eax
// 00999483  ff15d83bb200         call dword ptr [0xb23bd8]
// 00999489  85c0                 test eax, eax
// 0099948b  7458                 je 0x9994e5
// 0099948d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00999491  8d542418             lea edx, [esp + 0x18]
// 00999495  52                   push edx
// 00999496  6a18                 push 0x18
// 00999498  50                   push eax
// 00999499  ff155021b200         call dword ptr [0xb22150]
// 0099949f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009994a3  85c0                 test eax, eax
// 009994a5  7419                 je 0x9994c0
// 009994a7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009994ab  8b442420             mov eax, dword ptr [esp + 0x20]
// 009994af  8916                 mov dword ptr [esi], edx
// 009994b1  894604               mov dword ptr [esi + 4], eax
// 009994b4  85c9                 test ecx, ecx
// 009994b6  7508                 jne 0x9994c0
// 009994b8  99                   cdq 
// 009994b9  2bc2                 sub eax, edx
// 009994bb  d1f8                 sar eax, 1
// 009994bd  894604               mov dword ptr [esi + 4], eax
// 009994c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 009994c4  57                   push edi
// 009994c5  8b3d7021b200         mov edi, dword ptr [0xb22170]
// 009994cb  85c0                 test eax, eax
// 009994cd  7407                 je 0x9994d6
// 009994cf  50                   push eax
// 009994d0  ffd7                 call edi
// 009994d2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009994d6  85c9                 test ecx, ecx
// 009994d8  7403                 je 0x9994dd
// 009994da  51                   push ecx
// 009994db  ffd7                 call edi
// 009994dd  5f                   pop edi
// 009994de  8bc6                 mov eax, esi
// 009994e0  5e                   pop esi
// 009994e1  83c42c               add esp, 0x2c
// 009994e4  c3                   ret 
// 009994e5  8bc6                 mov eax, esi
// 009994e7  5e                   pop esi
// 009994e8  83c42c               add esp, 0x2c
// 009994eb  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetExtent@CXTPImageManagerIcon@@SA?AVCSize@@PAUHICON__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
