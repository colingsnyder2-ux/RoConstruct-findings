// from server: 91% by king_originala
struct Result {
    unsigned char padding[4];
    void* first;
    void* second;
    unsigned char flag;
};

struct State {
    void finish();
};

struct Product {
    unsigned char padding[16];
    State state;
};

struct S {
    Product* create(void*, Result*, unsigned long*, unsigned long, int);
    Result* f(Result*, void*, unsigned long, unsigned long);
};

Result* S::f(Result* result, void* object, unsigned long value,
             unsigned long context)
{
    volatile int zero = 0;
    if (object) {
        Product* product = create(object, result, &context, value, 0);
        product->state.finish();
        return result;
    }
    result->first = 0;
    result->second = 0;
    result->flag = 0;
    return result;
}
