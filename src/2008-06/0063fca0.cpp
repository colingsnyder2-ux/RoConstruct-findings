// from server: 99% by king_originala
struct Vec3 {
    float x, y, z;
};

void __cdecl operator delete(void *) throw();

struct Buffer {
    void *head;
    unsigned int reserved[2];
    void *first;
    void *last;
    void *limit;

    Buffer();
    void assign(void *const &value);
    ~Buffer();
};

__forceinline Buffer::~Buffer()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    operator delete(head);
}

struct EmptyReference {
    void *object;
    void *control;

    EmptyReference();
    EmptyReference(const EmptyReference &);
    ~EmptyReference();
};

__forceinline EmptyReference::EmptyReference()
{
    object = 0;
    control = 0;
}

__forceinline EmptyReference::~EmptyReference()
{
}

extern void *__cdecl getValue(void *);
extern int __cdecl perform(void *, Vec3 *, Buffer *, int, void *,
                           EmptyReference);

struct S {
    unsigned char reserved[24];
    void *context;

    void *find(int, Vec3 *);
    int f(int);
};

int S::f(int argument)
{
    Vec3 position = { 0.0f, 0.0f, 0.0f };
    void *object = find(argument, &position);
    if (object) {
        Buffer values;
        {
            void *value = getValue(object);
            values.assign(value);
        }
        return perform(object, &position, &values, argument, context,
                       EmptyReference());
    }
    return 0;
}
