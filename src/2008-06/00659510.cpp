// from server: 90% by king_originala
struct Float3 { float x, y, z; };
struct Int3 { int x, y, z; };
struct Bounds { Float3 first, second; };

union Temporary {
    Float3 floating;
    Int3 integer;
};

extern int scaleBase;
extern void __cdecl convert(Int3* result, const Float3* input);

void __cdecl quantize(int level, const Bounds* input, Int3* first, Int3* second)
{
    Temporary a, b;

    {
        double inverse = 1.0 / (scaleBase << level);
        a.floating.x = (float)(input->first.x * inverse);
        a.floating.y = (float)(input->first.y * inverse);
        a.floating.z = (float)(input->first.z * inverse);
        convert(&b.integer, &a.floating);
        *first = b.integer;
    }

    {
        double inverse = 1.0 / (scaleBase << level);
        b.floating.x = (float)(input->second.x * inverse);
        b.floating.y = (float)(input->second.y * inverse);
        b.floating.z = (float)(input->second.z * inverse);
        convert(&a.integer, &b.floating);
        *second = a.integer;
    }
}
