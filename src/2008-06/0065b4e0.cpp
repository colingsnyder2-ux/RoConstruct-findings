// from server: 71% by king_originala
struct Pair {
    int first;
    int second;
};

struct Bucket {
    int prefix[3];
    Pair *begin;
    Pair *end;
    Pair *capacity;

    Bucket();
    ~Bucket();
    void resize(int count, Pair value);
};

struct Buffer {
    void *begin;
    void *end;
    void *capacity;

    Buffer();
    ~Buffer();
};

__forceinline Buffer::Buffer()
    : end(0), capacity(0)
{
    begin = 0;
}

extern int bucketCount;

extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
    void *__cdecl memset(void *, int, unsigned int);
}

struct S {
    int state;
    int first;
    int second;
    Bucket buckets[4];
    int a, b, c, d, e;
    Buffer buffer;

    S(int firstValue, int secondValue);
};

S::S(int firstValue, int secondValue)
    : state(0), first(firstValue), second(secondValue),
      a(0), b(0), c(0), d(0), e(0)
{
    for (int i = 0; i < bucketCount; ++i) {
        Pair value = { 0, 0 };
        buckets[i].resize(0x10000 >> i, value);

        unsigned int count =
            static_cast<unsigned int>(buckets[i].end - buckets[i].begin);
        if (!(count > 0U))
            _invalid_parameter_noinfo();

        memset(buckets[i].begin, 0, count * sizeof(Pair));
    }
}
