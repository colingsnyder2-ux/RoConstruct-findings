// from server: 56% by atomic.potato
struct Str_00470270 { int words[8]; };

extern "C" void __stdcall str_ctor_00470270(Str_00470270* out, Str_00470270* src);

struct X_00470270 {
    char pad[0x3c];
    Str_00470270 value;
    Str_00470270* copy(Str_00470270* out);
};

struct StrIter {
    int* first;
    int* last;
};

struct Str {
    char pad[0x10];
    StrIter begin();
    StrIter end();
    ~Str();
};

extern "C" int __stdcall tolower(int c);

struct MapEntry {
    int key;
    int value;
};

struct Map {
    char pad[0x5c];
    MapEntry* find(int* key);
};

struct LDraw2RobloxColorMap {
    char pad[0x5c];
    Map map;
    int f(int arg);
};

int LDraw2RobloxColorMap::f(int arg)
{
    Str_00470270 local;
    Str s;
    StrIter it1;
    StrIter it2;
    StrIter it3;
    int key;
    int v1, v2, v3, v4;
    MapEntry* e;
    int* p;

    ((X_00470270*)&s)->copy(&local);

    it1 = s.begin();
    v1 = it1.first[0];
    v2 = it1.first[1];

    it2 = s.end();
    v3 = it2.first[0];
    v4 = it2.first[1];

    it3 = s.begin();
    key = it3.first[0];
    p = it3.first;

    char c = 0;
    int k = *(int*)&c;

    extern int g_89e8f0;
    extern int g_89e4e4;
    extern int g_89e4e8;

    int result = ((int (__cdecl*)(int*, int, int, int, int, int, int, int))0x4706f0)(
        &key, v1, v2, v3, v4, g_89e8f0, arg, k);

    e = map.find(&key);
    if (e) {
        ((void (__thiscall*)(MapEntry*, int))e->value)(e, 1);
    }

    MapEntry* slot = ((MapEntry* (__thiscall*)(Map*, int*))0x470e10)(&map, &key);
    slot->key = arg;

    s.~Str();
    return 0;
}
