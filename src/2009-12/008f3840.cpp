// roc 2009-12 008f3840  unit: CXTWndHook  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3840
//
// 008f3840  83790c00             cmp dword ptr [ecx + 0xc], 0
// 008f3844  740a                 je 0x8f3850
// 008f3846  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008f3849  8b01                 mov eax, dword ptr [ecx]
// 008f384b  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f384e  ffe0                 jmp eax
// 008f3850  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008f3854  8b442408             mov eax, dword ptr [esp + 8]
// 008f3858  52                   push edx
// 008f3859  8b542408             mov edx, dword ptr [esp + 8]
// 008f385d  50                   push eax
// 008f385e  8b4104               mov eax, dword ptr [ecx + 4]
// 008f3861  8b4908               mov ecx, dword ptr [ecx + 8]
// 008f3864  52                   push edx
// 008f3865  50                   push eax
// 008f3866  51                   push ecx
// 008f3867  ff1584cb9800         call dword ptr [0x98cb84]
// 008f386d  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTWndHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTWndHook.cpp