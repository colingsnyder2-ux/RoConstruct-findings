// from server: 75% by atomic.potato
struct CProgressDialog
{
    int m_data0[4];
    int* m_ptr;
    int m_data[2];

    void f();
};

void CProgressDialog::f()
{
    if (m_ptr != 0)
    {
        typedef void (*Function)(int*, int*, int);
        Function p = *(Function*)m_ptr;
        if (p != 0)
            p(&m_data[1], &m_data[1], 2);
        m_ptr = 0;
    }
}
