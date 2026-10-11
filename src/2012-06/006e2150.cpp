// from server: 27% by atomic.potato
struct GenericJob
{
    unsigned char m_padding[0x23c];
    int m_count;
    void getValue(double* result);
};

void GenericJob::getValue(double* result)
{
    double value;
    if (m_count > 0)
        value = 0.0;
    else
        value = 0.0;
    *result = value;
}
