// from server: 73% by atomic.potato
struct VVector3 {
    float x;
    float y;
    float z;
};

bool __stdcall equals(const VVector3* b, const VVector3* a)
{
    if (a->x == b->x)
        if (a->y == b->y)
            if (a->z == b->z)
                return true;
    return false;
}
