// from server: 84% by colin
// from server: 82% by king_originala
// roc 2008-06 006518b0  unit: RBX::ScoreHud  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006518b0
//
// 006518b0  55                   push ebp
// 006518b1  8bec                 mov ebp, esp
// 006518b3  6aff                 push -1
// 006518b5  6899b77d00           push 0x7db799
// 006518ba  64a100000000         mov eax, dword ptr fs:[0]
// 006518c0  50                   push eax
// 006518c1  64892500000000       mov dword ptr fs:[0], esp
// 006518c8  83ec28               sub esp, 0x28
// 006518cb  53                   push ebx
// 006518cc  56                   push esi
// 006518cd  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006518d0  57                   push edi
// 006518d1  8965f0               mov dword ptr [ebp - 0x10], esp
// 006518d4  6a04                 push 4
// 006518d6  8975ec               mov dword ptr [ebp - 0x14], esi
// 006518d9  e842f00400           call 0x6a0920
// 006518de  33c9                 xor ecx, ecx
// 006518e0  83c404               add esp, 4
// 006518e3  3bc1                 cmp eax, ecx
// 006518e5  7407                 je 0x6518ee
// 006518e7  8d55cc               lea edx, [ebp - 0x34]
// 006518ea  8910                 mov dword ptr [eax], edx
// 006518ec  eb02                 jmp 0x6518f0
// 006518ee  33c0                 xor eax, eax
// 006518f0  8945cc               mov dword ptr [ebp - 0x34], eax
// 006518f3  33c0                 xor eax, eax
// 006518f5  8945d8               mov dword ptr [ebp - 0x28], eax
// 006518f8  894ddc               mov dword ptr [ebp - 0x24], ecx
// 006518fb  894de0               mov dword ptr [ebp - 0x20], ecx
// 006518fe  8b7d08               mov edi, dword ptr [ebp + 8]
// 00651901  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00651908  eb06                 jmp 0x651910
// 0065190a  8d9b00000000         lea ebx, [ebx]
// 00651910  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 00651913  0f849f000000         je 0x6519b8
// 00651919  8975e8               mov dword ptr [ebp - 0x18], esi
// 0065191c  8975e4               mov dword ptr [ebp - 0x1c], esi
// 0065191f  c645fc03             mov byte ptr [ebp - 4], 3
// 00651923  85f6                 test esi, esi
// 00651925  740b                 je 0x651932
// 00651927  8d45cc               lea eax, [ebp - 0x34]
// 0065192a  50                   push eax
// 0065192b  8bce                 mov ecx, esi
// 0065192d  e88e80ddff           call 0x4299c0
// 00651932  3bf7                 cmp esi, edi
// 00651934  744c                 je 0x651982
// 00651936  8b0f                 mov ecx, dword ptr [edi]
// 00651938  8b06                 mov eax, dword ptr [esi]
// 0065193a  890e                 mov dword ptr [esi], ecx
// 0065193c  8907                 mov dword ptr [edi], eax
// 0065193e  8b0e                 mov ecx, dword ptr [esi]
// 00651940  3bc8                 cmp ecx, eax
// 00651942  7408                 je 0x65194c
// 00651944  8b18                 mov ebx, dword ptr [eax]
// 00651946  8b11                 mov edx, dword ptr [ecx]
// 00651948  8919                 mov dword ptr [ecx], ebx
// 0065194a  8910                 mov dword ptr [eax], edx
// 0065194c  8d470c               lea eax, [edi + 0xc]
// 0065194f  8d4e0c               lea ecx, [esi + 0xc]
// 00651952  3bc8                 cmp ecx, eax
// 00651954  7408                 je 0x65195e
// 00651956  8b18                 mov ebx, dword ptr [eax]
// 00651958  8b11                 mov edx, dword ptr [ecx]
// 0065195a  8919                 mov dword ptr [ecx], ebx
// 0065195c  8910                 mov dword ptr [eax], edx
// 0065195e  8d4710               lea eax, [edi + 0x10]
// 00651961  8d4e10               lea ecx, [esi + 0x10]
// 00651964  3bc8                 cmp ecx, eax
// 00651966  7408                 je 0x651970
// 00651968  8b18                 mov ebx, dword ptr [eax]
// 0065196a  8b11                 mov edx, dword ptr [ecx]
// 0065196c  8919                 mov dword ptr [ecx], ebx
// 0065196e  8910                 mov dword ptr [eax], edx
// 00651970  8d4714               lea eax, [edi + 0x14]
// 00651973  8d4e14               lea ecx, [esi + 0x14]
// 00651976  3bc8                 cmp ecx, eax
// 00651978  7408                 je 0x651982
// 0065197a  8b18                 mov ebx, dword ptr [eax]
// 0065197c  8b11                 mov edx, dword ptr [ecx]
// 0065197e  8919                 mov dword ptr [ecx], ebx
// 00651980  8910                 mov dword ptr [eax], edx
// 00651982  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 00651985  83c618               add esi, 0x18
// 00651988  897510               mov dword ptr [ebp + 0x10], esi
// 0065198b  83c718               add edi, 0x18
// 0065198e  eb80                 jmp 0x651910

typedef unsigned int size_t;

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);
void __cdecl operator delete(void *, void *);

inline void * __cdecl operator new(size_t, void *p)
{
    return p;
}

struct Vector;

struct Proxy {
    Vector *owner;
    Proxy(Vector *);
};

__declspec(noinline) Proxy::Proxy(Vector *p) : owner(p)
{
}

struct VectorBase {
    Proxy *proxy;
    unsigned int allocator[2];

    VectorBase(Vector *);
    ~VectorBase();
};

inline VectorBase::VectorBase(Vector *owner)
{
    proxy = new Proxy(owner);
}

inline VectorBase::~VectorBase()
{
    operator delete(proxy);
}

struct VectorData {
    void *first;
    void *last;
    void *limit;

    VectorData();
    ~VectorData();
};

inline VectorData::VectorData() : first(0), last(0), limit(0)
{
}

inline VectorData::~VectorData()
{
    if (first)
        operator delete(first);
}

struct Vector : VectorBase, VectorData {
    Vector();
    Vector(const Vector &);
    ~Vector();
    void swap(Vector &);
};

inline Vector::Vector() : VectorBase(this), VectorData()
{
}

inline Vector::~Vector()
{
}

template<class T>
inline void exchange(T &left, T &right)
{
    if (&left != &right) {
        T value = left;
        left = right;
        right = value;
    }
}

inline void Vector::swap(Vector &other)
{
    if (this != &other) {
        Proxy *p = proxy;
        proxy = other.proxy;
        other.proxy = p;
        exchange(proxy->owner, p->owner);
        exchange(first, other.first);
        exchange(last, other.last);
        exchange(limit, other.limit);
    }
}

inline void construct(Vector *p, const Vector &value)
{
    void *storage = p;
    new (storage) Vector(value);
}

Vector * __cdecl move_vectors(Vector *first, Vector *last, Vector *destination)
{
    Vector *begin = destination;
    Vector empty;
    try {
        for (; first != last; ++first, ++destination) {
            construct(destination, empty);
            destination->swap(*first);
        }
    }
    catch (...) {
        for (; begin != destination; ++begin)
            begin->~Vector();
        throw;
    }
    return destination;
}
