// from server: 18% by colin
// roc 2008-06 004150d0  unit: boost::detail::sp_counted_base  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004150d0

extern "C" void* __cdecl malloc(unsigned int size);

struct sp_counted_base_impl_holder
{
    void* px;
    void* pi;
};

struct sp_counted_base
{
    void* dispose();
};

void* sp_counted_base::dispose()
{
    void* raw;
    void* obj;

    raw = malloc(0x1a4);
    obj = raw;
    if (obj != 0)
    {
        obj = (void*)0x58ab90;
    }
    else
    {
        obj = 0;
    }
    return obj;
}
