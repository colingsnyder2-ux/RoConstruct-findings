// from server: 31% by atomic.potato
extern "C" void std_string_copy(void*, const void*);

struct BoundFuncDesc {
    BoundFuncDesc* __cdecl f(const void* value);
};

BoundFuncDesc* BoundFuncDesc::f(const void* value) {
    char storage[8] = { 0 };
    std_string_copy(storage, value);
    return this;
}
