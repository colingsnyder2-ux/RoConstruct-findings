// from server: 100% by colin
// roc 2007-08 0063d710  unit: CXTPPaintManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d710
//
// 0063d710  8b442404             mov eax, dword ptr [esp + 4]
// 0063d714  83b8f400000000       cmp dword ptr [eax + 0xf4], 0
// 0063d71b  7506                 jne 0x63d723
// 0063d71d  8b4178               mov eax, dword ptr [ecx + 0x78]
// 0063d720  c20400               ret 4
// 0063d723  8b4174               mov eax, dword ptr [ecx + 0x74]
// 0063d726  c20400               ret 4

struct Arg { char pad[0xf4]; int flag; };

struct CXTPPaintManager {
    char pad0[0x74];
    int m_74;
    int m_78;
    int m(Arg* a);
};

int CXTPPaintManager::m(Arg* a)
{
    if (a->flag == 0)
        return m_78;
    return m_74;
}
