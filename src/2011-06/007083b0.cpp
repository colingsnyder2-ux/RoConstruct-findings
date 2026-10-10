// from server: 73% by atomic.potato
struct EventDesc
{
    int value[101];
    void get(int* result);
};

void EventDesc::get(int* result)
{
    *result = value[100];
}
