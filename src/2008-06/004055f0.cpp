// from server: 72% by king_originala
extern "C" {
    extern int (__thiscall *lstrlenW)(const wchar_t *);
    extern void (__cdecl *free)(void *);
    void *__cdecl _alloca(unsigned int);
}
#pragma intrinsic(_alloca)

bool __cdecl stackAvailable(int);
char *__stdcall convertString(char *, const wchar_t *, int, unsigned int);

struct Block {
    Block *next;
};

struct TemporaryBuffer {
    Block *head;
    TemporaryBuffer();
    ~TemporaryBuffer();
    void *allocate(int);
    void release();
};

__forceinline TemporaryBuffer::TemporaryBuffer() : head(0)
{
}

__forceinline void TemporaryBuffer::release()
{
    Block *p = head;
    if (p) {
        void (__cdecl *releaseBlock)(void *) = free;
        do {
            Block *old = p;
            p = p->next;
            releaseBlock(old);
        } while (p);
    }
}

__forceinline TemporaryBuffer::~TemporaryBuffer()
{
    release();
}

struct S {
    int apply(void *, unsigned int, const char *, int);
    static int __stdcall f(S *, void *, unsigned short, const wchar_t *);
};

int __stdcall S::f(S *object, void *argument, unsigned short value,
                  const wchar_t *text)
{
    TemporaryBuffer buffer;
    Block *blocks = 0;

    if (!text)
        return (int)0x8007000e;

    __int64 bytes = (__int64)(lstrlenW(text) + 1) * 2;
    if ((unsigned __int64)(bytes + 2147483648i64) > 4294967295ui64)
        return (int)0x8007000e;

    int size = (int)bytes;
    char *storage;
    if (size <= 1024 && stackAvailable(size)) {
        storage = (char *)_alloca(size);
    } else {
        storage = (char *)buffer.allocate(size);
        blocks = buffer.head;
    }

    char *converted = convertString(storage, text, size, 3);
    if (!converted) {
        if (blocks) {
            void (__cdecl *releaseBlock)(void *) = free;
            do {
                Block *old = blocks;
                blocks = blocks->next;
                releaseBlock(old);
            } while (blocks);
        }
        buffer.head = 0;
        return (int)0x8007000e;
    }

    int result = object->apply(argument, (unsigned int)value, converted, 1);
    if (blocks) {
        void (__cdecl *releaseBlock)(void *) = free;
        do {
            Block *old = blocks;
            blocks = blocks->next;
            releaseBlock(old);
        } while (blocks);
    }
    buffer.head = 0;
    return result;
}
