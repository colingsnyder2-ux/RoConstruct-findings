// from server: 40% by king_originala
extern "C" double __cdecl fabs(double);
#pragma intrinsic(fabs)

bool __cdecl testPlanes(const float planes[2][4][3],
                       const float points[2][3],
                       const float offsets[2],
                       const float limits[2])
{
    for (unsigned int side = 0; side < 2; ++side)
    {
        const float y = points[side][1];
        const float x = points[side][0];
        const float z = points[side][2];
        const float offset = offsets[side];
        const float limit = limits[side];
        const float (*plane)[3] = planes[side];

        for (int i = 0; i < 4; ++i, ++plane)
        {
            if (fabs((*plane)[2] * z +
                     (*plane)[1] * y +
                     (*plane)[0] * x + offset) > limit)
                return false;
        }
    }
    return true;
}
