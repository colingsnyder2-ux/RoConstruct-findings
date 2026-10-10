// from server: 74% by atomic.potato
struct MeshFileKey
{
    int *value;
    void f();
};

void MeshFileKey::f()
{
    int *p = value;
    if (p)
        (*(void (__thiscall **)(int *, int))(*(int **)p + 0x3c))(p, 1);
}
