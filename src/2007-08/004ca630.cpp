// from server: 79% by colin
extern int G1;
extern int G2;
extern void* G3;

void sub_4ca570(void* p);
extern "C" void __cdecl sub_62fc62(void* p);

void sub_4ca630()
{
    if (G1 > 0)
    {
        if (--G1 == 0)
        {
            void* p = G3;
            if (p != 0)
            {
                sub_4ca570(p);
                sub_62fc62(p);
            }
            G3 = 0;
        }
    }
}
