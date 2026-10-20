// from server: 89% by colin
// from server: 88% by king_originala
// roc 2008-06 00467030  unit: CSettingsDialog  size: 442 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467030
//
// 00467030  64a100000000         mov eax, dword ptr fs:[0]
// 00467036  6aff                 push -1
// 00467038  68d0357c00           push 0x7c35d0
// 0046703d  50                   push eax
// 0046703e  64892500000000       mov dword ptr fs:[0], esp
// 00467045  83ec28               sub esp, 0x28
// 00467048  57                   push edi
// 00467049  8bf9                 mov edi, ecx
// 0046704b  e83a9e2300           call 0x6a0e8a
// 00467050  85c0                 test eax, eax
// 00467052  7510                 jne 0x467064
// 00467054  5f                   pop edi
// 00467055  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00467059  64890d00000000       mov dword ptr fs:[0], ecx
// 00467060  83c434               add esp, 0x34
// 00467063  c3                   ret 
// 00467064  8b4774               mov eax, dword ptr [edi + 0x74]
// 00467067  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0046706d  56                   push esi
// 0046706e  6800e90000           push 0xe900
// 00467073  6800000050           push 0x50000000
// 00467078  6a02                 push 2
// 0046707a  8d7774               lea esi, [edi + 0x74]
// 0046707d  6a01                 push 1
// 0046707f  57                   push edi
// 00467080  8bce                 mov ecx, esi
// 00467082  ffd2                 call edx
// 00467084  85c0                 test eax, eax
// 00467086  7511                 jne 0x467099
// 00467088  5e                   pop esi
// 00467089  5f                   pop edi
// 0046708a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0046708e  64890d00000000       mov dword ptr fs:[0], ecx
// 00467095  83c434               add esp, 0x34
// 00467098  c3                   ret 
// 00467099  8b16                 mov edx, dword ptr [esi]
// 0046709b  55                   push ebp
// 0046709c  b8c8000000           mov eax, 0xc8
// 004670a1  33ed                 xor ebp, ebp
// 004670a3  55                   push ebp
// 004670a4  8bc8                 mov ecx, eax
// 004670a6  51                   push ecx
// 004670a7  50                   push eax
// 004670a8  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 004670ae  68acbd8100           push 0x81bdac
// 004670b3  55                   push ebp
// 004670b4  55                   push ebp
// 004670b5  8bce                 mov ecx, esi
// 004670b7  ffd0                 call eax
// 004670b9  85c0                 test eax, eax
// 004670bb  7512                 jne 0x4670cf
// 004670bd  5d                   pop ebp
// 004670be  5e                   pop esi
// 004670bf  5f                   pop edi
// 004670c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004670c4  64890d00000000       mov dword ptr fs:[0], ecx
// 004670cb  83c434               add esp, 0x34
// 004670ce  c3                   ret 
// 004670cf  53                   push ebx
// 004670d0  55                   push ebp
// 004670d1  55                   push ebp
// 004670d2  8bce                 mov ecx, esi
// 004670d4  e815a02300           call 0x6a10ee
// 004670d9  8d4c2410             lea ecx, [esp + 0x10]
// 004670dd  51                   push ecx
// 004670de  89878c010000         mov dword ptr [edi + 0x18c], eax
// 004670e4  e807201000           call 0x5690f0
// 004670e9  83c404               add esp, 4
// 004670ec  8b00                 mov eax, dword ptr [eax]
// 004670ee  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 004670f4  50                   push eax
// 004670f5  896c2444             mov dword ptr [esp + 0x44], ebp
// 004670f9  e852a9fbff           call 0x421a50
// 004670fe  8d4c2410             lea ecx, [esp + 0x10]
// 00467102  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0046710a  e851951900           call 0x600660
// 0046710f  8b9790010000         mov edx, dword ptr [edi + 0x190]
// 00467115  55                   push ebp
// 00467116  8d9f90010000         lea ebx, [edi + 0x190]
// 0046711c  6a01                 push 1
// 0046711e  55                   push ebp
// 0046711f  8bce                 mov ecx, esi
// 00467121  896c2434             mov dword ptr [esp + 0x34], ebp
// 00467125  896c2438             mov dword ptr [esp + 0x38], ebp
// 00467129  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0046712d  896c2440             mov dword ptr [esp + 0x40], ebp
// 00467131  8954241c             mov dword ptr [esp + 0x1c], edx
// 00467135  e8129f2300           call 0x6a104c
// 0046713a  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046713e  50                   push eax
// 0046713f  56                   push esi
// 00467140  8d442434             lea eax, [esp + 0x34]
// 00467144  50                   push eax
// 00467145  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0046714b  8bcb                 mov ecx, ebx
// 0046714d  ffd0                 call eax
// 0046714f  8d4c2410             lea ecx, [esp + 0x10]
// 00467153  51                   push ecx
// 00467154  e8971f1000           call 0x5690f0
// 00467159  83c404               add esp, 4
// 0046715c  8b08                 mov ecx, dword ptr [eax]
// 0046715e  c744244001000000     mov dword ptr [esp + 0x40], 1
// 00467166  3bcd                 cmp ecx, ebp
// 00467168  7407                 je 0x467171
// 0046716a  e841e2faff           call 0x4153b0
// 0046716f  8be8                 mov ebp, eax
// 00467171  8d4c2410             lea ecx, [esp + 0x10]
// 00467175  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0046717d  e8de941900           call 0x600660
// 00467182  55                   push ebp
// 00467183  8bcb                 mov ecx, ebx
// 00467185  e8c6b4fdff           call 0x442650
// 0046718a  68e9030000           push 0x3e9
// 0046718f  8bcf                 mov ecx, edi
// 00467191  e882a22300           call 0x6a1418
// 00467196  8b4020               mov eax, dword ptr [eax + 0x20]
// 00467199  8d542418             lea edx, [esp + 0x18]
// 0046719d  52                   push edx
// 0046719e  50                   push eax
// 0046719f  ff15342e8000         call dword ptr [0x802e34]
// 004671a5  8d4c2418             lea ecx, [esp + 0x18]
// 004671a9  51                   push ecx
// 004671aa  8bcf                 mov ecx, edi
// 004671ac  e8eba22300           call 0x6a149c
// 004671b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004671b5  8b542424             mov edx, dword ptr [esp + 0x24]
// 004671b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004671bd  6a01                 push 1
// 004671bf  2bd0                 sub edx, eax
// 004671c1  52                   push edx
// 004671c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 004671c6  2bd1                 sub edx, ecx
// 004671c8  52                   push edx
// 004671c9  50                   push eax
// 004671ca  51                   push ecx
// 004671cb  8bce                 mov ecx, esi
// 004671cd  e87a982300           call 0x6a0a4c
// 004671d2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004671d6  5b                   pop ebx
// 004671d7  5d                   pop ebp
// 004671d8  5e                   pop esi
// 004671d9  b801000000           mov eax, 1
// 004671de  5f                   pop edi
// 004671df  64890d00000000       mov dword ptr fs:[0], ecx
// 004671e6  83c434               add esp, 0x34
// 004671e9  c3                   ret 

struct Rect {
    int left, top, right, bottom;
};

struct Size {
    int cx, cy;
};

struct Model {
    void* getValue();
};

struct ModelRef {
    Model* p;
    void* control;
    ~ModelRef();
    void* getValue() const;
};

inline void* ModelRef::getValue() const
{
    return p ? p->getValue() : 0;
}

ModelRef getModel();
extern const char itemText[];
extern "C" __declspec(dllimport) int __stdcall GetWindowRect(void*, Rect*);

struct Dialog;
struct Window;

struct WindowTable {
    void* reserved[81];
    int (__thiscall* createChild)(Window*, const Rect*, Window*, unsigned);
    int (__thiscall* create)(Window*, Dialog*, unsigned, unsigned, unsigned, unsigned);
    int (__thiscall* addItem)(Window*, unsigned, unsigned, const char*, Size, unsigned);
};

struct Window {
    WindowTable* table;
    char reserved1[28];
    void* handle;
    char reserved2[244];

    unsigned getStyle(unsigned, unsigned, unsigned);
    Window* getItem(unsigned, unsigned);
    void setModel(Model*);
    void setValue(void*);
    void move(int, int, int, int, int);
};

struct Dialog {
    char reserved[116];
    Window list;
    Window* item;
    Window child;

    int initializeBase();
    Window* getControl(int);
    void screenToClient(Rect*);
    int initialize();
};

int Dialog::initialize()
{
    if (!initializeBase())
        return 0;

    if (!list.table->create(&list, this, 1, 2, 0x50000000, 0xe900))
        return 0;

    Size size = {200, 200};
    if (!list.table->addItem(&list, 0, 0, itemText, size, 0))
        return 0;

    item = list.getItem(0, 0);
    item->setModel(getModel().p);

    Rect empty = {0, 0, 0, 0};
    child.table->createChild(&child, &empty, &list, list.getStyle(0, 1, 0));

    void* value = getModel().getValue();
    child.setValue(value);

    Rect rect;
    void* handle = getControl(1001)->handle;
    GetWindowRect(handle, &rect);
    screenToClient(&rect);
    list.move(rect.left, rect.top,
              rect.right - rect.left, rect.bottom - rect.top, 1);
    return 1;
}
