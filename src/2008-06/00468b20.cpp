// from server: 100% by colin
// roc 2008-06 00468b20  unit: DxUserInput  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00468b20
//
// 00468b20  6aff                 push -1
// 00468b22  6818377c00           push 0x7c3718
// 00468b27  64a100000000         mov eax, dword ptr fs:[0]
// 00468b2d  50                   push eax
// 00468b2e  64892500000000       mov dword ptr fs:[0], esp
// 00468b35  83ec10               sub esp, 0x10
// 00468b38  56                   push esi
// 00468b39  57                   push edi
// 00468b3a  8bf1                 mov esi, ecx
// 00468b3c  8d7e34               lea edi, [esi + 0x34]
// 00468b3f  57                   push edi
// 00468b40  897c240c             mov dword ptr [esp + 0xc], edi
// 00468b44  ff15d4228000         call dword ptr [0x8022d4]
// 00468b4a  c644240c01           mov byte ptr [esp + 0xc], 1
// 00468b4f  80be9201000000       cmp byte ptr [esi + 0x192], 0
// 00468b56  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00468b5e  7418                 je 0x468b78
// 00468b60  8d442410             lea eax, [esp + 0x10]
// 00468b64  50                   push eax
// 00468b65  8bce                 mov ecx, esi
// 00468b67  e864efffff           call 0x467ad0
// 00468b6c  8d4c2410             lea ecx, [esp + 0x10]
// 00468b70  51                   push ecx
// 00468b71  8bce                 mov ecx, esi
// 00468b73  e8e8feffff           call 0x468a60
// 00468b78  57                   push edi
// 00468b79  ff15f4218000         call dword ptr [0x8021f4]
// 00468b7f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00468b83  5f                   pop edi
// 00468b84  5e                   pop esi
// 00468b85  64890d00000000       mov dword ptr fs:[0], ecx
// 00468b8c  83c41c               add esp, 0x1c
// 00468b8f  c3                   ret 

// DxUserInput  00468b20
extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void*);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void*);

struct Point {
    float x;
    float y;
};

struct Lock {
    void* section;
    bool locked;
    Lock(void*);
    ~Lock();
};

inline Lock::Lock(void* p) : section(p)
{
    EnterCriticalSection(section);
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        LeaveCriticalSection(section);
}

struct S {
    unsigned char reserved[0x34];
    unsigned char section[0x18];
    unsigned char gap[0x146];
    bool enabled;

    Point getPoint();
    void setPoint(const Point&);
    void f();
};

void S::f()
{
    Lock lock(section);
    if (enabled) {
        Point point = getPoint();
        setPoint(point);
    }
}