// from server: 98% by king_originala
struct Scope {
    char storage[24];
    Scope(void*, int);
    ~Scope();
};

struct Stage {
    char pad0[0xe0];
    char first[0x20];
    char second[0xa0];
    char third[0x0c];
    char fourth[0x34];
    void* context0;
    void* context1;
    void* context2;

    void process(void*, int, int);
    void prepare(void*);
    void update();
    void periodic();
    void finish();
    void f(int);
};

void Stage::f(int count)
{
    {
        Scope scope(context1, 0);
        process(first, 8, 1);
        process(second, 0, 2);
    }
    {
        Scope scope(context0, 0);
        prepare(third);
        process(first, 8, 1);
        process(second, 0, 2);
    }
    {
        Scope scope(context2, 0);
        update();
        if (count % 4 == 0)
            periodic();
        process(second, 0, 2);
    }
    prepare(fourth);
    process(first, 8, 1);
    process(second, 0, 2);
    finish();
}
