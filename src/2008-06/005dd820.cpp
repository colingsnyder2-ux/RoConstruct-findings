// from server: 68% by colin
extern "C" bool __cdecl sub_5DD7D0(float);

bool __cdecl sub_5DD820(float value)
{
    if (sub_5DD7D0(value))
        return true;

    unsigned int bits = *(unsigned int*)&value;
    if ((bits & 0x7f800000) == 0 && (bits & 0x007fffff) != 0)
        return true;

    return false;
}
