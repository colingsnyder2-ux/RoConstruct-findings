// from server: 66% by tester
struct RootInstance {
};

RootInstance* __cdecl getParentChainRoot(RootInstance* start)
{
    RootInstance* p = *(RootInstance**)((char*)start + 0xbc);
    RootInstance* q = p;
    RootInstance* r = *(RootInstance**)((char*)q + 0xbc);
    RootInstance* s = *(RootInstance**)((char*)r + 0xbc);
    while (s != 0) {
        q = r;
        r = s;
        s = *(RootInstance**)((char*)r + 0xbc);
    }
    if (p != q) {
        RootInstance* t = p;
        p = *(RootInstance**)((char*)t + 0xbc);
        while (p != q) {
            t = p;
            p = *(RootInstance**)((char*)t + 0xbc);
        }
    }
    return p;
}
