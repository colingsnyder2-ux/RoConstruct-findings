// from server: 62% by atomic.potato
struct CSelectionPropGrid
{
    int m8;
    int m14;
    int m18;
    int f(int x, int y);
};

int CSelectionPropGrid::f(int x, int y)
{
    return (((m18 * x) + ((m18 * x) < 0 ? 7 : 0)) >> 3) + m14 * y + m8;
}
