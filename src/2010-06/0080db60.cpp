// roc 2010-06 0080db60  unit: CXTPTabClientWnd  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080db60
//
// 0080db60  51                   push ecx
// 0080db61  56                   push esi
// 0080db62  57                   push edi
// 0080db63  8bf1                 mov esi, ecx
// 0080db65  33ff                 xor edi, edi
// 0080db67  39be94000000         cmp dword ptr [esi + 0x94], edi
// 0080db6d  0f84c1010000         je 0x80dd34
// 0080db73  8b06                 mov eax, dword ptr [esi]
// 0080db75  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0080db7b  ffd2                 call edx
// 0080db7d  3bc7                 cmp eax, edi
// 0080db7f  0f84af010000         je 0x80dd34
// 0080db85  53                   push ebx
// 0080db86  8bc8                 mov ecx, eax
// 0080db88  e833acfbff           call 0x7c87c0
// 0080db8d  8b10                 mov edx, dword ptr [eax]
// 0080db8f  8bc8                 mov ecx, eax
// 0080db91  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 0080db97  ffd0                 call eax
// 0080db99  8bd8                 mov ebx, eax
// 0080db9b  895c240c             mov dword ptr [esp + 0xc], ebx
// 0080db9f  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 0080dba5  0f8488010000         je 0x80dd33
// 0080dbab  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dbb1  89793c               mov dword ptr [ecx + 0x3c], edi
// 0080dbb4  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dbba  897a38               mov dword ptr [edx + 0x38], edi
// 0080dbbd  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dbc3  55                   push ebp
// 0080dbc4  8b2dc0bb9e00         mov ebp, dword ptr [0x9ebbc0]
// 0080dbca  57                   push edi
// 0080dbcb  897834               mov dword ptr [eax + 0x34], edi
// 0080dbce  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dbd4  57                   push edi
// 0080dbd5  897920               mov dword ptr [ecx + 0x20], edi
// 0080dbd8  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dbde  57                   push edi
// 0080dbdf  57                   push edi
// 0080dbe0  83c260               add edx, 0x60
// 0080dbe3  52                   push edx
// 0080dbe4  ffd5                 call ebp
// 0080dbe6  8d43ff               lea eax, [ebx - 1]
// 0080dbe9  8d5f01               lea ebx, [edi + 1]
// 0080dbec  83f805               cmp eax, 5
// 0080dbef  0f871f010000         ja 0x80dd14
// 0080dbf5  ff248538dd8000       jmp dword ptr [eax*4 + 0x80dd38]
// 0080dbfc  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc02  6a05                 push 5
// 0080dc04  e8f7980700           call 0x887500
// 0080dc09  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dc0f  89583c               mov dword ptr [eax + 0x3c], ebx
// 0080dc12  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc18  895938               mov dword ptr [ecx + 0x38], ebx
// 0080dc1b  e900010000           jmp 0x80dd20
// 0080dc20  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dc26  897a30               mov dword ptr [edx + 0x30], edi
// 0080dc29  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dc2f  895834               mov dword ptr [eax + 0x34], ebx
// 0080dc32  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc38  895920               mov dword ptr [ecx + 0x20], ebx
// 0080dc3b  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc41  6a03                 push 3
// 0080dc43  e8b8980700           call 0x887500
// 0080dc48  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc4e  6a20                 push 0x20
// 0080dc50  e8bb7c0700           call 0x885910
// 0080dc55  e9c6000000           jmp 0x80dd20
// 0080dc5a  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dc60  897a30               mov dword ptr [edx + 0x30], edi
// 0080dc63  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dc69  897834               mov dword ptr [eax + 0x34], edi
// 0080dc6c  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc72  895920               mov dword ptr [ecx + 0x20], ebx
// 0080dc75  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dc7b  6a0a                 push 0xa
// 0080dc7d  e87e980700           call 0x887500
// 0080dc82  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dc88  53                   push ebx
// 0080dc89  6a03                 push 3
// 0080dc8b  6a02                 push 2
// 0080dc8d  6a03                 push 3
// 0080dc8f  83c260               add edx, 0x60
// 0080dc92  52                   push edx
// 0080dc93  ffd5                 call ebp
// 0080dc95  e986000000           jmp 0x80dd20
// 0080dc9a  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dca0  897830               mov dword ptr [eax + 0x30], edi
// 0080dca3  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dca9  895934               mov dword ptr [ecx + 0x34], ebx
// 0080dcac  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dcb2  895a20               mov dword ptr [edx + 0x20], ebx
// 0080dcb5  6a03                 push 3
// 0080dcb7  eb5c                 jmp 0x80dd15
// 0080dcb9  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dcbf  57                   push edi
// 0080dcc0  e83b980700           call 0x887500
// 0080dcc5  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dccb  6a08                 push 8
// 0080dccd  e83e7c0700           call 0x885910
// 0080dcd2  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dcd8  895820               mov dword ptr [eax + 0x20], ebx
// 0080dcdb  eb43                 jmp 0x80dd20
// 0080dcdd  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dce3  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0080dce6  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 0080dcec  895a38               mov dword ptr [edx + 0x38], ebx
// 0080dcef  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080dcf5  895830               mov dword ptr [eax + 0x30], ebx
// 0080dcf8  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dcfe  6a03                 push 3
// 0080dd00  e8fb970700           call 0x887500
// 0080dd05  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dd0b  6a10                 push 0x10
// 0080dd0d  e8fe7b0700           call 0x885910
// 0080dd12  eb0c                 jmp 0x80dd20
// 0080dd14  57                   push edi
// 0080dd15  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0080dd1b  e8e0970700           call 0x887500
// 0080dd20  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080dd24  898e90000000         mov dword ptr [esi + 0x90], ecx
// 0080dd2a  53                   push ebx
// 0080dd2b  8bce                 mov ecx, esi
// 0080dd2d  e81ef3ffff           call 0x80d050
// 0080dd32  5d                   pop ebp
// 0080dd33  5b                   pop ebx
// 0080dd34  5f                   pop edi
// 0080dd35  5e                   pop esi
// 0080dd36  59                   pop ecx
// 0080dd37  c3                   ret 
// 0080dd38  fc                   cld 
// 0080dd39  db80009adc80         fild dword ptr [eax - 0x7f236600]
// 0080dd3f  00b9dc8000dd         add byte ptr [ecx - 0x22ff7f24], bh
// 0080dd45  dc800020dc80         fadd qword ptr [eax - 0x7f23e000]
// 0080dd4b  005adc               add byte ptr [edx - 0x24], bl
// copied from an identical function in another client (function ?CheckCommandBarsTheme@CXTPTabClientWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp