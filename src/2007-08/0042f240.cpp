// from server: 50% by colin
// roc 2007-08 0042f240  unit: CMainFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f240
//
// 0042f240  51                   push ecx
// 0042f241  56                   push esi
// 0042f242  8bf1                 mov esi, ecx
// 0042f244  57                   push edi
// 0042f245  8d7e40               lea edi, [esi + 0x40]
// 0042f248  8bcf                 mov ecx, edi
// 0042f24a  c744240800000000     mov dword ptr [esp + 8], 0
// 0042f252  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0042f258  84c0                 test al, al
// 0042f25a  8d4644               lea eax, [esi + 0x44]
// 0042f25d  7502                 jne 0x42f261
// 0042f25f  8bc7                 mov eax, edi
// 0042f261  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042f265  50                   push eax
// 0042f266  8bce                 mov ecx, esi
// 0042f268  ff1574dd7700         call dword ptr [0x77dd74]
// 0042f26e  5f                   pop edi
// 0042f26f  8bc6                 mov eax, esi
// 0042f271  5e                   pop esi
// 0042f272  59                   pop ecx
// 0042f273  c20400               ret 4

struct CMainFrame {
    char pad[0x40];
    int field_40;
    int field_44;
    CMainFrame* m(int);
};

extern "C" int __stdcall sub_77dcd0();
extern "C" int __stdcall sub_77dd74(int, void*);

CMainFrame* CMainFrame::m(int a)
{
    int local = 0;
    int* p = &field_40;
    if (sub_77dcd0() != 0)
        p = &field_44;
    sub_77dd74(a, p);
    return (CMainFrame*)a;
}
