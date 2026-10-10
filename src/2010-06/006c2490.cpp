// from server: 92% by atomic.potato
struct MotorFeature
{
    int a[38];
    void initialize();
};

void MotorFeature::initialize()
{
    a[0] = 0x00a43b04;
    a[1] = 0x00a43afc;
    a[6] = 0x00a43af0;
    a[7] = 0x00a43ae4;
    a[37] = 0x00a43acc;
}
