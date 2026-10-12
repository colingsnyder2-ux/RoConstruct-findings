// from server: 83% by king_originala
// roc 2008-06 0043b390  unit: G3D::VColor3::?$XItem  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b390
//
// 0043b390  56                   push esi
// 0043b391  8b742410             mov esi, dword ptr [esp + 0x10]
// 0043b395  57                   push edi
// 0043b396  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043b39a  3bf7                 cmp esi, edi
// 0043b39c  7424                 je 0x43b3c2
// 0043b39e  8bff                 mov edi, edi
// 0043b3a0  8bce                 mov ecx, esi
// 0043b3a2  ff54242c             call dword ptr [esp + 0x2c]
// 0043b3a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043b3aa  8d4c2434             lea ecx, [esp + 0x34]
// 0043b3ae  51                   push ecx
// 0043b3af  50                   push eax
// 0043b3b0  8b442430             mov eax, dword ptr [esp + 0x30]
// 0043b3b4  8d0c10               lea ecx, [eax + edx]
// 0043b3b7  ff542428             call dword ptr [esp + 0x28]
// 0043b3bb  83c608               add esi, 8
// 0043b3be  3bf7                 cmp esi, edi
// 0043b3c0  75de                 jne 0x43b3a0
// 0043b3c2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0043b3c6  d9442434             fld dword ptr [esp + 0x34]
// 0043b3ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043b3ce  8b542424             mov edx, dword ptr [esp + 0x24]
// 0043b3d2  8908                 mov dword ptr [eax], ecx
// 0043b3d4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043b3d8  895004               mov dword ptr [eax + 4], edx
// 0043b3db  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0043b3df  894808               mov dword ptr [eax + 8], ecx
// 0043b3e2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0043b3e6  89500c               mov dword ptr [eax + 0xc], edx
// 0043b3e9  894810               mov dword ptr [eax + 0x10], ecx
// 0043b3ec  d95814               fstp dword ptr [eax + 0x14]
// 0043b3ef  d9442438             fld dword ptr [esp + 0x38]
// 0043b3f3  5f                   pop edi
// 0043b3f4  d95818               fstp dword ptr [eax + 0x18]
// 0043b3f7  5e                   pop esi
// 0043b3f8  d9442434             fld dword ptr [esp + 0x34]
// 0043b3fc  d9581c               fstp dword ptr [eax + 0x1c]
// 0043b3ff  c3                   ret 

typedef int (__thiscall *Getter)(void*);
typedef void (__thiscall *Consumer)(void*, int, float*);

struct Iterator {
    int unused;
    char* current;
};

struct Functor {
    Consumer consume;
    char* object;
    int adjustment;
    Getter get;
    int unused;
    float x;
    float y;
    float z;
};

Functor __cdecl apply(Iterator first, Iterator last, Functor action)
{
    char* current = first.current;
    char* end = last.current;
    for (; current != end; current += 8) {
        int value = action.get(current);
        action.consume(action.object + action.adjustment, value, &action.x);
    }

    Functor result;
    result.consume = action.consume;
    result.object = action.object;
    result.adjustment = action.adjustment;
    result.get = action.get;
    result.unused = action.unused;
    result.x = action.x;
    result.y = action.y;
    result.z = action.z;
    return result;
}
