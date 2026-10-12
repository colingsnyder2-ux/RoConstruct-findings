// from server: 78% by king_originala
extern unsigned int indexCounter;
extern unsigned int indexValue;
extern unsigned int indexGuard;
extern "C" void (__cdecl *invalidParameter)();

struct Object {
    virtual ~Object();
};

struct S {
    unsigned char padding[12];
    Object** first;
    Object** last;
    void clearSlot();
};

void S::clearSlot()
{
    unsigned int count = static_cast<unsigned int>(last - first);

    if (!(indexGuard & 1)) {
        unsigned int next = indexCounter;
        indexGuard |= 1;
        indexValue = next;
        indexCounter = next + 1;
    }

    if (count > indexValue) {
        if (!(indexGuard & 1)) {
            unsigned int next = indexCounter;
            indexGuard |= 1;
            indexValue = next;
            indexCounter = next + 1;
        }

        unsigned int slot = indexValue;
        void (__cdecl *check)() = invalidParameter;

        if (slot >= static_cast<unsigned int>(last - first))
            check();

        Object* object = first[slot];
        if (object)
            delete object;

        if (!(indexGuard & 1)) {
            unsigned int next = indexCounter;
            indexGuard |= 1;
            indexValue = next;
            indexCounter = next + 1;
        }

        slot = indexValue;
        if (slot >= static_cast<unsigned int>(last - first))
            check();

        first[slot] = 0;
    }
}
