// from server: 62% by king_originala
struct Value {
    unsigned int first;
    unsigned int second;
};

extern void __cdecl adjust_heap(Value *, int, int, Value);

void __cdecl sort_heap(Value *first, Value *last)
{
    while (last - first > 1) {
        Value value = last[-1];
        last[-1] = *first;
        adjust_heap(first, 0, last - first - 1, value);
        --last;
    }
}
