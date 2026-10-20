// from server: 86% by colin
//

struct Entry {
    void* object;
};

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
        catch (...) {
            begin = 0;
        }

        if (!begin)
            return (long)0x8007000E;

        end = begin;
        while (first != last) {
            *end = *first;
            ++end;
            ++first;
        }
    } else {
        begin = first;
        end = last;
    }

    current = begin;
    flags = mode;
    owner = source;
    return 0;
}

