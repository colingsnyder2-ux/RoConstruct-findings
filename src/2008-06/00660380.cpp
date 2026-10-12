// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference
{
    Control* control;

    Reference() : control(0) {}
    ~Reference()
    {
        if (control)
        {
            Control* p = control;
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
            {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }

    Reference& operator=(const Reference&);
};

struct Shared
{
    void* object;
    Reference reference;

    Shared() : object(0) {}
};

extern Shared __cdecl makeShared(void*);
extern void* __cdecl getCharacter(void*);
extern void* __cdecl getRelated(void*);

struct FilterStairs
{
    virtual ~FilterStairs();
    Shared character;
    Shared related;

    FilterStairs(void*);
};

FilterStairs::FilterStairs(void* player)
{
    character = makeShared(getCharacter(player));
    related = makeShared(getRelated(character.object));
}
