// from server: 64% by colin
// roc 2007-08 00578610  unit: RBX::VPartInstance::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578610
//
// 00578610  d9ee                 fldz 
// 00578612  56                   push esi
// 00578613  d9442408             fld dword ptr [esp + 8]
// 00578617  8bf1                 mov esi, ecx
// 00578619  d8d1                 fcom st(1)
// 0057861b  dfe0                 fnstsw ax
// 0057861d  f6c441               test ah, 0x41
// 00578620  7b15                 jnp 0x578637
// 00578622  ddd9                 fstp st(1)
// 00578624  d90588797900         fld dword ptr [0x797988]
// 0057862a  d8d1                 fcom st(1)
// 0057862c  dfe0                 fnstsw ax
// 0057862e  f6c441               test ah, 0x41
// 00578631  7a04                 jp 0x578637
// 00578633  ddd9                 fstp st(1)
// 00578635  eb02                 jmp 0x578639
// 00578637  ddd8                 fstp st(0)
// 00578639  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 0057863f  d94174               fld dword ptr [ecx + 0x74]
// 00578642  dde9                 fucomp st(1)
// 00578644  dfe0                 fnstsw ax
// 00578646  f6c444               test ah, 0x44
// 00578649  7b19                 jnp 0x578664
// 0057864b  51                   push ecx
// 0057864c  d91c24               fstp dword ptr [esp]
// 0057864f  e89cc20300           call 0x5b48f0
// 00578654  68d4298c00           push 0x8c29d4
// 00578659  8bce                 mov ecx, esi
// 0057865b  e8b0c0ecff           call 0x444710
// 00578660  5e                   pop esi
// 00578661  c20400               ret 4
// 00578664  ddd8                 fstp st(0)
// 00578666  5e                   pop esi
// 00578667  c20400               ret 4

struct S {
    char pad[0x1d8];
    void* ptr;
    void f(float);
};

extern float G1;
extern char G2;

extern "C" void __stdcall sub_5b48f0(float);

struct T {
    void sub_444710(const char*);
};

void S::f(float a)
{
    float zero = 0.0f;
    float v = a;
    if (!(v > zero)) {
        if (v < G1) {
            v = a;
        } else {
            v = zero;
        }
    }
    if (v == *(float*)((char*)ptr + 0x74)) {
        return;
    }
    sub_5b48f0(v);
    ((T*)this)->sub_444710(&G2);
}
