// from server: 93% by atomic.potato
struct CSelectionPropGrid
{
    int unused0;
    int unused4;
    int member8;
    int member14;
    int member18;
    int Get(int, int);
};

int CSelectionPropGrid::Get(int a, int b)
{
    return (a * this->member18) / 8 + b * this->member14 + this->member8;
}
