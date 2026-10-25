// from server: 100% by king_originala
// roc 2008-06 005c9440  unit: RBX::LaserTool  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9440
//
// 005c9440  6aff                 push -1
// 005c9442  6879517d00           push 0x7d5179
// 005c9447  64a100000000         mov eax, dword ptr fs:[0]
// 005c944d  50                   push eax
// 005c944e  64892500000000       mov dword ptr fs:[0], esp
// 005c9455  83ec1c               sub esp, 0x1c
// 005c9458  55                   push ebp
// 005c9459  56                   push esi
// 005c945a  57                   push edi
// 005c945b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c9463  dd44243c             fld qword ptr [esp + 0x3c]
// 005c9467  8b8958010000         mov ecx, dword ptr [ecx + 0x158]
// 005c946d  83ec08               sub esp, 8
// 005c9470  8d442418             lea eax, [esp + 0x18]
// 005c9474  dd1c24               fstp qword ptr [esp]
// 005c9477  50                   push eax
// 005c9478  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005c9480  e89bacffff           call 0x5c4120
// 005c9485  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005c9489  6a03                 push 3
// 005c948b  8bcf                 mov ecx, edi
// 005c948d  e8ae07fcff           call 0x589c40
// 005c9492  dd442418             fld qword ptr [esp + 0x18]
// 005c9496  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005c9499  dd5c243c             fstp qword ptr [esp + 0x3c]
// 005c949d  2b4f0c               sub ecx, dword ptr [edi + 0xc]
// 005c94a0  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005c94a6  c1f903               sar ecx, 3
// 005c94a9  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005c94b1  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005c94b9  85c9                 test ecx, ecx
// 005c94bb  7702                 ja 0x5c94bf
// 005c94bd  ffd5                 call ebp
// 005c94bf  8b770c               mov esi, dword ptr [edi + 0xc]
// 005c94c2  e84938faff           call 0x56cd10
// 005c94c7  8906                 mov dword ptr [esi], eax
// 005c94c9  6a10                 push 0x10
// 005c94cb  83c604               add esi, 4
// 005c94ce  e84d740d00           call 0x6a0920
// 005c94d3  83c404               add esp, 4
// 005c94d6  85c0                 test eax, eax
// 005c94d8  740f                 je 0x5c94e9
// 005c94da  dd44243c             fld qword ptr [esp + 0x3c]
// 005c94de  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 005c94e4  dd5808               fstp qword ptr [eax + 8]
// 005c94e7  eb02                 jmp 0x5c94eb
// 005c94e9  33c0                 xor eax, eax
// 005c94eb  8d54243c             lea edx, [esp + 0x3c]
// 005c94ef  8bc8                 mov ecx, eax
// 005c94f1  3bd6                 cmp edx, esi
// 005c94f3  7404                 je 0x5c94f9
// 005c94f5  8b0e                 mov ecx, dword ptr [esi]
// 005c94f7  8906                 mov dword ptr [esi], eax
// 005c94f9  85c9                 test ecx, ecx
// 005c94fb  7408                 je 0x5c9505
// 005c94fd  8b01                 mov eax, dword ptr [ecx]
// 005c94ff  8b10                 mov edx, dword ptr [eax]
// 005c9501  6a01                 push 1
// 005c9503  ffd2                 call edx
// 005c9505  8b4710               mov eax, dword ptr [edi + 0x10]
// 005c9508  dd442410             fld qword ptr [esp + 0x10]
// 005c950c  2b470c               sub eax, dword ptr [edi + 0xc]
// 005c950f  dd5c243c             fstp qword ptr [esp + 0x3c]
// 005c9513  c1f803               sar eax, 3
// 005c9516  83f801               cmp eax, 1
// 005c9519  7702                 ja 0x5c951d
// 005c951b  ffd5                 call ebp
// 005c951d  8b770c               mov esi, dword ptr [edi + 0xc]
// 005c9520  83c608               add esi, 8
// 005c9523  e8e837faff           call 0x56cd10
// 005c9528  8906                 mov dword ptr [esi], eax
// 005c952a  6a10                 push 0x10
// 005c952c  83c604               add esi, 4
// 005c952f  e8ec730d00           call 0x6a0920
// 005c9534  83c404               add esp, 4
// 005c9537  85c0                 test eax, eax
// 005c9539  740f                 je 0x5c954a
// 005c953b  dd44243c             fld qword ptr [esp + 0x3c]
// 005c953f  c7001ce28200         mov dword ptr [eax], 0x82e21c
// 005c9545  dd5808               fstp qword ptr [eax + 8]
// 005c9548  eb02                 jmp 0x5c954c
// 005c954a  33c0                 xor eax, eax
// 005c954c  8d54243c             lea edx, [esp + 0x3c]
// 005c9550  8bc8                 mov ecx, eax
// 005c9552  3bd6                 cmp edx, esi
// 005c9554  7404                 je 0x5c955a
// 005c9556  8b0e                 mov ecx, dword ptr [esi]
// 005c9558  8906                 mov dword ptr [esi], eax
// 005c955a  85c9                 test ecx, ecx
// 005c955c  7408                 je 0x5c9566
// 005c955e  8b01                 mov eax, dword ptr [ecx]
// 005c9560  8b10                 mov edx, dword ptr [eax]
// 005c9562  6a01                 push 1
// 005c9564  ffd2                 call edx
// 005c9566  8b4710               mov eax, dword ptr [edi + 0x10]
// 005c9569  2b470c               sub eax, dword ptr [edi + 0xc]
// 005c956c  c1f803               sar eax, 3
// 005c956f  83f802               cmp eax, 2
// 005c9572  7702                 ja 0x5c9576
// 005c9574  ffd5                 call ebp
// 005c9576  8b770c               mov esi, dword ptr [edi + 0xc]
// 005c9579  83c610               add esi, 0x10
// 005c957c  e83f36faff           call 0x56cbc0
// 005c9581  8906                 mov dword ptr [esi], eax
// 005c9583  6a08                 push 8
// 005c9585  83c604               add esi, 4
// 005c9588  e893730d00           call 0x6a0920
// 005c958d  83c404               add esp, 4
// 005c9590  85c0                 test eax, eax
// 005c9592  740f                 je 0x5c95a3
// 005c9594  c700cc068100         mov dword ptr [eax], 0x8106cc
// 005c959a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005c959e  894804               mov dword ptr [eax + 4], ecx
// 005c95a1  eb02                 jmp 0x5c95a5
// 005c95a3  33c0                 xor eax, eax
// 005c95a5  8d54243c             lea edx, [esp + 0x3c]
// 005c95a9  8bc8                 mov ecx, eax
// 005c95ab  3bd6                 cmp edx, esi
// 005c95ad  7404                 je 0x5c95b3
// 005c95af  8b0e                 mov ecx, dword ptr [esi]
// 005c95b1  8906                 mov dword ptr [esi], eax
// 005c95b3  85c9                 test ecx, ecx
// 005c95b5  7408                 je 0x5c95bf
// 005c95b7  8b01                 mov eax, dword ptr [ecx]
// 005c95b9  8b10                 mov edx, dword ptr [eax]
// 005c95bb  6a01                 push 1
// 005c95bd  ffd2                 call edx
// 005c95bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005c95c3  8bc7                 mov eax, edi
// 005c95c5  5f                   pop edi
// 005c95c6  5e                   pop esi
// 005c95c7  5d                   pop ebp
// 005c95c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c95cf  83c428               add esp, 0x28
// 005c95d2  c20c00               ret 0xc

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
extern "C" void (__cdecl* invalid_parameter_noinfo)();
extern "C" void* __cdecl doubleType();
extern "C" void* __cdecl integerType();

struct Holder {
    virtual ~Holder();
};

struct DoubleHolder : Holder {
    double value;
    DoubleHolder(double);
};

struct IntegerHolder : Holder {
    int value;
    IntegerHolder(const int&);
};

inline DoubleHolder::DoubleHolder(double x) : value(x) {}
inline IntegerHolder::IntegerHolder(const int& x) : value(x) {}

struct Owner {
    Holder* pointer;

    explicit Owner(Holder*);
    Owner& operator=(const Owner&);
};

inline Owner::Owner(Holder* p) : pointer(p) {}

inline Owner& Owner::operator=(const Owner& other)
{
    Holder* p = other.pointer;
    if (&other != this) {
        p = pointer;
        pointer = other.pointer;
    }
    if (p)
        delete p;
    return *this;
}

struct Entry {
    void* type;
    Owner value;
};

struct Values {
    unsigned char reserved[12];
    Entry* first;
    Entry* last;
    Entry* limit;

    Values(unsigned int);
    ~Values();
};

struct Sample {
    double first;
    double second;
    int third;
};

struct Source {
    Sample sample(double);
};

struct LaserTool {
    unsigned char reserved[0x158];
    Source* source;

    Values evaluate(double);
};

Values LaserTool::evaluate(volatile double time)
{
    Sample data = source->sample(time);
    Values result(3);
    double value = data.second;
    void (__cdecl* invalid)() = invalid_parameter_noinfo;

    if (static_cast<unsigned int>(result.last - result.first) <= 0)
        invalid();

    Entry* entry = result.first;
    entry->type = doubleType();
    Owner* destination = &entry->value;
    *destination = Owner(new DoubleHolder(value));

    value = data.first;
    if (static_cast<unsigned int>(result.last - result.first) <= 1)
        invalid();

    entry = result.first + 1;
    entry->type = doubleType();
    destination = &entry->value;
    *destination = Owner(new DoubleHolder(value));

    if (static_cast<unsigned int>(result.last - result.first) <= 2)
        invalid();

    entry = result.first + 2;
    entry->type = integerType();
    destination = &entry->value;
    *destination = Owner(new IntegerHolder(data.third));

    return result;
}
