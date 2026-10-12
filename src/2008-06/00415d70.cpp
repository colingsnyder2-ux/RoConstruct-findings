// from server: 75% by king_originala
extern "C" {
extern int (__stdcall *lstrlenA)(const char*);
extern int (__stdcall *MultiByteToWideChar)(
    unsigned int, unsigned long, const char*, int, wchar_t*, int);
extern wchar_t* (__stdcall *SysAllocString)(const wchar_t*);
extern long (__stdcall *VariantClear)(void*);
extern void (__cdecl *free)(void*);
void* __cdecl _alloca(unsigned int);
}

#pragma intrinsic(_alloca)

bool __cdecl StackAvailable(unsigned int);

namespace ATL {
void __stdcall AtlThrowImpl(long);
}

struct AllocationNode {
    AllocationNode* next;
};

struct TemporaryAllocator {
    AllocationNode* head;
    TemporaryAllocator();
    ~TemporaryAllocator();
    void* Allocate(unsigned int);
};

inline TemporaryAllocator::TemporaryAllocator() : head(0) {}

inline TemporaryAllocator::~TemporaryAllocator() {
    AllocationNode* p = head;
    while (p) {
        AllocationNode* old = p;
        p = p->next;
        free(old);
    }
}

__forceinline wchar_t* ConvertString(
    const char* source, TemporaryAllocator& allocator) {
    if (!source)
        return 0;

    __int64 bytes = (__int64)(lstrlenA(source) + 1) * 2;
    if ((unsigned __int64)(bytes + 2147483648i64) > 4294967295ui64)
        return 0;

    int size = (int)bytes;
    wchar_t* buffer;
    if (size <= 1024 && StackAvailable(size))
        buffer = (wchar_t*)_alloca(size);
    else
        buffer = (wchar_t*)allocator.Allocate(size);

    if (!buffer)
        return 0;

    buffer[0] = 0;
    return MultiByteToWideChar(
        3, 0, source, -1, buffer, (unsigned int)size / 2) ? buffer : 0;
}

struct CopyVerb {
    unsigned short type;
    unsigned short reserved1;
    unsigned short reserved2;
    unsigned short reserved3;
    union {
        wchar_t* string;
        long error;
    };
    unsigned long reserved4;

    CopyVerb(const char*);
};

CopyVerb::CopyVerb(const char* source) {
    TemporaryAllocator allocator;
    VariantClear(this);
    type = 8;
    string = SysAllocString(ConvertString(source, allocator));
    if (!string && source) {
        type = 10;
        error = (long)0x8007000e;
        ATL::AtlThrowImpl((long)0x8007000e);
    }
}
