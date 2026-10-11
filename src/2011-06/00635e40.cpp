// from server: 87% by colin
// roc-flags: /O2 /Oy- /GS- /EHsc /MD
struct Counted { Counted(int arg); virtual ~Counted(); int m_use; int m_weak; int m_arg; char m_pad[4]; };
Counted::Counted(int arg) : m_use(1), m_weak(1), m_arg(arg) {}
struct Holder { Counted* m_p; ~Holder(){ delete m_p; } };
struct X { Holder m_h; X(int arg, int b); };
X::X(int arg, int b) : m_h() { m_h.m_p = 0; m_h.m_p = new Counted(arg); }
