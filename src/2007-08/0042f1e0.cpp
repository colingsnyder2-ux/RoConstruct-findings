// from server: 76% by colin
// roc 2007-08 0042f1e0  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f1e0
//
// 0042f1e0  51                   push ecx
// 0042f1e1  56                   push esi
// 0042f1e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042f1e6  83c148               add ecx, 0x48
// 0042f1e9  51                   push ecx
// 0042f1ea  8bce                 mov ecx, esi
// 0042f1ec  c744240800000000     mov dword ptr [esp + 8], 0
// 0042f1f4  ff1574dd7700         call dword ptr [0x77dd74]
// 0042f1fa  8bc6                 mov eax, esi
// 0042f1fc  5e                   pop esi
// 0042f1fd  59                   pop ecx
// 0042f1fe  c20400               ret 4

struct CMainFrame {
    char pad[0x48];
    void* field_48;
    void* sub_42f1e0(void* arg);
};

extern "C" void* __stdcall func_77dd74(void*, void*);

void* CMainFrame::sub_42f1e0(void* arg)
{
    void* local = 0;
    func_77dd74(&field_48, &local);
    return arg;
}
