// from server: 97% by king_originala
struct Float3 { float x, y, z; };
struct Int3 { int x, y, z; };
struct Bounds { Float3 first, second; };

union Temporary {
    Float3 floating;
    Int3 integer;
};

struct Temporaries {
    Temporary a, b;
};

extern int scaleBase;
extern void __cdecl convert(Int3* result, const Float3* input);

void __cdecl quantize(int level, const Bounds* input, Int3* first, Int3* second)
{
    Temporaries t;

    {
        double inverse = 1.0 / (scaleBase << level);
        t.a.floating.x = (float)(input->first.x * inverse);
        t.a.floating.y = (float)(input->first.y * inverse);
        t.a.floating.z = (float)(input->first.z * inverse);
        convert(&t.b.integer, &t.a.floating);
        *first = t.b.integer;
    }

    {
        double inverse = 1.0 / (scaleBase << level);
        t.b.floating.x = (float)(input->second.x * inverse);
        t.b.floating.y = (float)(input->second.y * inverse);
        t.b.floating.z = (float)(input->second.z * inverse);
        convert(&t.a.integer, &t.b.floating);
        *second = t.a.integer;
    }
}
