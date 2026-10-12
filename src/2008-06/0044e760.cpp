// from server: 78% by king_originala
struct Element
{
    unsigned data[3];
};

struct Empty
{
    char data;
};

extern __declspec(noreturn) void __cdecl length_error();
extern Element* __cdecl allocate_elements(unsigned, Element*);
extern void __cdecl release_elements(void*);
extern Element* __cdecl copy_elements(
    Element*, Element*, Element*, char*, Empty, Empty);

struct S
{
    unsigned prefix[2];
    char allocator;
    Element* first;
    Element* last;
    Element* limit;

    void insert(unsigned, Element*, unsigned, const Element&);
    Element* fill_elements(Element*, unsigned, const Element&);
    void destroy_elements(void*, void*);
};

void S::insert(unsigned, Element* position, unsigned count,
               const Element& value)
{
    unsigned capacity;
    if (!first)
        capacity = 0;
    else
        capacity = unsigned(limit - first);

    if (count == 0)
        return;

    unsigned size = unsigned(last - first);
    if (0x15555555u - size < count)
        length_error();

    size += count;
    if (capacity < size)
    {
        if (0x15555555u - capacity / 2 < capacity)
            capacity = 0;
        else
            capacity += capacity / 2;

        if (capacity < size)
            capacity = size;

        Element* storage = allocate_elements(capacity, 0);
        Element* progress = storage;
        Empty tag;

        try
        {
            progress = copy_elements(
                first, position, storage, &allocator, tag, Empty());
            progress = fill_elements(progress, count, value);

            Empty category = Empty();
            copy_elements(
                position, last, progress, &allocator, category, category);

            count += unsigned(last - first);
            if (first)
            {
                destroy_elements(first, last);
                release_elements(first);
            }

            limit = storage + capacity;
            last = storage + count;
            first = storage;
            return;
        }
        catch (...)
        {
            destroy_elements(storage, progress);
            release_elements(storage);
            throw;
        }
    }
    else
    {
        Element saved = value;
        Element* old_last = last;
        unsigned suffix = unsigned(old_last - position);

        if (suffix < count)
        {
            copy_elements(position, old_last, position + count,
                          &allocator, Empty(), Empty());
            fill_elements(old_last, count - suffix, saved);
            last += count;
            while (position != old_last)
                *position++ = saved;
        }
        else
        {
            copy_elements(old_last - count, old_last, old_last,
                          &allocator, Empty(), Empty());
            last += count;

            Element* source = old_last - count;
            Element* destination = old_last;
            while (source != position)
                *--destination = *--source;

            Element* finish = position + count;
            while (position != finish)
                *position++ = saved;
        }
    }
}
