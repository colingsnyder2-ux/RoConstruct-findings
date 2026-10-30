// roc 2007-03 0068bbe0  unit: seg_00680000  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068bbe0
//
// 0068bbe0  8b442408             mov eax, dword ptr [esp + 8]
// 0068bbe4  85c0                 test eax, eax
// 0068bbe6  53                   push ebx
// 0068bbe7  55                   push ebp
// 0068bbe8  56                   push esi
// 0068bbe9  8bf1                 mov esi, ecx
// 0068bbeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068bbef  57                   push edi
// 0068bbf0  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0068bbf6  7405                 je 0x68bbfd
// 0068bbf8  8b4020               mov eax, dword ptr [eax + 0x20]
// 0068bbfb  eb02                 jmp 0x68bbff
// 0068bbfd  33c0                 xor eax, eax
// 0068bbff  8b3dc8ec7700         mov edi, dword ptr [0x77ecc8]
// 0068bc05  894638               mov dword ptr [esi + 0x38], eax
// 0068bc08  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0068bc0b  50                   push eax
// 0068bc0c  ffd7                 call edi
// 0068bc0e  50                   push eax
// 0068bc0f  e83a2af9ff           call 0x61e64e
// 0068bc14  898688000000         mov dword ptr [esi + 0x88], eax
// 0068bc1a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0068bc1d  51                   push ecx
// 0068bc1e  ffd7                 call edi
// 0068bc20  50                   push eax
// 0068bc21  e8282af9ff           call 0x61e64e
// 0068bc26  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0068bc2c  8b2d3ced7700         mov ebp, dword ptr [0x77ed3c]
// 0068bc32  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0068bc38  8b4220               mov eax, dword ptr [edx + 0x20]
// 0068bc3b  8d9e98000000         lea ebx, [esi + 0x98]
// 0068bc41  53                   push ebx
// 0068bc42  50                   push eax
// 0068bc43  ffd5                 call ebp
// 0068bc45  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0068bc4b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0068bc4e  8dbea8000000         lea edi, [esi + 0xa8]
// 0068bc54  57                   push edi
// 0068bc55  52                   push edx
// 0068bc56  ffd5                 call ebp
// 0068bc58  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0068bc5e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0068bc61  8d86b8000000         lea eax, [esi + 0xb8]
// 0068bc67  50                   push eax
// 0068bc68  52                   push edx
// 0068bc69  ffd5                 call ebp
// 0068bc6b  8b4304               mov eax, dword ptr [ebx + 4]
// 0068bc6e  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0068bc71  6a05                 push 5
// 0068bc73  2b4704               sub eax, dword ptr [edi + 4]
// 0068bc76  8d8edc000000         lea ecx, [esi + 0xdc]
// 0068bc7c  03470c               add eax, dword ptr [edi + 0xc]
// 0068bc7f  89467c               mov dword ptr [esi + 0x7c], eax
// 0068bc82  e85127f9ff           call 0x61e3d8
// 0068bc87  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0068bc8d  51                   push ecx
// 0068bc8e  ff15e0ee7700         call dword ptr [0x77eee0]
// 0068bc94  8b1dbced7700         mov ebx, dword ptr [0x77edbc]
// 0068bc9a  6a2d                 push 0x2d
// 0068bc9c  ffd3                 call ebx
// 0068bc9e  8bf0                 mov esi, eax
// 0068bca0  6a2e                 push 0x2e
// 0068bca2  03f6                 add esi, esi
// 0068bca4  ffd3                 call ebx
// 0068bca6  03c0                 add eax, eax
// 0068bca8  50                   push eax
// 0068bca9  56                   push esi
// 0068bcaa  57                   push edi
// 0068bcab  ff159ced7700         call dword ptr [0x77ed9c]
// 0068bcb1  5f                   pop edi
// 0068bcb2  5e                   pop esi
// 0068bcb3  5d                   pop ebp
// 0068bcb4  5b                   pop ebx
// 0068bcb5  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaption.cpp (function ?SetChildWindow@CXTCaption@@UAEXPAVCWnd@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaption.cpp
