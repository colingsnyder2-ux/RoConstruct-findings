// from server: 83% by king_originala
struct PartDragTool {
    float m0;
    float m4;
    float m8;
    float mC;
    void update(float* out, float a, float b, float c);
};

void PartDragTool::update(float* out, float a, float b, float c)
{
    float x = (a - m4) * m0 + m4;
    m4 = x;
    float y = (b - m8) * m0 + m8;
    m8 = y;
    float z = (c - mC) * m0 + mC;
    mC = z;
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
