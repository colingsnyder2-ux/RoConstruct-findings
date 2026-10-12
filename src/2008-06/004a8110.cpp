// from server: 68% by king_originala
struct Element {
    unsigned long data[3];
};

struct Tag {};

extern "C" __declspec(noreturn) void __cdecl length_error();
extern "C" Element* __cdecl allocate_elements(unsigned int, const void*);
extern "C" void __cdecl release_storage(void*);
extern "C" Element* __cdecl copy_elements(
    Element*, Element*, Element*, void*, Tag, Tag);
extern "C" void __cdecl destroy_elements(
    Element*, Element*, void*, Tag);

struct S {
    unsigned long prefix[2];
    unsigned char allocator;
    Element* first;
    Element* last;
    Element* limit;

    Element* fill_elements(Element*, unsigned int, const Element*);
    void insert(void*, Element*, unsigned int, const Element*);
};

void S::insert(void*, Element* position, unsigned int count,
               const Element* value)
{
    unsigned int capacity = first ? unsigned int(limit - first) : 0;

    if (count) {
        unsigned int size = unsigned int(last - first);
        if (0x15555555U - size < count)
            length_error();

        if (capacity < size + count) {
            unsigned int half = capacity / 2;
            if (0x15555555U - half < capacity)
                capacity = 0;
            else
                capacity += half;

            if (capacity < size + count)
                capacity = size + count;

            Element* storage = allocate_elements(capacity, 0);
            Element* constructed = storage;

            try {
                constructed = copy_elements(
                    first, position, storage, &allocator, Tag(), Tag());
                constructed = fill_elements(constructed, count, value);
                constructed = copy_elements(
                    position, last, constructed, &allocator, Tag(), Tag());
                count += unsigned int(last - first);
            }
            catch (...) {
                destroy_elements(storage, constructed, &allocator, Tag());
                release_storage(storage);
                throw;
            }

            if (first) {
                destroy_elements(first, last, &allocator, Tag());
                release_storage(first);
            }

            limit = storage + capacity;
            last = storage + count;
            first = storage;
        }
        else {
            unsigned int tail = unsigned int(last - position);
            Element* oldLast = last;

            if (tail < count) {
                last = fill_elements(last, count - tail, value);
                last = copy_elements(
                    position, oldLast, last, &allocator, Tag(), Tag());
                while (position != oldLast)
                    *position++ = *value;
            }
            else {
                last = copy_elements(
                    oldLast - count, oldLast, oldLast,
                    &allocator, Tag(), Tag());

                Element* source = oldLast - count;
                Element* destination = oldLast;
                while (source != position)
                    *--destination = *--source;

                while (count--)
                    *position++ = *value;
            }
        }
    }
}
