// from server: 51% by colin
// roc 2007-03 0061d430  unit: seg_00610000  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061d430

extern "C" int __cdecl sub_611c10(int);
extern "C" int __cdecl sub_612c40(int, int);
extern "C" int __cdecl sub_612490(int, int, int);
extern "C" int __cdecl sub_6127f0(int, int);
extern "C" float __cdecl sub_61c830(int, int);
extern "C" int __cdecl sub_5b5f30(float*, float*);
extern "C" int __cdecl sub_611e70(int, int);
extern "C" int __cdecl sub_611fa0(int, int);
extern "C" int __cdecl sub_5b6090(int*, int);
extern "C" int __cdecl sub_5a8d90(int, int);
extern "C" int __cdecl sub_611eb0(int, int);
extern "C" int __cdecl sub_612010(int, int, int);
extern "C" int __cdecl sub_5b5cb0(int*, int);
extern "C" int __cdecl sub_6115b0(int, int, int);
extern "C" int __cdecl sub_5b62e0(float*, int);

extern int g_95b1c4;
extern int g_95b1bc;

struct LuaArguments {
    int f(int a);
};

int LuaArguments::f(int a)
{
    int n = sub_611c10(a);
    int v10 = n;
    int v14 = 4;
    int *p = &v10;
    if (n >= 4)
        p = &v14;
    int count = *p;

    if (count != 0)
    {
        int *r = (int*)sub_612c40(a, 4);
        if (r)
            *r = 0xc2;
        sub_612490(a, -10000, g_95b1c4);
        sub_6127f0(a, -2);

        float f18 = 0.0f;
        float f1c = 0.0f;
        float f20 = 0.0f;
        float f24 = 1.0f;
        int i = 0;
        if (count > 0)
        {
            do
            {
                int next = i + 1;
                float v = sub_61c830(a, next);
                (&f20)[i] = v;
                i = next;
            } while (i < count);
        }

        float args[4];
        args[0] = f18;
        args[1] = f1c;
        args[2] = f20;
        args[3] = f24;
        int *res = (int*)sub_5b5f30(args, &f20);
        int val = *res;

        int *r2 = (int*)sub_612c40(a, 4);
        if (r2)
            *r2 = val;
        sub_612490(a, -10000, g_95b1c4);
        sub_6127f0(a, -2);
        return 1;
    }

    if (count != 1)
    {
        int r = sub_611e70(a, count);
        if (r)
        {
            int x = sub_611fa0(a, count);
            int *q = (int*)sub_5b6090(&x, x);
            sub_5a8d90(a, *q);
            return count;
        }
        int r2 = sub_611eb0(a, count);
        if (r2)
        {
            int x = sub_612010(a, 1, 0);
            int *q = (int*)sub_5b5cb0(&x, x);
            sub_5a8d90(a, *q);
            return 1;
        }
        float *v = (float*)sub_6115b0(a, 1, g_95b1bc);
        float args[3];
        args[0] = v[0];
        args[1] = v[1];
        args[2] = v[2];
        int *q = (int*)sub_5b62e0(args, 0);
        sub_5a8d90(a, *q);
        return 1;
    }

    return 0;
}
