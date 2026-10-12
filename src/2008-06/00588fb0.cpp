// from server: 91% by king_originala
struct Result {
    unsigned int unused;
    unsigned int first;
    unsigned int second;
    unsigned char flag;
};

struct Part {
    void finish();
};

struct Object {
    unsigned char padding[16];
    Part part;
};

struct S {
    Object* build(void* node, Result* result, int* value, int argument, int zero);
    Result* f(Result* result, void* node, int argument, int value);
};

Result* S::f(Result* result, void* node, int argument, int value)
{
    volatile int zero = 0;
    if (node) {
        Object* object = build(node, result, &value, argument, 0);
        object->part.finish();
        return result;
    }
    result->first = 0;
    result->second = 0;
    result->flag = 0;
    return result;
}
