// from server: 100% by king_originala
// roc 2008-06 005c7460  unit: RBX::VFillTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7460
//
// 005c7460  6aff                 push -1
// 005c7462  683bf47b00           push 0x7bf43b
// 005c7467  64a100000000         mov eax, dword ptr fs:[0]
// 005c746d  50                   push eax
// 005c746e  64892500000000       mov dword ptr fs:[0], esp
// 005c7475  51                   push ecx
// 005c7476  56                   push esi
// 005c7477  57                   push edi
// 005c7478  6a24                 push 0x24
// 005c747a  8bf9                 mov edi, ecx
// 005c747c  e89f940d00           call 0x6a0920
// 005c7481  8bf0                 mov esi, eax
// 005c7483  83c404               add esp, 4
// 005c7486  89742408             mov dword ptr [esp + 8], esi
// 005c748a  33c0                 xor eax, eax
// 005c748c  89442414             mov dword ptr [esp + 0x14], eax
// 005c7490  3bf0                 cmp esi, eax
// 005c7492  7420                 je 0x5c74b4
// 005c7494  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c7497  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c749d  51                   push ecx
// 005c749e  8bce                 mov ecx, esi
// 005c74a0  e8ebeefeff           call 0x5b6390
// 005c74a5  c7066c988300         mov dword ptr [esi], 0x83986c
// 005c74ab  c7460454988300       mov dword ptr [esi + 4], 0x839854
// 005c74b2  8bc6                 mov eax, esi
// 005c74b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c74b8  5f                   pop edi
// 005c74b9  5e                   pop esi
// 005c74ba  64890d00000000       mov dword ptr fs:[0], ecx
// 005c74c1  83c410               add esp, 0x10
// 005c74c4  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Primary {
    virtual void primary();
};

struct Secondary {
    virtual void secondary();
};

struct Base : Primary, Secondary {
    char padding[28];
    Base(void*);
};

struct Cursor : Base {
    Cursor(void*);
    virtual void primary();
    virtual void secondary();
};

__forceinline Cursor::Cursor(void* p) : Base(p) {}

struct Context {
    char padding[0x204];
    void* value;
};

struct Tool {
    char padding[0x0c];
    Context* context;
    Cursor* f();
};

Cursor* Tool::f() {
    return new Cursor(context->value);
}
