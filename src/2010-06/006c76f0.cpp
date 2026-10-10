// from server: 55% by atomic.potato
struct S
{
    int padding;
    int value;
    void release();
};

void S::release()
{
    if (value)
    {
        void (__cdecl *fn)(int) = 0;
        fn(value);
    }
}
