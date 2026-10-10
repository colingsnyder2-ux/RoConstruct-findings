// from server: 74% by atomic.potato
struct DxUserInput_00469340 {
    int m_value;
    int m_data;
};

void __cdecl f(float *out, const DxUserInput_00469340 *input)
{
    out[0] = 0.0f;
    out[1] = (float)input->m_value;
    if (input->m_data == 0)
        out[0] = 0.0f;
}
