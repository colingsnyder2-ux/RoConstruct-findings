// from server: 96% by king_originala
struct PartInstance;
struct PVInstance;

struct Bounds
{
    float low[3];
    float high[3];
};

struct PartVTable
{
    void* reserved[21];
    Bounds* (__thiscall* bounds)(PartInstance*, Bounds*);
};

struct PartInstance
{
    PartVTable* vtable;
};

struct Instance
{
    virtual void anchor();
};

struct PVInstance : Instance
{
};

struct PVVTable
{
    void* reserved[23];
    PartInstance* (__thiscall* getPart)(PVInstance*);
};

struct GetSetImpl
{
    static PartInstance* get(PartInstance*);
};

struct Entry
{
    Instance* object;
    void* control;
};

struct Children
{
    char reserved[12];
    Entry* begin;
    Entry* end;
};

extern float initialArea;
extern void (__cdecl* invalidParameter)();

struct S
{
    char reserved0[0x108];
    Children* children;
    char reserved1[0xd4];
    PartInstance* cached;

    unsigned count();
    void setPart(PartInstance*);
    PartInstance* findPart();
};

PartInstance* S::findPart()
{
    if (cached)
        return cached;

    float bestArea = initialArea;
    PartInstance* best = 0;

    for (unsigned i = 0; i < count(); ++i)
    {
        Children* list = children;
        if (i >= static_cast<unsigned>(list->end - list->begin))
            invalidParameter();

        PVInstance* object = dynamic_cast<PVInstance*>(list->begin[i].object);
        if (object)
        {
            PVVTable* table = *reinterpret_cast<PVVTable**>(object);
            PartInstance* part = table->getPart(object);
            if (part)
            {
                part = GetSetImpl::get(part);
                Bounds storage;
                Bounds* box = part->vtable->bounds(part, &storage);
                double area = (box->high[2] - box->low[2]) *
                              (box->high[0] - box->low[0]);
                if (bestArea < area)
                {
                    bestArea = static_cast<float>(area);
                    best = part;
                }
            }
        }
    }

    setPart(best);
    return best;
}
