// from server: 83% by colin
// roc 2007-08 00716fc0  unit: PAVCXTPRibbonGroup::?$CArray  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716fc0
//
// 00716fc0  56                   push esi
// 00716fc1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00716fc5  57                   push edi
// 00716fc6  8bf9                 mov edi, ecx
// 00716fc8  897e30               mov dword ptr [esi + 0x30], edi
// 00716fcb  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00716fce  e81df3ffff           call 0x7162f0
// 00716fd3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00716fd7  89465c               mov dword ptr [esi + 0x5c], eax
// 00716fda  8b4734               mov eax, dword ptr [edi + 0x34]
// 00716fdd  8b888c000000         mov ecx, dword ptr [eax + 0x8c]
// 00716fe3  6a01                 push 1
// 00716fe5  56                   push esi
// 00716fe6  894e58               mov dword ptr [esi + 0x58], ecx
// 00716fe9  52                   push edx
// 00716fea  8d4f20               lea ecx, [edi + 0x20]
// 00716fed  e85e48f2ff           call 0x63b850
// 00716ff2  8bcf                 mov ecx, edi
// 00716ff4  e877fbffff           call 0x716b70
// 00716ff9  8b06                 mov eax, dword ptr [esi]
// 00716ffb  8b5068               mov edx, dword ptr [eax + 0x68]
// 00716ffe  8bce                 mov ecx, esi
// 00717000  ffd2                 call edx
// 00717002  5f                   pop edi
// 00717003  8bc6                 mov eax, esi
// 00717005  5e                   pop esi
// 00717006  c20800               ret 8

struct CXTPRibbonGroup;

struct Inner {
    char pad[0x8c];
    int field_8c;
};

struct Outer {
    char pad0[0x20];
    char field_20[0x14];
    Inner* field_34;
};

struct Arg {
    char pad0[0x30];
    Outer* field_30;
    char pad1[0x24];
    int field_58;
    int field_5c;
};

extern "C" int __stdcall sub_7162f0(Inner* p);
extern "C" void __stdcall sub_63b850(char* p, Arg* a, int b);
extern "C" void __stdcall sub_716b70(Outer* p);

struct CXTPRibbonGroup {
    Arg* sub_716fc0(Arg* arg, int unused);
};

Arg* CXTPRibbonGroup::sub_716fc0(Arg* arg, int unused) {
    Outer* o = (Outer*)this;
    arg->field_30 = o;
    Inner* in = o->field_34;
    int v = sub_7162f0(in);
    arg->field_5c = v;
    Inner* in2 = o->field_34;
    arg->field_58 = in2->field_8c;
    sub_63b850(o->field_20, arg, 1);
    sub_716b70(o);
    (*(void (__thiscall **)(Arg*))(*(int*)arg + 0x68))(arg);
    return arg;
}
