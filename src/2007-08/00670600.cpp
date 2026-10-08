// from server: 81% by colin
// roc 2007-08 00670600  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670600
//
// 00670600  83b96c01000000       cmp dword ptr [ecx + 0x16c], 0
// 00670607  7415                 je 0x67061e
// 00670609  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 0067060f  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00670615  6a01                 push 1
// 00670617  50                   push eax
// 00670618  e85354fdff           call 0x645a70
// 0067061d  c3                   ret 
// 0067061e  e92d9cfcff           jmp 0x63a250

struct CXTPToolBar {
    char pad0[0x80];
    int field80;
    char pad1[0xfc - 0x84];
    int fieldfc;
    char pad2[0x16c - 0x100];
    int field16c;
    void Expand();
};

extern "C" void __cdecl sub_63a250();
extern "C" void __stdcall sub_645a70(int, int);

void CXTPToolBar::Expand()
{
    if (field16c != 0)
    {
        sub_645a70(field80, fieldfc);
    }
    else
    {
        sub_63a250();
    }
}
