// from server: 97% by king_originala
struct Material
{
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual float reflectance();
    virtual float transparency();
};

struct Entry
{
    char padding[0x34];
    Material* material;
    char tail[0x0c];
};

struct EntryList
{
    Entry** data;
    int count;
    int capacity;

    void append(Entry* const& entry);
};

struct Scene
{
    char padding[0x268];
    Entry* entries;
    int count;
    int capacity;
    EntryList opaque;
    EntryList reflective;
    EntryList transparent;

    void classify();
};

void Scene::classify()
{
    for (int i = 0; i < count; ++i)
    {
        Entry* current = entries + i;
        Entry* entry = current;
        if (current->material)
        {
            if (current->material->transparency() > 0.0f)
                transparent.append(entry);
            else
            {
                opaque.append(entry);
                if (current->material->reflectance() > 0.0f)
                    reflective.append(entry);
            }
        }
    }
}
