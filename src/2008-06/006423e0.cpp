// from server: 71% by atomic.potato
struct S
{
    virtual int CanUse();
};

int S::CanUse()
{
    if (this->CanUse() && *(int *)((char *)this + 0x148))
        return 1;
    return 0;
}
