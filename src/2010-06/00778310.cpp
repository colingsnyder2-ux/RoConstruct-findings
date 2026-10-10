// from server: 65% by atomic.potato
struct EdgeEdgeConnector
{
    int* field84;
    int* field68;
    EdgeEdgeConnector* Initialize(int);
};

EdgeEdgeConnector* EdgeEdgeConnector::Initialize(int flag)
{
    if (flag & 1)
        this->Initialize(flag);

    *(int**)((char*)this + 0x84) = (int*)0xA20C08;
    *(int**)((char*)this + 0x68) = (int*)0xA20C08;
    return this;
}
