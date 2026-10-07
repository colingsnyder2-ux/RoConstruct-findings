// roc 2007-08 0069fae0  unit: CSelectionCaption  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069fae0
//
// 0069fae0  8b442408             mov eax, dword ptr [esp + 8]
// 0069fae4  85c0                 test eax, eax
// 0069fae6  53                   push ebx
// 0069fae7  55                   push ebp
// 0069fae8  56                   push esi
// 0069fae9  8bf1                 mov esi, ecx
// 0069faeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069faef  57                   push edi
// 0069faf0  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0069faf6  7405                 je 0x69fafd
// 0069faf8  8b4020               mov eax, dword ptr [eax + 0x20]
// 0069fafb  eb02                 jmp 0x69faff
// 0069fafd  33c0                 xor eax, eax
// 0069faff  8b3df8eb7700         mov edi, dword ptr [0x77ebf8]
// 0069fb05  894638               mov dword ptr [esi + 0x38], eax
// 0069fb08  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0069fb0b  50                   push eax
// 0069fb0c  ffd7                 call edi
// 0069fb0e  50                   push eax
// 0069fb0f  e8ac06f9ff           call 0x6301c0
// 0069fb14  898688000000         mov dword ptr [esi + 0x88], eax
// 0069fb1a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0069fb1d  51                   push ecx
// 0069fb1e  ffd7                 call edi
// 0069fb20  50                   push eax
// 0069fb21  e89a06f9ff           call 0x6301c0
// 0069fb26  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0069fb2c  8b2df4ed7700         mov ebp, dword ptr [0x77edf4]
// 0069fb32  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0069fb38  8b4220               mov eax, dword ptr [edx + 0x20]
// 0069fb3b  8d9e98000000         lea ebx, [esi + 0x98]
// 0069fb41  53                   push ebx
// 0069fb42  50                   push eax
// 0069fb43  ffd5                 call ebp
// 0069fb45  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0069fb4b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0069fb4e  8dbea8000000         lea edi, [esi + 0xa8]
// 0069fb54  57                   push edi
// 0069fb55  52                   push edx
// 0069fb56  ffd5                 call ebp
// 0069fb58  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0069fb5e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0069fb61  8d86b8000000         lea eax, [esi + 0xb8]
// 0069fb67  50                   push eax
// 0069fb68  52                   push edx
// 0069fb69  ffd5                 call ebp
// 0069fb6b  8b4304               mov eax, dword ptr [ebx + 4]
// 0069fb6e  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0069fb71  6a05                 push 5
// 0069fb73  2b4704               sub eax, dword ptr [edi + 4]
// 0069fb76  8d8edc000000         lea ecx, [esi + 0xdc]
// 0069fb7c  03470c               add eax, dword ptr [edi + 0xc]
// 0069fb7f  89467c               mov dword ptr [esi + 0x7c], eax
// 0069fb82  e8c303f9ff           call 0x62ff4a
// 0069fb87  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0069fb8d  51                   push ecx
// 0069fb8e  ff1518ee7700         call dword ptr [0x77ee18]
// 0069fb94  8b1db8ed7700         mov ebx, dword ptr [0x77edb8]
// 0069fb9a  6a2d                 push 0x2d
// 0069fb9c  ffd3                 call ebx
// 0069fb9e  8bf0                 mov esi, eax
// 0069fba0  6a2e                 push 0x2e
// 0069fba2  03f6                 add esi, esi
// 0069fba4  ffd3                 call ebx
// 0069fba6  03c0                 add eax, eax
// 0069fba8  50                   push eax
// 0069fba9  56                   push esi
// 0069fbaa  57                   push edi
// 0069fbab  ff1590ed7700         call dword ptr [0x77ed90]
// 0069fbb1  5f                   pop edi
// 0069fbb2  5e                   pop esi
// 0069fbb3  5d                   pop ebp
// 0069fbb4  5b                   pop ebx
// 0069fbb5  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaption.cpp (function ?SetChildWindow@CXTCaption@@UAEXPAVCWnd@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaption.cpp
