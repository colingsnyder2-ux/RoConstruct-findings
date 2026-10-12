// from server: 54% by king_originala
struct Value {
    unsigned int first;
    unsigned int second;
};

extern void __cdecl adjust_heap(Value *, int, int, Value);

void __cdecl sort_heap(Value *first, Value *last)
{
    int bytes = reinterpret_cast<char *>(last) -
                reinterpret_cast<char *>(first);

    while ((bytes >> 3) > 1) {
        Value *tail = reinterpret_cast<Value *>(
            reinterpret_cast<char *>(first) + bytes - 8);
        Value value = *tail;
        *tail = *first;
        adjust_heap(first, 0, (bytes - 8) >> 3, value);
        bytes -= 8;
    }
}
