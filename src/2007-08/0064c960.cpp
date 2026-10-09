// from server: 70% by colin
// roc 2007-08 0064c960  unit: CXTPImageManagerIconSet  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064c960
//
// 0064c960  8bd1                 mov edx, ecx
// 0064c962  8d8a90000000         lea ecx, [edx + 0x90]
// 0064c968  e893bcffff           call 0x648600
// 0064c96d  85c0                 test eax, eax
// 0064c96f  7505                 jne 0x64c976
// 0064c971  8bc1                 mov eax, ecx
// 0064c973  c20400               ret 4
// 0064c976  56                   push esi
// 0064c977  8db2a0000000         lea esi, [edx + 0xa0]
// 0064c97d  8bce                 mov ecx, esi
// 0064c97f  e87cbcffff           call 0x648600
// 0064c984  85c0                 test eax, eax
// 0064c986  7412                 je 0x64c99a
// 0064c988  837c240800           cmp dword ptr [esp + 8], 0
// 0064c98d  740b                 je 0x64c99a
// 0064c98f  6aff                 push -1
// 0064c991  6aff                 push -1
// 0064c993  8bca                 mov ecx, edx
// 0064c995  e826f5ffff           call 0x64bec0
// 0064c99a  8bc6                 mov eax, esi
// 0064c99c  5e                   pop esi
// 0064c99d  c20400               ret 4

struct CXTPImageManagerIconSet {
    char pad0[0x90];
    int field90;
    char pad1[0x0c];
    int fieldA0;
    int sub_648600();
    void sub_64BEC0(int, int);
    int GetIcon(int);
};

int CXTPImageManagerIconSet::GetIcon(int arg)
{
    int r = field90 ? 0 : 0;
    int *p90 = &field90;
    int *pA0 = &fieldA0;
    int v;

    v = ((CXTPImageManagerIconSet *)((char *)this + 0x90))->sub_648600();
    if (v == 0)
        return (int)((char *)this + 0x90);

    v = ((CXTPImageManagerIconSet *)((char *)this + 0xa0))->sub_648600();
    if (v != 0 && arg != 0)
        sub_64BEC0(-1, -1);

    return (int)((char *)this + 0xa0);
}
