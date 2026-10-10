// from server: 56% by atomic.potato
struct InsertDecal
{
    bool Check();
    bool Insert(InsertDecal *);
};

bool InsertDecal::Insert(InsertDecal *decal)
{
    if (decal && !Check())
        return false;
    return true;
}
