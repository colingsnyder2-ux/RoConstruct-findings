// roc 2011-06 0080cfc0  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080cfc0
//
// 0080cfc0  83ec08               sub esp, 8
// 0080cfc3  56                   push esi
// 0080cfc4  8d442404             lea eax, [esp + 4]
// 0080cfc8  50                   push eax
// 0080cfc9  8bf1                 mov esi, ecx
// 0080cfcb  ff15c819a400         call dword ptr [0xa419c8]
// 0080cfd1  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0080cfd7  8b4220               mov eax, dword ptr [edx + 0x20]
// 0080cfda  8d4c2404             lea ecx, [esp + 4]
// 0080cfde  51                   push ecx
// 0080cfdf  50                   push eax
// 0080cfe0  ff15f419a400         call dword ptr [0xa419f4]
// 0080cfe6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080cfea  8b542404             mov edx, dword ptr [esp + 4]
// 0080cfee  51                   push ecx
// 0080cfef  52                   push edx
// 0080cff0  81c6c0000000         add esi, 0xc0
// 0080cff6  56                   push esi
// 0080cff7  ff15101ca400         call dword ptr [0xa41c10]
// 0080cffd  5e                   pop esi
// 0080cffe  83c408               add esp, 8
// 0080d001  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCursorOver@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
