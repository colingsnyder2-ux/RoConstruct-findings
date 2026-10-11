// from server: 69% by atomic.potato
struct IdSerializer {
    unsigned int a;
    unsigned short b;
    bool equals(const IdSerializer& other) const;
    bool less(const IdSerializer& other) const;
};

struct RakPeerInterface {
    int __cdecl f(const IdSerializer& id);
};

int RakPeerInterface::f(const IdSerializer& id)
{
    if (id.less(id))
        return -1;
    return id.equals(id) ? 0 : 1;
}
