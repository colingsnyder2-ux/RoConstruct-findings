// from server: 81% by atomic.potato
struct S {
    int Get(int index);
    int* data;
};

int S::Get(int index)
{
    int* p = data + index;
    while ((int)*p == (int)p) {
        ++p;
        ++index;
    }
    return index;
}
