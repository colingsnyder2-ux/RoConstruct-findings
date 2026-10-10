// from server: 27% by atomic.potato
struct JointsService
{
    JointsService *f(int, int);
    JointsService *g(int, int);
};

JointsService *JointsService::f(int a, int b)
{
    int x = 0;
    return this->g(x, a);
}
