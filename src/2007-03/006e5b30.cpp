// roc 2007-03 006e5b30  unit: seg_006e0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e5b30
//
// 006e5b30  83ec10               sub esp, 0x10
// 006e5b33  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e5b37  8b5144               mov edx, dword ptr [ecx + 0x44]
// 006e5b3a  89415c               mov dword ptr [ecx + 0x5c], eax
// 006e5b3d  8b4148               mov eax, dword ptr [ecx + 0x48]
// 006e5b40  891424               mov dword ptr [esp], edx
// 006e5b43  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 006e5b46  89442404             mov dword ptr [esp + 4], eax
// 006e5b4a  8b4150               mov eax, dword ptr [ecx + 0x50]
// 006e5b4d  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006e5b50  89542408             mov dword ptr [esp + 8], edx
// 006e5b54  8944240c             mov dword ptr [esp + 0xc], eax
// 006e5b58  8b11                 mov edx, dword ptr [ecx]
// 006e5b5a  8b5234               mov edx, dword ptr [edx + 0x34]
// 006e5b5d  6a00                 push 0
// 006e5b5f  8d442404             lea eax, [esp + 4]
// 006e5b63  50                   push eax
// 006e5b64  ffd2                 call edx
// 006e5b66  83c410               add esp, 0x10
// 006e5b69  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetColor@CXTPTabManagerItem@@QAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
