// from server: 100% by colin
// roc 2008-06 005f2c40  unit: UString_sink::?$stream_buffer  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2c40
//
// 005f2c40  64a100000000         mov eax, dword ptr fs:[0]
// 005f2c46  6aff                 push -1
// 005f2c48  68b9fe7c00           push 0x7cfeb9
// 005f2c4d  50                   push eax
// 005f2c4e  64892500000000       mov dword ptr fs:[0], esp
// 005f2c55  83ec4c               sub esp, 0x4c
// 005f2c58  56                   push esi
// 005f2c59  8bf1                 mov esi, ecx
// 005f2c5b  8b0e                 mov ecx, dword ptr [esi]
// 005f2c5d  8d442404             lea eax, [esp + 4]
// 005f2c61  50                   push eax
// 005f2c62  51                   push ecx
// 005f2c63  ff155c2e8000         call dword ptr [0x802e5c]
// 005f2c69  85c0                 test eax, eax
// 005f2c6b  7407                 je 0x5f2c74
// 005f2c6d  837c240400           cmp dword ptr [esp + 4], 0
// 005f2c72  7515                 jne 0x5f2c89
// 005f2c74  83c8ff               or eax, 0xffffffff
// 005f2c77  5e                   pop esi
// 005f2c78  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005f2c7c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2c83  83c458               add esp, 0x58
// 005f2c86  c20800               ret 8
// 005f2c89  8b442464             mov eax, dword ptr [esp + 0x64]
// 005f2c8d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f2c91  8d542408             lea edx, [esp + 8]
// 005f2c95  52                   push edx
// 005f2c96  8b16                 mov edx, dword ptr [esi]
// 005f2c98  50                   push eax
// 005f2c99  51                   push ecx
// 005f2c9a  52                   push edx
// 005f2c9b  ff15602e8000         call dword ptr [0x802e60]
// 005f2ca1  85c0                 test eax, eax
// 005f2ca3  7534                 jne 0x5f2cd9
// 005f2ca5  6824098400           push 0x840924
// 005f2caa  8d4c2410             lea ecx, [esp + 0x10]
// 005f2cae  ff1558248000         call dword ptr [0x802458]
// 005f2cb4  8d44240c             lea eax, [esp + 0xc]
// 005f2cb8  50                   push eax
// 005f2cb9  8d4c242c             lea ecx, [esp + 0x2c]
// 005f2cbd  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 005f2cc5  e88670e1ff           call 0x409d50
// 005f2cca  68c81b8d00           push 0x8d1bc8
// 005f2ccf  8d4c242c             lea ecx, [esp + 0x2c]
// 005f2cd3  51                   push ecx
// 005f2cd4  e8b3e80a00           call 0x6a158c
// 005f2cd9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005f2cdd  8b442408             mov eax, dword ptr [esp + 8]
// 005f2ce1  5e                   pop esi
// 005f2ce2  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2ce9  83c458               add esp, 0x58
// 005f2cec  c20800               ret 8

typedef unsigned long DWORD;

extern "C" {
    extern int (__stdcall *WinHttpQueryDataAvailable)(void *, DWORD *);
    extern int (__stdcall *WinHttpReadData)(void *, void *, DWORD, DWORD *);
}

extern void (__thiscall *string_construct)(void *, const char *);

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T *);
        basic_string(const basic_string &);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    inline basic_string<T, Traits, Alloc>::basic_string(const T *text)
    {
        string_construct(this, text);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        void *vtable;
        const char *message;
    public:
        exception(const exception &);
        virtual ~exception();
        virtual const char *what() const;
    };

    class runtime_error : public exception {
        string message;
    public:
        runtime_error(const string &);
        runtime_error(const runtime_error &);
        virtual ~runtime_error();
        virtual const char *what() const;
    };
}

struct StreamBuffer {
    void *handle;
    int read(void *buffer, DWORD length);
};

int StreamBuffer::read(void *buffer, DWORD length)
{
    DWORD available;
    DWORD received;

    if (!WinHttpQueryDataAvailable(handle, &available))
        goto fail;
    if (available == 0)
        goto fail;

    if (!WinHttpReadData(handle, buffer, length, &received)) {
        std::string message("InternetReadFile failed");
        throw std::runtime_error(message);
    }
    return received;

fail:
    return -1;
}
