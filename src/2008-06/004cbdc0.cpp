// from server: 100% by king_originala
// roc 2008-06 004cbdc0  unit: RBX::VInstance::?$NonFactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbdc0
//
// 004cbdc0  56                   push esi
// 004cbdc1  57                   push edi
// 004cbdc2  8bf1                 mov esi, ecx
// 004cbdc4  e807f0ffff           call 0x4cadd0
// 004cbdc9  8bce                 mov ecx, esi
// 004cbdcb  e8f0eeffff           call 0x4cacc0
// 004cbdd0  85f6                 test esi, esi
// 004cbdd2  7405                 je 0x4cbdd9
// 004cbdd4  8d46f4               lea eax, [esi - 0xc]
// 004cbdd7  eb02                 jmp 0x4cbddb
// 004cbdd9  33c0                 xor eax, eax
// 004cbddb  8b4004               mov eax, dword ptr [eax + 4]
// 004cbdde  85c0                 test eax, eax
// 004cbde0  7405                 je 0x4cbde7
// 004cbde2  83c070               add eax, 0x70
// 004cbde5  eb02                 jmp 0x4cbde9
// 004cbde7  33c0                 xor eax, eax
// 004cbde9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cbded  8b11                 mov edx, dword ptr [ecx]
// 004cbdef  52                   push edx
// 004cbdf0  50                   push eax
// 004cbdf1  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cbdf5  8d7e08               lea edi, [esi + 8]
// 004cbdf8  50                   push eax
// 004cbdf9  8bcf                 mov ecx, edi
// 004cbdfb  e840f7ffff           call 0x4cb540
// 004cbe00  d9e8                 fld1 
// 004cbe02  8b0f                 mov ecx, dword ptr [edi]
// 004cbe04  d95e18               fstp dword ptr [esi + 0x18]
// 004cbe07  894e20               mov dword ptr [esi + 0x20], ecx
// 004cbe0a  8bce                 mov ecx, esi
// 004cbe0c  e87fe2ffff           call 0x4ca090
// 004cbe11  5f                   pop edi
// 004cbe12  8bc6                 mov eax, esi
// 004cbe14  5e                   pop esi
// 004cbe15  c20800               ret 8

struct Owner {
    char padding[112];
};

struct Outer {
    int unused;
    Owner* owner;
};

struct Member {
    int value;
    char padding[12];

    void initialize(int, void*, int);
};

struct S {
    int padding[2];
    Member member;
    float weight;
    int unused;
    int value;

    S(const int&, int);
    void prepare();
    void reset();
    void finish();
};

S::S(const int& argument, int mode)
{
    prepare();
    reset();

    Outer* outer = this
        ? reinterpret_cast<Outer*>(reinterpret_cast<char*>(this) - 12)
        : 0;
    Owner* owner = outer->owner;
    void* context = owner
        ? reinterpret_cast<char*>(owner) + 112
        : 0;

    member.initialize(mode, context, argument);
    weight = 1.0f;
    value = member.value;
    finish();
}
