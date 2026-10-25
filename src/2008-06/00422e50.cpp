// from server: 100% by king_originala
// roc 2008-06 00422e50  unit: CRobloxTreeCtrl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422e50
//
// 00422e50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00422e54  8b542404             mov edx, dword ptr [esp + 4]
// 00422e58  56                   push esi
// 00422e59  8bf1                 mov esi, ecx
// 00422e5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00422e5f  50                   push eax
// 00422e60  51                   push ecx
// 00422e61  52                   push edx
// 00422e62  8d4e54               lea ecx, [esi + 0x54]
// 00422e65  e826ae2b00           call 0x6ddc90
// 00422e6a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00422e6d  8d44240c             lea eax, [esp + 0xc]
// 00422e71  50                   push eax
// 00422e72  51                   push ecx
// 00422e73  ff15802d8000         call dword ptr [0x802d80]
// 00422e79  8b542410             mov edx, dword ptr [esp + 0x10]
// 00422e7d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00422e81  52                   push edx
// 00422e82  50                   push eax
// 00422e83  8bce                 mov ecx, esi
// 00422e85  e896f8ffff           call 0x422720
// 00422e8a  5e                   pop esi
// 00422e8b  c20c00               ret 0xc

struct Point {
    int x;
    int y;
};

extern "C" int (__stdcall *ClientToScreen)(void *, Point *);

struct Tree {
    void OnButton(unsigned int flags, Point point);
};

struct S {
    char padding0[0x20];
    void *window;
    char padding1[0x30];
    Tree tree;

    void OnButton(unsigned int flags, Point point);
    void ShowMenu(int x, int y);
};

void S::OnButton(unsigned int flags, Point point)
{
    tree.OnButton(flags, point);
    ClientToScreen(window, &point);
    ShowMenu(point.x, point.y);
}
