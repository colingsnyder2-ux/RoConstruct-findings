// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    virtual ~Instance();
};

struct Player : Instance {
};

struct RefBlock {
    void* vtable;
    volatile long references;
    void release();
};

struct Count {
    RefBlock* block;

    Count() : block(0) {}
    Count(const Count& other) : block(other.block) {
        if (block)
            _InterlockedExchangeAdd(&block->references, 1);
    }
    ~Count() {
        if (block)
            block->release();
    }

    Count& operator=(const Count&);
};

struct Source {
    Instance* object;
    Count count;
};

struct GetImpl {
    Player* object;
    Count count;

    GetImpl(const Source&, int);
};

GetImpl::GetImpl(const Source& source, int)
    : object(dynamic_cast<Player*>(source.object)), count(source.count)
{
    if (!object) {
        Count empty;
        count = empty;
    }
}
