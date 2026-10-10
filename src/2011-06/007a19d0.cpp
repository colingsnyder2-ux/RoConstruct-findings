// from server: 83% by atomic.potato
struct IndexedMesh
{
    virtual void f20();
    IndexedMesh *next;
    IndexedMesh *child;
    int pad1;
    int pad2;
    int pad3;
    int pad4;
    int pad5;
    int pad6;
    int pad7;
    int pad8;
    int pad9;
    int pad10;
    IndexedMesh *link;

    void f();
};

void IndexedMesh::f()
{
    IndexedMesh *p = this;
    do
    {
        p->f20();
        if (p->child)
            p->child->f();
        p = p->link;
    } while (p);
}
