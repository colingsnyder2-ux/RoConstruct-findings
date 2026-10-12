// from server: 55% by king_originala
struct S
{
    float left, top, right, bottom;
    int contains(unsigned int point);
};

int S::contains(unsigned int point)
{
    int x = (short)point;
    int y = (short)(point >> 16);
    return x >= left && x <= right && y >= top && y <= bottom;
}
