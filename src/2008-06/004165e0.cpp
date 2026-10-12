// from server: 88% by king_originala
typedef long HRESULT;

struct Element {
    char data[16];
};

struct SafeArray {
    char padding[12];
    Element* data;
};

struct SafeArrayBound {
    unsigned long count;
    long lower;
};

extern "C" SafeArray* (__stdcall *SafeArrayCreate)(
    unsigned short, unsigned int, SafeArrayBound*);
extern "C" HRESULT (__stdcall *SafeArrayLock)(SafeArray*);
extern "C" HRESULT (__stdcall *SafeArrayUnlock)(SafeArray*);

struct ArrayAccess {
    SafeArray* array;
    Element* f(unsigned int index);
    ~ArrayAccess();
};

ArrayAccess::~ArrayAccess()
{
    if (array)
        SafeArrayUnlock(array);
}

struct Value {
    unsigned long words[2];
};

struct Values {
    char padding[12];
    Value* first;
    Value* last;
};

extern void __cdecl G1_func_00416370(Value*, Element*);

SafeArray* __cdecl func_004165e0(Values* values)
{
    ArrayAccess access;
    SafeArrayBound bound;
    bound.count = static_cast<unsigned long>(
        (reinterpret_cast<int>(values->last) -
         reinterpret_cast<int>(values->first)) >> 3);
    bound.lower = 0;

    SafeArray* result = SafeArrayCreate(12, 1, &bound);
    access.array = result;

    if (result)
        SafeArrayLock(result);

    for (unsigned int i = 0;
         i < static_cast<unsigned int>(
             (reinterpret_cast<int>(values->last) -
              reinterpret_cast<int>(values->first)) >> 3);
         ++i) {
        Value* value = values->first + i;
        G1_func_00416370(value, access.f(i));
    }

    SafeArrayUnlock(result);
    access.array = 0;
    return result;
}
