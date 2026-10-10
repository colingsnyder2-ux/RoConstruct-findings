// from server: 80% by atomic.potato
struct TweenService
{
    int padding[128];
    int value;
    void getValue(int* result);
};

void TweenService::getValue(int* result)
{
    *result = value;
}
