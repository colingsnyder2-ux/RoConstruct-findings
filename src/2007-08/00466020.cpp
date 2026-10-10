// from server: 74% by colin
struct DxUserInput {
    float m_x;
    float m_y;
    void getMin(const DxUserInput* a, const DxUserInput* b, float* out);
};

void DxUserInput::getMin(const DxUserInput* a, const DxUserInput* b, float* out)
{
    float y0 = m_y;
    float y1 = a->m_y;
    float y2 = b->m_y;

    float miny;
    if (y1 < y0) {
        if (y2 < y1)
            miny = y2;
        else
            miny = y1;
    } else {
        miny = y0;
    }

    float x0 = m_x;
    float x1 = a->m_x;
    float x2 = b->m_x;

    float minx;
    if (x1 < x0) {
        if (x2 < x1)
            minx = x2;
        else
            minx = x1;
    } else {
        minx = x0;
    }

    out[0] = minx;
    out[1] = miny;
}
