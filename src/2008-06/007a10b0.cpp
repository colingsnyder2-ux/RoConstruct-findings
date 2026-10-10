// roc 2008-06 007a10b0  unit: CXTWndHook  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a10b0
//
// 007a10b0  83790c00             cmp dword ptr [ecx + 0xc], 0
// 007a10b4  740a                 je 0x7a10c0
// 007a10b6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007a10b9  8b01                 mov eax, dword ptr [ecx]
// 007a10bb  8b4020               mov eax, dword ptr [eax + 0x20]
// 007a10be  ffe0                 jmp eax
// 007a10c0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007a10c4  8b442408             mov eax, dword ptr [esp + 8]
// 007a10c8  52                   push edx
// 007a10c9  8b542408             mov edx, dword ptr [esp + 8]
// 007a10cd  50                   push eax
// 007a10ce  8b4104               mov eax, dword ptr [ecx + 4]
// 007a10d1  8b4908               mov ecx, dword ptr [ecx + 8]
// 007a10d4  52                   push edx
// 007a10d5  50                   push eax
// 007a10d6  51                   push ecx
// 007a10d7  ff15b82d8000         call dword ptr [0x802db8]
// 007a10dd  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Controls\XTWndHook.cpp (function ?WindowProc@CXTWndHook@@UAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTWndHook.cpp
