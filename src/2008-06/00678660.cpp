// from server: 91% by king_originala
void __cdecl pushHeap(float* data, int hole, int top, float value)
{
    int parent = (hole - 1) / 2;
    while (top < hole && data[parent] < value)
    {
        data[hole] = data[parent];
        hole = parent;
        parent = (hole - 1) / 2;
    }
    data[hole] = value;
}
