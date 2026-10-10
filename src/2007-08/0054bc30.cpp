// from server: 51% by colin
extern "C" {
    typedef unsigned int DWORD;
    typedef void* HINTERNET;
    typedef void* LPVOID;
    typedef unsigned int DWORD_PTR;
    typedef int BOOL;
    typedef unsigned short WCHAR;
    typedef const WCHAR* LPCWSTR;
    typedef char* LPSTR;
    typedef const char* LPCSTR;
    typedef void* HANDLE;

    struct _EXCEPTION_POINTERS;

    // std::exception
    struct exception {
        exception();
        virtual ~exception();
    };

    // std::string (MSVC 8 layout)
    struct basic_string {
        union {
            char _Buf[16];
            char* _Ptr;
        } _Bx;
        unsigned int _Mysize;
        unsigned int _Myres;
        basic_string();
        basic_string(const basic_string&);
        basic_string(const char*);
        ~basic_string();
    };
}

// WinHTTP / WinINet imports used
extern "C" {
    __declspec(dllimport) HINTERNET __stdcall WinHttpOpen(LPCWSTR, DWORD, LPCWSTR, LPCWSTR, DWORD);
    __declspec(dllimport) BOOL __stdcall WinHttpCloseHandle(HINTERNET);
    __declspec(dllimport) BOOL __stdcall WinHttpSetStatusCallback(HINTERNET, void*, DWORD, DWORD_PTR);
}

// Internal helper
extern void func_0054b0f0();

struct UString_sink {
    char pad[0x54];
    unsigned char flags;
    void stream_buffer(const basic_string& a, const basic_string& b, const basic_string& c);
};

void UString_sink::stream_buffer(const basic_string& a, const basic_string& b, const basic_string& c)
{
    if (flags & 1)
    {
        basic_string tmp1;
        basic_string tmp2;
        basic_string tmp3;
        // Simulate the exception construction/destruction sequence
        exception ex;
        (void)ex;
    }
    func_0054b0f0();
}
