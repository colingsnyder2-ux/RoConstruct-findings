// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct S;

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Listener {
    void connect(S*);
};

struct Shared {
    Listener* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared() {
    if (control) {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

extern Shared __cdecl makeListener();

struct Entry {
    S* object;
    Control* control;
};

struct Array {
    char padding[12];
    Entry* first;
    Entry* last;
    S* at(unsigned int);
};

inline S* Array::at(unsigned int index) {
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();
    return first[index].object;
}

inline const int& minimum(const int& a, const int& b) {
    return b < a ? b : a;
}

struct S {
    char padding0[0x108];
    Array* children;
    char padding1[0x3c];
    void* value;
    char padding2[0x5c];
    int insertionIndex;

    void setValue(void*);
    void insert(void*);
};

void S::insert(void* valueToInsert) {
    Shared listener = makeListener();
    listener.object->connect(this);

    Array* array = children;
    int lastIndex = (array ? static_cast<int>(array->last - array->first) : 0) - 1;
    int* index = &insertionIndex;
    int position;
    if (*index >= 0)
        position = minimum(*index, lastIndex);
    else
        position = lastIndex;

    for (int i = lastIndex; i > position; --i) {
        S* previous = children->at(i - 1);
        S* current = children->at(i);
        current->setValue(previous->value);
    }

    S* destination = children->at(position);
    destination->setValue(valueToInsert);
    *index = -1;
}
