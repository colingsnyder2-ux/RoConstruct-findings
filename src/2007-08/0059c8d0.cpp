// from server: 77% by colin
struct S_func_0059c8d0 {
    float m_x;
    float m_y;
    float m_z;
    float m_w;
    void f(float* other);
};

void S_func_0059c8d0::f(float* other)
{
    float* a = this->m_x < other[0] ? other : &this->m_x;
    this->m_x = a[0];

    float* b = this->m_y < other[1] ? other + 1 : &this->m_y;
    this->m_y = b[0];

    float* c = this->m_z < other[2] ? other + 2 : &this->m_z;
    this->m_z = c[0];

    if (this->m_w < other[3]) {
        this->m_w = other[3];
    }
}
