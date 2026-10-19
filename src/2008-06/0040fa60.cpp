// from server: 96% by colin
// from server: 95% by king_originala
// roc 2008-06 0040fa60  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fa60
//
// 0040fa60  6aff                 push -1
// 0040fa62  68fbd47b00           push 0x7bd4fb
// 0040fa67  64a100000000         mov eax, dword ptr fs:[0]
// 0040fa6d  50                   push eax
// 0040fa6e  64892500000000       mov dword ptr fs:[0], esp
// 0040fa75  51                   push ecx
// 0040fa76  8b542414             mov edx, dword ptr [esp + 0x14]
// 0040fa7a  33c0                 xor eax, eax
// 0040fa7c  56                   push esi
// 0040fa7d  8bf1                 mov esi, ecx
// 0040fa7f  894604               mov dword ptr [esi + 4], eax
// 0040fa82  c706dcd78000         mov dword ptr [esi], 0x80d7dc
// 0040fa88  894618               mov dword ptr [esi + 0x18], eax
// 0040fa8b  894614               mov dword ptr [esi + 0x14], eax
// 0040fa8e  c7461088d38000       mov dword ptr [esi + 0x10], 0x80d388
// 0040fa95  33c9                 xor ecx, ecx
// 0040fa97  89742404             mov dword ptr [esp + 4], esi
// 0040fa9b  66894e24             mov word ptr [esi + 0x24], cx
// 0040fa9f  c7460800d78000       mov dword ptr [esi + 8], 0x80d700
// 0040faa6  c7460ce8d68000       mov dword ptr [esi + 0xc], 0x80d6e8
// 0040faad  c74610c4d68000       mov dword ptr [esi + 0x10], 0x80d6c4
// 0040fab4  c7461c9cd68000       mov dword ptr [esi + 0x1c], 0x80d69c
// 0040fabb  895620               mov dword ptr [esi + 0x20], edx
// 0040fabe  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040fac4  89442410             mov dword ptr [esp + 0x10], eax
// 0040fac8  8b01                 mov eax, dword ptr [ecx]
// 0040faca  8b5004               mov edx, dword ptr [eax + 4]
// 0040facd  ffd2                 call edx
// 0040facf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040fad3  8bc6                 mov eax, esi
// 0040fad5  5e                   pop esi
// 0040fad6  64890d00000000       mov dword ptr fs:[0], ecx
// 0040fadd  83c410               add esp, 0x10
// 0040fae0  c20400               ret 4

struct Module {
    virtual void reserved() = 0;
    virtual void lock() = 0;
};

extern Module* module;
extern unsigned char table0[];
extern unsigned char baseTable16[];
extern unsigned char table8[];
extern unsigned char table12[];
extern unsigned char table16[];
extern unsigned char table28[];

struct Base {
    unsigned long v0;
    unsigned long references;
    unsigned long v8;
    unsigned long v12;
    volatile unsigned long v16;
    unsigned long first;
    unsigned long last;
    unsigned long v28;
    volatile unsigned long owner;
    unsigned short flags;

    Base(unsigned long value);
    ~Base();
};

struct S : Base {
    S(unsigned long value);
};

inline Base::Base(unsigned long value)
{
    references = 0;
    v0 = (unsigned long)table0;
    last = 0;
    first = 0;
    v16 = (unsigned long)baseTable16;
    unsigned short* pFlags = &flags; *pFlags = 0;
    v8 = (unsigned long)table8;
    v12 = (unsigned long)table12;
    v16 = (unsigned long)table16;
    v28 = (unsigned long)table28;
    owner = value;
}

S::S(unsigned long value) : Base(value)
{
    module->lock();
}
