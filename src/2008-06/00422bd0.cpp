// from server: 100% by king_originala
// roc 2008-06 00422bd0  unit: CRobloxTreeCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422bd0
//
// 00422bd0  6aff                 push -1
// 00422bd2  6848e97b00           push 0x7be948
// 00422bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00422bdd  50                   push eax
// 00422bde  64892500000000       mov dword ptr fs:[0], esp
// 00422be5  83ec08               sub esp, 8
// 00422be8  53                   push ebx
// 00422be9  8a99b8000000         mov bl, byte ptr [ecx + 0xb8]
// 00422bef  56                   push esi
// 00422bf0  8db1b8000000         lea esi, [ecx + 0xb8]
// 00422bf6  89742408             mov dword ptr [esp + 8], esi
// 00422bfa  885c240c             mov byte ptr [esp + 0xc], bl
// 00422bfe  c60601               mov byte ptr [esi], 1
// 00422c01  8b442420             mov eax, dword ptr [esp + 0x20]
// 00422c05  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00422c08  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00422c10  85c9                 test ecx, ecx
// 00422c12  7428                 je 0x422c3c
// 00422c14  8b11                 mov edx, dword ptr [ecx]
// 00422c16  8b4204               mov eax, dword ptr [edx + 4]
// 00422c19  6a01                 push 1
// 00422c1b  ffd0                 call eax
// 00422c1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00422c21  c70100000000         mov dword ptr [ecx], 0
// 00422c27  881e                 mov byte ptr [esi], bl
// 00422c29  5e                   pop esi
// 00422c2a  5b                   pop ebx
// 00422c2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00422c2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00422c36  83c414               add esp, 0x14
// 00422c39  c20800               ret 8
// 00422c3c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00422c40  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00422c44  c70200000000         mov dword ptr [edx], 0
// 00422c4a  881e                 mov byte ptr [esi], bl
// 00422c4c  5e                   pop esi
// 00422c4d  5b                   pop ebx
// 00422c4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00422c55  83c414               add esp, 0x14
// 00422c58  c20800               ret 8

struct Object
{
    virtual void slot0() = 0;
    virtual void action(int) = 0;
};

struct Notification
{
    char padding[0x34];
    Object* object;
};

struct RestoreFlag
{
    unsigned char* flag;
    unsigned char previous;

    RestoreFlag(unsigned char*);
    ~RestoreFlag();
};

inline RestoreFlag::RestoreFlag(unsigned char* p)
    : flag(p), previous(*p)
{
    *p = 1;
}

inline RestoreFlag::~RestoreFlag()
{
    *flag = previous;
}

struct CRobloxTreeCtrl
{
    char padding[0xb8];
    unsigned char flag;

    void func_00422bd0(Notification*, long*);
};

void CRobloxTreeCtrl::func_00422bd0(Notification* notification, long* result)
{
    RestoreFlag restore(&flag);
    Object* object = notification->object;
    if (object)
        object->action(1);
    *result = 0;
}
