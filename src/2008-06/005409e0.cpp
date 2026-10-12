// from server: 97% by king_originala
#pragma optimize("", off)

struct Result {
    unsigned int value;
    void* owner;
    bool different(Result* other);
    void* get();
};

extern "C" void* __cdecl convert(void* value);

struct Filter {
    bool check(unsigned int key, void* value);
};

struct S {
    unsigned char padding[8];
    Filter filter;
    Result* lookup(Result* result, unsigned int key);
    Result* end(Result* result);
    Result* f(Result* result, unsigned int key);
};

Result* S::f(Result* result, unsigned int key)
{
    Result iterator;
    Result* selected;
    Result firstEnd;
    Result secondEnd;

    lookup(&iterator, key);
    selected = !iterator.different(end(&firstEnd)) &&
               !filter.check(key, convert(iterator.get()))
             ? &iterator
             : end(&secondEnd);

    *result = *selected;
    return result;
}
