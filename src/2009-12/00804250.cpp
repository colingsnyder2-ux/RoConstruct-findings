// from server: 55% by atomic.potato
struct S
{
    char reserved0[40];
    void* commandBar;
    char reserved1[20];
    int enabled;
    void SetValue(int value);
};

void S::SetValue(int value)
{
    enabled = 1;
    if (commandBar != 0 && *((int*)commandBar + 40) != value)
        *((int*)commandBar + 40) = value;
}
