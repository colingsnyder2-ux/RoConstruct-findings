// from server: 50% by colin
struct Inner {
    char pad0[44];
    int m_x;
    int f();
};

struct Outer {
    char pad0[36];
    int m_count;
    int getCount();
    Inner* getAt(int index);
    void removeAt(int index, int count);
    void removeAll();
};

int Inner::f()
{
    return m_x;
}

int Outer::getCount()
{
    return m_count;
}

void Outer::removeAll()
{
    int i = 0;
    while (i < getCount())
    {
        getAt(i)->f();
        i++;
    }
    removeAt(-1, 0);
}
