// from server: 91% by atomic.potato
typedef unsigned int DWORD;

extern DWORD g_table[1];

struct SpecialShape
{
    DWORD __cdecl f(DWORD index);
};

DWORD __cdecl SpecialShape::f(DWORD index)
{
    return g_table[index];
}
