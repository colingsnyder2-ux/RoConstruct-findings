// from server: 100% by king_originala
// roc 2008-06 004e81d0  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e81d0
//
// 004e81d0  6aff                 push -1
// 004e81d2  68fba57c00           push 0x7ca5fb
// 004e81d7  64a100000000         mov eax, dword ptr fs:[0]
// 004e81dd  50                   push eax
// 004e81de  64892500000000       mov dword ptr fs:[0], esp
// 004e81e5  83ec08               sub esp, 8
// 004e81e8  56                   push esi
// 004e81e9  8bf1                 mov esi, ecx
// 004e81eb  57                   push edi
// 004e81ec  89742408             mov dword ptr [esp + 8], esi
// 004e81f0  b801000000           mov eax, 1
// 004e81f5  29058c289700         sub dword ptr [0x97288c], eax
// 004e81fb  89442418             mov dword ptr [esp + 0x18], eax
// 004e81ff  8b4610               mov eax, dword ptr [esi + 0x10]
// 004e8202  85c0                 test eax, eax
// 004e8204  7409                 je 0x4e820f
// 004e8206  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e8209  50                   push eax
// 004e820a  e8c1501900           call 0x67d2d0
// 004e820f  8d7e20               lea edi, [esi + 0x20]
// 004e8212  897c240c             mov dword ptr [esp + 0xc], edi
// 004e8216  c707a06e8200         mov dword ptr [edi], 0x826ea0
// 004e821c  8bcf                 mov ecx, edi
// 004e821e  c644241802           mov byte ptr [esp + 0x18], 2
// 004e8223  e818860000           call 0x4f0840
// 004e8228  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e822c  c707946e8200         mov dword ptr [edi], 0x826e94
// 004e8232  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 004e8238  5f                   pop edi
// 004e8239  5e                   pop esi
// 004e823a  64890d00000000       mov dword ptr fs:[0], ecx
// 004e8241  83c414               add esp, 0x14
// 004e8244  c3                   ret 

extern int liveCount;

struct Resource {
    void release(void*);
};

struct Base {
    virtual void function();
    ~Base();
};

struct TextureBase {
    virtual void function();
    ~TextureBase();
};

struct Texture : TextureBase {
    virtual void function();
    void cleanup();
    ~Texture();
};

struct __declspec(novtable) Holder : Base {
    unsigned char reserved0[8];
    Resource* resource;
    void* allocation;
    unsigned char reserved1[12];
    Texture texture;

    ~Holder();
};

inline Base::~Base()
{
}

inline TextureBase::~TextureBase()
{
}

inline Texture::~Texture()
{
    cleanup();
}

Holder::~Holder()
{
    --liveCount;
    if (allocation)
        resource->release(allocation);
}
