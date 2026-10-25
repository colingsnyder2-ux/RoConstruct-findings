// from server: 100% by tester
// roc 2008-06 006663f0  unit: RBX::PartDragTool  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006663f0
//
// 006663f0  c70138cc8400         mov dword ptr [ecx], 0x84cc38
// 006663f6  c7410430cc8400       mov dword ptr [ecx + 4], 0x84cc30
// 006663fd  e9bed1fdff           jmp 0x6435c0

struct First {
    virtual ~First();
};

struct Second {
    virtual ~Second();
};

struct Base : First, Second {
    ~Base();
};

struct Tool : Base {
    ~Tool();
};

Tool::~Tool()
{
}
