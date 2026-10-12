// from server: 77% by king_originala
struct Vec3 {
    float x, y, z;
};

extern const Vec3& __cdecl defaultVector();
extern const float predicateArgument;
extern const float comparisonLimit;

struct Geometry;
struct Edge {
    char pad[12];
    Geometry* g0;
    Geometry* g1;
};

struct Geometry {
    Edge* first();
    Edge* next(Edge*);
};

struct GeometryArray {
    Geometry** data;
    int count;
    int capacity;

    Geometry** find(Geometry* value) const {
        for (int i = 0; i < count; ++i)
            if (data[i] == value)
                return data + i;
        return data + count;
    }
};

struct Result {
    Geometry* geometry;
    int kind;
    Vec3 a;
    Vec3 b;

    float metric() const;
};

typedef bool (__thiscall *Predicate)(Edge*, float);

struct S {
    char pad[20];
    Geometry* geometry;

    Result evaluate(Geometry*, bool);
    Result f(const GeometryArray&, Predicate);
};

Result S::f(const GeometryArray& excluded, Predicate predicate)
{
    Result result;
    result.geometry = 0;
    result.kind = 6;

    const Vec3& a = defaultVector();
    result.a.x = a.x;
    result.a.y = a.y;
    result.a.z = a.z;

    const Vec3& b = defaultVector();
    result.b.x = b.x;
    result.b.y = b.y;
    result.b.z = b.z;

    for (Edge* edge = geometry->first(); edge; edge = geometry->next(edge)) {
        if (predicate(edge, predicateArgument)) {
            Geometry* other = edge->g0;
            if (other == geometry)
                other = edge->g1;

            if (other && excluded.find(other) == excluded.data + excluded.count) {
                Result candidate = evaluate(other, false);
                if (candidate.geometry && candidate.metric() < comparisonLimit) {
                    result.geometry = candidate.geometry;
                    result.kind = candidate.kind;
                    result.a.x = candidate.a.x;
                    result.a.y = candidate.a.y;
                    result.a.z = candidate.a.z;
                    result.b.x = candidate.b.x;
                    result.b.y = candidate.b.y;
                    result.b.z = candidate.b.z;
                }
            }
        }
    }
    return result;
}
