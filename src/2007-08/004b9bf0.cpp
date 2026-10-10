// from server: 66% by tester
struct RakPeer
{
    void __cdecl shiftRight(unsigned int* arg);
};

void RakPeer::shiftRight(unsigned int* arg)
{
    unsigned int carry = 0;
    int i = 15;
    do
    {
        unsigned int v = arg[i];
        unsigned int next = (v >> 1) | carry;
        carry = v << 31;
        arg[i + 1] = next;
        --i;
    } while (i >= 0);
}
