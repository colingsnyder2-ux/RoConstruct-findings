// from server: 65% by atomic.potato
extern "C" void construct_string(void*, const char*);
extern "C" void func_005e3300(void*, void*);

struct FilteredSelection
{
    int f(void*);
};

int FilteredSelection::f(void* arg)
{
    char local[28];
    construct_string(local, "SnapSelection");
    func_005e3300(this, local);
    *(void**)this = (void*)0xa2e474;
    return (int)this;
}
