// from server: 78% by colin
// from server: 76% by king_originala
// roc 2008-06 00499430  unit: RBX::Network::VPlayers::?$SignalDesc  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499430
//
// 00499430  6aff                 push -1
// 00499432  68796e7c00           push 0x7c6e79
// 00499437  64a100000000         mov eax, dword ptr fs:[0]
// 0049943d  50                   push eax
// 0049943e  64892500000000       mov dword ptr fs:[0], esp
// 00499445  83ec1c               sub esp, 0x1c
// 00499448  53                   push ebx
// 00499449  55                   push ebp
// 0049944a  56                   push esi
// 0049944b  33db                 xor ebx, ebx
// 0049944d  57                   push edi
// 0049944e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00499452  83ec10               sub esp, 0x10
// 00499455  8bf4                 mov esi, esp
// 00499457  8d442460             lea eax, [esp + 0x60]
// 0049945b  89642424             mov dword ptr [esp + 0x24], esp
// 0049945f  50                   push eax
// 00499460  8bce                 mov ecx, esi
// 00499462  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0049946a  e881daffff           call 0x496ef0
// 0049946f  8a4c246c             mov cl, byte ptr [esp + 0x6c]
// 00499473  884e0c               mov byte ptr [esi + 0xc], cl
// 00499476  8a54246d             mov dl, byte ptr [esp + 0x6d]
// 0049947a  88560d               mov byte ptr [esi + 0xd], dl
// 0049947d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00499481  50                   push eax
// 00499482  51                   push ecx
// 00499483  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00499487  8bc4                 mov eax, esp
// 00499489  8908                 mov dword ptr [eax], ecx
// 0049948b  8d4c2430             lea ecx, [esp + 0x30]
// 0049948f  8964242c             mov dword ptr [esp + 0x2c], esp
// 00499493  e8e8f9ffff           call 0x498e80
// 00499498  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0049949c  8b542440             mov edx, dword ptr [esp + 0x40]
// 004994a0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004994a4  894e04               mov dword ptr [esi + 4], ecx
// 004994a7  8916                 mov dword ptr [esi], edx
// 004994a9  8b10                 mov edx, dword ptr [eax]
// 004994ab  8d7804               lea edi, [eax + 4]
// 004994ae  8d6e0c               lea ebp, [esi + 0xc]
// 004994b1  57                   push edi
// 004994b2  8bcd                 mov ecx, ebp
// 004994b4  c644243802           mov byte ptr [esp + 0x38], 2
// 004994b9  895608               mov dword ptr [esi + 8], edx
// 004994bc  e82fdaffff           call 0x496ef0
// 004994c1  8a470c               mov al, byte ptr [edi + 0xc]
// 004994c4  88450c               mov byte ptr [ebp + 0xc], al
// 004994c7  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 004994cb  884d0d               mov byte ptr [ebp + 0xd], cl
// 004994ce  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004994d2  52                   push edx
// 004994d3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004994db  c644243801           mov byte ptr [esp + 0x38], 1
// 004994e0  e83be80600           call 0x507d20
// 004994e5  8b442454             mov eax, dword ptr [esp + 0x54]
// 004994e9  50                   push eax
// 004994ea  895c2424             mov dword ptr [esp + 0x24], ebx
// 004994ee  895c2428             mov dword ptr [esp + 0x28], ebx
// 004994f2  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004994f6  885c243c             mov byte ptr [esp + 0x3c], bl
// 004994fa  e821e80600           call 0x507d20
// 004994ff  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00499503  83c408               add esp, 8
// 00499506  5f                   pop edi
// 00499507  8bc6                 mov eax, esi
// 00499509  5e                   pop esi
// 0049950a  5d                   pop ebp
// 0049950b  64890d00000000       mov dword ptr fs:[0], ecx
// 00499512  5b                   pop ebx
// 00499513  83c428               add esp, 0x28
// 00499516  c3                   ret 

extern "C" void __cdecl alignedFree(void *);

struct Storage {
    void *data;
    int size;
    int capacity;

    Storage(const Storage &);
    ~Storage();
};

inline Storage::~Storage()
{
    alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

struct Container {
    Storage storage;
    unsigned char first;
    unsigned char second;
};

struct __declspec(dllimport) Small {
    int value;

    Small(const Small &);
    ~Small();
};

inline Small::Small(const Small &source)
    : value(source.value)
{
}

struct Temporary {
    int value;
    Container container;

    Temporary(Small, int, Container);
    ~Temporary();
};

inline Temporary::~Temporary()
{
}

struct Result {
    int first;
    int second;
    int value;
    Container container;

    Result(int, int, const Temporary &);
};

inline Result::Result(int a, int b, const Temporary &source)
    : first(a), second(b), value(source.value), container(source.container)
{
}

Result __cdecl reconstruct(int a, int b, Small c, int d, Container e)
{
    return Result(a, b, Temporary(c, d, e));
}
