// from server: 100% by colin
// roc 2008-06 005f3e80  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3e80
//
// 005f3e80  6aff                 push -1
// 005f3e82  68a8747d00           push 0x7d74a8
// 005f3e87  64a100000000         mov eax, dword ptr fs:[0]
// 005f3e8d  50                   push eax
// 005f3e8e  64892500000000       mov dword ptr fs:[0], esp
// 005f3e95  51                   push ecx
// 005f3e96  56                   push esi
// 005f3e97  8bf1                 mov esi, ecx
// 005f3e99  89742404             mov dword ptr [esp + 4], esi
// 005f3e9d  ff1548258000         call dword ptr [0x802548]
// 005f3ea3  33c0                 xor eax, eax
// 005f3ea5  88463c               mov byte ptr [esi + 0x3c], al
// 005f3ea8  884644               mov byte ptr [esi + 0x44], al
// 005f3eab  894648               mov dword ptr [esi + 0x48], eax
// 005f3eae  89464c               mov dword ptr [esi + 0x4c], eax
// 005f3eb1  894650               mov dword ptr [esi + 0x50], eax
// 005f3eb4  894654               mov dword ptr [esi + 0x54], eax
// 005f3eb7  c7465810000000       mov dword ptr [esi + 0x58], 0x10
// 005f3ebe  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f3ec2  89442410             mov dword ptr [esp + 0x10], eax
// 005f3ec6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f3eca  c706740a8400         mov dword ptr [esi], 0x840a74
// 005f3ed0  8b08                 mov ecx, dword ptr [eax]
// 005f3ed2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f3ed6  52                   push edx
// 005f3ed7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005f3edb  50                   push eax
// 005f3edc  8d4c2420             lea ecx, [esp + 0x20]
// 005f3ee0  51                   push ecx
// 005f3ee1  8bce                 mov ecx, esi
// 005f3ee3  e8a8570000           call 0x5f9690
// 005f3ee8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f3eec  8bc6                 mov eax, esi
// 005f3eee  5e                   pop esi
// 005f3eef  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3ef6  83c410               add esp, 0x10
// 005f3ef9  c20c00               ret 0xc

typedef void (__thiscall *StreambufConstructor)(void*);
extern StreambufConstructor streambufConstructor;

namespace std {
    template<class T> struct char_traits;

    template<class T, class Traits> class basic_streambuf {
    protected:
        basic_streambuf();
    public:
        ~basic_streambuf();
    private:
        char storage[56];
    };

    template<class T, class Traits>
    inline basic_streambuf<T, Traits>::basic_streambuf()
    {
        streambufConstructor(reinterpret_cast<char*>(this) - 4);
    }
}

struct Device {
    int value;
};

struct Buffer : std::basic_streambuf<char, std::char_traits<char> > {
    unsigned char state;
    unsigned char padding[3];
    Device device;
    unsigned char engaged;
    unsigned char padding2[3];
    char* first;
    char* last;
    char* current;
    char* limit;
    int capacity;

    Buffer();
};

inline Buffer::Buffer()
    : state(0),
      engaged(0),
      first(0),
      last(0),
      current(0),
      limit(0),
      capacity(16)
{
}

struct S : Buffer {
    S(const Device& source, int mode, int size);
    virtual ~S();
    void open(const Device& source, int mode, int size);
};

S::S(const Device& source, int mode, int size)
{
    open(Device(source), mode, size);
}
