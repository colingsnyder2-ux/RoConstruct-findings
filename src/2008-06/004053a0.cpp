// from server: 66% by king_originala
typedef unsigned long DWORD;
typedef long HRESULT;

extern "C" {
extern int (__stdcall *lstrlenW)(const wchar_t *);
extern void *(__stdcall *LoadLibraryExA)(const char *, void *, DWORD);
extern void *(__stdcall *FindResourceA)(void *, const char *, const char *);
extern void *(__stdcall *LoadResource)(void *, void *);
extern DWORD (__stdcall *SizeofResource)(void *, void *);
extern void (__cdecl *free)(void *);
void *__cdecl _alloca(unsigned);
}

extern bool __cdecl CanUseStack(unsigned);
extern char *__stdcall ConvertName(char *, const wchar_t *, int, unsigned);
extern HRESULT __cdecl LastErrorResult();

struct AllocationChain {
    struct Node {
        Node *next;
    };
    Node *head;
    ~AllocationChain() throw();
    void *Allocate(unsigned);
};

inline AllocationChain::~AllocationChain() throw()
{
    Node *p = head;
    while (p) {
        Node *next = p->next;
        free(p);
        p = next;
    }
}

struct TemporaryBuffer {
    char *data;
    char storage[1024];
    void Release() throw();
    char *Allocate(unsigned);
    ~TemporaryBuffer() throw();
};

inline TemporaryBuffer::~TemporaryBuffer() throw()
{
    if (data != storage)
        Release();
}

struct S {
    HRESULT f(const wchar_t *, const char *, const char *);
};

HRESULT S::f(const wchar_t *filename, const char *name, const char *type)
{
    AllocationChain allocations;
    allocations.head = 0;
    S *volatile object = this;
    HRESULT result = 0;
    TemporaryBuffer buffer;
    buffer.data = 0;

    char *converted = 0;
    if (filename) {
        __int64 count = (__int64)(lstrlenW(filename) + 1) * 2;
        if ((unsigned __int64)(count + 2147483648i64) <= 4294967295ui64) {
            int bytes = (int)count;
            char *destination;
            if (bytes <= 1024 && CanUseStack(bytes))
                destination = (char *)_alloca(bytes);
            else
                destination = (char *)allocations.Allocate(bytes);
            converted = ConvertName(destination, filename, bytes, 3);
        }
    }

    if (!converted)
        return (HRESULT)0x8007000e;

    void *module = LoadLibraryExA(converted, 0, 2);
    *(const wchar_t *volatile *)&filename = (const wchar_t *)module;
    if (!module) {
        result = LastErrorResult();
    } else {
        void *resource = FindResourceA(module, name, type);
        if (!resource) {
            result = LastErrorResult();
        } else {
            void *loaded = LoadResource(module, resource);
            *(const char *volatile *)&name = (const char *)loaded;
            if (!loaded) {
                result = LastErrorResult();
            } else {
                DWORD size = SizeofResource(module, resource);
                *(const char *volatile *)&type = (const char *)size;
                if (size + 1 < size)
                    return (HRESULT)0x8007000e;
                try {
                    buffer.Allocate(size + 1);
                }
                catch (...) {
                    result = (HRESULT)0x8007000e;
                }
            }
        }
    }

    (void)object;
    return result;
}
