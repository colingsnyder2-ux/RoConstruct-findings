// from server: 98% by king_originala
bool __cdecl f(const float matrix[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            const double value = matrix[i][j];
            if (value == 0.0 || value == 1.0 || value == -1.0)
                continue;
            return false;
        }
    }
    return true;
}
