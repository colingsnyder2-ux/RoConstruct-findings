// from server: 100% by king_originala
// roc 2008-06 005f6f00  unit: boost::iostreams::Uinput::?$filtering_stream  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f6f00
//
// 005f6f00  f644240c02           test byte ptr [esp + 0xc], 2
// 005f6f05  8b442408             mov eax, dword ptr [esp + 8]
// 005f6f09  57                   push edi
// 005f6f0a  8b7c2408             mov edi, dword ptr [esp + 8]
// 005f6f0e  8944240c             mov dword ptr [esp + 0xc], eax
// 005f6f12  0f8499000000         je 0x5f6fb1
// 005f6f18  6a02                 push 2
// 005f6f1a  8d4c2410             lea ecx, [esp + 0x10]
// 005f6f1e  51                   push ecx
// 005f6f1f  8bcf                 mov ecx, edi
// 005f6f21  e82ae8ffff           call 0x5f5750
// 005f6f26  f6474401             test byte ptr [edi + 0x44], 1
// 005f6f2a  0f8481000000         je 0x5f6fb1
// 005f6f30  8b17                 mov edx, dword ptr [edi]
// 005f6f32  56                   push esi
// 005f6f33  8b7208               mov esi, dword ptr [edx + 8]
// 005f6f36  8d442410             lea eax, [esp + 0x10]
// 005f6f3a  56                   push esi
// 005f6f3b  50                   push eax
// 005f6f3c  e89fe3ffff           call 0x5f52e0
// 005f6f41  8bce                 mov ecx, esi
// 005f6f43  c1f908               sar ecx, 8
// 005f6f46  51                   push ecx
// 005f6f47  8d54241c             lea edx, [esp + 0x1c]
// 005f6f4b  52                   push edx
// 005f6f4c  e88fe3ffff           call 0x5f52e0
// 005f6f51  8bc6                 mov eax, esi
// 005f6f53  c1f810               sar eax, 0x10
// 005f6f56  50                   push eax
// 005f6f57  8d4c2424             lea ecx, [esp + 0x24]
// 005f6f5b  51                   push ecx
// 005f6f5c  e87fe3ffff           call 0x5f52e0
// 005f6f61  c1fe18               sar esi, 0x18
// 005f6f64  8d542428             lea edx, [esp + 0x28]
// 005f6f68  56                   push esi
// 005f6f69  52                   push edx
// 005f6f6a  e871e3ffff           call 0x5f52e0
// 005f6f6f  8b07                 mov eax, dword ptr [edi]
// 005f6f71  8b700c               mov esi, dword ptr [eax + 0xc]
// 005f6f74  8d4c2430             lea ecx, [esp + 0x30]
// 005f6f78  56                   push esi
// 005f6f79  51                   push ecx
// 005f6f7a  e861e3ffff           call 0x5f52e0
// 005f6f7f  8bd6                 mov edx, esi
// 005f6f81  c1fa08               sar edx, 8
// 005f6f84  52                   push edx
// 005f6f85  8d44243c             lea eax, [esp + 0x3c]
// 005f6f89  50                   push eax
// 005f6f8a  e851e3ffff           call 0x5f52e0
// 005f6f8f  8bce                 mov ecx, esi
// 005f6f91  c1f910               sar ecx, 0x10
// 005f6f94  51                   push ecx
// 005f6f95  8d542444             lea edx, [esp + 0x44]
// 005f6f99  52                   push edx
// 005f6f9a  e841e3ffff           call 0x5f52e0
// 005f6f9f  c1fe18               sar esi, 0x18
// 005f6fa2  8d442448             lea eax, [esp + 0x48]
// 005f6fa6  56                   push esi
// 005f6fa7  50                   push eax
// 005f6fa8  e833e3ffff           call 0x5f52e0
// 005f6fad  83c440               add esp, 0x40
// 005f6fb0  5e                   pop esi
// 005f6fb1  8d4f24               lea ecx, [edi + 0x24]
// 005f6fb4  ff15dc238000         call dword ptr [0x8023dc]
// 005f6fba  33c0                 xor eax, eax
// 005f6fbc  894740               mov dword ptr [edi + 0x40], eax
// 005f6fbf  894744               mov dword ptr [edi + 0x44], eax
// 005f6fc2  5f                   pop edi
// 005f6fc3  c3                   ret 

struct Text {
    char storage[0x1c];
};

extern void (__thiscall *clearText)(Text*);
extern "C" void __cdecl sub_005f52e0(int*, int);

struct S {
    int* data;
    char pad04[0x20];
    Text field24;
    int field40;
    int field44;

    void sub_005f5750(int*, int);
};

void __cdecl f(S* self, int a, int b)
{
    int sink = a;
    if (b & 2) {
        self->sub_005f5750(&sink, 2);
        if (self->field44 & 1) {
            int value = self->data[2];
            sub_005f52e0(&sink, value);
            sub_005f52e0(&sink, value >> 8);
            sub_005f52e0(&sink, value >> 16);
            sub_005f52e0(&sink, value >> 24);

            value = self->data[3];
            sub_005f52e0(&sink, value);
            sub_005f52e0(&sink, value >> 8);
            sub_005f52e0(&sink, value >> 16);
            sub_005f52e0(&sink, value >> 24);
        }
    }
    clearText(&self->field24);
    self->field40 = 0;
    self->field44 = 0;
}
