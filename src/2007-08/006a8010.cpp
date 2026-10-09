// from server: 77% by colin
// roc 2007-08 006a8010  unit: CXTPRibbonBar  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8010
//
// 006a8010  56                   push esi
// 006a8011  8bf1                 mov esi, ecx
// 006a8013  83c8ff               or eax, 0xffffffff
// 006a8016  0bc8                 or ecx, eax
// 006a8018  51                   push ecx
// 006a8019  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 006a801f  50                   push eax
// 006a8020  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a8023  50                   push eax
// 006a8024  81c178010000         add ecx, 0x178
// 006a802a  e8c16b0500           call 0x6febf0
// 006a802f  83be7402000000       cmp dword ptr [esi + 0x274], 0
// 006a8036  741a                 je 0x6a8052
// 006a8038  8b16                 mov edx, dword ptr [esi]
// 006a803a  8b829c010000         mov eax, dword ptr [edx + 0x19c]
// 006a8040  6a01                 push 1
// 006a8042  6a00                 push 0
// 006a8044  8bce                 mov ecx, esi
// 006a8046  c7867402000000000000 mov dword ptr [esi + 0x274], 0
// 006a8050  ffd0                 call eax
// 006a8052  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a8056  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a805a  8b442408             mov eax, dword ptr [esp + 8]
// 006a805e  51                   push ecx
// 006a805f  52                   push edx
// 006a8060  50                   push eax
// 006a8061  8bce                 mov ecx, esi
// 006a8063  e8b8edf9ff           call 0x646e20
// 006a8068  5e                   pop esi
// 006a8069  c20c00               ret 0xc

struct CXTPRibbonBar
{
    void sub_6febf0(int, int, int);
    void sub_646e20(int, int, int);
    void func_006a8010(int, int, int);
};

void CXTPRibbonBar::func_006a8010(int a1, int a2, int a3)
{
    int* p = *(int**)((char*)this + 0x264);
    p = (int*)((char*)p + 0x178);
    ((void (__thiscall*)(int*, int, int, int))0x6febf0)(p, *(int*)((char*)this + 0x20), -1, -1);

    if (*(int*)((char*)this + 0x274) != 0)
    {
        void (__thiscall* fn)(CXTPRibbonBar*, int, int) = *(void (__thiscall**)(CXTPRibbonBar*, int, int))(*(int*)this + 0x19c);
        *(int*)((char*)this + 0x274) = 0;
        fn(this, 0, 1);
    }

    ((void (__thiscall*)(CXTPRibbonBar*, int, int, int))0x646e20)(this, a1, a2, a3);
}
