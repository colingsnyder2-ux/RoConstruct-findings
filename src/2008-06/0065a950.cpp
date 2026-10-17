// from server: 30% by colin
struct Vector3i {
    int x, y, z;
};

struct Geometry;

struct Primitive {
    char pad[0x20];
    unsigned short getSurfaceType();
};

struct BallBallContact {
    char pad[0x64];
    Primitive* p0;
    Vector3i min;
    Vector3i max;
    char pad2[0x80 - 0x74];
    void* connectors;
    int connectorCount;
    int connectorCapacity;
    int field84;

    void deleteAllConnectors();
    bool computeIsColliding(float);
    bool stepContact();
    void generateDataForMovingAssemblyStage();
};

extern "C" void __cdecl sub_659510(unsigned short, void*, void*, void*);
extern "C" void __cdecl sub_6595D0(void*, void*, void*);
extern "C" void __cdecl sub_65A5D0(BallBallContact*, unsigned short, void*, void*, void*);
extern "C" void __cdecl sub_65A870(BallBallContact*, void*);
extern "C" void __cdecl sub_65A080(BallBallContact*, void*);
extern "C" void __cdecl sub_599A70(void*, int, int);
extern "C" void __cdecl sub_59A190(void*, void*);
extern "C" void* __cdecl sub_5E7BD0(Geometry*);
extern "C" void* __cdecl sub_5E7BE0(Geometry*, void*);
extern "C" void __cdecl sub_60CC00(void*, void*, void*);

void BallBallContact::generateDataForMovingAssemblyStage()
{
    Primitive* prim = p0;
    unsigned short surfaceType = prim->getSurfaceType();

    Vector3i newMin;
    Vector3i newMax;
    newMin.x = 0; newMin.y = 0; newMin.z = 0;
    newMax.x = 0; newMax.y = 0; newMax.z = 0;

    sub_659510(surfaceType, prim, &newMin, &newMax);

    if (min.x == newMin.x && min.y == newMin.y && min.z == newMin.z &&
        max.x == newMax.x && max.y == newMax.y && max.z == newMax.z)
    {
        return;
    }

    Vector3i oldMin = min;
    Vector3i oldMax = max;

    min = newMin;
    max = newMax;

    if (oldMin.x <= min.x && oldMin.y <= min.y && oldMin.z <= min.z &&
        oldMax.x >= max.x && oldMax.y >= max.y && oldMax.z >= max.z)
    {
        sub_6595D0(&oldMin, &oldMax, &min);
        sub_65A5D0(this, surfaceType, &oldMin, &oldMax, &min);
        sub_65A870(this, &min);
        return;
    }

    sub_65A5D0(this, surfaceType, &oldMin, &oldMax, &min);
    sub_65A870(this, &min);
    sub_65A5D0(this, surfaceType, &oldMin, &oldMax, &min);
}

void BallBallContact::deleteAllConnectors()
{
    while (connectors)
    {
        sub_65A080(this, connectors);
    }

    min.x = 0x7fffffff;
    min.y = 0x7fffffff;
    min.z = 0x7fffffff;
    max.x = 0x80000001;
    max.y = 0x80000001;
    max.z = 0x80000001;

    sub_599A70(&connectors, 0, 1);

    Geometry* geom = (Geometry*)sub_5E7BD0((Geometry*)this);
    while (geom)
    {
        void* edge;
        if (this == *(void**)((char*)geom + 0xc))
            edge = *(void**)((char*)geom + 0x10);
        else
            edge = *(void**)((char*)geom + 0xc);

        geom = (Geometry*)sub_5E7BE0((Geometry*)this, geom);

        int count = connectorCount;
        if (count < connectorCapacity)
        {
            void** arr = (void**)connectors;
            if (arr)
                arr[count] = edge;
            connectorCount++;
        }
        else
        {
            sub_59A190(&connectors, &edge);
        }
    }

    for (int i = 0; i < field84; ++i)
    {
        void** arr = (void**)connectors;
        sub_60CC00(*(void**)((char*)this + 8), arr[i], this);
    }
}
