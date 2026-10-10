// from server: 74% by atomic.potato
struct CVideoStreamFilter
{
    int IsBitSet(int);
    unsigned int flags;
};

int CVideoStreamFilter::IsBitSet(int index)
{
    return (flags & (1u << index)) != 0;
}
