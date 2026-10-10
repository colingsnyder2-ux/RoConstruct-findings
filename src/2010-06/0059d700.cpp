// from server: 54% by atomic.potato
struct HeartbeatTask
{
    double value;
    int Function(double, double);
};

int HeartbeatTask::Function(double a, double b)
{
    Function(a, b);
    return (int)this;
}
