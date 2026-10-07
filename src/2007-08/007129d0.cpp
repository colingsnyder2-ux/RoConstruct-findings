// roc 2007-08 007129d0  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007129d0
//
// 007129d0  83ec30               sub esp, 0x30
// 007129d3  53                   push ebx
// 007129d4  8bd9                 mov ebx, ecx
// 007129d6  53                   push ebx
// 007129d7  8d4c2408             lea ecx, [esp + 8]
// 007129db  e8c0d5f6ff           call 0x67ffa0
// 007129e0  8d442438             lea eax, [esp + 0x38]
// 007129e4  50                   push eax
// 007129e5  8d4c2408             lea ecx, [esp + 8]
// 007129e9  51                   push ecx
// 007129ea  8d54241c             lea edx, [esp + 0x1c]
// 007129ee  52                   push edx
// 007129ef  ff155cee7700         call dword ptr [0x77ee5c]
// 007129f5  85c0                 test eax, eax
// 007129f7  7473                 je 0x712a6c
// 007129f9  56                   push esi
// 007129fa  57                   push edi
// 007129fb  53                   push ebx
// 007129fc  8d4c2430             lea ecx, [esp + 0x30]
// 00712a00  e8fbd5f6ff           call 0x680000
// 00712a05  8b3dd8d07700         mov edi, dword ptr [0x77d0d8]
// 00712a0b  8d44242c             lea eax, [esp + 0x2c]
// 00712a0f  50                   push eax
// 00712a10  ffd7                 call edi
// 00712a12  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00712a16  8bf0                 mov esi, eax
// 00712a18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00712a1c  f7d9                 neg ecx
// 00712a1e  51                   push ecx
// 00712a1f  f7d8                 neg eax
// 00712a21  50                   push eax
// 00712a22  8d4c2424             lea ecx, [esp + 0x24]
// 00712a26  51                   push ecx
// 00712a27  ff15d8ed7700         call dword ptr [0x77edd8]
// 00712a2d  8d54241c             lea edx, [esp + 0x1c]
// 00712a31  52                   push edx
// 00712a32  ffd7                 call edi
// 00712a34  6a04                 push 4
// 00712a36  8bf8                 mov edi, eax
// 00712a38  57                   push edi
// 00712a39  56                   push esi
// 00712a3a  56                   push esi
// 00712a3b  ff1590d07700         call dword ptr [0x77d090]
// 00712a41  57                   push edi
// 00712a42  8b3dc8d07700         mov edi, dword ptr [0x77d0c8]
// 00712a48  ffd7                 call edi
// 00712a4a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00712a4d  6a00                 push 0
// 00712a4f  56                   push esi
// 00712a50  50                   push eax
// 00712a51  ff1580ec7700         call dword ptr [0x77ec80]
// 00712a57  85c0                 test eax, eax
// 00712a59  7503                 jne 0x712a5e
// 00712a5b  56                   push esi
// 00712a5c  ffd7                 call edi
// 00712a5e  5f                   pop edi
// 00712a5f  5e                   pop esi
// 00712a60  b801000000           mov eax, 1
// 00712a65  5b                   pop ebx
// 00712a66  83c430               add esp, 0x30
// 00712a69  c21000               ret 0x10
// 00712a6c  b801000000           mov eax, 1
// 00712a71  5b                   pop ebx
// 00712a72  83c430               add esp, 0x30
// 00712a75  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTWndShadow.cpp
