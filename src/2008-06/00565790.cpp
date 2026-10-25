// from server: 100% by king_originala
// roc 2008-06 00565790  unit: RBX::VDebugSettings::?$FactoryProduct  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565790
//
// 00565790  6aff                 push -1
// 00565792  68a30f7c00           push 0x7c0fa3
// 00565797  64a100000000         mov eax, dword ptr fs:[0]
// 0056579d  50                   push eax
// 0056579e  64892500000000       mov dword ptr fs:[0], esp
// 005657a5  51                   push ecx
// 005657a6  56                   push esi
// 005657a7  57                   push edi
// 005657a8  8bf1                 mov esi, ecx
// 005657aa  68b4449700           push 0x9744b4
// 005657af  68a0545600           push 0x5654a0
// 005657b4  89742410             mov dword ptr [esp + 0x10], esi
// 005657b8  e8731bffff           call 0x557330
// 005657bd  83c408               add esp, 8
// 005657c0  e87bfcffff           call 0x565440
// 005657c5  8bf8                 mov edi, eax
// 005657c7  e814f7ffff           call 0x564ee0
// 005657cc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005657d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 005657d4  51                   push ecx
// 005657d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005657d9  52                   push edx
// 005657da  51                   push ecx
// 005657db  57                   push edi
// 005657dc  50                   push eax
// 005657dd  8bce                 mov ecx, esi
// 005657df  e86c6e0000           call 0x56c650
// 005657e4  897e18               mov dword ptr [esi + 0x18], edi
// 005657e7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005657eb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005657ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005657f3  52                   push edx
// 005657f4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005657f8  50                   push eax
// 005657f9  51                   push ecx
// 005657fa  52                   push edx
// 005657fb  8d442444             lea eax, [esp + 0x44]
// 005657ff  50                   push eax
// 00565800  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00565808  c706cce58200         mov dword ptr [esi], 0x82e5cc
// 0056580e  e85de6ffff           call 0x563e70
// 00565813  8b08                 mov ecx, dword ptr [eax]
// 00565815  c70000000000         mov dword ptr [eax], 0
// 0056581b  83c414               add esp, 0x14
// 0056581e  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00565821  8b442434             mov eax, dword ptr [esp + 0x34]
// 00565825  c644241401           mov byte ptr [esp + 0x14], 1
// 0056582a  85c0                 test eax, eax
// 0056582c  7409                 je 0x565837
// 0056582e  50                   push eax
// 0056582f  e846ae1300           call 0x6a067a
// 00565834  83c404               add esp, 4
// 00565837  68b4449700           push 0x9744b4
// 0056583c  68a0545600           push 0x5654a0
// 00565841  e8ea1affff           call 0x557330
// 00565846  83c408               add esp, 8
// 00565849  e8f2fbffff           call 0x565440
// 0056584e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00565852  894620               mov dword ptr [esi + 0x20], eax
// 00565855  5f                   pop edi
// 00565856  8bc6                 mov eax, esi
// 00565858  5e                   pop esi
// 00565859  64890d00000000       mov dword ptr fs:[0], ecx
// 00565860  83c410               add esp, 0x10
// 00565863  c21c00               ret 0x1c

extern void __cdecl registerType(void (__cdecl *)(), unsigned int *);
extern void __cdecl typeCallback();
extern unsigned int typeState;
extern unsigned int __cdecl getDescriptor();
extern unsigned int __cdecl getOtherDescriptor();
extern void __cdecl releaseStorage(void *);

struct Temporary {
    mutable void *value;
    ~Temporary() { if (value) releaseStorage(value); }
    void *release() const {
        void *result = value;
        value = 0;
        return result;
    }
};

extern Temporary __cdecl makeValue(unsigned int, unsigned int,
                                   unsigned int, unsigned int);

struct Owner {
    void *value;
    Owner(const Temporary &source) : value(source.release()) {}
    ~Owner() { if (value) releaseStorage(value); }
};

struct Base {
    unsigned int storage[5];
    Base(unsigned int, unsigned int, unsigned int,
         unsigned int, unsigned int);
    virtual ~Base();
};

struct DescriptorBase : Base {
    unsigned int descriptor;
    DescriptorBase(unsigned int x, unsigned int y, unsigned int a,
                   unsigned int b, unsigned int g);
};

inline DescriptorBase::DescriptorBase(unsigned int x, unsigned int y,
                                      unsigned int a, unsigned int b,
                                      unsigned int g)
    : Base(x, y, a, b, g), descriptor(y)
{
}

struct S : DescriptorBase {
    Owner owned;
    unsigned int finalDescriptor;

    S(unsigned int, unsigned int, unsigned int, unsigned int,
      unsigned int, unsigned int, unsigned int);
    virtual ~S();
};

S::S(unsigned int a, unsigned int b, unsigned int c,
     unsigned int d, unsigned int e, unsigned int f,
     unsigned int g)
    : DescriptorBase(getOtherDescriptor(),
                     (registerType(typeCallback, &typeState),
                      getDescriptor()),
                     a, b, g),
      owned(makeValue(c, d, e, f)),
      finalDescriptor(
          (registerType(typeCallback, &typeState), getDescriptor()))
{
}
