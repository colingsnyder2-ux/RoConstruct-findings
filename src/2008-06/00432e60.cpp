// from server: 100% by king_originala
// roc 2008-06 00432e60  unit: CMultiPlayerPane  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432e60
//
// 00432e60  83ec10               sub esp, 0x10
// 00432e63  53                   push ebx
// 00432e64  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00432e68  56                   push esi
// 00432e69  57                   push edi
// 00432e6a  33ff                 xor edi, edi
// 00432e6c  57                   push edi
// 00432e6d  68ea030000           push 0x3ea
// 00432e72  53                   push ebx
// 00432e73  8d442418             lea eax, [esp + 0x18]
// 00432e77  50                   push eax
// 00432e78  6800000050           push 0x50000000
// 00432e7d  57                   push edi
// 00432e7e  57                   push edi
// 00432e7f  8bf1                 mov esi, ecx
// 00432e81  897c2428             mov dword ptr [esp + 0x28], edi
// 00432e85  897c242c             mov dword ptr [esp + 0x2c], edi
// 00432e89  897c2430             mov dword ptr [esp + 0x30], edi
// 00432e8d  897c2434             mov dword ptr [esp + 0x34], edi
// 00432e91  e85cd82600           call 0x6a06f2
// 00432e96  85c0                 test eax, eax
// 00432e98  750b                 jne 0x432ea5
// 00432e9a  5f                   pop edi
// 00432e9b  5e                   pop esi
// 00432e9c  33c0                 xor eax, eax
// 00432e9e  5b                   pop ebx
// 00432e9f  83c410               add esp, 0x10
// 00432ea2  c20800               ret 8
// 00432ea5  e8b6e4fdff           call 0x411360
// 00432eaa  8bc8                 mov ecx, eax
// 00432eac  e811e12600           call 0x6a0fc2
// 00432eb1  57                   push edi
// 00432eb2  68eb030000           push 0x3eb
// 00432eb7  56                   push esi
// 00432eb8  8d4c2418             lea ecx, [esp + 0x18]
// 00432ebc  51                   push ecx
// 00432ebd  6800000050           push 0x50000000
// 00432ec2  894654               mov dword ptr [esi + 0x54], eax
// 00432ec5  897c2420             mov dword ptr [esp + 0x20], edi
// 00432ec9  897c2424             mov dword ptr [esp + 0x24], edi
// 00432ecd  897c2428             mov dword ptr [esp + 0x28], edi
// 00432ed1  897c242c             mov dword ptr [esp + 0x2c], edi
// 00432ed5  8b10                 mov edx, dword ptr [eax]
// 00432ed7  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00432eda  57                   push edi
// 00432edb  57                   push edi
// 00432edc  8bc8                 mov ecx, eax
// 00432ede  ffd2                 call edx
// 00432ee0  85c0                 test eax, eax
// 00432ee2  74b6                 je 0x432e9a
// 00432ee4  8b442424             mov eax, dword ptr [esp + 0x24]
// 00432ee8  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00432eeb  53                   push ebx
// 00432eec  50                   push eax
// 00432eed  e80ef9fdff           call 0x412800
// 00432ef2  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00432ef5  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00432ef8  57                   push edi
// 00432ef9  57                   push edi
// 00432efa  6864030000           push 0x364
// 00432eff  52                   push edx
// 00432f00  ff15142e8000         call dword ptr [0x802e14]
// 00432f06  5f                   pop edi
// 00432f07  5e                   pop esi
// 00432f08  b801000000           mov eax, 1
// 00432f0d  5b                   pop ebx
// 00432f0e  83c410               add esp, 0x10
// 00432f11  c20800               ret 8

struct Rect
{
    int left, top, right, bottom;
};

struct Pane;

struct PaneTable
{
    void* unused[23];
    int (__thiscall *create)(Pane*, const char*, const char*,
                            unsigned long, const Rect*, void*,
                            unsigned int, void*);
};

struct Pane
{
    PaneTable* table;
    char padding[28];
    void* window;

    void configure(void*, void*);
};

struct Manager
{
    Pane* getPane();
};

extern char* func_00411360();

extern "C" long (__stdcall *SendMessageA)(
    void*, unsigned int, unsigned int, long);

struct CMultiPlayerPane
{
    char padding[84];
    Pane* pane;

    int create(const char*, const char*, unsigned long,
               const Rect*, void*, unsigned int, void*);
    int initialize(void*, void*);
};

int CMultiPlayerPane::initialize(void* parent, void* context)
{
    Rect rect = { 0, 0, 0, 0 };

    if (!create(0, 0, 0x50000000, &rect, parent, 1002, 0))
        return 0;

    pane = reinterpret_cast<Manager*>(func_00411360())->getPane();

    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;

    if (!pane->table->create(pane, 0, 0, 0x50000000,
                             &rect, this, 1003, 0))
        return 0;

    pane->configure(context, parent);
    SendMessageA(pane->window, 0x364, 0, 0);
    return 1;
}
