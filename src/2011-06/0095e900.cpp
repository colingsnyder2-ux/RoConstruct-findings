// from server: 75% by atomic.potato
struct S {
    int padding[2];
    int value;
    void get(int *out);
};

void S::get(int *out)
{
    *out = value;
}
