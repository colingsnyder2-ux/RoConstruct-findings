// from server: 68% by colin
struct S {
    char padding[0x168];
    int value;

    void init();
    void notify(const int* p);
};

void S::init()
{
    int a;
    int b;

    notify(0);
    a = value + 1;
    b = 1;
    if (a < 1)
        value = b;
    else
        value = a;
    notify((const int*)0x977010);
}
