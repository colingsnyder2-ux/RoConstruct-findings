// from server: 100% by king_originala
// roc 2008-06 0059d390  unit: RBX::PartInstance  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d390
//
// 0059d390  6aff                 push -1
// 0059d392  68a30f7c00           push 0x7c0fa3
// 0059d397  64a100000000         mov eax, dword ptr fs:[0]
// 0059d39d  50                   push eax
// 0059d39e  64892500000000       mov dword ptr fs:[0], esp
// 0059d3a5  51                   push ecx
// 0059d3a6  56                   push esi
// 0059d3a7  57                   push edi
// 0059d3a8  8bf1                 mov esi, ecx
// 0059d3aa  6844669700           push 0x976644
// 0059d3af  68e0c75900           push 0x59c7e0
// 0059d3b4  89742410             mov dword ptr [esp + 0x10], esi
// 0059d3b8  e8739ffbff           call 0x557330
// 0059d3bd  83c408               add esp, 8
// 0059d3c0  e8bbf3ffff           call 0x59c780
// 0059d3c5  8bf8                 mov edi, eax
// 0059d3c7  e824f4ffff           call 0x59c7f0
// 0059d3cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0059d3d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059d3d4  51                   push ecx
// 0059d3d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059d3d9  52                   push edx
// 0059d3da  51                   push ecx
// 0059d3db  57                   push edi
// 0059d3dc  50                   push eax
// 0059d3dd  8bce                 mov ecx, esi
// 0059d3df  e86cf2fcff           call 0x56c650
// 0059d3e4  897e18               mov dword ptr [esi + 0x18], edi
// 0059d3e7  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059d3eb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059d3ef  83ec0c               sub esp, 0xc
// 0059d3f2  8bc4                 mov eax, esp
// 0059d3f4  8910                 mov dword ptr [eax], edx
// 0059d3f6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059d3fa  894804               mov dword ptr [eax + 4], ecx
// 0059d3fd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059d401  895008               mov dword ptr [eax + 8], edx
// 0059d404  8b542434             mov edx, dword ptr [esp + 0x34]
// 0059d408  83ec0c               sub esp, 0xc
// 0059d40b  8bc4                 mov eax, esp
// 0059d40d  8908                 mov dword ptr [eax], ecx
// 0059d40f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059d413  895004               mov dword ptr [eax + 4], edx
// 0059d416  8d542454             lea edx, [esp + 0x54]
// 0059d41a  52                   push edx
// 0059d41b  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0059d423  c706cc308300         mov dword ptr [esi], 0x8330cc
// 0059d429  894808               mov dword ptr [eax + 8], ecx
// 0059d42c  e8efd3ffff           call 0x59a820
// 0059d431  8b08                 mov ecx, dword ptr [eax]
// 0059d433  c70000000000         mov dword ptr [eax], 0
// 0059d439  83c41c               add esp, 0x1c
// 0059d43c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0059d43f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0059d443  c644241401           mov byte ptr [esp + 0x14], 1
// 0059d448  85c0                 test eax, eax
// 0059d44a  7409                 je 0x59d455
// 0059d44c  50                   push eax
// 0059d44d  e828321000           call 0x6a067a
// 0059d452  83c404               add esp, 4
// 0059d455  6844669700           push 0x976644
// 0059d45a  68e0c75900           push 0x59c7e0
// 0059d45f  e8cc9efbff           call 0x557330
// 0059d464  83c408               add esp, 8
// 0059d467  e814f3ffff           call 0x59c780
// 0059d46c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d470  894620               mov dword ptr [esi + 0x20], eax
// 0059d473  5f                   pop edi
// 0059d474  8bc6                 mov eax, esi
// 0059d476  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d47d  5e                   pop esi
// 0059d47e  83c410               add esp, 0x10
// 0059d481  c22400               ret 0x24

struct Triple {
    unsigned long x, y, z;
};

extern "C" void __cdecl register_type(void (__cdecl *)(), void *);
extern "C" void *__cdecl get_descriptor();
void *__cdecl get_base_descriptor();
void __cdecl free_object(void *);

struct Owner {
    void *p;
    explicit Owner(void *);
    Owner(Owner &);
    ~Owner();
    void *release();
};

__forceinline Owner::Owner(void *value) : p(value)
{
}

__forceinline Owner::Owner(Owner &other) : p(other.release())
{
}

__forceinline Owner::~Owner()
{
    if (p)
        free_object(p);
}

__forceinline void *Owner::release()
{
    void *value = p;
    p = 0;
    return value;
}

extern Owner __cdecl make_property(Triple, Triple);

struct Base {
    void *vtable;
    char padding[20];

    Base(void *, void *, unsigned long, unsigned long);
    void initialize(void *, void *, void *, unsigned long, unsigned long);
    ~Base();
};

__forceinline Base::Base(
    void *value, void *name, unsigned long attributes, unsigned long flags)
{
    void *baseDescriptor = get_base_descriptor();
    initialize(baseDescriptor, value, name, attributes, flags);
}

struct DescriptorBase : Base {
    void *descriptor;
    DescriptorBase(void *, void *, unsigned long, unsigned long);
};

__forceinline DescriptorBase::DescriptorBase(
    void *value, void *name, unsigned long attributes, unsigned long flags)
    : Base(value, name, attributes, flags),
      descriptor(value)
{
}

__forceinline void *registered_descriptor()
{
    register_type(
        reinterpret_cast<void (__cdecl *)()>(0x0059c7e0),
        reinterpret_cast<void *>(0x00976644));
    return get_descriptor();
}

struct S : DescriptorBase {
    Owner property;
    void *classDescriptor;

    S(void *, unsigned long, Triple, Triple, unsigned long);
    ~S();
};

S::S(void *name, unsigned long attributes, Triple first, Triple second,
     unsigned long flags)
    : DescriptorBase(registered_descriptor(), name, attributes, flags),
      property((vtable = reinterpret_cast<void *>(0x008330cc),
                make_property(first, second).release())),
      classDescriptor(registered_descriptor())
{
}
