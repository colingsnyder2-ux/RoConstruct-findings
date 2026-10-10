// from server: 32% by atomic.potato
struct AdornBillboarder
{
    int v0;
    int v1;
    int v2;
    int v3;

    AdornBillboarder(const AdornBillboarder& value);
};

AdornBillboarder::AdornBillboarder(const AdornBillboarder& value)
{
    v0 = value.v0;
    v1 = value.v1;
    v2 = value.v2;
    v3 = value.v3;
}
