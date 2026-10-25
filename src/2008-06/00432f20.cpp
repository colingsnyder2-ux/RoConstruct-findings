// from server: 100% by king_originala
// roc 2008-06 00432f20  unit: CMultiPlayerPane  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432f20
//
// 00432f20  837c240401           cmp dword ptr [esp + 4], 1
// 00432f25  56                   push esi
// 00432f26  8bf1                 mov esi, ecx
// 00432f28  741c                 je 0x432f46
// 00432f2a  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00432f2d  85c9                 test ecx, ecx
// 00432f2f  7415                 je 0x432f46
// 00432f31  8b442410             mov eax, dword ptr [esp + 0x10]
// 00432f35  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00432f39  6a01                 push 1
// 00432f3b  50                   push eax
// 00432f3c  52                   push edx
// 00432f3d  6a00                 push 0
// 00432f3f  6a00                 push 0
// 00432f41  e806db2600           call 0x6a0a4c
// 00432f46  8bce                 mov ecx, esi
// 00432f48  e81bdd2600           call 0x6a0c68
// 00432f4d  5e                   pop esi
// 00432f4e  c20c00               ret 0xc

struct ChildWindow
{
    void __thiscall MoveWindow(int x, int y, int width, int height, int repaint);
};

struct CMultiPlayerPane
{
    char reserved[0x54];
    ChildWindow* child;

    void __thiscall UpdateLayout();
    void __thiscall OnSize(unsigned int type, int width, int height);
};

void CMultiPlayerPane::OnSize(unsigned int type, int width, int height)
{
    if (type != 1 && child)
        child->MoveWindow(0, 0, width, height, 1);

    UpdateLayout();
}
