// from server: 80% by atomic.potato
struct Flag
{
    int value;
    void get(int* result);
};

void Flag::get(int* result)
{
    *result = *(int*)((char*)this + 0x2ac);
}
