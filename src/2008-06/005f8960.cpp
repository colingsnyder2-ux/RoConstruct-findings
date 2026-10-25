// from server: 100% by colin
// roc 2008-06 005f8960  unit: boost::iostreams::Uoutput::V?$chain::?$filtering_stream_base  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8960
//
// 005f8960  6aff                 push -1
// 005f8962  68217a7d00           push 0x7d7a21
// 005f8967  64a100000000         mov eax, dword ptr fs:[0]
// 005f896d  50                   push eax
// 005f896e  64892500000000       mov dword ptr fs:[0], esp
// 005f8975  83ec08               sub esp, 8
// 005f8978  56                   push esi
// 005f8979  8bf1                 mov esi, ecx
// 005f897b  33c9                 xor ecx, ecx
// 005f897d  57                   push edi
// 005f897e  8974240c             mov dword ptr [esp + 0xc], esi
// 005f8982  894c2408             mov dword ptr [esp + 8], ecx
// 005f8986  8d4101               lea eax, [ecx + 1]
// 005f8989  394c2420             cmp dword ptr [esp + 0x20], ecx
// 005f898d  741d                 je 0x5f89ac
// 005f898f  c74608100c8400       mov dword ptr [esi + 8], 0x840c10
// 005f8996  8b1580258000         mov edx, dword ptr [0x802580]
// 005f899c  895618               mov dword ptr [esi + 0x18], edx
// 005f899f  8b1584258000         mov edx, dword ptr [0x802584]
// 005f89a5  895618               mov dword ptr [esi + 0x18], edx
// 005f89a8  89442408             mov dword ptr [esp + 8], eax
// 005f89ac  894e04               mov dword ptr [esi + 4], ecx
// 005f89af  c706d4088400         mov dword ptr [esi], 0x8408d4
// 005f89b5  51                   push ecx
// 005f89b6  51                   push ecx
// 005f89b7  8d7e08               lea edi, [esi + 8]
// 005f89ba  51                   push ecx
// 005f89bb  8bcf                 mov ecx, edi
// 005f89bd  89442424             mov dword ptr [esp + 0x24], eax
// 005f89c1  ff1598258000         call dword ptr [0x802598]
// 005f89c7  8b07                 mov eax, dword ptr [edi]
// 005f89c9  c706080c8400         mov dword ptr [esi], 0x840c08
// 005f89cf  8b4804               mov ecx, dword ptr [eax + 4]
// 005f89d2  c7443108000c8400     mov dword ptr [ecx + esi + 8], 0x840c00
// 005f89da  8d7e10               lea edi, [esi + 0x10]
// 005f89dd  8bcf                 mov ecx, edi
// 005f89df  c644241802           mov byte ptr [esp + 0x18], 2
// 005f89e4  e8f7fcffff           call 0x5f86e0
// 005f89e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f89ed  897e04               mov dword ptr [esi + 4], edi
// 005f89f0  8b17                 mov edx, dword ptr [edi]
// 005f89f2  89721c               mov dword ptr [edx + 0x1c], esi
// 005f89f5  5f                   pop edi
// 005f89f6  8bc6                 mov eax, esi
// 005f89f8  5e                   pop esi
// 005f89f9  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8a00  83c414               add esp, 0x14
// 005f8a03  c20400               ret 4

extern void *ios_base_table;
extern void *basic_ios_table;

namespace std {
template<class C> struct char_traits;
template<class C, class T> struct basic_streambuf;

struct __declspec(novtable) ios_base {
    ios_base();
    virtual ~ios_base();
};

template<class C, class T>
struct __declspec(novtable) basic_ios : ios_base {
    basic_ios();
    virtual ~basic_ios();
};

template<class C, class T>
struct basic_istream : virtual basic_ios<C, T> {
    int count;
    __declspec(dllimport) basic_istream(basic_streambuf<C, T> *, bool);
    virtual ~basic_istream();
};

inline ios_base::ios_base()
{
    *reinterpret_cast<void *volatile *>(this) = ios_base_table;
}

template<class C, class T>
inline basic_ios<C, T>::basic_ios()
{
    *reinterpret_cast<void *volatile *>(this) = basic_ios_table;
}
}

typedef std::basic_istream<char, std::char_traits<char> > IStream;

struct State {
    char reserved[28];
    void *owner;
};

struct ChainStorage {
    State *volatile state;
    unsigned int spare;
    ChainStorage();
    ~ChainStorage();
};

struct StorageBase {
    ChainStorage *volatile storage;
    StorageBase();
};

inline StorageBase::StorageBase() : storage(0) {}

struct ChainBase : StorageBase {
    ChainBase();
    virtual ~ChainBase();
};

inline ChainBase::ChainBase() {}

struct S : ChainBase, IStream {
    ChainStorage chain;
    S();
    virtual ~S();
};

S::S() : IStream(0, false)
{
    storage = &chain;
    chain.state->owner = this;
}
