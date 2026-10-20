// from server: 99% by EspClaude
// from server: 88% by king_originala
// roc 2008-06 0040ef00  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ef00
//
struct IUnknownLike {
    virtual long __stdcall QueryInterface(void*, void**) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct Entry {
    IUnknownLike* object;
    unsigned long cookie;
};

struct CException {
    void Delete();
};

__declspec(noreturn) void __stdcall AtlThrowImpl(long);

struct S {
    void* vtable;
    long references;
    Entry* begin;
    Entry* end;
    Entry* current;
    unsigned long flags;
    void* owner;

    long Init(Entry* first, Entry* last, void* source, unsigned long mode);
};

long S::Init(Entry* first, Entry* last, void* source, unsigned long mode)
{
    if (mode == 3) {
        try {
            begin = new Entry[last - first];
        }
        catch (CException* e) {
            e->Delete();
        }
        current = begin;
        if (begin == 0)
            return (long)0x8007000E;

        for (Entry* i = first; i != last; i++) {
            Entry* p = current;
            if (p == 0 || i == 0)
                AtlThrowImpl((long)0x80004005);
            *p = *i;
            if (p->object)
                p->object->AddRef();
            current++;
        }
        end = begin + (last - first);
    } else {
        begin = first;
        end = last;
    }

    owner = source;
    current = begin;
    flags = mode;
    return 0;
}
