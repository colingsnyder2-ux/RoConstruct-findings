// from server: 37% by colin
extern int G1_008c8c70;
extern int G1_008c8808;
extern int G1_008b5188;

void G1_func_00668540();
void G1_func_00630d23();

void G1_func_00668f70()
{
    if (!(G1_008c8c70 & 1))
    {
        G1_008c8c70 |= 1;
        G1_func_00668540();
        G1_func_00630d23();
    }
}
