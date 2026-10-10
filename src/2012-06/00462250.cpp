// from server: 89% by atomic.potato
struct CSelectionPropGrid
{
    int Get(int, int);
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
};

int CSelectionPropGrid::Get(int a, int b)
{
    return (field18 * a) / 8 + field14 * b + field8;
}
