// from server: 56% by atomic.potato
// roc 2011-06 0046cbe0  unit: VCRoblox3D::?$CComObject  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046cbe0
//
// 0046cbe0  6aff                 push -1
// 0046cbe2  68fe379d00           push 0x9d37fe
// 0046cbe7  64a100000000         mov eax, dword ptr fs:[0]
// 0046cbed  50                   push eax
// 0046cbee  64892500000000       mov dword ptr fs:[0], esp
// 0046cbf5  83ec10               sub esp, 0x10
// 0046cbf8  53                   push ebx
// 0046cbf9  56                   push esi
// 0046cbfa  8bf1                 mov esi, ecx
// 0046cbfc  33db                 xor ebx, ebx
// 0046cbfe  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0046cc04  57                   push edi
// 0046cc05  8974240c             mov dword ptr [esp + 0xc], esi
// 0046cc09  895e24               mov dword ptr [esi + 0x24], ebx
// 0046cc0c  8d4e3c               lea ecx, [esi + 0x3c]
// 0046cc0f  895c2424             mov dword ptr [esp + 0x24], ebx
// 0046cc13  c746344cf1a600       mov dword ptr [esi + 0x34], 0xa6f14c
// 0046cc1a  895e38               mov dword ptr [esi + 0x38], ebx
// 0046cc1d  e80e93ffff           call 0x465f30
// 0046cc22  889eb0000000         mov byte ptr [esi + 0xb0], bl
// 0046cc28  889eb1000000         mov byte ptr [esi + 0xb1], bl
// 0046cc2e  889eb2000000         mov byte ptr [esi + 0xb2], bl
// 0046cc34  53                   push ebx
// 0046cc35  889eb3000000         mov byte ptr [esi + 0xb3], bl
// 0046cc3b  6a01                 push 1
// 0046cc3d  8d8eb8000000         lea ecx, [esi + 0xb8]
// 0046cc43  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0046cc48  889eb4000000         mov byte ptr [esi + 0xb4], bl
// 0046cc4e  e83df7fbff           call 0x42c390
// 0046cc53  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 0046cc59  899ec0000000         mov dword ptr [esi + 0xc0], ebx
// 0046cc5f  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0046cc65  6a04                 push 4
// 0046cc67  c644242804           mov byte ptr [esp + 0x28], 4
// 0046cc6c  8dbec8000000         lea edi, [esi + 0xc8]
// 0046cc72  e8e7d33900           call 0x80a05e
// 0046cc77  83c404               add esp, 4
// 0046cc7a  3bc3                 cmp eax, ebx
// 0046cc7c  7404                 je 0x46cc82
// 0046cc7e  8938                 mov dword ptr [eax], edi
// 0046cc80  eb02                 jmp 0x46cc84
// 0046cc82  33c0                 xor eax, eax
// 0046cc84  8907                 mov dword ptr [edi], eax
// 0046cc86  895f10               mov dword ptr [edi + 0x10], ebx
// 0046cc89  895f14               mov dword ptr [edi + 0x14], ebx
// 0046cc8c  895f18               mov dword ptr [edi + 0x18], ebx
// 0046cc8f  895f1c               mov dword ptr [edi + 0x1c], ebx
// 0046cc92  899ee8000000         mov dword ptr [esi + 0xe8], ebx
// 0046cc98  899eec000000         mov dword ptr [esi + 0xec], ebx
// 0046cc9e  899ef0000000         mov dword ptr [esi + 0xf0], ebx
// 0046cca4  899ef4000000         mov dword ptr [esi + 0xf4], ebx
// 0046ccaa  899ef8000000         mov dword ptr [esi + 0xf8], ebx
// 0046ccb0  899efc000000         mov dword ptr [esi + 0xfc], ebx
// 0046ccb6  899e00010000         mov dword ptr [esi + 0x100], ebx
// 0046ccbc  899e04010000         mov dword ptr [esi + 0x104], ebx
// 0046ccc2  899e08010000         mov dword ptr [esi + 0x108], ebx
// 0046ccc8  899e0c010000         mov dword ptr [esi + 0x10c], ebx
// 0046ccce  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 0046ccd8  899e14010000         mov dword ptr [esi + 0x114], ebx
// 0046ccde  899e18010000         mov dword ptr [esi + 0x118], ebx
// 0046cce4  899e1c010000         mov dword ptr [esi + 0x11c], ebx
// 0046ccea  899e20010000         mov dword ptr [esi + 0x120], ebx
// 0046ccf0  899e24010000         mov dword ptr [esi + 0x124], ebx
// 0046ccf6  c64424240d           mov byte ptr [esp + 0x24], 0xd
// 0046ccfb  899e28010000         mov dword ptr [esi + 0x128], ebx
// 0046cd01  899e2c010000         mov dword ptr [esi + 0x12c], ebx
// 0046cd07  899e30010000         mov dword ptr [esi + 0x130], ebx
// 0046cd0d  e86e59fbff           call 0x422680
// 0046cd12  838e8000000040       or dword ptr [esi + 0x80], 0x40
// 0046cd19  56                   push esi
// 0046cd1a  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0046cd20  b8d0c44600           mov eax, 0x46c4d0
// 0046cd25  53                   push ebx
// 0046cd26  50                   push eax
// 0046cd27  8d4c241c             lea ecx, [esp + 0x1c]
// 0046cd2b  e89092ffff           call 0x465fc0
// 0046cd30  8d4c2410             lea ecx, [esp + 0x10]
// 0046cd34  ff15e81da400         call dword ptr [0xa41de8]
// 0046cd3a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046cd3e  5f                   pop edi
// 0046cd3f  8bc6                 mov eax, esi
// 0046cd41  5e                   pop esi
// 0046cd42  5b                   pop ebx
// 0046cd43  64890d00000000       mov dword ptr fs:[0], ecx
// 0046cd4a  83c41c               add esp, 0x1c
// 0046cd4d  c3                   ret 

struct Inner1 {
    char pad0[0x10];
    int f10;
    int f14;
    int f18;
    int f1c;
};

struct Inner2 {
    int f0;
    char pad4[0xc];
    int f10;
    int f14;
    int f18;
    int f1c;
};

struct S {
    char pad0[0x24];
    int f24;
    char pad28[0xc];
    int f34;
    int f38;
    char pad3c[0x44];
    int f80;
    char pad84[0x28];
    int fac;
    char fb0;
    char fb1;
    char fb2;
    char fb3;
    char fb4;
    char padb5[3];
    Inner1 inner_b8;
    int fbc;
    int fc0;
    int fc4;
    Inner2 inner_c8;
    int fe8;
    int fec;
    int ff0;
    int ff4;
    int ff8;
    int ffc;
    int f100;
    int f104;
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
    int f11c;
    int f120;
    int f124;
    int f128;
    int f12c;
    int f130;
    int f13c;
    void ctor();
};

extern "C" void __stdcall sub_00465f30();
extern "C" void __stdcall sub_0042c390(int, int);
extern "C" void* __cdecl sub_0080a05e(int);
extern "C" int __cdecl sub_00422680();
extern "C" void __stdcall sub_00465fc0(int, int, int);
extern "C" void __stdcall sub_00a41de8();

void S::ctor()
{
    this->fac = 0;
    this->f24 = 0;
    this->f34 = 0xa6f14c;
    this->f38 = 0;
    sub_00465f30();
    this->fb0 = 0;
    this->fb1 = 0;
    this->fb2 = 0;
    this->fb3 = 0;
    this->fb4 = 0;
    sub_0042c390(1, 0);
    this->fbc = 0;
    this->fc0 = 0;
    this->fc4 = 0;
    void* p = sub_0080a05e(4);
    if (p != 0) {
        *(int*)p = (int)&this->inner_c8;
    } else {
        p = 0;
    }
    this->inner_c8.f0 = (int)p;
    this->inner_c8.f10 = 0;
    this->inner_c8.f14 = 0;
    this->inner_c8.f18 = 0;
    this->inner_c8.f1c = 0;
    this->fe8 = 0;
    this->fec = 0;
    this->ff0 = 0;
    this->ff4 = 0;
    this->ff8 = 0;
    this->ffc = 0;
    this->f100 = 0;
    this->f104 = 0;
    this->f108 = 0;
    this->f10c = 0;
    this->f110 = 1;
    this->f114 = 0;
    this->f118 = 0;
    this->f11c = 0;
    this->f120 = 0;
    this->f124 = 0;
    this->f128 = 0;
    this->f12c = 0;
    this->f130 = 0;
    this->f13c = sub_00422680();
    this->f80 |= 0x40;
    sub_00465fc0((int)this, 0, 0x46c4d0);
    sub_00a41de8();
}
