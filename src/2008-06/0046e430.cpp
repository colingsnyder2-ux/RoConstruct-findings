// from server: 56% by king_originala
struct Element {
    unsigned char data[64];
};

struct Tag {};

struct Iterator {
    void* owner;
    Element* ptr;
};

extern Element* __cdecl allocate(unsigned, const void*);
extern Element* __cdecl copy_construct(
    Element*, Element*, Element*, void*, const Element*, Tag);
extern void __cdecl destroy(Element*, Element*, void*, Tag);
extern void __cdecl deallocate(void*);
extern void __cdecl length_error();

struct S {
    unsigned char prefix[8];
    unsigned allocator;
    Element* first;
    Element* last;
    Element* limit;

    Element* fill_construct(Element*, unsigned, const Element*);
    void insert(Iterator, unsigned, const Element*);
};

void S::insert(Iterator position, unsigned count, const Element* value)
{
    unsigned capacity = first ? unsigned(limit - first) : 0;
    if (count == 0)
        return;

    unsigned size = unsigned(last - first);
    if (0x03ffffffU - size < count)
        length_error();

    unsigned required = size + count;
    if (capacity < required) {
        unsigned half = capacity / 2;
        if (0x03ffffffU - half < capacity)
            capacity = 0;
        else
            capacity += half;
        if (capacity < required)
            capacity = required;

        Element* storage = allocate(capacity, 0);
        Element* constructed = storage;
        try {
            constructed = copy_construct(
                first, position.ptr, storage, &allocator, value, Tag());
            constructed = fill_construct(constructed, count, value);
            copy_construct(
                position.ptr, last, constructed, &allocator, value, Tag());
        }
        catch (...) {
            destroy(storage, constructed, &allocator, Tag());
            deallocate(storage);
            throw;
        }

        count += unsigned(last - first);
        if (first) {
            destroy(first, last, &allocator, Tag());
            deallocate(first);
        }
        limit = storage + capacity;
        last = storage + count;
        first = storage;
    }
    else {
        Element saved = *value;
        Element* oldLast = last;
        unsigned tail = unsigned(oldLast - position.ptr);
        if (tail < count) {
            fill_construct(oldLast, count - tail, &saved);
            last += count - tail;
            last = copy_construct(
                position.ptr, oldLast, last, &allocator, &saved, Tag());
            for (Element* p = position.ptr; p != oldLast; ++p)
                *p = saved;
        }
        else {
            copy_construct(
                oldLast - count, oldLast, oldLast,
                &allocator, &saved, Tag());
            last += count;
            Element* source = oldLast - count;
            Element* destination = oldLast;
            while (source != position.ptr)
                *--destination = *--source;
            for (unsigned i = 0; i != count; ++i)
                position.ptr[i] = saved;
        }
    }
}
