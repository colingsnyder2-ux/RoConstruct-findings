// from server: 78% by king_originala
struct Result {
    int reserved;
    int first;
    int second;
    char flag;
};

struct Object {
    void finish();
};

extern "C" void* __stdcall create_object(
    void* source, Result* result, int* value, int option, int zero);

Result* __stdcall reconstruct(Result* result, void* source, int option, int value)
{
    int zero = 0;
    volatile int local = zero;

    if (source != 0) {
        void* object = create_object(source, result, &value, option, zero);
        ((Object*)((char*)object + 16))->finish();
        return result;
    }

    result->first = zero;
    result->second = zero;
    result->flag = (char)zero;
    return result;
}
