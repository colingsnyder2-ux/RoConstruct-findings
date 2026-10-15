// from server: 84% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct StringHeader;

struct Allocator {
    virtual void reserved() = 0;
    virtual void release(StringHeader*) = 0;
};

struct StringHeader {
    Allocator* allocator;
    int length;
    int capacity;
    volatile long references;
};

struct String {
    char* data;
    ~String();
    bool operator!=(const unsigned char*) const;
};

struct FileData {
    unsigned long attributes;
    unsigned long creationTime[2];
    unsigned long accessTime[2];
    unsigned long writeTime[2];
    unsigned long sizeHigh;
    unsigned long sizeLow;
    unsigned long reserved0;
    unsigned long reserved1;
    char name[260];
    char alternateName[14];
};

extern "C" {
    typedef int __cdecl CompareFunction(const unsigned char*,
                                       const unsigned char*);
    typedef void* __stdcall FirstFunction(const char*, FileData*);
    typedef int __stdcall NextFunction(void*, FileData*);
    typedef int __stdcall DeleteFunction(const char*);

    extern CompareFunction* const _mbscmp;
    extern FirstFunction* const FindFirstFileA;
    extern NextFunction* const FindNextFileA;
    extern DeleteFunction* const DeleteFileA;
}

extern String __cdecl makeString(int);
extern char** __cdecl appendString(char**, const String*, const char*);

extern const unsigned char comparisonText[];
extern const char searchSuffix[];

__forceinline String::~String()
{
    StringHeader* header = reinterpret_cast<StringHeader*>(data) - 1;
    if (_InterlockedExchangeAdd(&header->references, -1) - 1 <= 0)
        header->allocator->release(header);
}

inline bool String::operator!=(const unsigned char* text) const
{
    return _mbscmp(reinterpret_cast<const unsigned char*>(data), text) != 0;
}

void cleanFiles()
{
    String path = makeString(0);
    FileData entry;

    if (path != comparisonText) {
        char* search;
        void* handle = FindFirstFileA(
            *appendString(&search, &path, searchSuffix), &entry);

        StringHeader* header = reinterpret_cast<StringHeader*>(search) - 1;
        if (_InterlockedExchangeAdd(&header->references, -1) - 1 <= 0)
            header->allocator->release(header);

        if (handle != reinterpret_cast<void*>(-1)) {
            NextFunction* next = FindNextFileA;
            DeleteFunction* remove = DeleteFileA;
            do {
                if (!(entry.attributes & 0x10)) {
                    char* filename;
                    remove(*appendString(&filename, &path, entry.name));

                    StringHeader* fileHeader =
                        reinterpret_cast<StringHeader*>(filename) - 1;
                    if (_InterlockedExchangeAdd(&fileHeader->references, -1) - 1 <= 0)
                        fileHeader->allocator->release(fileHeader);
                }
            } while (next(handle, &entry));
        }
    }
}
