// from server: 66% by colin
// roc 2007-08 0042f210  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f210
//
// 0042f210  51                   push ecx
// 0042f211  56                   push esi
// 0042f212  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042f216  83c144               add ecx, 0x44
// 0042f219  51                   push ecx
// 0042f21a  8bce                 mov ecx, esi
// 0042f21c  c744240800000000     mov dword ptr [esp + 8], 0
// 0042f224  ff1574dd7700         call dword ptr [0x77dd74]
// 0042f22a  8bc6                 mov eax, esi
// 0042f22c  5e                   pop esi
// 0042f22d  59                   pop ecx
// 0042f22e  c20400               ret 4

struct CMainFrame {
    char pad[0x44];
    int field;
    void* f(void* p);
};

extern "C" void* __stdcall sub_77dd74(void*, void*);

void* CMainFrame::f(void* p)
{
    sub_77dd74(p, (char*)this + 0x44);
    return p;
}
