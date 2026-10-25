// from server: 28% by colin
// roc 2008-06 00453c30  unit: CRobloxDoc  size: 1027 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00453c30
//
// 00453c30  55                   push ebp
// 00453c31  8bec                 mov ebp, esp
// 00453c33  6aff                 push -1
// 00453c35  688f1f7c00           push 0x7c1f8f
// 00453c3a  64a100000000         mov eax, dword ptr fs:[0]
// 00453c40  50                   push eax
// 00453c41  64892500000000       mov dword ptr fs:[0], esp
// 00453c48  81ece4000000         sub esp, 0xe4
// 00453c4e  8b4508               mov eax, dword ptr [ebp + 8]
// 00453c51  53                   push ebx
// 00453c52  56                   push esi
// 00453c53  8b700c               mov esi, dword ptr [eax + 0xc]
// 00453c56  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00453c5c  57                   push edi
// 00453c5d  8bd9                 mov ebx, ecx
// 00453c5f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453c62  895ddc               mov dword ptr [ebp - 0x24], ebx
// 00453c65  8975d4               mov dword ptr [ebp - 0x2c], esi
// 00453c68  83f805               cmp eax, 5
// 00453c6b  0f85af030000         jne 0x454020
// 00453c71  8d4d08               lea ecx, [ebp + 8]
// 00453c74  51                   push ecx
// 00453c75  8bce                 mov ecx, esi
// 00453c77  e8c4592500           call 0x6a9640
// 00453c7c  8bc8                 mov ecx, eax
// 00453c7e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00453c85  ff15e03e8000         call dword ptr [0x803ee0]
// 00453c8b  50                   push eax
// 00453c8c  8d4db8               lea ecx, [ebp - 0x48]
// 00453c8f  ff1558248000         call dword ptr [0x802458]
// 00453c95  8d4d08               lea ecx, [ebp + 8]
// 00453c98  c645fc02             mov byte ptr [ebp - 4], 2
// 00453c9c  ff15143f8000         call dword ptr [0x803f14]
// 00453ca2  8d4db8               lea ecx, [ebp - 0x48]
// 00453ca5  ff1564248000         call dword ptr [0x802464]
// 00453cab  8bce                 mov ecx, esi
// 00453cad  8bf8                 mov edi, eax
// 00453caf  e82c452500           call 0x6a81e0
// 00453cb4  8b10                 mov edx, dword ptr [eax]
// 00453cb6  57                   push edi
// 00453cb7  8bc8                 mov ecx, eax
// 00453cb9  8b8214020000         mov eax, dword ptr [edx + 0x214]
// 00453cbf  6aff                 push -1
// 00453cc1  ffd0                 call eax
// 00453cc3  83f8ff               cmp eax, -1
// 00453cc6  755b                 jne 0x453d23
// 00453cc8  8d4db8               lea ecx, [ebp - 0x48]
// 00453ccb  ff1564248000         call dword ptr [0x802464]
// 00453cd1  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00453cd7  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00453cda  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00453ce0  50                   push eax
// 00453ce1  6a00                 push 0
// 00453ce3  6881010000           push 0x181
// 00453ce8  51                   push ecx
// 00453ce9  ffd7                 call edi
// 00453ceb  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00453cf1  8b5020               mov edx, dword ptr [eax + 0x20]
// 00453cf4  6a00                 push 0
// 00453cf6  6a00                 push 0
// 00453cf8  688b010000           push 0x18b
// 00453cfd  52                   push edx
// 00453cfe  ffd7                 call edi
// 00453d00  83f80a               cmp eax, 0xa
// 00453d03  7e1e                 jle 0x453d23
// 00453d05  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00453d0b  8b4020               mov eax, dword ptr [eax + 0x20]
// 00453d0e  6a00                 push 0
// 00453d10  6a00                 push 0
// 00453d12  688b010000           push 0x18b
// 00453d17  50                   push eax
// 00453d18  ffd7                 call edi
// 00453d1a  48                   dec eax
// 00453d1b  50                   push eax
// 00453d1c  8bce                 mov ecx, esi
// 00453d1e  e84da7fbff           call 0x40e470
// 00453d23  8b16                 mov edx, dword ptr [esi]
// 00453d25  8b4268               mov eax, dword ptr [edx + 0x68]
// 00453d28  6a00                 push 0
// 00453d2a  8bce                 mov ecx, esi
// 00453d2c  ffd0                 call eax
// 00453d2e  8d4de8               lea ecx, [ebp - 0x18]
// 00453d31  51                   push ecx
// 00453d32  e8e9581100           call 0x569620
// 00453d37  83c404               add esp, 4
// 00453d3a  8b38                 mov edi, dword ptr [eax]
// 00453d3c  8d4db8               lea ecx, [ebp - 0x48]
// 00453d3f  c645fc03             mov byte ptr [ebp - 4], 3
// 00453d43  ff1564248000         call dword ptr [0x802464]
// 00453d49  50                   push eax
// 00453d4a  68ac7e8100           push 0x817eac
// 00453d4f  6a00                 push 0
// 00453d51  57                   push edi
// 00453d52  e849561100           call 0x5693a0
// 00453d57  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00453d5a  83c410               add esp, 0x10
// 00453d5d  c645fc02             mov byte ptr [ebp - 4], 2
// 00453d61  85c0                 test eax, eax
// 00453d63  742c                 je 0x453d91
// 00453d65  8bf8                 mov edi, eax
// 00453d67  83c004               add eax, 4
// 00453d6a  83caff               or edx, 0xffffffff
// 00453d6d  f00fc110             lock xadd dword ptr [eax], edx
// 00453d71  751e                 jne 0x453d91
// 00453d73  8b07                 mov eax, dword ptr [edi]
// 00453d75  8b5004               mov edx, dword ptr [eax + 4]
// 00453d78  8bcf                 mov ecx, edi
// 00453d7a  ffd2                 call edx
// 00453d7c  8d4708               lea eax, [edi + 8]
// 00453d7f  83c9ff               or ecx, 0xffffffff
// 00453d82  f00fc108             lock xadd dword ptr [eax], ecx
// 00453d86  7509                 jne 0x453d91
// 00453d88  8b17                 mov edx, dword ptr [edi]
// 00453d8a  8b4208               mov eax, dword ptr [edx + 8]
// 00453d8d  8bcf                 mov ecx, edi
// 00453d8f  ffd0                 call eax
// 00453d91  8d4db8               lea ecx, [ebp - 0x48]
// 00453d94  51                   push ecx
// 00453d95  c645fc04             mov byte ptr [ebp - 4], 4
// 00453d99  e8727f1000           call 0x55bd10
// 00453d9e  83c404               add esp, 4
// 00453da1  84c0                 test al, al
// 00453da3  0f8420010000         je 0x453ec9
// 00453da9  83ec20               sub esp, 0x20
// 00453dac  8d55b8               lea edx, [ebp - 0x48]
// 00453daf  8bcc                 mov ecx, esp
// 00453db1  8965ec               mov dword ptr [ebp - 0x14], esp
// 00453db4  52                   push edx
// 00453db5  e886161c00           call 0x615440
// 00453dba  8d45e0               lea eax, [ebp - 0x20]
// 00453dbd  50                   push eax
// 00453dbe  8bcb                 mov ecx, ebx
// 00453dc0  c645fc05             mov byte ptr [ebp - 4], 5
// 00453dc4  e877f2faff           call 0x403040
// 00453dc9  8b08                 mov ecx, dword ptr [eax]
// 00453dcb  c645fc06             mov byte ptr [ebp - 4], 6
// 00453dcf  85c9                 test ecx, ecx
// 00453dd1  7409                 je 0x453ddc
// 00453dd3  e8c8b0fcff           call 0x41eea0
// 00453dd8  8bc8                 mov ecx, eax
// 00453dda  eb02                 jmp 0x453dde
// 00453ddc  33c9                 xor ecx, ecx
// 00453dde  8d55d8               lea edx, [ebp - 0x28]
// 00453de1  52                   push edx
// 00453de2  c645fc07             mov byte ptr [ebp - 4], 7
// 00453de6  e835e11000           call 0x561f20
// 00453deb  8b38                 mov edi, dword ptr [eax]
// 00453ded  c70000000000         mov dword ptr [eax], 0
// 00453df3  897dec               mov dword ptr [ebp - 0x14], edi
// 00453df6  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 00453df9  c645fc08             mov byte ptr [ebp - 4], 8
// 00453dfd  85c0                 test eax, eax
// 00453dff  7411                 je 0x453e12
// 00453e01  8b08                 mov ecx, dword ptr [eax]
// 00453e03  8b5104               mov edx, dword ptr [ecx + 4]
// 00453e06  03c2                 add eax, edx
// 00453e08  8b10                 mov edx, dword ptr [eax]
// 00453e0a  8bc8                 mov ecx, eax
// 00453e0c  8b02                 mov eax, dword ptr [edx]
// 00453e0e  6a01                 push 1
// 00453e10  ffd0                 call eax
// 00453e12  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 00453e15  c645fc09             mov byte ptr [ebp - 4], 9
// 00453e19  85c0                 test eax, eax
// 00453e1b  742f                 je 0x453e4c
// 00453e1d  8bd8                 mov ebx, eax
// 00453e1f  83c004               add eax, 4
// 00453e22  83c9ff               or ecx, 0xffffffff
// 00453e25  f00fc108             lock xadd dword ptr [eax], ecx
// 00453e29  751e                 jne 0x453e49
// 00453e2b  8b13                 mov edx, dword ptr [ebx]
// 00453e2d  8b4204               mov eax, dword ptr [edx + 4]
// 00453e30  8bcb                 mov ecx, ebx
// 00453e32  ffd0                 call eax
// 00453e34  8d4b08               lea ecx, [ebx + 8]
// 00453e37  83caff               or edx, 0xffffffff
// 00453e3a  f00fc111             lock xadd dword ptr [ecx], edx
// 00453e3e  7509                 jne 0x453e49
// 00453e40  8b03                 mov eax, dword ptr [ebx]
// 00453e42  8b5008               mov edx, dword ptr [eax + 8]
// 00453e45  8bcb                 mov ecx, ebx
// 00453e47  ffd2                 call edx
// 00453e49  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 00453e4c  6a01                 push 1
// 00453e4e  6a02                 push 2
// 00453e50  8d8d10ffffff         lea ecx, [ebp - 0xf0]
// 00453e56  ff1530248000         call dword ptr [0x802430]
// 00453e5c  6800100000           push 0x1000
// 00453e61  8d8510ffffff         lea eax, [ebp - 0xf0]
// 00453e67  50                   push eax
// 00453e68  57                   push edi
// 00453e69  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 00453e6d  e88ed4ffff           call 0x451300
// 00453e72  83c40c               add esp, 0xc
// 00453e75  8d4d90               lea ecx, [ebp - 0x70]
// 00453e78  51                   push ecx
// 00453e79  8d8d10ffffff         lea ecx, [ebp - 0xf0]
// 00453e7f  ff1534248000         call dword ptr [0x802434]
// 00453e85  50                   push eax
// 00453e86  8d4db8               lea ecx, [ebp - 0x48]
// 00453e89  c645fc0b             mov byte ptr [ebp - 4], 0xb
// 00453e8d  ff150c248000         call dword ptr [0x80240c]
// 00453e93  8d4d90               lea ecx, [ebp - 0x70]
// 00453e96  c645fc0a             mov byte ptr [ebp - 4], 0xa
// 00453e9a  ff1568248000         call dword ptr [0x802468]
// 00453ea0  8d8d10ffffff         lea ecx, [ebp - 0xf0]
// 00453ea6  c645fc09             mov byte ptr [ebp - 4], 9
// 00453eaa  ff1538248000         call dword ptr [0x802438]
// 00453eb0  c645fc04             mov byte ptr [ebp - 4], 4
// 00453eb4  85ff                 test edi, edi
// 00453eb6  7411                 je 0x453ec9
// 00453eb8  8b17                 mov edx, dword ptr [edi]
// 00453eba  8b4204               mov eax, dword ptr [edx + 4]
// 00453ebd  8b1438               mov edx, dword ptr [eax + edi]
// 00453ec0  8d0c38               lea ecx, [eax + edi]
// 00453ec3  8b02                 mov eax, dword ptr [edx]
// 00453ec5  6a01                 push 1
// 00453ec7  ffd0                 call eax
// 00453ec9  8d4de0               lea ecx, [ebp - 0x20]
// 00453ecc  51                   push ecx
// 00453ecd  8bcb                 mov ecx, ebx
// 00453ecf  e86cf1faff           call 0x403040
// 00453ed4  8b10                 mov edx, dword ptr [eax]
// 00453ed6  83ec08               sub esp, 8
// 00453ed9  8bcc                 mov ecx, esp
// 00453edb  8911                 mov dword ptr [ecx], edx
// 00453edd  8b4004               mov eax, dword ptr [eax + 4]
// 00453ee0  c645fc0c             mov byte ptr [ebp - 4], 0xc
// 00453ee4  8965ec               mov dword ptr [ebp - 0x14], esp
// 00453ee7  894104               mov dword ptr [ecx + 4], eax
// 00453eea  85c0                 test eax, eax
// 00453eec  740c                 je 0x453efa
// 00453eee  83c004               add eax, 4
// 00453ef1  b901000000           mov ecx, 1
// 00453ef6  f00fc108             lock xadd dword ptr [eax], ecx
// 00453efa  8d4dac               lea ecx, [ebp - 0x54]
// 00453efd  e83edcfbff           call 0x411b40
// 00453f02  8b7de4               mov edi, dword ptr [ebp - 0x1c]
// 00453f05  c645fc0e             mov byte ptr [ebp - 4], 0xe
// 00453f09  85ff                 test edi, edi
// 00453f0b  742a                 je 0x453f37
// 00453f0d  8d5704               lea edx, [edi + 4]
// 00453f10  83c8ff               or eax, 0xffffffff
// 00453f13  f00fc102             lock xadd dword ptr [edx], eax
// 00453f17  751e                 jne 0x453f37
// 00453f19  8b17                 mov edx, dword ptr [edi]
// 00453f1b  8b4204               mov eax, dword ptr [edx + 4]
// 00453f1e  8bcf                 mov ecx, edi
// 00453f20  ffd0                 call eax
// 00453f22  8d4f08               lea ecx, [edi + 8]
// 00453f25  83caff               or edx, 0xffffffff
// 00453f28  f00fc111             lock xadd dword ptr [ecx], edx
// 00453f2c  7509                 jne 0x453f37
// 00453f2e  8b07                 mov eax, dword ptr [edi]
// 00453f30  8b5008               mov edx, dword ptr [eax + 8]
// 00453f33  8bcf                 mov ecx, edi
// 00453f35  ffd2                 call edx
// 00453f37  8b8b94000000         mov ecx, dword ptr [ebx + 0x94]
// 00453f3d  8d45e8               lea eax, [ebp - 0x18]
// 00453f40  50                   push eax
// 00453f41  e8fa690100           call 0x46a940
// 00453f46  8b38                 mov edi, dword ptr [eax]
// 00453f48  8d4db8               lea ecx, [ebp - 0x48]
// 00453f4b  c645fc0f             mov byte ptr [ebp - 4], 0xf
// 00453f4f  ff1564248000         call dword ptr [0x802464]
// 00453f55  8bcf                 mov ecx, edi
// 00453f57  8bd8                 mov ebx, eax
// 00453f59  e872a0fdff           call 0x42dfd0
// 00453f5e  68a87e8100           push 0x817ea8
// 00453f63  53                   push ebx
// 00453f64  6a03                 push 3
// 00453f66  8bc8                 mov ecx, eax
// 00453f68  e843c41500           call 0x5b03b0
// 00453f6d  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 00453f70  c645fc0e             mov byte ptr [ebp - 4], 0xe
// 00453f74  85ff                 test edi, edi
// 00453f76  742a                 je 0x453fa2
// 00453f78  8d4f04               lea ecx, [edi + 4]
// 00453f7b  83caff               or edx, 0xffffffff
// 00453f7e  f00fc111             lock xadd dword ptr [ecx], edx
// 00453f82  751e                 jne 0x453fa2
// 00453f84  8b07                 mov eax, dword ptr [edi]
// 00453f86  8b5004               mov edx, dword ptr [eax + 4]
// 00453f89  8bcf                 mov ecx, edi
// 00453f8b  ffd2                 call edx
// 00453f8d  8d4708               lea eax, [edi + 8]
// 00453f90  83c9ff               or ecx, 0xffffffff
// 00453f93  f00fc108             lock xadd dword ptr [eax], ecx
// 00453f97  7509                 jne 0x453fa2
// 00453f99  8b17                 mov edx, dword ptr [edi]
// 00453f9b  8b4208               mov eax, dword ptr [edx + 8]
// 00453f9e  8bcf                 mov ecx, edi
// 00453fa0  ffd0                 call eax
// 00453fa2  8d4dac               lea ecx, [ebp - 0x54]
// 00453fa5  c645fc04             mov byte ptr [ebp - 4], 4
// 00453fa9  e812341200           call 0x5773c0
// 00453fae  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00453fb5  eb10                 jmp 0x453fc7
// 00453fb7  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00453fbe  b8c43f4500           mov eax, 0x453fc4
// 00453fc3  c3                   ret 
// 00453fc4  8b75d4               mov esi, dword ptr [ebp - 0x2c]
// 00453fc7  8b16                 mov edx, dword ptr [esi]
// 00453fc9  8b4268               mov eax, dword ptr [edx + 0x68]
// 00453fcc  6a01                 push 1
// 00453fce  8bce                 mov ecx, esi
// 00453fd0  ffd0                 call eax
// 00453fd2  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 00453fd8  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00453fdb  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 00453fe1  6aff                 push -1
// 00453fe3  6a00                 push 0
// 00453fe5  68b1000000           push 0xb1
// 00453fea  51                   push ecx
// 00453feb  ffd3                 call ebx
// 00453fed  8b5720               mov edx, dword ptr [edi + 0x20]
// 00453ff0  6a00                 push 0
// 00453ff2  6a00                 push 0
// 00453ff4  68b7000000           push 0xb7
// 00453ff9  52                   push edx
// 00453ffa  ffd3                 call ebx
// 00453ffc  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00454002  e821ca2400           call 0x6a0a28
// 00454007  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0045400a  8d4db8               lea ecx, [ebp - 0x48]
// 0045400d  c70001000000         mov dword ptr [eax], 1
// 00454013  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0045401a  ff1568248000         call dword ptr [0x802468]
// 00454020  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00454023  5f                   pop edi
// 00454024  5e                   pop esi
// 00454025  64890d00000000       mov dword ptr fs:[0], ecx
// 0045402c  5b                   pop ebx
// 0045402d  8be5                 mov esp, ebp
// 0045402f  5d                   pop ebp
// 00454030  c20800               ret 8

// from server: 32% by colin
// roc-cl: 21022
// roc-flags: /GS- /EHsc /MD /O2 /Ob0 /Oy-
// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" unsigned long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct Result {
    unsigned int first;
    unsigned int second;
};

struct Source {
    void copy(Result* output);
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Result* f(Result* output);
};

struct Doc {
    void* field0;
    void* field4;
    unsigned char pad[0x8c];
    void* field94;
    void __cdecl method(void* arg);
};

extern "C" void* __stdcall sub_6a9640(void* self, void* arg);
extern "C" void* __stdcall sub_6a81e0(void* self);
extern "C" void __stdcall sub_40e470(void* self, int arg);
extern "C" void* __stdcall sub_569620(void* arg);
extern "C" void __stdcall sub_5693a0(void* a, void* b, int c, void* d);
extern "C" int __stdcall sub_55bd10(void* arg);
extern "C" void __stdcall sub_615440(void* dst, void* src);
extern "C" void* __stdcall sub_561f20(void* arg);
extern "C" void __stdcall sub_451300(void* a, void* b, int c);
extern "C" void* __stdcall sub_46a940(void* self, void* arg);
extern "C" void* __stdcall sub_42dfd0(void* self);
extern "C" void __stdcall sub_5b03b0(void* self, int a, void* b, void* c);
extern "C" void __stdcall sub_5773c0(void* self);
extern "C" void* __stdcall sub_41eea0(void* self);
extern "C" void __stdcall sub_411b40(void* self);

extern "C" void* __stdcall ostringstream_ctor(void* self, int mode);
extern "C" void __stdcall ostringstream_dtor(void* self);
extern "C" void __stdcall ostringstream_str(void* out, void* self);
extern "C" void __stdcall string_ctor(void* self, const char* s);
extern "C" void __stdcall string_dtor(void* self);
extern "C" void* __stdcall string_assign(void* self, void* other);
extern "C" const char* __stdcall string_c_str(void* self);

extern void* g_817eac;
extern void* g_817ea8;

void Doc::method(void* arg)
{
    void** pArg = (void**)arg;
    void* esi = pArg[3];
    int* pType = (int*)((char*)esi + 0xfc);
    if (*pType != 5)
        return;

    void* local8 = 0;
    sub_6a9640(esi, &local8);
    void* str1 = (void*)0;
    ostringstream_ctor(&str1, 0);
    string_ctor(&str1, (const char*)0);
    string_dtor(&local8);

    void* obj = sub_6a81e0(esi);
    void** vtable = *(void***)obj;
    int (__stdcall *fn)(void*, void*, int) = (int (__stdcall *)(void*, void*, int))vtable[0x214/4];
    int res = fn(obj, str1, -1);
    if (res == -1) {
        const char* cs = string_c_str(&str1);
        void* hwnd = *(void**)((char*)esi + 0x178);
        void* hwnd2 = *(void**)((char*)hwnd + 0x20);
        SendMessageA(hwnd2, 0x181, 0, (long)cs);
        void* hwnd3 = *(void**)((char*)esi + 0x178);
        void* hwnd4 = *(void**)((char*)hwnd3 + 0x20);
        int r2 = (int)SendMessageA(hwnd4, 0x18b, 0, 0);
        if (r2 > 10) {
            void* hwnd5 = *(void**)((char*)esi + 0x178);
            void* hwnd6 = *(void**)((char*)hwnd5 + 0x20);
            int r3 = (int)SendMessageA(hwnd6, 0x18b, 0, 0);
            sub_40e470(esi, r3 - 1);
        }
    }

    void** vtable2 = *(void***)esi;
    void (__stdcall *fn2)(void*, int) = (void (__stdcall *)(void*, int))vtable2[0x68/4];
    fn2(esi, 0);

    void* local18 = 0;
    sub_569620(&local18);
    void* edi = *(void**)local18;
    const char* cs2 = string_c_str(&str1);
    sub_5693a0(edi, 0, (int)&g_817eac, (void*)cs2);

    void* ref = *(void**)((char*)&local18 + 4);
    if (ref) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 4), -1) == 1) {
            void** vt = *(void***)ref;
            ((void (__stdcall*)(void*))vt[1])(ref);
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1) == 1) {
                void** vt2 = *(void***)ref;
                ((void (__stdcall*)(void*))vt2[2])(ref);
            }
        }
    }

    if (sub_55bd10(&str1)) {
        char oss[0x20];
        sub_615440(oss, &str1);

        Result res1;
        Result* pr = ((S*)this)->f(&res1);
        void* ctrl = *(void**)pr;
        if (ctrl) {
            ctrl = (void*)sub_41eea0(ctrl);
        } else {
            ctrl = 0;
        }

        void* local28 = 0;
        void* out = sub_561f20(&local28);
        void* edi2 = *(void**)out;
        *(void**)out = 0;

        if (local28) {
            void** vt = *(void***)local28;
            void* base = (char*)local28 + (int)vt[1];
            void** vt2 = *(void***)base;
            ((void (__stdcall*)(void*, int))vt2[0])(base, 1);
        }

        void* ref2 = *(void**)((char*)&res1 + 4);
        if (ref2) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref2 + 4), -1) == 1) {
                void** vt = *(void***)ref2;
                ((void (__stdcall*)(void*))vt[1])(ref2);
                if (_InterlockedExchangeAdd((volatile long*)((char*)ref2 + 8), -1) == 1) {
                    void** vt2 = *(void***)ref2;
                    ((void (__stdcall*)(void*))vt2[2])(ref2);
                }
            }
        }

        char buf[0x20];
        ostringstream_ctor(buf, 2);
        sub_451300(buf, edi2, 0x1000);
        void* str2 = 0;
        ostringstream_str(&str2, buf);
        string_assign(&str1, &str2);
        string_dtor(&str2);
        ostringstream_dtor(buf);

        if (edi2) {
            void** vt = *(void***)edi2;
            void* base = (char*)edi2 + (int)vt[1];
            void** vt2 = *(void***)base;
            ((void (__stdcall*)(void*, int))vt2[0])(base, 1);
        }
    }

    Result res2;
    Result* pr2 = ((S*)this)->f(&res2);
    void* ctrl2b = *(void**)((char*)pr2 + 4);
    if (ctrl2b) {
        _InterlockedExchangeAdd((volatile long*)((char*)ctrl2b + 4), 1);
    }

    void* local54 = 0;
    sub_411b40(&local54);

    void* ref3 = *(void**)((char*)&res2 + 4);
    if (ref3) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref3 + 4), -1) == 1) {
            void** vt = *(void***)ref3;
            ((void (__stdcall*)(void*))vt[1])(ref3);
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref3 + 8), -1) == 1) {
                void** vt2 = *(void***)ref3;
                ((void (__stdcall*)(void*))vt2[2])(ref3);
            }
        }
    }

    void* field94 = *(void**)((char*)this + 0x94);
    void* r4 = sub_46a940(field94, &local18);
    void* edi3 = *(void**)r4;
    const char* cs3 = string_c_str(&str1);
    void* r5 = sub_42dfd0(edi3);
    sub_5b03b0(r5, 3, (void*)cs3, (void*)&g_817ea8);

    void* ref4 = *(void**)((char*)&local54 + 4);
    if (ref4) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)ref4 + 4), -1) == 1) {
            void** vt = *(void***)ref4;
            ((void (__stdcall*)(void*))vt[1])(ref4);
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref4 + 8), -1) == 1) {
                void** vt2 = *(void***)ref4;
                ((void (__stdcall*)(void*))vt2[2])(ref4);
            }
        }
    }

    sub_5773c0(&local54);
    string_dtor(&str1);
}
