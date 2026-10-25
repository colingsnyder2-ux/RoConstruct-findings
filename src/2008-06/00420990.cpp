// from server: 100% by colin
// roc 2008-06 00420990  unit: CInstanceRecord::CNameItem  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420990
//
// 00420990  64a100000000         mov eax, dword ptr fs:[0]
// 00420996  6aff                 push -1
// 00420998  682ad47b00           push 0x7bd42a
// 0042099d  50                   push eax
// 0042099e  64892500000000       mov dword ptr fs:[0], esp
// 004209a5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004209a9  56                   push esi
// 004209aa  50                   push eax
// 004209ab  8bf1                 mov esi, ecx
// 004209ad  e8ee482a00           call 0x6c52a0
// 004209b2  83f8ff               cmp eax, -1
// 004209b5  7514                 jne 0x4209cb
// 004209b7  0bc0                 or eax, eax
// 004209b9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004209bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004209c4  5e                   pop esi
// 004209c5  83c40c               add esp, 0xc
// 004209c8  c20400               ret 4
// 004209cb  8b16                 mov edx, dword ptr [esi]
// 004209cd  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 004209d3  8bce                 mov ecx, esi
// 004209d5  ffd0                 call eax
// 004209d7  8bf0                 mov esi, eax
// 004209d9  8b8688020000         mov eax, dword ptr [esi + 0x288]
// 004209df  c7808800000001000000 mov dword ptr [eax + 0x88], 1
// 004209e9  8b8688020000         mov eax, dword ptr [esi + 0x288]
// 004209ef  c7407c00000000       mov dword ptr [eax + 0x7c], 0
// 004209f6  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 004209fc  6a01                 push 1
// 004209fe  e88d5e2b00           call 0x6d6890
// 00420a03  68c4000000           push 0xc4
// 00420a08  e813ff2700           call 0x6a0920
// 00420a0d  83c404               add esp, 4
// 00420a10  89442414             mov dword ptr [esp + 0x14], eax
// 00420a14  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00420a1c  85c0                 test eax, eax
// 00420a1e  741d                 je 0x420a3d
// 00420a20  6a01                 push 1
// 00420a22  6a01                 push 1
// 00420a24  6aff                 push -1
// 00420a26  6a01                 push 1
// 00420a28  682c010000           push 0x12c
// 00420a2d  68ccf78000           push 0x80f7cc
// 00420a32  6a00                 push 0
// 00420a34  8bc8                 mov ecx, eax
// 00420a36  e835412b00           call 0x6d4b70
// 00420a3b  eb02                 jmp 0x420a3f
// 00420a3d  33c0                 xor eax, eax
// 00420a3f  50                   push eax
// 00420a40  8bce                 mov ecx, esi
// 00420a42  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00420a4a  e8b18b2a00           call 0x6c9600
// 00420a4f  8bf0                 mov esi, eax
// 00420a51  6a01                 push 1
// 00420a53  8bce                 mov ecx, esi
// 00420a55  e8263f2b00           call 0x6d4980
// 00420a5a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00420a5e  c786b000000000000000 mov dword ptr [esi + 0xb0], 0
// 00420a68  33c0                 xor eax, eax
// 00420a6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00420a71  5e                   pop esi
// 00420a72  83c40c               add esp, 0xc
// 00420a75  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Column {
    char pad0[0xb0];
    int field_b0;
    char pad1[0x10];

    Column(int, const char*, int, int, int, int, int);
    void setVisible(int);
};

struct Header {
    char pad0[0x7c];
    int field_7c;
    char pad1[8];
    volatile int field_88;

    void setMode(int);
};

struct Report {
    char pad0[0x288];
    Header* volatile header;

    Column* addColumn(Column*);
};

struct S;

struct VTable {
    char pad0[0x194];
    Report* (__thiscall *getReport)(S*);
};

struct S {
    VTable* vtable;

    int baseInitialize(int);
    int f(int);
};

int S::f(int a1)
{
    int result = baseInitialize(a1);
    if (result == -1)
        return result;

    Report* report = vtable->getReport(this);

    Header* header = report->header;
    header->field_88 = 1;
    Header* mode = report->header;
    mode->field_7c = 0;
    report->header->setMode(1);

    Column* column = report->addColumn(
        new Column(0, "Name", 300, 1, -1, 1, 1));
    column->setVisible(1);
    column->field_b0 = 0;
    return 0;
}
