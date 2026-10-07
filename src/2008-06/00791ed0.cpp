// roc 2008-06 00791ed0  unit: CXTCaptionButtonThemeOffice2003  size: 363 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791ed0
//
// 00791ed0  83ec44               sub esp, 0x44
// 00791ed3  53                   push ebx
// 00791ed4  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00791ed8  894c2404             mov dword ptr [esp + 4], ecx
// 00791edc  85db                 test ebx, ebx
// 00791ede  7504                 jne 0x791ee4
// 00791ee0  33c0                 xor eax, eax
// 00791ee2  eb03                 jmp 0x791ee7
// 00791ee4  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00791ee7  50                   push eax
// 00791ee8  ff15502d8000         call dword ptr [0x802d50]
// 00791eee  85c0                 test eax, eax
// 00791ef0  7507                 jne 0x791ef9
// 00791ef2  5b                   pop ebx
// 00791ef3  83c444               add esp, 0x44
// 00791ef6  c20800               ret 8
// 00791ef9  55                   push ebp
// 00791efa  56                   push esi
// 00791efb  8b742454             mov esi, dword ptr [esp + 0x54]
// 00791eff  8b4618               mov eax, dword ptr [esi + 0x18]
// 00791f02  57                   push edi
// 00791f03  50                   push eax
// 00791f04  e81fa10200           call 0x7bc028
// 00791f09  8d4e1c               lea ecx, [esi + 0x1c]
// 00791f0c  51                   push ecx
// 00791f0d  8d542418             lea edx, [esp + 0x18]
// 00791f11  52                   push edx
// 00791f12  8bf8                 mov edi, eax
// 00791f14  ff15702d8000         call dword ptr [0x802d70]
// 00791f1a  8babac000000         mov ebp, dword ptr [ebx + 0xac]
// 00791f20  8b4610               mov eax, dword ptr [esi + 0x10]
// 00791f23  8944245c             mov dword ptr [esp + 0x5c], eax
// 00791f27  85ed                 test ebp, ebp
// 00791f29  7504                 jne 0x791f2f
// 00791f2b  33c0                 xor eax, eax
// 00791f2d  eb03                 jmp 0x791f32
// 00791f2f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00791f32  50                   push eax
// 00791f33  ff15502d8000         call dword ptr [0x802d50]
// 00791f39  85c0                 test eax, eax
// 00791f3b  0f84e5000000         je 0x792026
// 00791f41  83bba000000000       cmp dword ptr [ebx + 0xa0], 0
// 00791f48  750f                 jne 0x791f59
// 00791f4a  ff15ac2d8000         call dword ptr [0x802dac]
// 00791f50  3b4320               cmp eax, dword ptr [ebx + 0x20]
// 00791f53  7404                 je 0x791f59
// 00791f55  33c9                 xor ecx, ecx
// 00791f57  eb05                 jmp 0x791f5e
// 00791f59  b901000000           mov ecx, 1
// 00791f5e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00791f62  83e001               and eax, 1
// 00791f65  7557                 jne 0x791fbe
// 00791f67  85c9                 test ecx, ecx
// 00791f69  755f                 jne 0x791fca
// 00791f6b  53                   push ebx
// 00791f6c  8d4c2428             lea ecx, [esp + 0x28]
// 00791f70  e85b5bf6ff           call 0x6f7ad0
// 00791f75  8d4c2434             lea ecx, [esp + 0x34]
// 00791f79  e8d2d2f4ff           call 0x6df250
// 00791f7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00791f82  8b11                 mov edx, dword ptr [ecx]
// 00791f84  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00791f87  8d442434             lea eax, [esp + 0x34]
// 00791f8b  50                   push eax
// 00791f8c  55                   push ebp
// 00791f8d  8d44242c             lea eax, [esp + 0x2c]
// 00791f91  50                   push eax
// 00791f92  ffd2                 call edx
// 00791f94  6a00                 push 0
// 00791f96  6a00                 push 0
// 00791f98  8d44243c             lea eax, [esp + 0x3c]
// 00791f9c  50                   push eax
// 00791f9d  8d4c2420             lea ecx, [esp + 0x20]
// 00791fa1  51                   push ecx
// 00791fa2  57                   push edi
// 00791fa3  e8287cf6ff           call 0x6f9bd0
// 00791fa8  8bc8                 mov ecx, eax
// 00791faa  e8417ff6ff           call 0x6f9ef0
// 00791faf  5f                   pop edi
// 00791fb0  5e                   pop esi
// 00791fb1  5d                   pop ebp
// 00791fb2  b801000000           mov eax, 1
// 00791fb7  5b                   pop ebx
// 00791fb8  83c444               add esp, 0x44
// 00791fbb  c20800               ret 8
// 00791fbe  e87dddf4ff           call 0x6dfd40
// 00791fc3  0520010000           add eax, 0x120
// 00791fc8  eb0a                 jmp 0x791fd4
// 00791fca  e871ddf4ff           call 0x6dfd40
// 00791fcf  0540010000           add eax, 0x140
// 00791fd4  6a00                 push 0
// 00791fd6  6a00                 push 0
// 00791fd8  50                   push eax
// 00791fd9  8d542420             lea edx, [esp + 0x20]
// 00791fdd  52                   push edx
// 00791fde  57                   push edi
// 00791fdf  e8ec7bf6ff           call 0x6f9bd0
// 00791fe4  8bc8                 mov ecx, eax
// 00791fe6  e8057ff6ff           call 0x6f9ef0
// 00791feb  e850ddf4ff           call 0x6dfd40
// 00791ff0  6a20                 push 0x20
// 00791ff2  8bc8                 mov ecx, eax
// 00791ff4  e857d7f4ff           call 0x6df750
// 00791ff9  8bf0                 mov esi, eax
// 00791ffb  e840ddf4ff           call 0x6dfd40
// 00792000  56                   push esi
// 00792001  6a20                 push 0x20
// 00792003  8bc8                 mov ecx, eax
// 00792005  e846d7f4ff           call 0x6df750
// 0079200a  50                   push eax
// 0079200b  8d44241c             lea eax, [esp + 0x1c]
// 0079200f  50                   push eax
// 00792010  8bcf                 mov ecx, edi
// 00792012  e841f3f0ff           call 0x6a1358
// 00792017  5f                   pop edi
// 00792018  5e                   pop esi
// 00792019  5d                   pop ebp
// 0079201a  b801000000           mov eax, 1
// 0079201f  5b                   pop ebx
// 00792020  83c444               add esp, 0x44
// 00792023  c20800               ret 8
// 00792026  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079202a  53                   push ebx
// 0079202b  56                   push esi
// 0079202c  e84f100100           call 0x7a3080
// 00792031  5f                   pop edi
// 00792032  5e                   pop esi
// 00792033  5d                   pop ebp
// 00792034  5b                   pop ebx
// 00792035  83c444               add esp, 0x44
// 00792038  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonThemeOffice2003@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
