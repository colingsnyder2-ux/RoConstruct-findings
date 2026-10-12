// from server: 75% by king_originala
extern "C" void (__cdecl *_invalid_parameter_noinfo)();
extern "C" void* __cdecl runtimeCast(void*, int, const void*, const void*, int);

extern char instanceType;
extern char bodyMoverType;

struct S;
struct Vector;

struct Proxy
{
    Vector* owner;
};

struct Entry
{
    S* object;
    void* control;
};

struct Vector
{
    Proxy* volatile proxy;
    unsigned int padding[2];
    Entry* first;
    Entry* last;
};

struct S
{
    char padding[0x108];
    Vector* children;
    void* findBodyMover();
};

void* S::findBodyMover()
{
    Vector* vector = children;
    if (vector)
    {
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        Entry* finish = vector->last;
        if (vector->first > finish)
            invalid();

        Proxy* finishProxy = vector->proxy;
        vector = children;
        Entry* cursor = vector->first;
        if (cursor > vector->last)
            invalid();

        for (;;)
        {
            Proxy* proxy = vector->proxy;
            if (!proxy || proxy != finishProxy)
                invalid();

            if (cursor != finish)
                break;

            Vector* owner;
            if (proxy)
                owner = proxy->owner;
            else
            {
                invalid();
                owner = 0;
            }

            if (cursor >= owner->last)
                invalid();

            S* object = cursor->object;
            vector = reinterpret_cast<Vector*>(object);
            void* result = runtimeCast(object, 0, &instanceType, &bodyMoverType, 0);
            if (result)
                return result;

            result = object->findBodyMover();
            if (result)
                return result;

            if (proxy)
                owner = proxy->owner;
            else
            {
                invalid();
                owner = 0;
            }

            if (cursor >= owner->last)
                invalid();

            ++cursor;
        }
    }
    return 0;
}
