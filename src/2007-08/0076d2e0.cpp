// from server: 98% by colin
extern "C" int __stdcall sub_004018d0(int);
extern "C" void __cdecl sub_00630d23(void*);

extern int G_008bae44;
extern int G_008bbd54;
extern int G_008bbd58;
extern char G_008bbe98;
extern char G_008bbd64;

void sub_0076d2e0()
{
    G_008bae44 = (int)&G_008bbd54;
    if (sub_004018d0((int)&G_008bbd64) < 0)
    {
        G_008bbe98 = 1;
    }
    else
    {
        G_008bbd58 = 0x24;
    }
    G_008bbd54 = 0x790778;
    sub_00630d23((void*)0x777d60);
}
