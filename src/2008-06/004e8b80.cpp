// from server: 73% by colin
// from server: 72% by king_originala
// roc 2008-06 004e8b80  unit: RBX::Network::Players::Plugin  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8b80
//
// 004e8b80  6aff                 push -1
// 004e8b82  6893a77c00           push 0x7ca793
// 004e8b87  64a100000000         mov eax, dword ptr fs:[0]
// 004e8b8d  50                   push eax
// 004e8b8e  64892500000000       mov dword ptr fs:[0], esp
// 004e8b95  51                   push ecx
// 004e8b96  56                   push esi
// 004e8b97  8bf1                 mov esi, ecx
// 004e8b99  57                   push edi
// 004e8b9a  89742408             mov dword ptr [esp + 8], esi
// 004e8b9e  33ff                 xor edi, edi
// 004e8ba0  897e04               mov dword ptr [esi + 4], edi
// 004e8ba3  6a10                 push 0x10
// 004e8ba5  6a28                 push 0x28
// 004e8ba7  897c241c             mov dword ptr [esp + 0x1c], edi
// 004e8bab  c74608146c8200       mov dword ptr [esi + 8], 0x826c14
// 004e8bb2  c746140a000000       mov dword ptr [esi + 0x14], 0xa
// 004e8bb9  897e0c               mov dword ptr [esi + 0xc], edi
// 004e8bbc  e8bff90100           call 0x508580
// 004e8bc1  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e8bc4  03c9                 add ecx, ecx
// 004e8bc6  03c9                 add ecx, ecx
// 004e8bc8  51                   push ecx
// 004e8bc9  57                   push edi
// 004e8bca  50                   push eax
// 004e8bcb  894610               mov dword ptr [esi + 0x10], eax
// 004e8bce  e85dfe0100           call 0x508a30
// 004e8bd3  83c414               add esp, 0x14
// 004e8bd6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004e8bda  8d7e08               lea edi, [esi + 8]
// 004e8bdd  8d442420             lea eax, [esp + 0x20]
// 004e8be1  c644241401           mov byte ptr [esp + 0x14], 1
// 004e8be6  895604               mov dword ptr [esi + 4], edx
// 004e8be9  3bf8                 cmp edi, eax
// 004e8beb  7413                 je 0x4e8c00
// 004e8bed  8bcf                 mov ecx, edi
// 004e8bef  e83cf2feff           call 0x4d7e30
// 004e8bf4  8d4c2420             lea ecx, [esp + 0x20]
// 004e8bf8  51                   push ecx
// 004e8bf9  8bcf                 mov ecx, edi
// 004e8bfb  e880ecffff           call 0x4e7880
// 004e8c00  8b542430             mov edx, dword ptr [esp + 0x30]
// 004e8c04  8b442434             mov eax, dword ptr [esp + 0x34]
// 004e8c08  8d4c2420             lea ecx, [esp + 0x20]
// 004e8c0c  8916                 mov dword ptr [esi], edx
// 004e8c0e  894618               mov dword ptr [esi + 0x18], eax
// 004e8c11  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e8c19  c7442420146c8200     mov dword ptr [esp + 0x20], 0x826c14
// 004e8c21  e80af2feff           call 0x4d7e30
// 004e8c26  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e8c2a  5f                   pop edi
// 004e8c2b  8bc6                 mov eax, esi
// 004e8c2d  5e                   pop esi
// 004e8c2e  64890d00000000       mov dword ptr fs:[0], ecx
// 004e8c35  83c410               add esp, 0x10
// 004e8c38  c21c00               ret 0x1c

extern "C" void* __cdecl allocate_buffer(unsigned int, unsigned int);
extern "C" void* __cdecl fill_buffer(void*, int, unsigned int);
extern const unsigned int array_table[];

struct Array
{
    const unsigned int* table;
    unsigned int size;
    void* data;
    unsigned int capacity;

    Array(unsigned int*);
    __declspec(dllimport) ~Array() throw();
    Array& operator=(const Array&);
    void clear();
    void copy(const Array&);
};

inline Array::Array(unsigned int* base)
{
    base[2] = reinterpret_cast<unsigned int>(array_table);
    base[5] = 10;
    base[3] = 0;
    void* p = allocate_buffer(40, 16);
    base[4] = reinterpret_cast<unsigned int>(p);
    fill_buffer(p, 0, base[5] * 4);
}

inline Array& Array::operator=(const Array& other)
{
    if (this != &other)
    {
        clear();
        copy(other);
    }
    return *this;
}

struct S
{
    unsigned int first;
    void* owner;
    Array values;
    unsigned int last;

    S(void*, Array, unsigned int, unsigned int);
};

S::S(void* p, Array a, unsigned int x, unsigned int y)
    : owner(0), values(reinterpret_cast<unsigned int*>(this))
{
    owner = p;
    values = a;
    first = x;
    last = y;
}
