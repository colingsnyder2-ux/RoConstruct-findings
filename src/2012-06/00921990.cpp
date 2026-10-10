// from server: 97% by atomic.potato
struct ManualGlueJoint
{
    virtual void* First() = 0;
    virtual void* GetJoint(int index) = 0;
    bool f();
};

bool ManualGlueJoint::f()
{
    int i = 0;
    while (i < 2)
    {
        void* p = GetJoint(i);
        if (p != 0 && *(ManualGlueJoint**)((char*)p + 0x28) == this)
            return true;
        ++i;
    }
    return false;
}
