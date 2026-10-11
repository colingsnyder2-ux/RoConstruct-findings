// from server: 44% by atomic.potato
struct PointToPointBreakConnector
{
    float getDistance();
};

float PointToPointBreakConnector::getDistance()
{
    float *a = *reinterpret_cast<float **>(reinterpret_cast<char *>(this) + 8);
    float *b = *reinterpret_cast<float **>(reinterpret_cast<char *>(this) + 12);
    float dx = b[7] - a[7];
    float dy = b[8] - a[8];
    float dz = b[9] - a[9];
    float len = dx * dx + dy * dy + dz * dz;
    return len * *reinterpret_cast<float *>(reinterpret_cast<char *>(this) + 16) * *reinterpret_cast<float *>(0x9af2dc);
}
