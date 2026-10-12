// from server: 75% by king_originala

#pragma optimize("g", off)

typedef unsigned int size_type;

struct Element;

struct Allocator {
    Element* allocate(size_type);
};

struct Iterator {
    void* owner;
    Element* position;
};

extern "C" void __cdecl length_error();

struct S {
    char pad[8];
    Allocator allocator;
    Element* first;
    Element* last;
    Element* limit;

    size_type capacity();
    size_type size();
    size_type max_size();
    Element* copy(Element*, Element*, Element*);
    Element* fill(Element*, size_type, const Element&);
    void insert(Iterator, size_type, const Element&);
};

void S::insert(Iterator where, size_type count, const Element& value)
{
    size_type newCapacity = capacity();

    if (count == 0)
        return;

    if (max_size() - size() < count) {
        length_error();
        return;
    }

    if (newCapacity < size() + count) {
        newCapacity = max_size() - newCapacity / 2 < newCapacity
            ? 0
            : newCapacity + newCapacity / 2;

        if (newCapacity < size() + count)
            newCapacity = size() + count;

        Element* newFirst = allocator.allocate(newCapacity);
        Element* newLast = newFirst;

        try {
            newLast = copy(first, where.position, newFirst);
            newLast = fill(newLast, count, value);
            copy(where.position, last, newLast);
        }
        catch (...) {
            throw;
        }

        Element* oldFirst = first;
        Element* oldLast = last;
        Element* oldLimit = limit;
        first = newFirst;
        last = newLast;
        if (oldFirst == oldLast)
            limit = oldLimit;
    }
}
