// roc 2009-12 007fe050  unit: CXTPPaintManager  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe050
//
// 007fe050  83ec08               sub esp, 8
// 007fe053  83b9d000000000       cmp dword ptr [ecx + 0xd0], 0
// 007fe05a  743a                 je 0x7fe096
// 007fe05c  e85ff7ffff           call 0x7fd7c0
// 007fe061  83e804               sub eax, 4
// 007fe064  837c241000           cmp dword ptr [esp + 0x10], 0
// 007fe069  7402                 je 0x7fe06d
// 007fe06b  03c0                 add eax, eax
// 007fe06d  99                   cdq 
// 007fe06e  83e207               and edx, 7
// 007fe071  03c2                 add eax, edx
// 007fe073  c1f803               sar eax, 3
// 007fe076  83f802               cmp eax, 2
// 007fe079  7d05                 jge 0x7fe080
// 007fe07b  b802000000           mov eax, 2
// 007fe080  8d0cc500000000       lea ecx, [eax*8]
// 007fe087  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fe08b  8908                 mov dword ptr [eax], ecx
// 007fe08d  894804               mov dword ptr [eax + 4], ecx
// 007fe090  83c408               add esp, 8
// 007fe093  c20800               ret 8
// 007fe096  837c241000           cmp dword ptr [esp + 0x10], 0
// 007fe09b  8d0c24               lea ecx, [esp]
// 007fe09e  b820000000           mov eax, 0x20
// 007fe0a3  7505                 jne 0x7fe0aa
// 007fe0a5  b810000000           mov eax, 0x10
// 007fe0aa  89442404             mov dword ptr [esp + 4], eax
// 007fe0ae  890424               mov dword ptr [esp], eax
// 007fe0b1  8b11                 mov edx, dword ptr [ecx]
// 007fe0b3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fe0b7  8b4904               mov ecx, dword ptr [ecx + 4]
// 007fe0ba  8910                 mov dword ptr [eax], edx
// 007fe0bc  894804               mov dword ptr [eax + 4], ecx
// 007fe0bf  83c408               add esp, 8
// 007fe0c2  c20800               ret 8
// copied from an identical function in another client (function ?GetAutoIconSize@CXTPPaintManager@@QBE?AVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp