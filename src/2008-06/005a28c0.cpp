// from server: 73% by colin
// from server: 69% by colin
// roc 2008-06 005a28c0  unit: RBX::Workspace  size: 878 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a28c0
//
// 005a28c0  6aff                 push -1
// 005a28c2  684a2b7d00           push 0x7d2b4a
// 005a28c7  64a100000000         mov eax, dword ptr fs:[0]
// 005a28cd  50                   push eax
// 005a28ce  64892500000000       mov dword ptr fs:[0], esp
// 005a28d5  51                   push ecx
// 005a28d6  53                   push ebx
// 005a28d7  55                   push ebp
// 005a28d8  56                   push esi
// 005a28d9  8bf1                 mov esi, ecx
// 005a28db  8974240c             mov dword ptr [esp + 0xc], esi
// 005a28df  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a28e5  c706543a8300         mov dword ptr [esi], 0x833a54
// 005a28eb  c74610443a8300       mov dword ptr [esi + 0x10], 0x833a44
// 005a28f2  c746143c3a8300       mov dword ptr [esi + 0x14], 0x833a3c
// 005a28f9  c74620343a8300       mov dword ptr [esi + 0x20], 0x833a34
// 005a2900  c74624243a8300       mov dword ptr [esi + 0x24], 0x833a24
// 005a2907  c74644143a8300       mov dword ptr [esi + 0x44], 0x833a14
// 005a290e  c74664043a8300       mov dword ptr [esi + 0x64], 0x833a04
// 005a2915  c78684000000f4398300 mov dword ptr [esi + 0x84], 0x8339f4
// 005a291f  c786a4000000e4398300 mov dword ptr [esi + 0xa4], 0x8339e4
// 005a2929  c786c4000000d4398300 mov dword ptr [esi + 0xc4], 0x8339d4
// 005a2933  c78630010000c8398300 mov dword ptr [esi + 0x130], 0x8339c8
// 005a293d  c786a0010000b0398300 mov dword ptr [esi + 0x1a0], 0x8339b0
// 005a2947  c7868802000098398300 mov dword ptr [esi + 0x288], 0x833998
// 005a2951  c786e802000090398300 mov dword ptr [esi + 0x2e8], 0x833990
// 005a295b  c786ec02000088398300 mov dword ptr [esi + 0x2ec], 0x833988
// 005a2965  c7861403000080398300 mov dword ptr [esi + 0x314], 0x833980
// 005a296f  c7864003000070398300 mov dword ptr [esi + 0x340], 0x833970
// 005a2979  c7864403000060398300 mov dword ptr [esi + 0x344], 0x833960
// 005a2983  c7866403000050398300 mov dword ptr [esi + 0x364], 0x833950
// 005a298d  c7868403000044398300 mov dword ptr [esi + 0x384], 0x833944
// 005a2997  8b4804               mov ecx, dword ptr [eax + 4]
// 005a299a  c784313401000038398300 mov dword ptr [ecx + esi + 0x134], 0x833938
// 005a29a5  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a29ab  8b4208               mov eax, dword ptr [edx + 8]
// 005a29ae  c784303401000030398300 mov dword ptr [eax + esi + 0x134], 0x833930
// 005a29b9  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005a29bf  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005a29c2  8daeec020000         lea ebp, [esi + 0x2ec]
// 005a29c8  c784323401000014398300 mov dword ptr [edx + esi + 0x134], 0x833914
// 005a29d3  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a29d9  8b4004               mov eax, dword ptr [eax + 4]
// 005a29dc  8d88f0fcffff         lea ecx, [eax - 0x310]
// 005a29e2  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a29e9  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a29ef  8b4208               mov eax, dword ptr [edx + 8]
// 005a29f2  8d88e8fcffff         lea ecx, [eax - 0x318]
// 005a29f8  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a29ff  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a2a05  8b420c               mov eax, dword ptr [edx + 0xc]
// 005a2a08  8d88e0fcffff         lea ecx, [eax - 0x320]
// 005a2a0e  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a2a15  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 005a2a1b  33db                 xor ebx, ebx
// 005a2a1d  c74424180f000000     mov dword ptr [esp + 0x18], 0xf
// 005a2a25  3bcb                 cmp ecx, ebx
// 005a2a27  7408                 je 0x5a2a31
// 005a2a29  8b11                 mov edx, dword ptr [ecx]
// 005a2a2b  8b02                 mov eax, dword ptr [edx]
// 005a2a2d  6a01                 push 1
// 005a2a2f  ffd0                 call eax
// 005a2a31  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 005a2a37  c64424180e           mov byte ptr [esp + 0x18], 0xe
// 005a2a3c  3bcb                 cmp ecx, ebx
// 005a2a3e  7408                 je 0x5a2a48
// 005a2a40  8b11                 mov edx, dword ptr [ecx]
// 005a2a42  8b02                 mov eax, dword ptr [edx]
// 005a2a44  6a01                 push 1
// 005a2a46  ffd0                 call eax
// 005a2a48  8b8e30040000         mov ecx, dword ptr [esi + 0x430]
// 005a2a4e  c64424180d           mov byte ptr [esp + 0x18], 0xd
// 005a2a53  3bcb                 cmp ecx, ebx
// 005a2a55  7408                 je 0x5a2a5f
// 005a2a57  8b11                 mov edx, dword ptr [ecx]
// 005a2a59  8b02                 mov eax, dword ptr [edx]
// 005a2a5b  6a01                 push 1
// 005a2a5d  ffd0                 call eax
// 005a2a5f  8b8e2c040000         mov ecx, dword ptr [esi + 0x42c]
// 005a2a65  c64424180c           mov byte ptr [esp + 0x18], 0xc
// 005a2a6a  3bcb                 cmp ecx, ebx
// 005a2a6c  7408                 je 0x5a2a76
// 005a2a6e  8b11                 mov edx, dword ptr [ecx]
// 005a2a70  8b02                 mov eax, dword ptr [edx]
// 005a2a72  6a01                 push 1
// 005a2a74  ffd0                 call eax
// 005a2a76  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 005a2a7c  c64424180b           mov byte ptr [esp + 0x18], 0xb
// 005a2a81  3bcb                 cmp ecx, ebx
// 005a2a83  7408                 je 0x5a2a8d
// 005a2a85  8b11                 mov edx, dword ptr [ecx]
// 005a2a87  8b02                 mov eax, dword ptr [edx]
// 005a2a89  6a01                 push 1
// 005a2a8b  ffd0                 call eax
// 005a2a8d  57                   push edi
// 005a2a8e  8bbe08040000         mov edi, dword ptr [esi + 0x408]
// 005a2a94  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 005a2a99  3bfb                 cmp edi, ebx
// 005a2a9b  742a                 je 0x5a2ac7
// 005a2a9d  8d4f04               lea ecx, [edi + 4]
// 005a2aa0  83caff               or edx, 0xffffffff
// 005a2aa3  f00fc111             lock xadd dword ptr [ecx], edx
// 005a2aa7  751e                 jne 0x5a2ac7
// 005a2aa9  8b07                 mov eax, dword ptr [edi]
// 005a2aab  8b5004               mov edx, dword ptr [eax + 4]
// 005a2aae  8bcf                 mov ecx, edi
// 005a2ab0  ffd2                 call edx
// 005a2ab2  8d4708               lea eax, [edi + 8]
// 005a2ab5  83c9ff               or ecx, 0xffffffff
// 005a2ab8  f00fc108             lock xadd dword ptr [eax], ecx
// 005a2abc  7509                 jne 0x5a2ac7
// 005a2abe  8b17                 mov edx, dword ptr [edi]
// 005a2ac0  8b4208               mov eax, dword ptr [edx + 8]
// 005a2ac3  8bcf                 mov ecx, edi
// 005a2ac5  ffd0                 call eax
// 005a2ac7  8bbe00040000         mov edi, dword ptr [esi + 0x400]
// 005a2acd  c644241c09           mov byte ptr [esp + 0x1c], 9
// 005a2ad2  3bfb                 cmp edi, ebx
// 005a2ad4  742a                 je 0x5a2b00
// 005a2ad6  8d4f04               lea ecx, [edi + 4]
// 005a2ad9  83caff               or edx, 0xffffffff
// 005a2adc  f00fc111             lock xadd dword ptr [ecx], edx
// 005a2ae0  751e                 jne 0x5a2b00
// 005a2ae2  8b07                 mov eax, dword ptr [edi]
// 005a2ae4  8b5004               mov edx, dword ptr [eax + 4]
// 005a2ae7  8bcf                 mov ecx, edi
// 005a2ae9  ffd2                 call edx
// 005a2aeb  8d4708               lea eax, [edi + 8]
// 005a2aee  83c9ff               or ecx, 0xffffffff
// 005a2af1  f00fc108             lock xadd dword ptr [eax], ecx
// 005a2af5  7509                 jne 0x5a2b00
// 005a2af7  8b17                 mov edx, dword ptr [edi]
// 005a2af9  8b4208               mov eax, dword ptr [edx + 8]
// 005a2afc  8bcf                 mov ecx, edi
// 005a2afe  ffd0                 call eax
// 005a2b00  8d8ed4030000         lea ecx, [esi + 0x3d4]
// 005a2b06  c644241c08           mov byte ptr [esp + 0x1c], 8
// 005a2b0b  e820870a00           call 0x64b230
// 005a2b10  8b8eb4030000         mov ecx, dword ptr [esi + 0x3b4]
// 005a2b16  c644241c07           mov byte ptr [esp + 0x1c], 7
// 005a2b1b  3bcb                 cmp ecx, ebx
// 005a2b1d  7409                 je 0x5a2b28
// 005a2b1f  8b11                 mov edx, dword ptr [ecx]
// 005a2b21  8b4230               mov eax, dword ptr [edx + 0x30]
// 005a2b24  6a01                 push 1
// 005a2b26  ffd0                 call eax
// 005a2b28  8b8eb0030000         mov ecx, dword ptr [esi + 0x3b0]
// 005a2b2e  c644241c06           mov byte ptr [esp + 0x1c], 6
// 005a2b33  3bcb                 cmp ecx, ebx
// 005a2b35  7409                 je 0x5a2b40
// 005a2b37  8b11                 mov edx, dword ptr [ecx]
// 005a2b39  8b4230               mov eax, dword ptr [edx + 0x30]
// 005a2b3c  6a01                 push 1
// 005a2b3e  ffd0                 call eax
// 005a2b40  8bbea4030000         mov edi, dword ptr [esi + 0x3a4]
// 005a2b46  c644241c05           mov byte ptr [esp + 0x1c], 5
// 005a2b4b  3bfb                 cmp edi, ebx
// 005a2b4d  742a                 je 0x5a2b79
// 005a2b4f  8d4f04               lea ecx, [edi + 4]
// 005a2b52  83caff               or edx, 0xffffffff
// 005a2b55  f00fc111             lock xadd dword ptr [ecx], edx
// 005a2b59  751e                 jne 0x5a2b79
// 005a2b5b  8b07                 mov eax, dword ptr [edi]
// 005a2b5d  8b5004               mov edx, dword ptr [eax + 4]
// 005a2b60  8bcf                 mov ecx, edi
// 005a2b62  ffd2                 call edx
// 005a2b64  8d4708               lea eax, [edi + 8]
// 005a2b67  83c9ff               or ecx, 0xffffffff
// 005a2b6a  f00fc108             lock xadd dword ptr [eax], ecx
// 005a2b6e  7509                 jne 0x5a2b79
// 005a2b70  8b17                 mov edx, dword ptr [edi]
// 005a2b72  8b4208               mov eax, dword ptr [edx + 8]
// 005a2b75  8bcf                 mov ecx, edi
// 005a2b77  ffd0                 call eax
// 005a2b79  8b8674030000         mov eax, dword ptr [esi + 0x374]
// 005a2b7f  5f                   pop edi
// 005a2b80  3bc3                 cmp eax, ebx
// 005a2b82  7409                 je 0x5a2b8d
// 005a2b84  50                   push eax
// 005a2b85  e8f0da0f00           call 0x6a067a
// 005a2b8a  83c404               add esp, 4
// 005a2b8d  8b8668030000         mov eax, dword ptr [esi + 0x368]
// 005a2b93  50                   push eax
// 005a2b94  899e74030000         mov dword ptr [esi + 0x374], ebx
// 005a2b9a  899e78030000         mov dword ptr [esi + 0x378], ebx
// 005a2ba0  899e7c030000         mov dword ptr [esi + 0x37c], ebx
// 005a2ba6  e8cfda0f00           call 0x6a067a
// 005a2bab  8b8654030000         mov eax, dword ptr [esi + 0x354]
// 005a2bb1  83c404               add esp, 4
// 005a2bb4  3bc3                 cmp eax, ebx
// 005a2bb6  7409                 je 0x5a2bc1
// 005a2bb8  50                   push eax
// 005a2bb9  e8bcda0f00           call 0x6a067a
// 005a2bbe  83c404               add esp, 4
// 005a2bc1  8b8648030000         mov eax, dword ptr [esi + 0x348]
// 005a2bc7  50                   push eax
// 005a2bc8  899e54030000         mov dword ptr [esi + 0x354], ebx
// 005a2bce  899e58030000         mov dword ptr [esi + 0x358], ebx
// 005a2bd4  899e5c030000         mov dword ptr [esi + 0x35c], ebx
// 005a2bda  e89bda0f00           call 0x6a067a
// 005a2bdf  83c404               add esp, 4
// 005a2be2  8d8e14030000         lea ecx, [esi + 0x314]
// 005a2be8  c644241802           mov byte ptr [esp + 0x18], 2
// 005a2bed  e8be210700           call 0x614db0
// 005a2bf2  8d8e88030000         lea ecx, [esi + 0x388]
// 005a2bf8  c644241801           mov byte ptr [esp + 0x18], 1
// 005a2bfd  e8bea60300           call 0x5dd2c0
// 005a2c02  8bcd                 mov ecx, ebp
// 005a2c04  885c2418             mov byte ptr [esp + 0x18], bl
// 005a2c08  e8d306feff           call 0x5832e0
// 005a2c0d  8bce                 mov ecx, esi
// 005a2c0f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005a2c17  e814dafeff           call 0x590630
// 005a2c1c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a2c20  5e                   pop esi
// 005a2c21  5d                   pop ebp
// 005a2c22  5b                   pop ebx
// 005a2c23  64890d00000000       mov dword ptr fs:[0], ecx
// 005a2c2a  83c410               add esp, 0x10
// 005a2c2d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCounted {
    virtual void unknown0();
    virtual void destroy();
    virtual void unknown2();
    volatile long ref1;
    volatile long ref2;
};

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
};

extern "C" void __cdecl freeMem(void*);
extern "C" void __cdecl sub_64b230(void*);
extern "C" void __cdecl sub_614db0(void*);
extern "C" void __cdecl sub_5dd2c0(void*);
extern "C" void __cdecl sub_5832e0(void*);
extern "C" void __cdecl sub_590630(void*);

struct Workspace {
    void destroy();
};

void Workspace::destroy()
{
    char* base = (char*)this;
    *(void**)(base + 0x00) = (void*)0x833a54;
    *(void**)(base + 0x10) = (void*)0x833a44;
    *(void**)(base + 0x14) = (void*)0x833a3c;
    *(void**)(base + 0x20) = (void*)0x833a34;
    *(void**)(base + 0x24) = (void*)0x833a24;
    *(void**)(base + 0x44) = (void*)0x833a14;
    *(void**)(base + 0x64) = (void*)0x833a04;
    *(void**)(base + 0x84) = (void*)0x8339f4;
    *(void**)(base + 0xa4) = (void*)0x8339e4;
    *(void**)(base + 0xc4) = (void*)0x8339d4;
    *(void**)(base + 0x130) = (void*)0x8339c8;
    *(void**)(base + 0x1a0) = (void*)0x8339b0;
    *(void**)(base + 0x288) = (void*)0x833998;
    *(void**)(base + 0x2e8) = (void*)0x833990;
    *(void**)(base + 0x2ec) = (void*)0x833988;
    *(void**)(base + 0x314) = (void*)0x833980;
    *(void**)(base + 0x340) = (void*)0x833970;
    *(void**)(base + 0x344) = (void*)0x833960;
    *(void**)(base + 0x364) = (void*)0x833950;
    *(void**)(base + 0x384) = (void*)0x833944;

    void* p134 = *(void**)(base + 0x134);
    void* p4 = *(void**)((char*)p134 + 4);
    *(void**)((char*)p4 + (int)base + 0x134) = (void*)0x833938;
    void* p134b = *(void**)(base + 0x134);
    void* p8 = *(void**)((char*)p134b + 8);
    *(void**)((char*)p8 + (int)base + 0x134) = (void*)0x833930;
    void* p134c = *(void**)(base + 0x134);
    void* pc = *(void**)((char*)p134c + 0xc);
    *(void**)((char*)pc + (int)base + 0x134) = (void*)0x833914;

    void* q134 = *(void**)(base + 0x134);
    void* q4 = *(void**)((char*)q134 + 4);
    *(void**)((char*)q4 + (int)base + 0x130) = (char*)q4 - 0x310;
    void* q134b = *(void**)(base + 0x134);
    void* q8 = *(void**)((char*)q134b + 8);
    *(void**)((char*)q8 + (int)base + 0x130) = (char*)q8 - 0x318;
    void* q134c = *(void**)(base + 0x134);
    void* qc = *(void**)((char*)q134c + 0xc);
    *(void**)((char*)qc + (int)base + 0x130) = (char*)qc - 0x320;

    Obj* o438 = *(Obj**)(base + 0x438);
    if (o438) {
        void** vt = *(void***)o438;
        ((void(__thiscall*)(Obj*, int))vt[0])(o438, 1);
    }
    Obj* o434 = *(Obj**)(base + 0x434);
    if (o434) {
        void** vt = *(void***)o434;
        ((void(__thiscall*)(Obj*, int))vt[0])(o434, 1);
    }
    Obj* o430 = *(Obj**)(base + 0x430);
    if (o430) {
        void** vt = *(void***)o430;
        ((void(__thiscall*)(Obj*, int))vt[0])(o430, 1);
    }
    Obj* o42c = *(Obj**)(base + 0x42c);
    if (o42c) {
        void** vt = *(void***)o42c;
        ((void(__thiscall*)(Obj*, int))vt[0])(o42c, 1);
    }
    Obj* o428 = *(Obj**)(base + 0x428);
    if (o428) {
        void** vt = *(void***)o428;
        ((void(__thiscall*)(Obj*, int))vt[0])(o428, 1);
    }

    RefCounted* r408 = *(RefCounted**)(base + 0x408);
    if (r408) {
        if (_InterlockedDecrement(&r408->ref1) == 0) {
            void** vt = *(void***)r408;
            ((void(__thiscall*)(RefCounted*))vt[1])(r408);
            if (_InterlockedDecrement(&r408->ref2) == 0) {
                void** vt2 = *(void***)r408;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r408);
            }
        }
    }
    RefCounted* r400 = *(RefCounted**)(base + 0x400);
    if (r400) {
        if (_InterlockedDecrement(&r400->ref1) == 0) {
            void** vt = *(void***)r400;
            ((void(__thiscall*)(RefCounted*))vt[1])(r400);
            if (_InterlockedDecrement(&r400->ref2) == 0) {
                void** vt2 = *(void***)r400;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r400);
            }
        }
    }

    sub_64b230((char*)base + 0x3d4);

    Obj* o3b4 = *(Obj**)(base + 0x3b4);
    if (o3b4) {
        void** vt = *(void***)o3b4;
        ((void(__thiscall*)(Obj*, int))vt[12])(o3b4, 1);
    }
    Obj* o3b0 = *(Obj**)(base + 0x3b0);
    if (o3b0) {
        void** vt = *(void***)o3b0;
        ((void(__thiscall*)(Obj*, int))vt[12])(o3b0, 1);
    }

    RefCounted* r3a4 = *(RefCounted**)(base + 0x3a4);
    if (r3a4) {
        if (_InterlockedDecrement(&r3a4->ref1) == 0) {
            void** vt = *(void***)r3a4;
            ((void(__thiscall*)(RefCounted*))vt[1])(r3a4);
            if (_InterlockedDecrement(&r3a4->ref2) == 0) {
                void** vt2 = *(void***)r3a4;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r3a4);
            }
        }
    }

    void* p374 = *(void**)(base + 0x374);
    if (p374) {
        freeMem(p374);
    }
    void* p368 = *(void**)(base + 0x368);
    *(void**)(base + 0x374) = 0;
    *(void**)(base + 0x378) = 0;
    *(void**)(base + 0x37c) = 0;
    freeMem(p368);

    void* p354 = *(void**)(base + 0x354);
    if (p354) {
        freeMem(p354);
    }
    void* p348 = *(void**)(base + 0x348);
    *(void**)(base + 0x354) = 0;
    *(void**)(base + 0x358) = 0;
    *(void**)(base + 0x35c) = 0;
    freeMem(p348);

    sub_614db0((char*)base + 0x314);
    sub_5dd2c0((char*)base + 0x388);
    sub_5832e0((char*)base + 0x2ec);
    sub_590630(base);
}
