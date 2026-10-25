// from server: 100% by king_originala
// roc 2008-06 0059d130  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d130
//
// 0059d130  6aff                 push -1
// 0059d132  68a30f7c00           push 0x7c0fa3
// 0059d137  64a100000000         mov eax, dword ptr fs:[0]
// 0059d13d  50                   push eax
// 0059d13e  64892500000000       mov dword ptr fs:[0], esp
// 0059d145  51                   push ecx
// 0059d146  56                   push esi
// 0059d147  57                   push edi
// 0059d148  8bf1                 mov esi, ecx
// 0059d14a  688c649700           push 0x97648c
// 0059d14f  6890c45900           push 0x59c490
// 0059d154  89742410             mov dword ptr [esp + 0x10], esi
// 0059d158  e8d3a1fbff           call 0x557330
// 0059d15d  83c408               add esp, 8
// 0059d160  e8cbf2ffff           call 0x59c430
// 0059d165  8bf8                 mov edi, eax
// 0059d167  e884f6ffff           call 0x59c7f0
// 0059d16c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0059d170  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059d174  51                   push ecx
// 0059d175  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059d179  52                   push edx
// 0059d17a  51                   push ecx
// 0059d17b  57                   push edi
// 0059d17c  50                   push eax
// 0059d17d  8bce                 mov ecx, esi
// 0059d17f  e8ccf4fcff           call 0x56c650
// 0059d184  897e18               mov dword ptr [esi + 0x18], edi
// 0059d187  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059d18b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059d18f  83ec0c               sub esp, 0xc
// 0059d192  8bc4                 mov eax, esp
// 0059d194  8910                 mov dword ptr [eax], edx
// 0059d196  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059d19a  894804               mov dword ptr [eax + 4], ecx
// 0059d19d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059d1a1  895008               mov dword ptr [eax + 8], edx
// 0059d1a4  8b542434             mov edx, dword ptr [esp + 0x34]
// 0059d1a8  83ec0c               sub esp, 0xc
// 0059d1ab  8bc4                 mov eax, esp
// 0059d1ad  8908                 mov dword ptr [eax], ecx
// 0059d1af  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059d1b3  895004               mov dword ptr [eax + 4], edx
// 0059d1b6  8d542454             lea edx, [esp + 0x54]
// 0059d1ba  52                   push edx
// 0059d1bb  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0059d1c3  c706742f8300         mov dword ptr [esi], 0x832f74
// 0059d1c9  894808               mov dword ptr [eax + 8], ecx
// 0059d1cc  e80fd4ffff           call 0x59a5e0
// 0059d1d1  8b08                 mov ecx, dword ptr [eax]
// 0059d1d3  c70000000000         mov dword ptr [eax], 0
// 0059d1d9  83c41c               add esp, 0x1c
// 0059d1dc  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059d1df  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0059d1e3  c644241401           mov byte ptr [esp + 0x14], 1
// 0059d1e8  85c0                 test eax, eax
// 0059d1ea  7409                 je 0x59d1f5
// 0059d1ec  50                   push eax
// 0059d1ed  e888341000           call 0x6a067a
// 0059d1f2  83c404               add esp, 4
// 0059d1f5  688c649700           push 0x97648c
// 0059d1fa  6890c45900           push 0x59c490
// 0059d1ff  e82ca1fbff           call 0x557330
// 0059d204  83c408               add esp, 8
// 0059d207  e824f2ffff           call 0x59c430
// 0059d20c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d210  894620               mov dword ptr [esi + 0x20], eax
// 0059d213  5f                   pop edi
// 0059d214  8bc6                 mov eax, esi
// 0059d216  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d21d  5e                   pop esi
// 0059d21e  83c410               add esp, 0x10
// 0059d221  c22400               ret 0x24

typedef unsigned Word;

struct Triple
{
    Word a, b, c;
};

extern void __cdecl registerDescriptor(void*, void*);
extern Word __cdecl getClassDescriptor();
extern Word __cdecl getTypeDescriptor();
extern void __cdecl releaseObject(void*);

struct Owner
{
    void* p;

    Owner(Owner&);
    ~Owner();
};

__forceinline Owner::Owner(Owner& other)
{
    void* value = other.p;
    other.p = 0;
    p = value;
}

__forceinline Owner::~Owner()
{
    if (p)
        releaseObject(p);
}

extern Owner __cdecl createBinding(Triple, Triple);

struct Base
{
    Word table;
    Word data[5];
    Word descriptor;

    Base(Word, Word, Word);
    void initialize(Word, Word, Word, Word, Word);
    ~Base();
};

__forceinline Base::Base(Word name, Word attributes, Word flags)
{
    registerDescriptor(reinterpret_cast<void*>(0x59c490),
                       reinterpret_cast<void*>(0x97648c));
    Word classDescriptor = getClassDescriptor();
    Word typeDescriptor = getTypeDescriptor();
    initialize(typeDescriptor, classDescriptor, name, attributes, flags);
    descriptor = classDescriptor;
}

struct S : Base
{
    Owner binding;
    Word finalDescriptor;

    S(Word, Word, Triple, Triple, Word);
};

S::S(Word name, Word attributes, Triple first, Triple second, Word flags)
    : Base(name, attributes, flags),
      binding((table = 0x832f74, createBinding(first, second)))
{
    registerDescriptor(reinterpret_cast<void*>(0x59c490),
                       reinterpret_cast<void*>(0x97648c));
    finalDescriptor = getClassDescriptor();
}
